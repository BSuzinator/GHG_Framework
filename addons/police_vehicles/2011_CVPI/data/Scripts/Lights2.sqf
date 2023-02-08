
private["_vcl"];
_vcl = _this;
_LBRED = "#(argb,8,8,3)color(1,0,0,1.0,CO)";
_LBBLUE = "#(argb,8,8,3)color(0,0,1,1.0,CO)";
_LBWHITE = "#(argb,8,8,3)color(1,1,1,1.0,co)";

while {alive _vcl} do {
	waitUntil {(_vcl animationPhase "ani_lightbar" == 0.1 && getdammage _vcl < 0.9)};
	_int = 5.5;

		_vcl setObjectTextureGlobal [8,_LBRED];
		_vcl setObjectTextureGlobal [9,_LBRED];
		_vcl setObjectTextureGlobal [10,_LBRED];
		_vcl setObjectTextureGlobal [11,_LBRED];
		_vcl setObjectTextureGlobal [12,""];
		_vcl setObjectTextureGlobal [13,""];
		_vcl setObjectTextureGlobal [14,""];
		_vcl setObjectTextureGlobal [15,""];
		_vcl setObjectTextureGlobal [16,""];
		_vcl setObjectTextureGlobal [17,_LBWHITE];
		_vcl setHit ["Light_L", 1];
		_vcl setHit ["Light_R", 0];
		_Blue = "#lightpoint" createVehicleLocal getpos _vcl;
		_Blue lightAttachObject [ _vcl, [ 0.54, -0.26, 1.57 ] ];
		_Blue setLightAmbient[ 1.0, 0, 0];
		_Blue setlightColor[ 1.0, 0, 0];
		_Blue setLightIntensity _int;

		sleep .1;

		_vcl setObjectTextureGlobal [8,""];
		_vcl setObjectTextureGlobal [9,""];
		_vcl setObjectTextureGlobal [10,""];
		_vcl setObjectTextureGlobal [11,""];
		_vcl setObjectTextureGlobal [12,""];
		_vcl setObjectTextureGlobal [13,""];
		_vcl setObjectTextureGlobal [14,""];
		_vcl setObjectTextureGlobal [15,""];
		_vcl setObjectTextureGlobal [16,""];
		_vcl setObjectTextureGlobal [17,""];
		_vcl setHit ["Light_L", 0];
		_vcl setHit ["Light_R", 0];

		sleep .1;

		_vcl setObjectTextureGlobal [8,_LBRED];
		_vcl setObjectTextureGlobal [9,_LBRED];
		_vcl setObjectTextureGlobal [10,_LBRED];
		_vcl setObjectTextureGlobal [11,_LBRED];
		_vcl setObjectTextureGlobal [12,""];
		_vcl setObjectTextureGlobal [13,""];
		_vcl setObjectTextureGlobal [14,""];
		_vcl setObjectTextureGlobal [15,""];
		_vcl setObjectTextureGlobal [16,_LBWHITE];
		_vcl setObjectTextureGlobal [17,""];
		_vcl setHit ["Light_L", 0];
		_vcl setHit ["Light_R", 1];

		sleep .1;

		DeleteVehicle _Blue;
		_vcl setObjectTextureGlobal [8,""];
		_vcl setObjectTextureGlobal [9,""];
		_vcl setObjectTextureGlobal [10,""];
		_vcl setObjectTextureGlobal [11,""];
		_vcl setObjectTextureGlobal [12,""];
		_vcl setObjectTextureGlobal [13,""];
		_vcl setObjectTextureGlobal [14,""];
		_vcl setObjectTextureGlobal [15,""];
		_vcl setObjectTextureGlobal [16,""];
		_vcl setHit ["Light_L", 0];
		_vcl setHit ["Light_R", 0];

		sleep .1;

		_vcl setObjectTextureGlobal [8,""];
		_vcl setObjectTextureGlobal [9,""];
		_vcl setObjectTextureGlobal [10,""];
		_vcl setObjectTextureGlobal [11,""];
		_vcl setObjectTextureGlobal [12,_LBBLUE];
		_vcl setObjectTextureGlobal [13,_LBBLUE];
		_vcl setObjectTextureGlobal [14,_LBBLUE];
		_vcl setObjectTextureGlobal [15,_LBBLUE];
		_vcl setObjectTextureGlobal [16,""];
		_vcl setObjectTextureGlobal [17,_LBWHITE];
		_vcl setHit ["Light_L", 1];
		_vcl setHit ["Light_R", 0];
		_Blue = "#lightpoint" createVehicleLocal getpos _vcl;
		_Blue lightAttachObject [ _vcl, [ 0.54, -0.26, 1.57 ] ];
		_Blue setLightAmbient[ 0, 0, 1.0];
		_Blue setlightColor[ 0, 0, 1.0];
		_Blue setLightIntensity _int;

		sleep .1;

		_vcl setObjectTextureGlobal [8,""];
		_vcl setObjectTextureGlobal [9,""];
		_vcl setObjectTextureGlobal [10,""];
		_vcl setObjectTextureGlobal [11,""];
		_vcl setObjectTextureGlobal [12,""];
		_vcl setObjectTextureGlobal [13,""];
		_vcl setObjectTextureGlobal [14,""];
		_vcl setObjectTextureGlobal [15,""];
		_vcl setObjectTextureGlobal [16,""];
		_vcl setObjectTextureGlobal [17,""];
		_vcl setHit ["Light_L", 0];
		_vcl setHit ["Light_R", 0];

		sleep .1;

		_vcl setObjectTextureGlobal [8,""];
		_vcl setObjectTextureGlobal [9,""];
		_vcl setObjectTextureGlobal [10,""];
		_vcl setObjectTextureGlobal [11,""];
		_vcl setObjectTextureGlobal [12,_LBBLUE];
		_vcl setObjectTextureGlobal [13,_LBBLUE];
		_vcl setObjectTextureGlobal [14,_LBBLUE];
		_vcl setObjectTextureGlobal [15,_LBBLUE];
		_vcl setObjectTextureGlobal [16,_LBWHITE];
		_vcl setObjectTextureGlobal [17,""];
		_vcl setHit ["Light_L", 0];
		_vcl setHit ["Light_R", 1];

		sleep .1;

		DeleteVehicle _Blue;
		_vcl setObjectTextureGlobal [8,""];
		_vcl setObjectTextureGlobal [9,""];
		_vcl setObjectTextureGlobal [10,""];
		_vcl setObjectTextureGlobal [11,""];
		_vcl setObjectTextureGlobal [12,""];
		_vcl setObjectTextureGlobal [13,""];
		_vcl setObjectTextureGlobal [14,""];
		_vcl setObjectTextureGlobal [15,""];
		_vcl setObjectTextureGlobal [16,""];
		_vcl setObjectTextureGlobal [17,_LBWHITE];
		_vcl setHit ["Light_L", 0];
		_vcl setHit ["Light_R", 0];

		sleep .1;

		_vcl setObjectTextureGlobal [8,_LBRED];
		_vcl setObjectTextureGlobal [9,""];
		_vcl setObjectTextureGlobal [10,_LBRED];
		_vcl setObjectTextureGlobal [11,""];
		_vcl setObjectTextureGlobal [12,""];
		_vcl setObjectTextureGlobal [13,_LBBLUE];
		_vcl setObjectTextureGlobal [14,""];
		_vcl setObjectTextureGlobal [15,_LBBLUE];
		_vcl setObjectTextureGlobal [16,_LBWHITE];
		_vcl setObjectTextureGlobal [17,""];
		_vcl setHit ["Light_L", 1];
		_vcl setHit ["Light_R", 0];
		_Blue = "#lightpoint" createVehicleLocal getpos _vcl;
		_Blue lightAttachObject [ _vcl, [ 0.54, -0.26, 1.57 ] ];
		_Blue setLightAmbient[ 1.0, 0, 0];
		_Blue setlightColor[ 1.0, 0, 0];
		_Blue setLightIntensity _int;

		sleep .1;

		_vcl setObjectTextureGlobal [8,""];
		_vcl setObjectTextureGlobal [9,""];
		_vcl setObjectTextureGlobal [10,""];
		_vcl setObjectTextureGlobal [11,""];
		_vcl setObjectTextureGlobal [12,""];
		_vcl setObjectTextureGlobal [13,""];
		_vcl setObjectTextureGlobal [14,""];
		_vcl setObjectTextureGlobal [15,""];
		_vcl setObjectTextureGlobal [16,""];
		_vcl setObjectTextureGlobal [17,""];
		_vcl setHit ["Light_L", 0];
		_vcl setHit ["Light_R", 0];

		sleep .1;

		_vcl setObjectTextureGlobal [8,""];
		_vcl setObjectTextureGlobal [9,_LBRED];
		_vcl setObjectTextureGlobal [10,""];
		_vcl setObjectTextureGlobal [11,_LBRED];
		_vcl setObjectTextureGlobal [12,_LBBLUE];
		_vcl setObjectTextureGlobal [13,""];
		_vcl setObjectTextureGlobal [14,_LBBLUE];
		_vcl setObjectTextureGlobal [15,""];
		_vcl setObjectTextureGlobal [16,""];
		_vcl setObjectTextureGlobal [17,_LBWHITE];
		_vcl setHit ["Light_L", 0];
		_vcl setHit ["Light_R", 1];

		sleep .1;

		DeleteVehicle _Blue;
		_vcl setObjectTextureGlobal [8,""];
		_vcl setObjectTextureGlobal [9,""];
		_vcl setObjectTextureGlobal [10,""];
		_vcl setObjectTextureGlobal [11,""];
		_vcl setObjectTextureGlobal [12,""];
		_vcl setObjectTextureGlobal [13,""];
		_vcl setObjectTextureGlobal [14,""];
		_vcl setObjectTextureGlobal [15,""];
		_vcl setObjectTextureGlobal [16,""];
		_vcl setObjectTextureGlobal [17,""];
		_vcl setHit ["Light_L", 0];
		_vcl setHit ["Light_R", 0];

		sleep .1;

		_vcl setObjectTextureGlobal [8,""];
		_vcl setObjectTextureGlobal [9,""];
		_vcl setObjectTextureGlobal [10,""];
		_vcl setObjectTextureGlobal [11,_LBRED];
		_vcl setObjectTextureGlobal [12,""];
		_vcl setObjectTextureGlobal [13,""];
		_vcl setObjectTextureGlobal [14,""];
		_vcl setObjectTextureGlobal [15,_LBBLUE];
		_vcl setObjectTextureGlobal [16,_LBWHITE];
		_vcl setObjectTextureGlobal [17,""];
		_vcl setHit ["Light_L", 1];
		_vcl setHit ["Light_R", 0];
		_Blue = "#lightpoint" createVehicleLocal getpos _vcl;
		_Blue lightAttachObject [ _vcl, [ 0.54, -0.26, 1.57 ] ];
		_Blue setLightAmbient[ 0, 0, 1.0];
		_Blue setlightColor[ 0, 0, 1.0];
		_Blue setLightIntensity _int;

		sleep .1;
		_vcl setObjectTextureGlobal [8,""];
		_vcl setObjectTextureGlobal [9,""];
		_vcl setObjectTextureGlobal [10,""];
		_vcl setObjectTextureGlobal [11,""];
		_vcl setObjectTextureGlobal [12,""];
		_vcl setObjectTextureGlobal [13,""];
		_vcl setObjectTextureGlobal [14,""];
		_vcl setObjectTextureGlobal [15,""];
		_vcl setObjectTextureGlobal [16,""];
		_vcl setObjectTextureGlobal [17,""];
		_vcl setHit ["Light_L", 0];
		_vcl setHit ["Light_R", 0];

		sleep .1;

		_vcl setObjectTextureGlobal [8,""];
		_vcl setObjectTextureGlobal [9,""];
		_vcl setObjectTextureGlobal [10,_LBRED];
		_vcl setObjectTextureGlobal [11,""];
		_vcl setObjectTextureGlobal [12,""];
		_vcl setObjectTextureGlobal [13,""];
		_vcl setObjectTextureGlobal [14,_LBBLUE];
		_vcl setObjectTextureGlobal [15,""];
		_vcl setObjectTextureGlobal [16,""];
		_vcl setObjectTextureGlobal [17,_LBWHITE];
		_vcl setHit ["Light_L", 0];
		_vcl setHit ["Light_R", 1];

		sleep .1;

		DeleteVehicle _Blue;
		_vcl setObjectTextureGlobal [8,""];
		_vcl setObjectTextureGlobal [9,""];
		_vcl setObjectTextureGlobal [10,""];
		_vcl setObjectTextureGlobal [11,""];
		_vcl setObjectTextureGlobal [12,""];
		_vcl setObjectTextureGlobal [13,""];
		_vcl setObjectTextureGlobal [14,""];
		_vcl setObjectTextureGlobal [15,""];
		_vcl setObjectTextureGlobal [16,""];
		_vcl setObjectTextureGlobal [17,""];
		_vcl setHit ["Light_L", 0];
		_vcl setHit ["Light_R", 0];

		sleep .1;

		_vcl setObjectTextureGlobal [8,""];
		_vcl setObjectTextureGlobal [9,_LBRED];
		_vcl setObjectTextureGlobal [10,""];
		_vcl setObjectTextureGlobal [11,""];
		_vcl setObjectTextureGlobal [12,""];
		_vcl setObjectTextureGlobal [13,_LBBLUE];
		_vcl setObjectTextureGlobal [14,""];
		_vcl setObjectTextureGlobal [15,""];
		_vcl setObjectTextureGlobal [16,_LBWHITE];
		_vcl setObjectTextureGlobal [17,""];
		_vcl setHit ["Light_L", 1];
		_vcl setHit ["Light_R", 0];
		_Blue = "#lightpoint" createVehicleLocal getpos _vcl;
		_Blue lightAttachObject [ _vcl, [ 0.54, -0.26, 1.57 ] ];
		_Blue setLightAmbient[ 1.0, 0, 0];
		_Blue setlightColor[ 1.0, 0, 0];
		_Blue setLightIntensity _int;

		sleep .1;

		_vcl setObjectTextureGlobal [8,""];
		_vcl setObjectTextureGlobal [9,""];
		_vcl setObjectTextureGlobal [10,""];
		_vcl setObjectTextureGlobal [11,""];
		_vcl setObjectTextureGlobal [12,""];
		_vcl setObjectTextureGlobal [13,""];
		_vcl setObjectTextureGlobal [14,""];
		_vcl setObjectTextureGlobal [15,""];
		_vcl setObjectTextureGlobal [16,""];
		_vcl setObjectTextureGlobal [17,""];
		_vcl setHit ["Light_L", 0];
		_vcl setHit ["Light_R", 0];

		sleep .1;

		_vcl setObjectTextureGlobal [8,_LBRED];
		_vcl setObjectTextureGlobal [9,""];
		_vcl setObjectTextureGlobal [10,""];
		_vcl setObjectTextureGlobal [11,""];
		_vcl setObjectTextureGlobal [12,_LBBLUE];
		_vcl setObjectTextureGlobal [13,""];
		_vcl setObjectTextureGlobal [14,""];
		_vcl setObjectTextureGlobal [15,""];
		_vcl setObjectTextureGlobal [16,""];
		_vcl setObjectTextureGlobal [17,_LBWHITE];
		_vcl setHit ["Light_L", 0];
		_vcl setHit ["Light_R", 1];

		sleep .1;

		DeleteVehicle _Blue;
		_vcl setObjectTextureGlobal [8,""];
		_vcl setObjectTextureGlobal [9,""];
		_vcl setObjectTextureGlobal [10,""];
		_vcl setObjectTextureGlobal [11,""];
		_vcl setObjectTextureGlobal [12,""];
		_vcl setObjectTextureGlobal [13,""];
		_vcl setObjectTextureGlobal [14,""];
		_vcl setObjectTextureGlobal [15,""];
		_vcl setObjectTextureGlobal [16,""];
		_vcl setObjectTextureGlobal [17,""];
		_vcl setHit ["Light_L", 0];
		_vcl setHit ["Light_R", 0];

		sleep .1;

		_vcl setObjectTextureGlobal [8,_LBRED];
		_vcl setObjectTextureGlobal [9,""];
		_vcl setObjectTextureGlobal [10,""];
		_vcl setObjectTextureGlobal [11,""];
		_vcl setObjectTextureGlobal [12,_LBBLUE];
		_vcl setObjectTextureGlobal [13,""];
		_vcl setObjectTextureGlobal [14,""];
		_vcl setObjectTextureGlobal [15,""];
		_vcl setObjectTextureGlobal [16,_LBWHITE];
		_vcl setObjectTextureGlobal [17,""];
		_vcl setHit ["Light_L", 1];
		_vcl setHit ["Light_R", 0];
		_Blue = "#lightpoint" createVehicleLocal getpos _vcl;
		_Blue lightAttachObject [ _vcl, [ 0.54, -0.26, 1.57 ] ];
		_Blue setLightAmbient[ 0, 0, 1.0];
		_Blue setlightColor[ 0, 0, 1.0];
		_Blue setLightIntensity _int;

		sleep .1;

		_vcl setObjectTextureGlobal [8,""];
		_vcl setObjectTextureGlobal [9,""];
		_vcl setObjectTextureGlobal [10,""];
		_vcl setObjectTextureGlobal [11,""];
		_vcl setObjectTextureGlobal [12,""];
		_vcl setObjectTextureGlobal [13,""];
		_vcl setObjectTextureGlobal [14,""];
		_vcl setObjectTextureGlobal [15,""];
		_vcl setObjectTextureGlobal [16,""];
		_vcl setObjectTextureGlobal [17,""];
		_vcl setHit ["Light_L", 0];
		_vcl setHit ["Light_R", 0];

		sleep .1;

		_vcl setObjectTextureGlobal [8,""];
		_vcl setObjectTextureGlobal [9,_LBRED];
		_vcl setObjectTextureGlobal [10,""];
		_vcl setObjectTextureGlobal [11,""];
		_vcl setObjectTextureGlobal [12,""];
		_vcl setObjectTextureGlobal [13,_LBBLUE];
		_vcl setObjectTextureGlobal [14,""];
		_vcl setObjectTextureGlobal [15,""];
		_vcl setObjectTextureGlobal [16,""];
		_vcl setObjectTextureGlobal [17,_LBWHITE];
		_vcl setHit ["Light_L", 0];
		_vcl setHit ["Light_R", 1];

		sleep .1;

		DeleteVehicle _Blue;
		_vcl setObjectTextureGlobal [8,""];
		_vcl setObjectTextureGlobal [9,""];
		_vcl setObjectTextureGlobal [10,""];
		_vcl setObjectTextureGlobal [11,""];
		_vcl setObjectTextureGlobal [12,""];
		_vcl setObjectTextureGlobal [13,""];
		_vcl setObjectTextureGlobal [14,""];
		_vcl setObjectTextureGlobal [15,""];
		_vcl setObjectTextureGlobal [16,""];
		_vcl setObjectTextureGlobal [17,""];
		_vcl setHit ["Light_L", 0];
		_vcl setHit ["Light_R", 0];

		sleep .1;

		_vcl setObjectTextureGlobal [8,""];
		_vcl setObjectTextureGlobal [9,""];
		_vcl setObjectTextureGlobal [10,_LBRED];
		_vcl setObjectTextureGlobal [11,""];
		_vcl setObjectTextureGlobal [12,""];
		_vcl setObjectTextureGlobal [13,""];
		_vcl setObjectTextureGlobal [14,_LBBLUE];
		_vcl setObjectTextureGlobal [15,""];
		_vcl setObjectTextureGlobal [16,_LBWHITE];
		_vcl setObjectTextureGlobal [17,""];
		_vcl setHit ["Light_L", 1];
		_vcl setHit ["Light_R", 0];
		_Blue = "#lightpoint" createVehicleLocal getpos _vcl;
		_Blue lightAttachObject [ _vcl, [ 0.54, -0.26, 1.57 ] ];
		_Blue setLightAmbient[ 1.0, 0, 0];
		_Blue setlightColor[ 1.0, 0, 0];
		_Blue setLightIntensity _int;

		sleep .1;

		_vcl setObjectTextureGlobal [8,""];
		_vcl setObjectTextureGlobal [9,""];
		_vcl setObjectTextureGlobal [10,""];
		_vcl setObjectTextureGlobal [11,""];
		_vcl setObjectTextureGlobal [12,""];
		_vcl setObjectTextureGlobal [13,""];
		_vcl setObjectTextureGlobal [14,""];
		_vcl setObjectTextureGlobal [15,""];
		_vcl setObjectTextureGlobal [16,""];
		_vcl setObjectTextureGlobal [17,""];
		_vcl setHit ["Light_L", 0];
		_vcl setHit ["Light_R", 0];

		sleep .1;

		_vcl setObjectTextureGlobal [8,""];
		_vcl setObjectTextureGlobal [9,""];
		_vcl setObjectTextureGlobal [10,""];
		_vcl setObjectTextureGlobal [11,_LBRED];
		_vcl setObjectTextureGlobal [12,""];
		_vcl setObjectTextureGlobal [13,""];
		_vcl setObjectTextureGlobal [14,""];
		_vcl setObjectTextureGlobal [15,_LBBLUE];
		_vcl setObjectTextureGlobal [16,""];
		_vcl setObjectTextureGlobal [17,_LBWHITE];
		_vcl setHit ["Light_L", 0];
		_vcl setHit ["Light_R", 1];

		sleep .1;

		DeleteVehicle _Blue;
		_vcl setObjectTextureGlobal [8,""];
		_vcl setObjectTextureGlobal [9,""];
		_vcl setObjectTextureGlobal [10,""];
		_vcl setObjectTextureGlobal [11,""];
		_vcl setObjectTextureGlobal [12,""];
		_vcl setObjectTextureGlobal [13,""];
		_vcl setObjectTextureGlobal [14,""];
		_vcl setObjectTextureGlobal [15,""];
		_vcl setObjectTextureGlobal [16,""];
		_vcl setObjectTextureGlobal [17,""];
		_vcl setHit ["Light_L", 0];
		_vcl setHit ["Light_R", 0];
};

exit;