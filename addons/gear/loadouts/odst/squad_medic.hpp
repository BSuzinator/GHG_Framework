/*======================================
	Loadout for Squad Medics (odst)
======================================*/
class squad_medic : squad_rifleman
{
    

    class Vest : Vest
    {
        classname = "OPTRE_UNSC_M52D_Armor_Medic"; 
        // Inherited item overrides
		ACE_EntrenchingTool = 0;
        OPTRE_M9_Frag = 1;
        // List of items
        OPTRE_M2_Smoke_Red = 2;
    };
    
    class Backpack : Backpack
    {
        classname = "OPTRE_ILCS_Rucksack_Medical";
        // List of items
		OPTRE_Biofoam = 25;
		ACE_bloodIV_250 = 10;
		ACE_bloodIV_500 = 8;
		ACE_bloodIV = 5;
		OPTRE_MedKit = 2;
		ACE_personalAidKit = 2;
		ACE_bodyBag = 1;
		ACE_surgicalKit = 1;

    };
};