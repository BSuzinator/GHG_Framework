class CfgVehicles {
	class LandVehicle;
	class Car : LandVehicle {};
	class Car_F : Car {
		class ACE_Actions;
		class ACE_SelfActions;
	};
	class Hatchback_01_base_F : Car_F {
		class ACE_SelfActions : ACE_SelfActions {
			class GHG_CannonBallTree {
                displayName = "Cannonball";
                condition = QUOTE(GVAR(isRunning) || GVAR(runFinished));
                statement = "";
				
				class GHG_Cannonball_Cancel {
					displayName = "Cancel";
					condition = QGVAR(isRunning);
					statement = QUOTE(_this call FUNC(runCancel))
				};
				class GHG_Cannonball_Restart {
					displayName = "Restart";
					condition = QGVAR(isRunning);
					statement = QUOTE(_this call FUNC(runRestart));
				};
				/*
				class GHG_Cannonball_Repair {
					displayName = "Repair";
					condition = QGVAR(isRunning);
					statement = QUOTE(_this call FUNC(runRepair));
				};
				*/
				class GHG_Cannonball_End_Post {
					displayName = "Post";
					condition = QGVAR(runFinished);
					statement = QUOTE(_this call FUNC(runPost))
				};
				class GHG_Cannonball_End_Retry {
					displayName = "Retry";
					condition = QGVAR(runFinished);
					statement = QUOTE(_this call FUNC(runRestart));
				};
				class GHG_Cannonball_End_Quit {
					displayName = "Quit";
					condition = QGVAR(runFinished);
					statement = QUOTE(_this call FUNC(runCancel));
				};
            };
		};
	};
	class SUV_01_base_F : Car_F {
		class ACE_SelfActions : ACE_SelfActions {
			class GHG_CannonBallTree {
                displayName = "Cannonball";
                condition = QUOTE(GVAR(isRunning) || GVAR(runFinished));
                statement = "";
				
				class GHG_Cannonball_Cancel {
					displayName = "Cancel";
					condition = QGVAR(isRunning);
					statement = QUOTE(_this call FUNC(runCancel))
				};
				class GHG_Cannonball_Restart {
					displayName = "Restart";
					condition = QGVAR(isRunning);
					statement = QUOTE(_this call FUNC(runRestart));
				};
				/*
				class GHG_Cannonball_Repair {
					displayName = "Repair";
					condition = QGVAR(isRunning);
					statement = QUOTE(_this call FUNC(runRepair));
				};
				*/
				class GHG_Cannonball_End_Post {
					displayName = "Post";
					condition = QGVAR(runFinished);
					statement = QUOTE(_this call FUNC(runPost))
				};
				class GHG_Cannonball_End_Retry {
					displayName = "Retry";
					condition = QGVAR(runFinished);
					statement = QUOTE(_this call FUNC(runRestart));
				};
				class GHG_Cannonball_End_Quit {
					displayName = "Quit";
					condition = QGVAR(runFinished);
					statement = QUOTE(_this call FUNC(runCancel));
				};
            };
		};
	};
};