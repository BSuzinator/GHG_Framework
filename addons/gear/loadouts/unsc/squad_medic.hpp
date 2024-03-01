/*======================================
	Loadout for Squad Medics (unsc)
======================================*/
class squad_medic : squad_rifleman
{
    

    class Vest : Vest
    {
        classname[] = {"OPTRE_UNSC_M52A_Armor_Medic_WDL", "OPTRE_UNSC_M52A_Armor_Medic_SNO"} ; 
        // Inherited item overrides
		ACE_EntrenchingTool = 0;
        OPTRE_M9_Frag = 1;
        // List of items
        OPTRE_M2_Smoke_Red = 2;
    };
    
    class Backpack : Backpack
    {
        classname = "OPTRE_UNSC_Rucksack_Heavy";
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
	
	headgear[] = { "OPTRE_UNSC_CH252_Helmet_WDL_MED", "OPTRE_UNSC_CH252_Helmet_SNO_MED" };
};