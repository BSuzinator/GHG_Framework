/*======================================
	Loadout for Deputy (Wastelanders)
======================================*/
class plt_interp : squad_rifleman
{
	class class Weapon_2 : Weapon_2
	{
		classname = "CUP_hgun_M9A1";
		ammo = "CUP_15Rnd_9x19_M9"
	};
	
	class Uniform : Uniform
	{
		classname = "U_B_GEN_Soldier_F";
	};
	class Vest : Vest
	{
		classname = "V_TacVest_blk_POLICE";
		CUP_15Rnd_9x19_M9 = 8;
	};
	class Backpack : Backpack
	{
		classname = "";
	};
	headgear = "H_Cap_police";
    facewear = "";
};