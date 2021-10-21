class CfgWeapons {
    class CBA_MiscItem;
    class CBA_MiscItem_ItemInfo;
    class GHG_Papers_Base: CBA_MiscItem {
        author = "GHG Team";
        ghg_isUnique = 0;
        scopeCurator = 2;
        scope = 2;
        
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 1;
            scope = 0;
        };
    };
    
    class GHG_Papers_Identity: GHG_Papers_Base {
        displayName = "Identification Card";
        useActionTitle = "Identification Card";
        descriptionShort = "Identification Card";
        
        //model = QPATHTOF(models\identity.p3d);
        picture = QPATHTOF(ui\identity.paa);
    };
    PAPERS_ID_LIST(GHG_Papers_Identity)
    
    class GHG_Papers_Work: GHG_Papers_Base {
        displayName = "Work Permit";
        useActionTitle = "Work Permit";
        descriptionShort = "Work Permit";
        
        //model = QPATHTOF(models\work.p3d);
        picture = QPATHTOF(ui\work.paa);
    };
    PAPERS_ID_LIST(GHG_Papers_Work)
    
    class GHG_Papers_Entry : GHG_Papers_Base {
        displayName = "Entry Authorization";
        useActionTitle = "Entry Authorization";
        descriptionShort = "Entry Authorization";
        
        //model = QPATHTOF(models\entry.p3d);
        picture = QPATHTOF(ui\entry.paa);
    };
    PAPERS_ID_LIST(GHG_Papers_Entry)
    
    class GHG_Papers_Vehicle : GHG_Papers_Base {
        displayName = "Vehicle Registration";
        useActionTitle = "Vehicle Registration";
        descriptionShort = "Vehicle Registration";
        
        //model = QPATHTOF(models\vehicle.p3d);
        picture = QPATHTOF(ui\vehicle.paa);
    };
    PAPERS_ID_LIST(GHG_Papers_Vehicle)
};