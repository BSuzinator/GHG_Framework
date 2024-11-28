class CfgVehicles
{	
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
