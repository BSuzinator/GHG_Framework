params ["_unit", "_id", "_uid", "_name"];

private _logic = getAssignedCuratorUnit _unit;
unassignCurator _logic;
deleteVehicle _logic;

true; // MUST BE LAST