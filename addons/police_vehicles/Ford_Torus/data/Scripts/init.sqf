if (isDedicated) exitwith {};
private["_car"];
_car = _this select 0;
_car execVM "\MeansCars\Ford_Torus\data\scripts\Lightbar.sqf";
_car execVM "\MeansCars\Ford_Torus\data\scripts\radar.sqf";
_car execVM "\MeansCars\Ford_Torus\data\scripts\sirenscv.sqf";
_car execVM "\MeansCars\Ford_Torus\data\scripts\Flashers.sqf";
exit;
