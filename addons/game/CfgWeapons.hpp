class CfgWeapons {
    class CBA_MiscItem;
    class CBA_MiscItem_ItemInfo;
    class GHG_game_antidote: CBA_MiscItem {
        author = "BSuz";
        scopeCurator = 2;
		picture = "\z\ace\addons\medical_treatment\ui\atropine_ca.paa";
		model = "\z\ace\addons\medical_treatment\data\atropine.p3d";
        scope = 2;
		displayName = "Antidote";
        useActionTitle = "Antidote to poison. Grants 5 minutes of immunity";
        descriptionShort = "Antidote to poison";
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 1;
            scope = 0;
        };
    };
};