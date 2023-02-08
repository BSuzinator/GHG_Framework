	/*
	Name: lightbar
	Description: Everything required to get the lightbar to work
	Author: Tisor - And edited by DopHawk Industries
	*/

diag_log "LIGHTS WORKING";
private["_vcl","_lights","_light","_light2","_light3"];
_vcl = _this;
_lights = "\MeansCars\Ford_Torus\Lightbar\emerglights_led.paa";
_lights2 = "\aus_crown\textures\signtext.paa";
_lights3 = "\aus_crown\textures\signtext2.paa";


_light = (alive _vcl);


while {alive _vcl} do {

	_phase = _vcl animationPhase "ani_lightbar";
	_phasetakedown = _vcl animationPhase "ani_takedown";
	_phasedirectional = _vcl animationPhase "ani_directional";

    switch (_phase) do {
	
	case (0.2): { // LED

	
		//Turn on the 17
		_vcl setObjectTexture [2,_lights];
		_vcl setObjectTexture [2,_lights];
		_vcl setObjectTexture [8,_lights];
		_vcl setObjectTexture [8,_lights];				
		
		sleep 0.1;
		
		//Turn off the 17
		_vcl setObjectTexture [2,""];
		_vcl setObjectTexture [2,""];
		_vcl setObjectTexture [8,""];
		_vcl setObjectTexture [8,""];	
		
		sleep 0.1;
		
		_vcl setObjectTexture [3,_lights];
		_vcl setObjectTexture [3,_lights];
		_vcl setObjectTexture [9,_lights];
		_vcl setObjectTexture [9,_lights];				
		
		sleep 0.1;
		
		//Turn off the 17
		_vcl setObjectTexture [3,""];
		_vcl setObjectTexture [3,""];
		_vcl setObjectTexture [9,""];
		_vcl setObjectTexture [9,""];	
		
		sleep 0.1; 
		
    };
	case (0.1): { // LED

	
		//Turn on the 17
		_vcl setObjectTexture [2,_lights];
		_vcl setObjectTexture [2,_lights];
		_vcl setObjectTexture [8,_lights];
		_vcl setObjectTexture [8,_lights];				
		
		sleep 0.1;
		
		//Turn off the 17
		_vcl setObjectTexture [2,""];
		_vcl setObjectTexture [2,""];
		_vcl setObjectTexture [8,""];
		_vcl setObjectTexture [8,""];	
		
		sleep 0.1;
		
		_vcl setObjectTexture [3,_lights];
		_vcl setObjectTexture [3,_lights];
		_vcl setObjectTexture [9,_lights];
		_vcl setObjectTexture [9,_lights];				
		
		sleep 0.1;
		
		//Turn off the 17
		_vcl setObjectTexture [3,""];
		_vcl setObjectTexture [3,""];
		_vcl setObjectTexture [9,""];
		_vcl setObjectTexture [9,""];		
		
		sleep 0.1; 
		
    };
		
	case (0.3): { // Pattern 2 

	
		//Turn on the 17
		_vcl setObjectTexture [11,_lights];
		_vcl setObjectTexture [11,_lights];
		_vcl setObjectTexture [2,_lights];
		_vcl setObjectTexture [12,_lights];
		
		sleep 0.1;
		
		//Turn off the 17
		_vcl setObjectTexture [11,""];
		_vcl setObjectTexture [11,""];
		_vcl setObjectTexture [2,""];
		_vcl setObjectTexture [12,""];
		
		sleep 0.01;
		
		//Turn on the 17
		_vcl setObjectTexture [10,_lights];
		_vcl setObjectTexture [10,_lights];
		_vcl setObjectTexture [3,_lights];
		_vcl setObjectTexture [23,_lights];			
	
		
		sleep 0.1;
		
		//Turn off the 17
		_vcl setObjectTexture [10,""];
		_vcl setObjectTexture [10,""];
		_vcl setObjectTexture [3,""];
		_vcl setObjectTexture [23,""];
		
		
		
		sleep 0.01;
		
		//Turn off the 17
		_vcl setObjectTexture [10,_lights];
		_vcl setObjectTexture [2,_lights];
		_vcl setObjectTexture [3,_lights];
		_vcl setObjectTexture [24,_lights];
		
		sleep 0.1;
		
		//Turn off the 17
		_vcl setObjectTexture [10,""];
		_vcl setObjectTexture [2,""];
		_vcl setObjectTexture [3,""];
		_vcl setObjectTexture [24,""];
		
		sleep 0.01;
		
		//Turn off the 17
		_vcl setObjectTexture [11,_lights];
		_vcl setObjectTexture [2,_lights];
		_vcl setObjectTexture [3,_lights];
		_vcl setObjectTexture [13,_lights];
	
		sleep 0.1;
		
		//Turn off the 17
		_vcl setObjectTexture [11,""];
		_vcl setObjectTexture [2,""];
		_vcl setObjectTexture [3,""];
		_vcl setObjectTexture [13,""];
		
		sleep 0.01;
		
    };
		case (0.4): { // Pattern 3 

	
		//Turn on the 17
		_vcl setObjectTexture [17,_lights];
		_vcl setObjectTexture [18,_lights];
		_vcl setObjectTexture [25,_lights];
		
		sleep 0.1;
		
		
		//Turn off the 17
		_vcl setObjectTexture [17,""];
		_vcl setObjectTexture [18,""];
		_vcl setObjectTexture [25,""];
		
		sleep 0.01;
		
		//Turn on the 17
		_vcl setObjectTexture [19,_lights];
		_vcl setObjectTexture [18,_lights];
		_vcl setObjectTexture [26,_lights];

		
		sleep 0.1;
		
		//Turn off the 17
		_vcl setObjectTexture [19,""];
		_vcl setObjectTexture [18,""];
		_vcl setObjectTexture [26,""];
		
		
		sleep 0.01;
		
		//Turn off the 17
		_vcl setObjectTexture [22,_lights];
		_vcl setObjectTexture [21,_lights];
		
		sleep 0.1;
		
		//Turn off the 17
		_vcl setObjectTexture [22,""];
		_vcl setObjectTexture [21,""];
		
		sleep 0.01;
		
		//Turn off the 17
		_vcl setObjectTexture [20,_lights];
		_vcl setObjectTexture [21,_lights];
		
		sleep 0.1;
		
		//Turn off the 17
		_vcl setObjectTexture [20,""];
		_vcl setObjectTexture [21,""];
		
		sleep 0.01;
			
    };
		case (0.8): { // backlightsdirect


		_vcl setObjectTexture [23,_lights];				
		
		sleep 0.3;
		
		_vcl setObjectTexture [23,""];	
		
		sleep 0.1;
		
		_vcl setObjectTexture [24,_lights];
			
		sleep 0.3;
		
		_vcl setObjectTexture [24,""];
		
	
		_vcl setObjectTexture [12,_lights];				
		
		sleep 0.1;
		
		_vcl setObjectTexture [12,""];	
		
		sleep 0.1;
		
		_vcl setObjectTexture [13,_lights];
			
		sleep 0.1;
		
		_vcl setObjectTexture [13,""];
		
		
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