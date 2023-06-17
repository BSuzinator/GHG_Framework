/*======================================
	Loadout for Rifleman (Snow Tigers)
======================================*/
class squad_rifleman : loadout_base
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "arifle_Katiba_F";
        laser = "rhsusf_acc_anpeq15";
        ammo = "30Rnd_65x39_caseless_green";
		bipod = "rhsusf_acc_kac_grip";
		
		class Scopes : Scopes
        {
            red_dot = "optic_aco";
            holo = "optic_aco_smg";
            red_dot_magnified = "optic_arco_blk_f";
            holo_magnified = "optic_arco";
        };
        
    };
    
    class Uniform : Uniform
    {
        classname = "IP_U_O_CombatUniform_SnowTiger";
		ACRE_PRC343 = 1;
    };
    
    class Vest : Vest
    {
        classname = "IP_V_TacVest_SnowTiger";
        // List of items
        30Rnd_65x39_caseless_green = 8;
        rhssaf_mag_brd_m83_white = 2;
        rhs_mag_rgn = 2;
    };
    
    headgear = "IP_H_HelmetO_SnowTiger";
    facewear = "rhsusf_shemagh2_gogg_white";
};