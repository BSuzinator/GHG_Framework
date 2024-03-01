class B_supplyCrate_F;
class GHG_Arsenal : B_supplyCrate_F
{
	scope = 2;
    scopeCurator = 2;
    author = "GHG Team";
    displayName = "Arsenal Box";
	editorCategory="GHG_Cat_Main";
	editorSubcategory="GHG_SubCat_Other";
	class EventHandlers
        {
            init="[(_this # 0), true] call ace_arsenal_fnc_initBox;";
        };
	ghg_gear_isArsenal = 1;
	ace_cargo_canLoad = 0;
	ace_cargo_noRename = 1;
	disableInventory = 1;
	transportMaxBackpacks = 0;
	transportMaxMagazines = 0;
	transportMaxWeapons = 0;
	class TransportBackpacks {};
	class TransportItems {};
	class TransportMagazines {};
	class TransportWeapons {};
};