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
        displayName = "Identification Card (Unbound)";
        useActionTitle = "Identification Card (Unbound)";
        descriptionShort = "Identification Card (Unbound)";
        
        //model = QPATHTOF(models\identity.p3d);
        //picture = QPATHTOF(ui\identity.paa);
    };
    PAPERS_ID_LIST(GHG_Papers_Identity, "Identification Card")
    
    class GHG_Papers_Work: GHG_Papers_Base {
        displayName = "Work Permit (Unbound)";
        useActionTitle = "Work Permit (Unbound)";
        descriptionShort = "Work Permit (Unbound)";
        
        //model = QPATHTOF(models\work.p3d);
        //picture = QPATHTOF(ui\work.paa);
    };
    PAPERS_ID_LIST(GHG_Papers_Work, "Work Permit")
    
    class GHG_Papers_Entry : GHG_Papers_Base {
        displayName = "Entry Authorization (Unbound)";
        useActionTitle = "Entry Authorization (Unbound)";
        descriptionShort = "Entry Authorization (Unbound)";
        
        //model = QPATHTOF(models\entry.p3d);
        //picture = QPATHTOF(ui\entry.paa);
    };
    PAPERS_ID_LIST(GHG_Papers_Entry, "Entry Authorization")
    
    class GHG_Papers_Vehicle : GHG_Papers_Base {
        displayName = "Vehicle Registration (Unbound)";
        useActionTitle = "Vehicle Registration (Unbound)";
        descriptionShort = "Vehicle Registration (Unbound)";
        
        //model = QPATHTOF(models\vehicle.p3d);
        //picture = QPATHTOF(ui\vehicle.paa);
    };
    PAPERS_ID_LIST(GHG_Papers_Vehicle, "Vehicle Registration")
};