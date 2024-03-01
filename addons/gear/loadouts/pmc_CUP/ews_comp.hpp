/*======================================
	Loadout for EWS ROLM (pmc)
======================================*/
class ews_comp : squad_rifleman
{
    
    
    class Weapon_2 : Weapon_2 // Pistol
    {
        classname = "hgun_esd_01_F";
        muzzle = "muzzle_antenna_03_f";
        //ammo = "ESD_01_DummyMagazine_1"; // Ammo count is supposed to be 4331 (433.1MHz)
    };
	
	class Uniform : Uniform
	{
		classname = "U_C_Uniform_Scientist_01_F";
	};
	
	class Backpack : Backpack
    {
        classname = "GHG_RuggedNova_khk";
    };
	headgear = "H_HeadSet_black_F";
	facewear = "G_Aviator";
};