	/*
	Name: lightbar
	Description: Everything required to get the lightbar to work
	Author: Tisor - And edited by Caiden from A3L
	*/

diag_log "LIGHTS WORKING";
private["_vcl","_lights","_light","_light2","_light3"];
_vcl = _this;
_lights = "\MeansCars\Ford_Torus\Lightbar\emerglights_led.paa";


_light = (alive _vcl);


while {alive _vcl} do {

	_phase = _vcl animationPhase "ani_wigs";
	_phasetakedown = _vcl animationPhase "ani_takedown";
	_phasedirectional = _vcl animationPhase "ani_directional";

    switch (_phase) do {
	
	case (0.5): { // Mode 11 + 13 NOW -> Double flash for every color. 

	
		//TURN ON BLUE
		
		_vcl setObjectTexture [11,_lights];
		if (_phasetakedown == 0) then { // Check if takedown are in their own thing
		_vcl setObjectTexture [13,_lights];
		
		};
        _vcl setObjectTexture [11,""];
		_vcl setObjectTexture [13,""];
		if (_phasedirectional < 0.5) then { // Check if directional is using the lightbar
		};

		sleep 0.08;
		
		_vcl setObjectTexture [12,_lights];
		_vcl setObjectTexture [14,_lights];
		if (_phasetakedown == 0) then  { // Check if takedown are in their own thing
		};
		_vcl setObjectTexture [12,""];
		_vcl setObjectTexture [14,""];
		if (_phasedirectional < 0.5) then { // Check if directional is using the lightbar
		};
	
		sleep 0.013;
		
	};
	
	case (0): {
		_vcl setObjectTexture [1,""];
		if (_phasetakedown == 0) then { // Check if takedown are in their own thing
        _vcl setObjectTexture [2,""];
		_vcl setObjectTexture [3,""];
		_vcl setObjectTexture [4,""];
		_vcl setObjectTexture [5,""];
		_vcl setObjectTexture [6,""];
		_vcl setObjectTexture [7,""];
		_vcl setObjectTexture [8,""];
		};
		if (_phasedirectional < 0.3) then { // Check if directional is using the lightbar
		_vcl setObjectTexture [2,""];
		};
		_vcl setObjectTexture [2,""];
        _vcl setObjectTexture [3,""];
        _vcl setObjectTexture [4,""];

        waitUntil {_vcl animationPhase "ani_wigs" != 0};
    };

	}; //END CASE
	Sleep 0.01;
	}; // END WHILE
	

exit;