if (isDedicated) exitwith {};
private["_car"];
_car = _this select 0;
_car execVM "\MeansCars\2011_CVPI\data\scripts\Lightbar.sqf";
_car execVM "\MeansCars\2011_CVPI\data\scripts\radar.sqf";
_car execVM "\MeansCars\2011_CVPI\data\scripts\sirenscv.sqf";
_car execVM "\MeansCars\2011_CVPI\data\scripts\Flashers.sqf";
exit;