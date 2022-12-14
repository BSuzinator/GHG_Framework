class CfgAmmo
{
    class BulletBase;
    class ghg_ammo_9x19_anest: BulletBase
	{
        // Handled through scripting
		hit = 6; // Needs to be at least 1 to be transmitted over the network
		indirectHit = 0;
		indirectHitRange = 0;
        // Should not suppress enemies
		suppressionRadiusBulletClose = -1;
        suppressionRadiusHit = -1;
        // Should not alert enemies
        dangerRadiusBulletClose = -1;
        dangerRadiusHit = -1;
        // No deflection
        deflecting = -1;
        // Not very noticable
		visibleFire = 1;
		audibleFire = 1;
        
		cartridge = "FxCartridge_9mm";
		model = "x\ghg\addons\gear\models\dart\dart.p3d";
        
        simulation = "shotShell";
        
		caliber = 0.1;
        airFriction = -0.0005;
		
		cost = 1;
        
		typicalSpeed = 10;
        
        ACE_damageType = "anesthetic";
        
        ACE_caliber=1;
        ACE_bulletLength=15.494;
        ACE_bulletMass=1.02;
        ACE_ammoTempMuzzleVelocityShifts[]={-2.655, -2.547, -2.285, -2.012, -1.698, -1.280, -0.764, -0.153, 0.596, 1.517, 2.619};
        ACE_ballisticCoefficients[]={0.165};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ASM";
        ACE_dragModel=1;
        ACE_muzzleVelocities[]={270, 300, 330};
        ACE_barrelLengths[]={101.6, 127.0, 228.6};
	};
    
    class ghg_ammo_762x54_anest : ghg_ammo_9x19_anest
    {
        airFriction = -0.0002;
        
        cartridge = "FxCartridge_762";
        
        ACE_ammoTempMuzzleVelocityShifts[]={-26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19};
        ACE_ballisticCoefficients[]={0.275};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ICAO";
        ACE_dragModel=1;
        ACE_muzzleVelocities[]={450, 500, 550};
        ACE_barrelLengths[]={254.0, 414.02, 508.0};
    };
    
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
	class rhs_ammo_Hydra_M229;
	class ghg_ammo_Hydra_STUN : rhs_ammo_Hydra_M229 {
		hit = 1;
		indirectHit = 0;
		indirectHitRange = 0;
		ExplosionEffects = "RHSUSF_flashbang_20";
		explosive = 0;
		warheadName = "STUN";
	};
};