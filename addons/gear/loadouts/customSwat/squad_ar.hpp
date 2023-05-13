/*======================================
	Loadout for Squad Breacher (swat)
======================================*/
class squad_ar : squad_rifleman
{
	
	class Weapon1 : Weapon1
	{
		classname = "UK3CB_MP5K_PDW";
		acog = "rhsusf_acc_rm05";
		ammo = "UK3CB_MP5_30Rnd_9x19_Magazine";
	};	
	
	class Uniform : Uniform
    {
		classname = "Police_uniform_Officer2";
		UK3CB_MP5_30Rnd_9x19_Magazine = 8;
    };
	
	headgear = "Patrol_Cap";
    facewear = "vn_g_glasses_01";
};