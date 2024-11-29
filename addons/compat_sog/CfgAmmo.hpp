class CfgAmmo
{
	class BulletBase;
	
	class vn_sh_105mm_base_he_ammo;
    class ghg_shell_105mm_m546_beehive_ammo : vn_sh_105mm_base_he_ammo
    {
        submunitionAmmo = "B_12Gauge_Pellets_Submunition_Deploy";
        submunitionConeType[] = {"poissondisccenter", 800};
        submunitionConeAngle = 18;
        submunitionDirectionType = "SubmunitionModelDirection";
        triggerTime = 0.1; // Init Speed is 810m/s so this is about 81m out
        triggerSpeedCoef[] = {1.0, 1.0};
        submunitionParentSpeedCoef = 1;
        //deleteParentWhenTriggered = true;
        
        explosive = 0; // No explosive payload
    };
	
	class vn_riflebullet_base;
	class vn_127x99 : vn_riflebullet_base {
		aiAmmoUsageFlags = "128 + 256 + 512";
	};
	
	class vn_20x110 : BulletBase {
		aiAmmoUsageFlags = "128 + 256 + 512";
	};
	
	class vn_145x114 : vn_20x110 {
		aiAmmoUsageFlags = "128 + 256 + 512";
	};
	
	class vn_145x114_x2 : vn_145x114 {
		aiAmmoUsageFlags = "128 + 256 + 512";
	};
	
	class vn_145x114_x4 : vn_145x114 {
		aiAmmoUsageFlags = "128 + 256 + 512";
	};
};