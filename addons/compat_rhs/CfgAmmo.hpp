class CfgAmmo
{
	class rhs_ammo_Hydra_M229;
	class ghg_ammo_Hydra_STUN : rhs_ammo_Hydra_M229 {
		hit = 1;
		indirectHit = 0.3;
		indirectHitRange = 0.1;
		ExplosionEffects = "RHSUSF_flashbang_20";
		explosionTime = 0.5;
		//explosive = 0;
		warheadName = "STUN";
		cost = 10;
	};
	
	/* class RHS_ammo_23mm_AA : B_35mm_AA {
		aiAmmoUsageFlags = "128 + 256";
	}; */
	
};