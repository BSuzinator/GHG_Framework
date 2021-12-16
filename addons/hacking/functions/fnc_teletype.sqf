#include "script_component.hpp"
#include "\a3\ui_f\hpp\definedikcodes.inc"
/*======================================
	Open teletype interface
	Author: Quantx
======================================*/
disableSerialization; // Black magic, do not remove or place any code before this

if ! (hasInterface) exitWith {};
params ["_target", "_player", "_params"];

if ! ( createDialog "RscTeletype" ) exitWith {diag_log "Failed to open teletype interface";};

private _disp = findDisplay TELETYPE_IDD; // Defined under: ui\teletype.hpp

_disp displayAddEventHandler [ "char", { // Printable ascii
    params ["_disp", "_code"];
    
    private _char = toString [_code];
    
    if ( GVAR(teletype_cps) == 1 && GVAR(teletype_mode) == TELETYPE_MODE_IDLE ) then
    {
        GVAR(teletype_xmt) = GVAR(teletype_xmt) + _char; // Add to transmit buffer
        GVAR(teletype_prt) = GVAR(teletype_prt) + _char; // Add to print buffer
    };
}];

// Handle control keys
_disp displayAddEventHandler [ "keyDown", {
    params ["_disp", "_key", "_shift", "_ctrl", "_alt"];
    
    switch (_key) do
    {
        case DIK_RETURN: {
            if ( GVAR(teletype_cps) == 1 && GVAR(teletype_mode) == TELETYPE_MODE_IDLE ) then
            {
                GVAR(teletype_xmt) = GVAR(teletype_xmt) + (toString [10]); // Add to transmit buffer
                GVAR(teletype_prt) = GVAR(teletype_prt) + (toString [10]); // Add to print buffer
            };
        };
        case DIK_F1: {
            
        };
        case DIK_F2: {
            
        };
        case DIK_ESCAPE: {
            closeDialog 2;
        };
    };
}];

(_disp displayCtrl 6) ctrlAddEventHandler [ "mouseButtonClick", { // Power switch
    params ["_ctrl", "_btn", "_px", "_py", "_shift", "_ctrl", "_alt"];
    
    if ( _btn == 0 ) then { GVAR(teletype_isPower) = true  };
    if ( _btn == 1 ) then { GVAR(teletype_isPower) = false };
}];

(_disp displayCtrl 7) ctrlAddEventHandler [ "mouseButtonClick", { // Transfer switch
    params ["_ctrl", "_btn", "_px", "_py", "_shift", "_ctrl", "_alt"];
    
    if ( _btn == 0 ) then { GVAR(teletype_isTransfer) = true  };
    if ( _btn == 1 ) then { GVAR(teletype_isTransfer) = false };
}];

(_disp displayCtrl 8) ctrlAddEventHandler [ "mouseButtonClick", { // Aboort switch
    params ["_ctrl", "_btn", "_px", "_py", "_shift", "_ctrl", "_alt"];
    
    if ( _btn == 0 ) then { GVAR(teletype_isAbort) = (GVAR(teletype_isAbort) + 1) min 2 };
    if ( _btn == 1 ) then { GVAR(teletype_isAbort) = 0 };
}];

// Initial setup
private _tty = _disp displayCtrl 5;

_tty ctrlAnimateModel ["printhead_x", GVAR(teletype_chx)];
_tty ctrlAnimateModel ["printhead_y", 0]; GVAR(teletype_chy) = 0;
_tty ctrlAnimateModel ["lamp_bat", 1];
GVAR(teletype_isPower) = false;

[{
    params ["_args", "_handle"];
    _args params ["_disp"];
    
    if ( isNull _disp ) exitWith {
        [_handle] call CBA_fnc_removePerFrameHandler;
    };

    private _ppr1 = _disp displayCtrl 3;
    private _ppr2 = _disp displayCtrl 4;
    private _tty  = _disp displayCtrl 5;
    
    GVAR(teletype_chx) = _tty ctrlAnimationPhaseModel "printhead_x";
    GVAR(teletype_chy) = _tty ctrlAnimationPhaseModel "printhead_y";
    
    GVAR(teletype_cps) = _tty ctrlAnimationPhaseModel "switch_power";
    
    GVAR(teletype_cts) = _tty ctrlAnimationPhaseModel "switch_transfer";
    
    GVAR(teletype_cas) = _tty ctrlAnimationPhaseModel "switch_abort";
    GVAR(teletype_cac) = _tty ctrlAnimationPhaseModel "cover_abort";
    
    private _dps = [0, 1] select GVAR(teletype_isPower);
    private _dts = [0, 1] select GVAR(teletype_isTransfer);
    
    private _das = [0, 1] select (GVAR(teletype_isAbort) > 1);
    private _dac = [0, 1] select (GVAR(teletype_isAbort) > 0);
    
    // Printer simulation
    private _dhy = [0, 0.01] select ((count GVAR(teletype_prt) > 0) && GVAR(teletype_cps) == 1);
    if ( GVAR(teletype_cps) == 1 && GVAR(teletype_dhx) == GVAR(teletype_chx) && GVAR(teletype_chy) == 0.01 ) then
    {
        private _pprln = GVAR(teletype_ppr) deleteAt (count GVAR(teletype_ppr) - 1);
        
        if ( count _pprln >= 80 ) then
        {
            GVAR(teletype_ppr) pushBack _pprln;
            _pprln = "";
        };
        
        private _c = (GVAR(teletype_prt) select [0, 1]);
        GVAR(teletype_prt) = GVAR(teletype_prt) select [1];

        if ( _c == toString [10] ) then
        {
            GVAR(teletype_ppr) pushBack _pprln;
            _pprln = "";
        }
        else
        {
            _pprln = _pprln + _c;
        };
        
        GVAR(teletype_ppr) pushBack _pprln;
        
        GVAR(teletype_dhx) = ((count _pprln) / 80) * 0.175;
    };
    
    // Render paper
    private _renderPaper = {
        params [ "_start", "_end", "_last" ];
    
        private _out = "";
        for "_i" from _start to _end do
        {
            if ( _i >= _last ) then
            {
                private _ln = (GVAR(teletype_ppr) select (_i - _last));
                
                for "_i" from 0 to (count _ln) - 1 do
                {
                    private _c = _ln select [_i, 1];
                    
                    _out = _out + _c;
                    
                    if ( _c == "\" ) then
                    {
                        _out = _out + (toString [8203]); // Insert zero width space to escape the backslash
                    };
                };
            };
            
            _out = _out + "\n";
        };
        
        _out;
    };
     
    private _ppr1_lines = 22;
    
    _ppr1 ctrlSetText ([0, _ppr1_lines - 1, _ppr1_lines - (count GVAR(teletype_ppr))] call _renderPaper);
    
    private _ppr2_lines = 70;
    
    _ppr2 ctrlSetText ([_ppr1_lines, _ppr2_lines - 1, (_ppr1_lines + _ppr2_lines) - (count GVAR(teletype_ppr))] call _renderPaper);
    
    
    // *** Compute animations ***
    // Paper
    _tty ctrlAnimateModel ["paper", (((count GVAR(teletype_ppr)) - _ppr1_lines) / (_ppr2_lines - 5)) * 0.3];
    // End of line lamp
    _tty ctrlAnimateModel ["lamp_eol", [0, 1] select (GVAR(teletype_chx) >= 0.161875)];
    // Message recieved light
    _tty ctrlAnimateModel ["lamp_msg_rcvd", [0, 1] select (count GVAR(teletype_rcv) > 0)];
    // Power switch
    if ( GVAR(teletype_cps) > _dps ) then { _tty ctrlAnimateModel ["switch_power", _dps max (GVAR(teletype_cps) - (diag_deltaTime * 4))]; }; // Move up
    if ( GVAR(teletype_cps) < _dps ) then { _tty ctrlAnimateModel ["switch_power", _dps min (GVAR(teletype_cps) + (diag_deltaTime * 4))]; }; // Move down
    // Transfer switch
    if ( GVAR(teletype_cts) > _dts ) then { _tty ctrlAnimateModel ["switch_transfer", _dts max (GVAR(teletype_cts) - (diag_deltaTime * 4))]; }; // Move up
    if ( GVAR(teletype_cts) < _dts ) then { _tty ctrlAnimateModel ["switch_transfer", _dts min (GVAR(teletype_cts) + (diag_deltaTime * 4))]; }; // Move down
    // Abort switch
    if ( GVAR(teletype_cac) > _dac ) then { _tty ctrlAnimateModel ["cover_abort", _dac max (GVAR(teletype_cac) - (diag_deltaTime * 4))]; }; // Move cover up
    if ( GVAR(teletype_cac) < _dac ) then { _tty ctrlAnimateModel ["cover_abort", _dac min (GVAR(teletype_cac) + (diag_deltaTime * 4))]; }; // Move cover down
    if ( GVAR(teletype_cas) > _das ) then { _tty ctrlAnimateModel ["switch_abort", _das max (GVAR(teletype_cas) - (diag_deltaTime * 4))]; }; // Move switch up
    if ( GVAR(teletype_cas) < _das ) then { _tty ctrlAnimateModel ["switch_abort", _das min (GVAR(teletype_cas) + (diag_deltaTime * 4))]; }; // Move switch down
    // Printhead
    if ( GVAR(teletype_chx) > GVAR(teletype_dhx) ) then { _tty ctrlAnimateModel ["printhead_x", GVAR(teletype_dhx) max (GVAR(teletype_chx) - (diag_deltaTime * 0.5))]; }; // Move left
    if ( GVAR(teletype_chx) < GVAR(teletype_dhx) ) then { _tty ctrlAnimateModel ["printhead_x", GVAR(teletype_dhx) min (GVAR(teletype_chx) + (diag_deltaTime * 0.1))]; }; // Move right
    if ( GVAR(teletype_chy) > _dhy ) then { _tty ctrlAnimateModel ["printhead_y", _dhy max (GVAR(teletype_chy) - (diag_deltaTime * 0.1))]; }; // Move down
    if ( GVAR(teletype_chy) < _dhy ) then { _tty ctrlAnimateModel ["printhead_y", _dhy min (GVAR(teletype_chy) + (diag_deltaTime * 0.1))]; }; // Move up

}, 0, [_disp]] call CBA_fnc_addPerFrameHandler;

nil;