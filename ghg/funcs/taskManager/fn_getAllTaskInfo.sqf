/*======================================
	ghg_fnc_getAllTaskInfo
    gets array of all tasks and descriptions in the mission
	Returns: _allTaskInfo
	[["task1Name", "description", "title", "marker","destination","type","state"],["task2Name", "description", "title", "marker","destination","type","state"],...]
	Author: BSuz
======================================*/
_allTasks = [];
{
	_unit = _x;
	_unitTasks = _unit call BIS_fnc_tasksUnit;
	{_allTasks pushBackUnique _x} forEach _unitTasks;
} forEach allUnits;

_allTasks sort true;

_allTaskInfo = [];
{
	_taskName = _x;
	_taskDescription = _taskName call BIS_fnc_taskDescription;
	//Returns ["description", "title", "marker"]
	_taskState = _taskName call BIS_fnc_taskState;
	_taskType = _taskName call BIS_fnc_taskType;
	_taskDestination = _taskName call BIS_fnc_taskDestination;
	_taskArray = [_taskName];
	_taskArray append _taskDescription;
	_taskArray pushBack _taskType;
	_taskArray pushBack _taskDestination;
	_taskArray pushBack _taskState;
	_allTaskInfo pushBack _taskArray;
} forEach _allTasks;
_allTaskInfo