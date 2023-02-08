if (isDedicated) exitwith {};
private["_car"];
_car = _this select 0;
_car execVM "\MeansCars\2015_Tahoe\data\scripts\Lightbar.sqf";
_car execVM "\MeansCars\2015_Tahoe\data\scripts\radar.sqf";
_car execVM "\MeansCars\2015_Tahoe\data\scripts\sirenscv.sqf";
_car execVM "\MeansCars\2015_Tahoe\data\scripts\Flashers.sqf";
exit;
