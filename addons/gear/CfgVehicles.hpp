#define GHG_UNIT_CLASS_APPENDABLE(SIDE, CLASSNAME, UNITNAME) class SIDE##_##CLASSNAME : SIDE##_ghg_base { \
    scope = 2; \
	scopeCurator = 2; \
    displayName = UNITNAME ;
#define GHG_UNIT_CLASS(SIDE, CLASSNAME, UNITNAME) GHG_UNIT_CLASS_APPENDABLE(SIDE, CLASSNAME, UNITNAME)};

#define GHG_BASE_CLASS(SIDE) class SIDE##_survivor_f; \
class SIDE##_ghg_base : SIDE##_survivor_f { \
    scope = 0; \
    scopeCurator = 0; \
    faction = QUOTE(SIDE##_ghg); \
    linkedItems[] = {"", "", ItemMap, ItemCompass, ItemWatch, "", ""}; \
};

#define GHG_SIDE_CLASS(SIDE) GHG_BASE_CLASS(SIDE) \
GHG_UNIT_CLASS(SIDE, ghg_plt_lead, "Platoon Lead") \
GHG_UNIT_CLASS(SIDE, ghg_plt_fac, "Platoon Forward Asset Control") \
GHG_UNIT_CLASS_APPENDABLE(SIDE, ghg_plt_doctor, "Platoon Doctor") \
	attendant = 1; \
	ghg_medic_level = 2; \
}; \
GHG_UNIT_CLASS(SIDE, ghg_plt_interp, "Platoon Interpreter") \
\
GHG_UNIT_CLASS(SIDE, ghg_squad_lead, "Squad Lead") \
GHG_UNIT_CLASS_APPENDABLE(SIDE, ghg_squad_medic, "Squad Medic") \
	attendant = 1; \
	ghg_medic_level = 1; \
}; \
GHG_UNIT_CLASS(SIDE, ghg_squad_ar, "Squad Automatic Rifleman") \
GHG_UNIT_CLASS(SIDE, ghg_squad_aar, "Squad Assistant Automatic Rifleman") \
GHG_UNIT_CLASS(SIDE, ghg_squad_at, "Squad Rifleman Anti-Tank") \
GHG_UNIT_CLASS(SIDE, ghg_squad_rifleman, "Squad Rifleman") \
GHG_UNIT_CLASS(SIDE, ghg_squad_grenadier, "Squad Grenadier") \
GHG_UNIT_CLASS(SIDE, ghg_squad_marksman, "Squad Marksman") \
GHG_UNIT_CLASS(SIDE, ghg_squad_aa, "Squad Rifleman Anti-Air") \
\
GHG_UNIT_CLASS(SIDE, ghg_ews_lead, "Electronic Warfare Team Lead") \
GHG_UNIT_CLASS_APPENDABLE(SIDE, ghg_ews_comms, "Electronic Warfare Communications Specialist") \
	uavHacker = 1; \
}; \
GHG_UNIT_CLASS_APPENDABLE(SIDE, ghg_ews_comp, "Electronic Warfare Computer Specialist") \
	uavHacker = 1; \
}; \
\
GHG_UNIT_CLASS(SIDE, ghg_maa_lead, "Medium Anti-Air Team Lead") \
GHG_UNIT_CLASS(SIDE, ghg_maa_gunner, "Medium Anti-Air Gunner") \
GHG_UNIT_CLASS(SIDE, ghg_maa_ammo, "Medium Anti-Air Ammo Bearer") \
\
GHG_UNIT_CLASS(SIDE, ghg_mat_lead, "Medium Anti-Tank Team Lead") \
GHG_UNIT_CLASS(SIDE, ghg_mat_gunner, "Medium Anti-Tank Gunner") \
GHG_UNIT_CLASS(SIDE, ghg_mat_ammo, "Medium Anti-Tank Ammo Bearer") \
\
GHG_UNIT_CLASS(SIDE, ghg_mmg_lead, "Medium Machinegun Team Lead") \
GHG_UNIT_CLASS(SIDE, ghg_mmg_gunner, "Medium Machinegun Gunner") \
GHG_UNIT_CLASS(SIDE, ghg_mmg_ammo, "Medium Machinegun Ammo Bearer") \
\
GHG_UNIT_CLASS(SIDE, ghg_mtr_lead, "Mortar Lead") \
GHG_UNIT_CLASS(SIDE, ghg_mtr_gunner, "Mortar Gunner") \
GHG_UNIT_CLASS(SIDE, ghg_mtr_ammo, "Mortar Ammo Bearer") \
\
GHG_UNIT_CLASS(SIDE, ghg_rcn_lead, "Recon Team Lead") \
GHG_UNIT_CLASS(SIDE, ghg_rcn_gunner, "Recon Sniper") \
GHG_UNIT_CLASS(SIDE, ghg_rcn_ammo, "Recon Spotter") \
\
GHG_UNIT_CLASS_APPENDABLE(SIDE, ghg_logi_lead, "Logistics Team Lead") \
	engineer = 1; \
	ghg_engineer_level = 1; \
	attendant = 1; \
	ghg_medic_level = 1; \
}; \
GHG_UNIT_CLASS_APPENDABLE(SIDE, ghg_logi_doctor, "Logistics Doctor") \
	attendant = 1; \
	ghg_medic_level = 2; \
}; \
GHG_UNIT_CLASS_APPENDABLE(SIDE, ghg_logi_repair, "Logistics Repair Specialist") \
    engineer = 1; \
	ghg_engineer_level = 2; \
}; \
GHG_UNIT_CLASS(SIDE, ghg_demo_lead, "Demolitions Team Lead") \
\
GHG_UNIT_CLASS_APPENDABLE(SIDE, ghg_demo_explosive, "Demolitions Explosive Specialist") \
	canDeactivateMines = 1; \
}; \
GHG_UNIT_CLASS_APPENDABLE(SIDE, ghg_demo_defusal, "Demolitions EOD Tech") \
	canDeactivateMines = 1; \
}; \
GHG_UNIT_CLASS_APPENDABLE(SIDE, ghg_demo_saboteur, "Demolitions Saboteur") \
	canDeactivateMines = 1; \
}; \
\
GHG_UNIT_CLASS_APPENDABLE(SIDE, ghg_lynx_driver, "Lynx Driver") \
	engineer = 1; \
	ghg_engineer_level = 1; \
}; \
GHG_UNIT_CLASS(SIDE, ghg_lynx_cmdr, "Lynx Commander") \
GHG_UNIT_CLASS(SIDE, ghg_lynx_crew, "Lynx Crew") \
\
GHG_UNIT_CLASS_APPENDABLE(SIDE, ghg_wolf_driver, "Wolf Driver") \
	engineer = 1; \
	ghg_engineer_level = 1; \
}; \
GHG_UNIT_CLASS(SIDE, ghg_wolf_cmdr, "Wolf Commander") \
GHG_UNIT_CLASS(SIDE, ghg_wolf_crew, "Wolf Crew") \
\
GHG_UNIT_CLASS_APPENDABLE(SIDE, ghg_knfs_driver, "Kingfish Helmsman") \
	engineer = 1; \
	ghg_engineer_level = 1; \
}; \
GHG_UNIT_CLASS(SIDE, ghg_knfs_captain, "Kingfish Captain") \
GHG_UNIT_CLASS(SIDE, ghg_knfs_crew, "Kingfish Crew") \
\
GHG_UNIT_CLASS_APPENDABLE(SIDE, ghg_ravn_pilot, "Raven Pilot") \
	engineer = 1; \
	ghg_engineer_level = 1; \
}; \
GHG_UNIT_CLASS(SIDE, ghg_ravn_crew, "Raven Crew") \
\
GHG_UNIT_CLASS_APPENDABLE(SIDE, ghg_flcn_pilot, "Falcon Pilot") \
	engineer = 1; \
	ghg_engineer_level = 1; \
}; \
GHG_UNIT_CLASS(SIDE, ghg_flcn_crew, "Falcon Crew") \
\
GHG_UNIT_CLASS_APPENDABLE(SIDE, ghg_rptr_pilot, "Raptor Pilot") \
    ACE_GForceCoef = 0.55;\
	engineer = 1; \
	ghg_engineer_level = 1; \
};

class CfgVehicles
{
	GHG_SIDE_CLASS(b)
    GHG_SIDE_CLASS(o)
    GHG_SIDE_CLASS(i)
	
	#include "gearUpPoint.hpp"
    #include "servicePoints.hpp"
};