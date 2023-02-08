
diag_log "LIGHTS WORKING";
private["_vcl","_lights","_light","_light2","_light3"];
_vcl = _this;
_lights = "\MeansCars\2015_Tahoe\Lightbar\emerglights_led.paa";
_lights2 = "\MeansCars\2015_Tahoe\Lightbar\emerglights_led2.paa";
_lights3 = "\MeansCars\2015_Tahoe\Lightbar\signtext2.paa";


_light = (alive _vcl);


while {alive _vcl} do {

	_phase = _vcl animationPhase "ani_lightbar";
	_phase = _phase * 10;
    _phase = round _phase;
    _phase = _phase / 10;
	_phasetakedown = _vcl animationPhase "ani_takedown";
	_phasedirectional = _vcl animationPhase "ani_directional";
	_phaseflashers = _vcl animationPhase "ani_flashers";

    switch (_phase) do {

	case (0.1): { // LED Only

		_vcl setObjectTexture [2,_lights];
		_vcl setObjectTexture [2,_lights];
		_vcl setObjectTexture [2,_lights];
		_vcl setObjectTexture [2,_lights];
		_vcl setObjectTexture [2,_lights];
		_vcl setObjectTexture [9,_lights];

		sleep 0.05;

		_vcl setObjectTexture [2,""];
		_vcl setObjectTexture [2,""];
		_vcl setObjectTexture [2,""];
		_vcl setObjectTexture [2,""];
		_vcl setObjectTexture [2,""];
		_vcl setObjectTexture [9,""];

		sleep 0.1;

		_vcl setObjectTexture [3,_lights];
		_vcl setObjectTexture [3,_lights];
		_vcl setObjectTexture [3,_lights];
		_vcl setObjectTexture [3,_lights];
		_vcl setObjectTexture [3,_lights];
		_vcl setObjectTexture [9,_lights];

		sleep 0.05;

		_vcl setObjectTexture [3,""];
		_vcl setObjectTexture [3,""];
		_vcl setObjectTexture [3,""];
		_vcl setObjectTexture [3,""];
		_vcl setObjectTexture [3,""];
		_vcl setObjectTexture [9,_lights];

		sleep 0.1;

	_vcl setObjectTexture [3,_lights];

		sleep 0.1;

	_vcl setObjectTexture [3,""];

		sleep 0.1;

	_vcl setObjectTexture [2,_lights];

		sleep 0.1;

	_vcl setObjectTexture [2,""];


	sleep 0.1;

	//Turn on the 17

		_vcl setObjectTexture [4,_lights2];
		_vcl setObjectTexture [4,_lights2];
		_vcl setObjectTexture [4,_lights2];
		_vcl setObjectTexture [4,_lights2];
		_vcl setObjectTexture [4,_lights2];
		_vcl setObjectTexture [9,_lights2];

		sleep 0.05;

		_vcl setObjectTexture [4,""];
		_vcl setObjectTexture [4,""];
		_vcl setObjectTexture [4,""];
		_vcl setObjectTexture [4,""];
		_vcl setObjectTexture [4,""];
		_vcl setObjectTexture [9,""];

		sleep 0.05;

		_vcl setObjectTexture [5,_lights2];
		_vcl setObjectTexture [5,_lights2];
		_vcl setObjectTexture [5,_lights2];
		_vcl setObjectTexture [5,_lights2];
		_vcl setObjectTexture [5,_lights2];
		_vcl setObjectTexture [9,_lights2];

		sleep 0.05;

		_vcl setObjectTexture [5,""];
		_vcl setObjectTexture [5,""];
		_vcl setObjectTexture [5,""];
		_vcl setObjectTexture [5,""];
		_vcl setObjectTexture [5,""];
		_vcl setObjectTexture [9,_lights2];

		sleep 0.1;

	_vcl setObjectTexture [5,_lights2];

		sleep 0.1;

	_vcl setObjectTexture [5,""];

		sleep 0.1;

	_vcl setObjectTexture [4,_lights2];

		sleep 0.1;

	_vcl setObjectTexture [4,""];


	sleep 0.1;

    };


	case (0): { // All Off

		// Check if directional is using lightbar and release it

		_vcl setObjectTexture [2,""];
		_vcl setObjectTexture [3,""];
		_vcl setObjectTexture [4,""];
		_vcl setObjectTexture [5,""];
		_vcl setObjectTexture [6,""];
		_vcl setObjectTexture [7,""];

		_vcl setObjectTexture [8,""];
		_vcl setObjectTexture [9,""];
		_vcl setObjectTexture [10,""];
		_vcl setObjectTexture [11,""];
		_vcl setObjectTexture [12,""];
		_vcl setObjectTexture [13,""];
		_vcl setObjectTexture [14,""];
		_vcl setObjectTexture [15,""];
	    _vcl setObjectTexture [16,""];
		_vcl setObjectTexture [17,""];
		_vcl setObjectTexture [18,""];
		_vcl setObjectTexture [19,""];
	    _vcl setObjectTexture [21,""];
		_vcl setObjectTexture [22,""];
	    _vcl setObjectTexture [23,""];
		_vcl setObjectTexture [24,""];

        waitUntil {_vcl animationPhase "ani_lightbar" != 0};
    };

	}; //END SWITCH
	sleep 0.01;
}; // END WHILE

_light setLightBrightness 0;
exit;
