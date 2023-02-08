	/*
	Name: lightbar
	Description: Everything required to get the lightbar to work
	Author: Tisor - And edited by Caiden from A3L
	*/

diag_log "LIGHTS WORKING";
private["_vcl","_lights","_light","_light2","_light3"];
_vcl = _this;
_lights = "\ambulance\textures\light.paa";


_light = (alive _vcl);


while {alive _vcl} do {

	_phase = _vcl animationPhase "ani_flash";

    switch (_phase) do {
	
	case (0.6): { // Mode 1 + 2 NOW -> Double flash for every color. 

	
		//TURN ON BLUE
		
		_light2 = "#lightpoint" createVehicle getpos _vcl;
		_light2 lightAttachObject [_vcl,[-3,3,-1]];
		_light2 setLightBrightness 0.08;
		_light2 setLightcolor[239,0,0];
		_light2 setHit ["Light_L", 0];
		_light3 = "#lightpoint" createVehicle getpos _vcl;
		_light3 lightAttachObject [_vcl,[3,-0.5]];
		_light3 setLightBrightness 0.08;
		_light3 setLightcolor[240,0,0];
		_light3 setHit ["Light_R", 0];


		sleep 0.05;
		
		deleteVehicle _light2;
		deleteVehicle _light3;
		
		
		_light2 = "#lightpoint" createVehicle getpos _vcl;
		_light2 lightAttachObject [_vcl,[-2,3,-1]];
		_light2 setLightBrightness 0.011;
		_light2 setLightcolor[239,0,0];
		_light2 setHit ["Light_L", 0];
		_light3 = "#lightpoint" createVehicle getpos _vcl;
		_light3 lightAttachObject [_vcl,[-2,-3,-0.5]];
		_light3 setLightBrightness 0.011;
		_light3 setLightcolor[240,0,0];
		_light3 setHit ["Light_R", 0];
	
		sleep 0.05;
		deleteVehicle _light2;
		deleteVehicle _light3;

		sleep 0.05;
		
		};
		
	
	case (0): {
		_vcl setObjectTexture [1,""];
		if (_phasetakedown == 0) then { // Check if takedown are in their own thing
        _vcl setObjectTexture [2,""];
		_vcl setObjectTexture [3,""];
		_vcl setObjectTexture [4,""];
		};
        _vcl setObjectTexture [2,""];
        _vcl setObjectTexture [3,""];
        _vcl setObjectTexture [4,""];
		if (_phasedirectional < 0.3) then { // Check if directional is using the lightbar
		_vcl setObjectTexture [2,""];
		};
		_vcl setObjectTexture [2,""];
        _vcl setObjectTexture [3,""];
        _vcl setObjectTexture [4,""];

        waitUntil {_vcl animationPhase "ani_lightbar" != 0};
    };

	}; //END CASE
	Sleep 0.01;
	}; // END WHILE
	

exit;