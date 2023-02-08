diag_log "LIGHTS WORKING";
private["_vcl","_lights","_light","_light2","_light3"];
_vcl = _this;
_lights = "\Meansvcls\2011_CVPI\Lightbar\emerglights_led.paa";
_lights2 = "\aus_crown\textures\signtext.paa";
_lights3 = "\aus_crown\textures\signtext2.paa";


_light = (alive _vcl);


while {alive _vcl} do {

	_phase = _vcl animationPhase "ani_lightbar";
	_phase = _phase * 10;
    _phase = round _phase;
    _phase = _phase / 10;
	_phasetakedown = _vcl animationPhase "ani_takedown";
	_phasedirectional = _vcl animationPhase "ani_directional";

    switch (_phase) do {
	
	case (0.1): { // LED

	
		_vcl setHit ["Light_L",0];
	   _vcl setHit ["Light_R",1];
	
	   sleep 0.1;

	   _vcl setHit ["Light_L",1];
	   _vcl setHit ["Light_R",1];
	
	   sleep 0.2;

	   _vcl setHit ["Light_L",1];
	   _vcl setHit ["Light_R",0];

	   sleep 0.1;

	   _vcl setHit ["Light_L",1];
	   _vcl setHit ["Light_R",1];
	
	   sleep 0.2;
		
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
        _vcl setHit ["Light_R", 0];
	    _vcl setHit ["Light_L", 0];		
     
        waitUntil {_vcl animationPhase "ani_lightbar" != 0};
    };

	}; //END SWITCH
	sleep 0.01;
}; // END WHILE

exit;



