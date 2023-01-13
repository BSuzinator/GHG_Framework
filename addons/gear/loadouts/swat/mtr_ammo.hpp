/*======================================
	Loadout for MTR Ammo Bearer (swat)
======================================*/
class mtr_ammo : squad_rifleman
{
    
	
	class Weapon_3 : Weapon_3 // Launcher
    {
        classname = "ace_csw_carryMortarBaseplate";
    };
	
	class Uniform : Uniform
	{
		classname = "U_BG_Guerrilla_6_1";
	};
	
	class Vest : Vest
    {
		classname = "V_EOD_coyote_F";
        // List of items
		rhs_mag_20rnd_scar_762x51_m80_ball_bk = 6;
		ACE_Kestrel4500 = 1;
		ACE_MapTools = 1;
		ACE_artilleryTable = 1;
    };
	
	class Backpack : Backpack
    {
        classname = "B_Carryall_cbr";
        // List of items
		ACE_1Rnd_82mm_Mo_HE = 3;
		ACE_1Rnd_82mm_Mo_Smoke = 1;
		ACE_1Rnd_82mm_Mo_Illum = 1;
    };
	
	class Binoculars : Binoculars
    {
        classname = "Binocular";
    };
	headgear = "UK3CB_ABP_B_H_6b27m_ess_DES";
	facewear = "UK3CB_G_Balaclava";
};