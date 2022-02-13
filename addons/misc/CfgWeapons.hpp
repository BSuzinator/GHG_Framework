class CfgWeapons {
    class CBA_MiscItem {
		class CBA_MiscItem_ItemInfo;
	};
    class GHG_spikeStripItem: CBA_MiscItem {
        author = "BSuz";
        ghg_isUnique = 0;
        scopeCurator = 2;
        scope = 2;
		displayName = "Spike Strip (Packed)";
        useActionTitle = "Spike Strip (Packed)";
        descriptionShort = "Spike Strip (Packed)";
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 5;
            scope = 0;
        };
    };
};