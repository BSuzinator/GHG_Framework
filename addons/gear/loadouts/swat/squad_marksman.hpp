/*======================================
	Loadout for Squad P2 Marksman (swat)
======================================*/
class squad_marksman : squad_rifleman
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "arifle_SPAR_03_blk_F";
        laser = "rhsusf_acc_anpeq15side_bk";
		muzzle = "muzzle_snds_b";
        ammo = "20Rnd_762x51_Mag";
		bipod = "rhsusf_acc_harris_bipod";
		acog = "optic_mrco"; 
		
        class Scopes : Scopes
        {
            acog = "optic_mrco";
			holo = "optic_holosight_blk_f";
        };
    };
	
	class Uniform : Uniform
    {
        classname = "Police_uniform_Officer2";
    };
	
    class Vest : Vest
    {
		20Rnd_762x51_Mag = 5;
    };
};