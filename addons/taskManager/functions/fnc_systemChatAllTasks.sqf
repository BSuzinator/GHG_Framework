#include "script_component.hpp"
/*======================================
	ghg_fnc_systemChatTasks
    relays all tasks and info to systemChat
	Author: BSuz
======================================*/
_allTaskInfo = call FUNC(getAllTaskInfo);
{
	_taskName = _x select 0;
	_taskDescription = _x select 1;
	_taskTitle = _x select 2;
	_taskMarker = _x select 3;
	_taskDestination = _x select 4;
	_taskType = _x select 5;
	_taskState = _x select 6;
	systemChat format ["%1, %2, %3, %4, %5, %6, %7",_taskName,_taskDescription,_taskTitle,_taskMarker, _taskDestination, _taskType,_taskState];
} forEach _allTaskInfo;