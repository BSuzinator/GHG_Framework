/*======================================
	Loadout for Mechanic (Wastelanders)
======================================*/
class squad_ar : squad_rifleman
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "";
        ammo = "";
        bipod = "";
    };
    class Weapon_2 : Weapon_2 // Rifle
    {
        classname = "CUP_hgun_TEC9";
        laser = "";
        ammo = "CUP_32Rnd_9x19_TEC9";
		bipod = "";
    };
	class Uniform : Uniform
    {
        classname = "CUP_U_C_Mechanic_01";
		CUP_32Rnd_9x19_TEC9 = 4;
    };
	
    class Vest : Vest
    {
		classname = "";

    };
    
    class Backpack : Backpack
    {
        classname = "";
        // List of items

    };
	headgear = "";
	facewear = "";
};