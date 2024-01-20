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
	
	class FlagCarrier;
	class ghg_Flag_GHG : FlagCarrier
    {
        scope=2;
		scopeCurator=2;
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
		scopeCurator=2;
        author = "GHG Team";
		displayName = "Banner (GHG)";
		editorCategory="GHG_Cat_Main";
		editorSubcategory="GHG_SubCat_Flags";
		hiddenSelectionsTextures[] = {"\x\ghg\addons\main\ui\ghgFlag.paa"};
	};
};
