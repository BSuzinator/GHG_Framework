/*======================================
	Loadout for EWS Teletype (Snow Tigers)
======================================*/
class ews_comms : squad_rifleman
{
    class Weapon_2 : Weapon_2 // Pistol
    {
        classname = "hgun_esd_01_F";
        muzzle = "muzzle_antenna_03_f";
        //ammo = "ESD_01_DummyMagazine_1"; // Ammo count is supposed to be 4331 (433.1MHz)
    };
	class Uniform : Uniform
	{

	};
	
	class Backpack : Backpack
    {
        classname= "rhs_r148";
    };
	
};