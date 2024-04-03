/*======================================
	Loadout for MAA Gunner (Wastelanders)
======================================*/
class maa_gunner : mat_gunner
{

	class Weapon_3 : Weapon_3 // Launcher
    {
        classname = "";
        ammo = "";
		class Scopes 
		{ 
		acog = ""; 
		};
    };
	
	class Uniform : Uniform
	{
		classname = "";
	};
	
    class Backpack : Backpack
    {
		classname = "";

    };
	facewear = "";
	headgear = "";
};