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
                condition = QUOTE(_this call FUNC(canUseFactory));
				icon = "\a3\ui_f\data\gui\rsc\rscdisplayarcademap\icon_debug_ca.paa";
                //statement = "";
                exceptions[] = {"isNotSwimming"};
				//showDisabled = 1;
				
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
						insertChildren = "(_this # 0) getVariable ""ghg_factory_carActionList""";
						icon = "";
						exceptions[] = {"isNotSwimming"};
					};
					class GHG_Factory_Infantry_troopTruck {
						displayName = "Troop Trucks";
						condition = "true";
						statement = "";
						insertChildren = "(_this # 0) getVariable ""ghg_factory_troopTruckActionList""";
						icon = "";
						exceptions[] = {"isNotSwimming"};
					};
					class GHG_Factory_Infantry_mrap {
						displayName = "MRAPs";
						condition = "true";
						statement = "";
						insertChildren = "(_this # 0) getVariable ""ghg_factory_mrapActionList""";
						icon = "";
						exceptions[] = {"isNotSwimming"};
					};
				
				};
				
				class GHG_Factory_LOGI {
					displayName = "LOGI";
					condition = "true";
					statement = "";
					insertChildren = "";
					icon = "\a3\soft_f_beta\truck_02\data\ui\map_truck_02_ca.paa";
					exceptions[] = {"isNotSwimming"};
					
					class GHG_Factory_Infantry_bridgeTrucks {
						displayName = "Bridge Equiptment";
						condition = "true";
						statement = "";
						insertChildren = "(_this # 0) getVariable ""ghg_factory_bridgeTrucksActionList""";
						icon = "";
						exceptions[] = {"isNotSwimming"};
					};
					class GHG_Factory_Infantry_troopTruck {
						displayName = "Cargo Trucks";
						condition = "true";
						statement = "";
						insertChildren = "(_this # 0) getVariable ""ghg_factory_cargoTrucksActionList""";
						icon = "";
						exceptions[] = {"isNotSwimming"};
					};
					class GHG_Factory_Infantry_rearm {
						displayName = "Rearm";
						condition = "true";
						statement = "";
						insertChildren = "(_this # 0) getVariable ""ghg_factory_rearmActionList""";
						icon = "";
						exceptions[] = {"isNotSwimming"};
					};
					class GHG_Factory_Infantry_refuel {
						displayName = "Refuel";
						condition = "true";
						statement = "";
						insertChildren = "(_this # 0) getVariable ""ghg_factory_refuelActionList""";
						icon = "";
						exceptions[] = {"isNotSwimming"};
					};
					class GHG_Factory_Infantry_repair {
						displayName = "Repair";
						condition = "true";
						statement = "";
						insertChildren = "(_this # 0) getVariable ""ghg_factory_repairActionList""";
						icon = "";
						exceptions[] = {"isNotSwimming"};
					};
				};
				
				class GHG_Factory_LYNX_WOLF {
					displayName = "LYNX / WOLF";
					condition = "true";
					statement = "";
					insertChildren = "";
					icon = "\a3\ui_f\data\map\vehicleicons\icontank_ca.paa";
					exceptions[] = {"isNotSwimming"};
					
					class GHG_Factory_Infantry_apc {
						displayName = "APC";
						condition = "true";
						statement = "";
						insertChildren = "(_this # 0) getVariable ""ghg_factory_apcActionList""";
						icon = "";
						exceptions[] = {"isNotSwimming"};
					};
					class GHG_Factory_Infantry_ifv {
						displayName = "IFV";
						condition = "true";
						statement = "";
						insertChildren = "(_this # 0) getVariable ""ghg_factory_ifvActionList""";
						icon = "";
						exceptions[] = {"isNotSwimming"};
					};
					class GHG_Factory_Infantry_tank {
						displayName = "TANK";
						condition = "true";
						statement = "";
						insertChildren = "(_this # 0) getVariable ""ghg_factory_tankActionList""";
						icon = "";
						exceptions[] = {"isNotSwimming"};
					};
				};
				
				class GHG_Factory_RAVN_FLCN {
					displayName = "RAVN / FLCN";
					condition = "true";
					statement = "";
					insertChildren = "";
					icon = "\a3\ui_f\data\map\vehicleicons\iconhelicopter_ca.paa";
					exceptions[] = {"isNotSwimming"};
					
					class GHG_Factory_Infantry_heli_unarmed {
						displayName = "Unarmed";
						condition = "true";
						statement = "";
						insertChildren = "(_this # 0) getVariable ""ghg_factory_heli_unarmedActionList""";
						icon = "";
						exceptions[] = {"isNotSwimming"};
					};
					class GHG_Factory_Infantry_heli_armed {
						displayName = "Armed";
						condition = "true";
						statement = "";
						insertChildren = "(_this # 0) getVariable ""ghg_factory_heli_armedActionList""";
						icon = "";
						exceptions[] = {"isNotSwimming"};
					};
				};
				class GHG_Factory_RPTR {
					displayName = "RPTR";
					condition = "true";
					statement = "";
					insertChildren = "(_this # 0) getVariable ""ghg_factory_planeActionList""";
					icon = "\a3\ui_f\data\map\vehicleicons\iconplane_ca.paa";
					exceptions[] = {"isNotSwimming"};
				};
				class GHG_Factory_KNFS {
					displayName = "KNFS";
					condition = "true";
					statement = "";
					insertChildren = "";
					icon = "\a3\ui_f\data\map\vehicleicons\iconship_ca.paa";
					exceptions[] = {"isNotSwimming"};
					
					class GHG_Factory_Infantry_boat_unarmed {
						displayName = "Unarmed";
						condition = "true";
						statement = "";
						insertChildren = "(_this # 0) getVariable ""ghg_factory_boat_unarmedActionList""";
						icon = "";
						exceptions[] = {"isNotSwimming"};
					};
					class GHG_Factory_Infantry_boat_armed {
						displayName = "Armed";
						condition = "true";
						statement = "";
						insertChildren = "(_this # 0) getVariable ""ghg_factory_boat_armedActionList""";
						icon = "";
						exceptions[] = {"isNotSwimming"};
					};
				};
				
            };
        };
		
		
	};
};