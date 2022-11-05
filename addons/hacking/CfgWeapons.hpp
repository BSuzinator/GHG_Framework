class CfgWeapons {
    class CBA_MiscItem;
    class CBA_MiscItem_ItemInfo;
    class GHG_FlashDisk: CBA_MiscItem {
        author = "BSuz";
		scopeCurator = 2;
		editorPreview = "\A3\EditorPreviews_F_oldman\Data\CfgVehicles\Land_USB_Dongle_01_F.jpg";
		model = "\a3\Missions_F_Oldman\Props\DummyItemSmall_F.p3d";
		picture = "\a3\missions_f_oldman\props\data\flashdisk_ca.paa";
        scope = 2;
		displayName = "Flash Disk";
        useActionTitle = "Flash Disk";
        descriptionShort = "Flash Disk";
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 2;
            scope = 0;
        };
    };
};