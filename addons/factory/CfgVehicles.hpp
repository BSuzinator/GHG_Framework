class CfgVehicles {
	class House;
	class House_F : House {
		class ACE_Actions {
			class ACE_MainActions;
		};
	};
	class Land_Bunker_F : House_F {};
	class GHG_Vehicle_Factory : Land_Bunker_F {
		author = "GHG Team";
		scope = 2;
		displayName = "Vehicle Factory";
		editorCategory="GHG_Cat_Main";
		editorSubcategory="GHG_SubCat_Factory";
		
		class ACE_Actions : ACE_Actions {
            class ACE_MainActions : ACE_MainActions {
                displayName = "Factory";
                distance = 30;
                position = "[0,-1.155,0.8]";
				selection = "";
                condition = "true";
				icon = "\a3\ui_f\data\gui\rsc\rscdisplayarcademap\icon_debug_ca.paa";
                //statement = "";
                exceptions[] = {"isNotSwimming"};
				showDisabled = 1;
				
				class GHG_Factory_Infantry {
					displayName = "Infantry";
					condition = "true";
					statement = "";
					insertChildren = "";
					icon = "\a3\ui_f\data\map\vehicleicons\iconcar_ca.paa";
					exceptions[] = {"isNotSwimming"};
					
					class GHG_Factory_Infantry_cars {
						displayName = "Cars";
						condition = "true";
						statement = "";
						insertChildren = "{(_this # 0) getVariable ""ghg_factory_carActionList""}";
						icon = "";
						exceptions[] = {"isNotSwimming"};
					};
					class GHG_Factory_Infantry_troopTruck {
						displayName = "Troop Trucks";
						condition = "true";
						statement = "";
						insertChildren = "{(_this # 0) getVariable ""ghg_factory_troopTruckActionList""}";
						icon = "";
						exceptions[] = {"isNotSwimming"};
					};
					class GHG_Factory_Infantry_mrap {
						displayName = "MRAPs";
						condition = "true";
						statement = "";
						insertChildren = "{(_this # 0) getVariable ""ghg_factory_mrapActionList""}";
						icon = "";
						exceptions[] = {"isNotSwimming"};
					};
				
				};
				/*
				class GHG_Factory_LOGI {
					displayName = "LOGI";
					condition = "true";
					statement = "";
					insertChildren = QUOTE([_this,'logi'] call FUNC(spawnVehicle));
					icon = "\a3\soft_f_beta\truck_02\data\ui\map_truck_02_ca.paa";
					exceptions[] = {"isNotSwimming"};
				};
				class GHG_Factory_LYNX_WOLF {
					displayName = "LYNX / WOLF";
					condition = "true";
					statement = "";
					insertChildren = QUOTE([_this,'armor'] call FUNC(spawnVehicle));
					icon = "\a3\ui_f\data\map\vehicleicons\icontank_ca.paa";
					exceptions[] = {"isNotSwimming"};
				};
				class GHG_Factory_RAVN_FLCN {
					displayName = "RAVN / FLCN";
					condition = "true";
					statement = "";
					insertChildren = QUOTE([_this,'heli'] call FUNC(spawnVehicle));
					icon = "\a3\ui_f\data\map\vehicleicons\iconhelicopter_ca.paa";
					exceptions[] = {"isNotSwimming"};
				};
				class GHG_Factory_RPTR {
					displayName = "RPTR";
					condition = "true";
					statement = "";
					insertChildren = QUOTE([_this,'plane'] call FUNC(spawnVehicle));
					icon = "\a3\ui_f\data\map\vehicleicons\iconplane_ca.paa";
					exceptions[] = {"isNotSwimming"};
				};
				class GHG_Factory_KNFS {
					displayName = "KNFS";
					condition = "true";
					statement = "";
					insertChildren = QUOTE([_this,'boat'] call FUNC(spawnVehicle));
					icon = "\a3\ui_f\data\map\vehicleicons\iconship_ca.paa";
					exceptions[] = {"isNotSwimming"};
				};
				*/
            };
        };
		
		
	};
};