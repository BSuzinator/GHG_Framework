	/*
	Name: lightbar
	Description: Everything required to get the lightbar to work
	Author: Tisor - And edited by Caiden from A3L
	*/

diag_log "LIGHTS WORKING";
private["_vcl","_lights","_light","_light2","_light3"];
_vcl = _this;
_lights = "\aus_crown\textures\emerglightbright.paa";


_light = (alive _vcl);


while {alive _vcl} do {

	_phase = _vcl animationPhase "ani_spot";
	_phasetakedown = _vcl animationPhase "ani_takedown";
	_phasedirectional = _vcl animationPhase "ani_directional";

    switch (_phase) do {
	
	case (0.5): { // Mode 1 + 2 NOW -> Double flash for every color. 

	
		//TURN ON Spotlight
		
		_vcl setObjectTexture [6,_lights];
		_light2 = "#lightpoint" createVehicle getpos _vcl;
		_light2 lightAttachObject [_vcl,[-4,10,2]];
		_light2 setLightBrightness 0.199;
		_light2 setLightcolor[255,255,255];
		if (_phasetakedown == 0) then { // Check if takedown are in their own thing
		};
		if (_phasedirectional < 0.5) then { // Check if directional is using the lightbar
		};
		Sleep 5.00;	
		deleteVehicle _light2;
	};
	
	case (0): {
		_vcl setObjectTexture [6,""];
		if (_phasetakedown == 0) then { // Check if takedown are in their own thing
		};
        _vcl setObjectTexture [6,""];
		if (_phasedirectional < 0.3) then { // Check if directional is using the lightbar
		};

        waitUntil {_vcl animationPhase "ani_spot" != 0};
    };

	}; //END CASE
	Sleep 0.01;
	}; // END WHILE
	

exit;