diag_log "LIGHTS WORKING";
private["_vcl","_lights","_light","_light2","_light3"];
_vcl = _this;
_lights = "\MeansCars\Ford_Torus\Lightbar\emerglights_led.paa";

_light = (alive _vcl);
_light = "#lightpoint" createVehicle getpos _vcl;
while {alive _vcl} do {
_vcl setObjectTexture [17,""];
_vcl setObjectTexture [18,""];
_light lightAttachObject [_vcl,[-2,3,-1]]; 
waitUntil {(_vcl getvariable ["HAZARD", false])};
_light lightAttachObject [_vcl,[0,-5,10.0]];
_vcl setObjectTexture [17,_lights];
_vcl setObjectTexture [18,_lights];
_vcl setObjectTexture [17,""];
_vcl setObjectTexture [18,""];
sleep 1.0;
_light lightAttachObject [_vcl,[0,-5,10.0]];
_vcl setObjectTexture [17,""];
_vcl setObjectTexture [17,""];
_vcl setObjectTexture [17,""];
_vcl setObjectTexture [18,""];
_vcl setObjectTexture [18,""];
_vcl setObjectTexture [18,""];
_vcl setObjectTexture [17,_lights];
_vcl setObjectTexture [18,_lights];
sleep 0.5;
_vcl setObjectTexture [17,_lights];
_vcl setObjectTexture [18,_lights];

sleep 0.15;