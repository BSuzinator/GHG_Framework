/*======================================
	Loadout for Squad Marksman (cbrn)
======================================*/
class squad_marksman : squad_rifleman
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname[] = { "arifle_MXM_Black_F", "arifle_MXM_khk_F", "arifle_MXM_Black_F" };
        laser = "ace_acc_pointer_green";
        ammo[] = {"30Rnd_65x39_caseless_black_mag_Tracer", "30Rnd_65x39_caseless_khaki_mag_Tracer", "30Rnd_65x39_caseless_black_mag_Tracer"};
		bipod = "bipod_01_f_blk";
        
        class Scopes : Scopes
        {
			magnified[] = { "optic_sos", "optic_sos_khk_f", "optic_sos" };
        };
    };
    
    class Vest : Vest
    {
        // List of items
        30Rnd_65x39_caseless_black_mag_Tracer = 5;
    };
    
};