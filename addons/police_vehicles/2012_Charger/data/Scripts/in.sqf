if (isServer) then {exit};
private["_car"];
_car = _this select 0;

_car execVM "\MeansCars\2011_CVPI\data\Scripts\Lights2.sqf";
_car execVM "\MeansCars\2011_CVPI\data\Scripts\directional.sqf";
_car execVM "\MeansCars\2011_CVPI\data\Scripts\sirens.sqf";
_car execVM "\MeansCars\2011_CVPI\data\Scripts\DamageHandeler.sqf";

waitUntil {!(alive _car)};

exit;
