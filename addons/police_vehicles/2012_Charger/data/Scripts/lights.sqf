private ["_car","_lightblue","_lightbaroff","lightbar","_relpos ","_light1","_light2","_light3","_light4","_light5","_light6"];

_car = _this select 0;
_lightbaroff  = _this select 1;
_relpos = _this select 2;
_lightBlue = [0.1, 0.1, 20];  



waitUntil {(_car getvariable ["ani_lightbar", false])};

		
	while {(_car getvariable ["ani_lightbar", false]) and canmove _car} do {
		

lightbar hideObject false; 
		
_lightbaroff hideObject true; 
		
_light1 = "#lightpoint" createVehicle getpos _car;   
    	_light1 setLightColor  _lightBlue; 
    	_light1 setLightBrightness 0.2 ; //0.2 
    	_light1 setLightAmbient [0.1,0.1,1]; //0.1,0.1,1
    	_light1 Attachto [lightbar, [-0.2,0, 0.03]];  //(-dx.sx)-(dist)-(alt)
    	_light1 setLightAttenuation [0.181, 0, 1000, 130]; 
    	_light1 setLightIntensity 10;//10
    	_light1 setLightFlareSize 0.38;
    	_light1 setLightFlareMaxDistance 150;
    	_light1 setLightUseFlare true;
  	//////
  	_light2 = "#lightpoint" createVehicle getpos _car;   
    	_light2 setLightColor  _lightBlue; 
    	_light2 setLightBrightness 0.2 ; //0.2 
    	_light2 setLightAmbient [0.1,0.1,1]; //0.1,0.1,1
    	_light2 Attachto [lightbar, [-0.35,0, 0.03]];  //(-dx.sx)-(dist)-(alt)
    	_light2 setLightAttenuation [0.181, 0, 1000, 130]; 
    	_light2 setLightIntensity 10;//10
    	_light2 setLightFlareSize 0.38;
    	_light2 setLightFlareMaxDistance 150;
    	_light2 setLightUseFlare true;
		_light2 setHit ["Light_L", 1];
  	//////
  	_light3 = "#lightpoint" createVehicle getpos _car;   
    	_light3 setLightColor  _lightBlue; 
    	_light3 setLightBrightness 0.2 ; //0.2 
    	_light3 setLightAmbient [0.1,0.1,1]; //0.1,0.1,1
    	_light3 Attachto [lightbar, [-0.5,0, 0.03]];  //(-dx.sx)-(dist)-(alt)
    	_light3 setLightAttenuation [0.181, 0, 1000, 130]; 
    	_light3 setLightIntensity 10;//10
    	_light3 setLightFlareSize 0.38;
    	_light3 setLightFlareMaxDistance 150;
    	_light3 setLightUseFlare true;
		_light3 setHit ["Light_R", 0];
  	//////
  	_light4 = "#lightpoint" createVehicle getpos _car;   
    	_light4 setLightColor  _lightBlue; 
    	_light4 setLightBrightness 0.2 ; //0.2 
    	_light4 setLightAmbient [0.1,0.1,1]; //0.1,0.1,1
    	_light4 Attachto [lightbar, [0.5,0, 0.03]];  //(-dx.sx)-(dist)-(alt)
    	_light4 setLightAttenuation [0.181, 0, 1000, 130]; 
    	_light4 setLightIntensity 10;//10
    	_light4 setLightFlareSize 0.38;
    	_light4 setLightFlareMaxDistance 150;
    	_light4 setLightUseFlare true;
  	//////
  	_light5 = "#lightpoint" createVehicle getpos _car;   
    	_light5 setLightColor  _lightBlue; 
    	_light5 setLightBrightness 0.2 ; //0.2 
    	_light5 setLightAmbient [0.1,0.1,1]; //0.1,0.1,1
    	_light5 Attachto [lightbar, [0.35,0, 0.03]];  //(-dx.sx)-(dist)-(alt)
    	_light5 setLightAttenuation [0.181, 0, 1000, 130]; 
    	_light5 setLightIntensity 10;//10
    	_light5 setLightFlareSize 0.38;
    	_light5 setLightFlareMaxDistance 150;
    	_light5 setLightUseFlare true;
  	//////
  	_light6 = "#lightpoint" createVehicle getpos _car;   
    	_light6 setLightColor  _lightBlue; 
    	_light6 setLightBrightness 0.2 ; //0.2 
    	_light6 setLightAmbient [0.1,0.1,1]; //0.1,0.1,1
    	_light6 Attachto [lightbar, [0.2,0, 0.03]];  //(-dx.sx)-(dist)-(alt)
    	_light6 setLightAttenuation [0.181, 0, 1000, 130]; 
    	_light6 setLightIntensity 10;//10
    	_light6 setLightFlareSize 0.38;
    	_light6 setLightFlareMaxDistance 150;
    	_light6 setLightUseFlare true;

sleep 0.5;

	deletevehicle _light1;
	deletevehicle _light2;
	deletevehicle _light3;
	deletevehicle _light4;
	deletevehicle _light5;
	deletevehicle _light6;


deletevehicle lightbar;

if(!alive  _car)exitwith{};
if(!canmove _car)exitwith{};

[_car,_lightbaroff,_relpos] spawn hunter_lights;