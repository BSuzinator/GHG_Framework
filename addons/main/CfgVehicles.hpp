class CfgVehicles
{
	//SOG Vehicle ACE logistics compatabilities
	class vn_wheeled_m54_cab_base;
	class vn_wheeled_m54_fuel_base : vn_wheeled_m54_cab_base { transportFuel = 0; };
	class vn_wheeled_m54_03_base;
	class vn_wheeled_m54_repair_base : vn_wheeled_m54_03_base { transportRepair = 0; ace_repair_canRepair = 1; };
	class vn_wheeled_m54_01_base;
	class vn_wheeled_m54_ammo_base : vn_wheeled_m54_01_base { transportAmmo = 0; ace_rearm_defaultSupply = 1000; };
	class vn_wheeled_z157_base;
	class vn_wheeled_z157_fuel_base : vn_wheeled_z157_base { transportFuel = 0; };
	class vn_wheeled_z157_ammo_base : vn_wheeled_z157_base { transportAmmo = 0;ace_rearm_defaultSupply = 1000; };
	class vn_wheeled_z157_repair_base : vn_wheeled_z157_base { transportRepair = 0;ace_repair_canRepair = 1; };
	
	//3CB Vehicle ACE logistics compatabilities
	class UK3CB_V3S_Base;
	class UK3CB_V3S_Refuel : UK3CB_V3S_Base { transportFuel = 0; };
	class UK3CB_Ural_Fuel_Base;
	class UK3CB_Ural_Fuel : UK3CB_Ural_Fuel_Base { transportFuel = 0; };
	class UK3CB_Kamaz_Fuel_Base;
	class UK3CB_Kamaz_Fuel : UK3CB_Kamaz_Fuel_Base { transportFuel = 0; };
	class UK3CB_V3S_Closed;
	class UK3CB_V3S_Reammo : UK3CB_V3S_Closed { transportAmmo = 0; };
	class UK3CB_Ural_Ammo_Base;
	class UK3CB_Ural_Ammo : UK3CB_Ural_Ammo_Base { transportAmmo = 0; };
	class UK3CB_Ural_Repair_Base;
	class UK3CB_Ural_Repair : UK3CB_Ural_Repair_Base { transportRepair = 0; };
	class UK3CB_V3S_Base;
	class UK3CB_V3S_Repair : UK3CB_V3S_Base { transportRepair = 0; };
	class UK3CB_MTVR_Base;
	class UK3CB_MTVR_Repair : UK3CB_MTVR_Base {	transportRepair = 0; };
	class UK3CB_AAF_B_MTVR_Refuel : UK3CB_MTVR_Base { transportFuel = 0 };
	class UK3CB_MTVR_Reammo : UK3CB_MTVR_Base { transportAmmo = 0; };
	class UK3CB_M939_Base;
	class UK3CB_M939_Refuel : UK3CB_M939_Base { transportFuel = 0 };
	class UK3CB_M939_Reammo : UK3CB_M939_Base { transportAmmo = 0 };
	class UK3CB_M939_Repair : UK3CB_M939_Base { transportRepair = 0 };
	class UK3CB_BAF_MAN_HX60_Base;
	class UK3CB_BAF_MAN_HX60_Repair_Base : UK3CB_BAF_MAN_HX60_Base { transportRepair = 0 };
	class UK3CB_BAF_MAN_HX60_Fuel_Base : UK3CB_BAF_MAN_HX60_Base { transportFuel = 0 };
	
	class FlagCarrier;
	class ghg_Flag_GHG : FlagCarrier
    {
        scope=2;
        author = "GHG Team";
		displayName = "Flag (GHG)";
		editorCategory="GHG_Cat_Main";
		editorSubcategory="GHG_SubCat_Flags";
        class EventHandlers
        {
            init="(_this select 0) setFlagTexture '\x\ghg\addons\main\ui\ghgFlag.paa'";
        };
    };
	class Banner_01_base_F;
	class ghg_Banner_GHG : Banner_01_base_F
	{
		scope=2;
        author = "GHG Team";
		displayName = "Banner (GHG)";
		editorCategory="GHG_Cat_Main";
		editorSubcategory="GHG_SubCat_Flags";
		hiddenSelectionsTextures[] = {"\x\ghg\addons\main\ui\ghgFlag.paa"};
	};
};
