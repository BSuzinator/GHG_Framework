#include "script_component.hpp"
/*======================================
	Initialize teletype
	Author: Quantx
======================================*/

// Controls
GVAR(teletype_isPower) = false;
GVAR(teletype_cps) = 0; // Current position of the power switch (between 0 and 1)

GVAR(teletype_isTransfer) = false;
GVAR(teletype_cts) = 0; // Current position of the transfer switch (between 0 and 1)

GVAR(teletype_isAbort) = 0; // 0 = cover closed, 1 = cover open, 2 = switched one
GVAR(teletype_cas) = 0; // Current position of the abort switch (between 0 and 1)
GVAR(teletype_cac) = 0; // Current position of the abort cover (between 0 and 1)


GVAR(teletype_illum) = 0.5;
GVAR(teletype_audio) = 0.5;

GVAR(teletype_mode) = 0; // 0 = Idle, 1 = Receive, 2 = Transmit, 3 = Transmit (high priority)

GVAR(teletype_rcv) = []; // Receive buffer array of: [ priority (bool), message (str) ]
GVAR(teletype_xmt) = ""; // Transmit buffer
GVAR(teletype_prt) = ""; // Print buffer

GVAR(teletype_pnc) = 0; // Print next character timer

GVAR(teletype_ppr) = [""]; // Text log already printed out (array of 80 char lines

GVAR(teletype_dhx) = 0; // Desired printhead x position (between 0 and 0.175)
GVAR(teletype_chx) = 0; // Current printhead x position

GVAR(teletype_chy) = 0; // Current printhead y position (between 0 and 0.01)

if ( hasInterface && false ) then // Disabled for now
{
    private _hasTeletype = {
        params ["_target", "_player", "_params"];
        
        if ! ( isNull (findDisplay TELETYPE_IDD) ) exitWith {false}; // Don't open more than one teletype
        if ! ( isNull curatorCamera ) exitWith {true}; // Zeus can always open teletype

        // Get list of all items in all inventories
        private _items = (getItemCargo (uniformContainer _player)) select 0;
        _items append ((getItemCargo (vestContainer _player)) select 0);
        _items append ((getItemCargo (backpackContainer _player)) select 0);
        _items append (assignedItems _player);

        "teletype_item_name_here" in _items;
        
        true; // REMOVE THIS
    };

    private _ttya = ["teletypeOpen", "Open Teletype", "", {_this spawn FUNC(teletype)}, _hasTeletype] call ace_interact_menu_fnc_createAction;
    ["CAManBase", 1, ["ACE_SelfActions", "ACE_Equipment"], _ttya, true] call ace_interact_menu_fnc_addActionToClass;
    [["ACE_ZeusActions"], _ttya] call ace_interact_menu_fnc_addActionToZeus;
};

//"What the fuck did you just fucking say about me, you little bitch? Ill have you know I graduated top of my class in the Navy Seals, and Ive been involved in numerous secret raids on Al-Quaeda, and I have over 300 confirmed kills. I am trained in gorilla warfare and Im the top sniper in the entire US armed forces. You are nothing to me but just another target. I will wipe you the fuck out with precision the likes of which has never been seen before on this Earth, mark my fucking words. You think you can get away with saying that shit to me over the Internet? Think again, fucker. As we speak I am contacting my secret network of spies across the USA and your IP is being traced right now so you better prepare for the storm, maggot. The storm that wipes out the pathetic little thing you call your life. Youre fucking dead, kid. I can be anywhere, anytime, and I can kill you in over seven hundred ways, and thats just with my bare hands. Not only am I extensively trained in unarmed combat, but I have access to the entire arsenal of the United States Marine Corps and I will use it to its full extent to wipe your miserable ass off the face of the continent, you little shit. If only you could have known what unholy retribution your little clever comment was about to bring down upon you, maybe you would have held your fucking tongue. But you couldnt, you didnt, and now youre paying the price, you goddamn idiot. I will shit fury all over you and you will drown in it. Youre fucking dead, kiddo."