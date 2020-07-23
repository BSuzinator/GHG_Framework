if ( !hasInterface ) exitWith {};

params ["_disp"];

ZEUS_WAVE_RESPAWN_OPTOUT = false;

/*
#define SIZEX ((safezoneW / safezoneH) min 1.2)
#define SIZEY (SIZEX / 1.2)
#define W_PART(num) (num * (SIZEX / 40))
#define H_PART(num) (num * (SIZEY / 25))
#define X_PART(num) (W_PART(num) + (safezoneX + (safezoneW - SIZEX)/2))
#define Y_PART(num) (H_PART(num) + (safezoneY + (safezoneH - SIZEY)/2))

x = W_PART(3.6);
y = H_PART(0.8);
w = W_PART(1.63);
h = H_PART(1.37);
*/

private _posDat = [
	7.6  * (((safezoneW / safezoneH) min 1.2) / 40),
	0.8  * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25),
	1.63 * (((safezoneW / safezoneH) min 1.2) / 40),
	1.73 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)
];

// Adjust width of camera button list
private _camList = _disp displayCtrl 60005;
private _camListPosDat = ctrlPosition _camList;
 _camListPosDat set [ 2, 10 * (((safezoneW / safezoneH) min 1.2) / 40) ];
_camList ctrlSetPosition _camListPosDat;
_camList ctrlCommit 0;

// Create opt-out button image
private _optImg = _disp ctrlCreate ["RscActivePicture", 60095, _camList];
_optImg ctrlSetPosition _posDat;
_optImg ctrlSetBackgroundColor [0, 0, 0, 0];
_optImg ctrlAddEventHandler [ "MouseButtonClick", ghg_fnc_respawnUpdateUI ];
_optImg ctrlSetText "\a3\3den\data\cfgwaypoints\cycle_ca.paa";
_optImg ctrlSetTooltip "Click to remain as a spectator";
_optImg ctrlCommit 0;