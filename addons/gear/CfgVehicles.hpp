#define GHG_UNIT_CLASS(SIDE, CLASSNAME, UNITNAME) class SIDE##_##CLASSNAME : SIDE##_Survivor_F { \
    displayName = UNITNAME ; \
    faction = QUOTE(SIDE##_ghg); \
};

#define GHG_SIDE_CLASS(SIDE) GHG_UNIT_CLASS(SIDE, ghg_plt_lead, "Platoon Lead") \
GHG_UNIT_CLASS(SIDE, ghg_plt_fac, "Platoon Forward Air Control") \
GHG_UNIT_CLASS(SIDE, ghg_plt_doctor, "Platoon Doctor") \
\
GHG_UNIT_CLASS(SIDE, ghg_squad_lead, "Squad Lead") \
GHG_UNIT_CLASS(SIDE, ghg_squad_medic, "Squad Medic") \
GHG_UNIT_CLASS(SIDE, ghg_squad_ar, "Squad Automatic Rfleman") \
GHG_UNIT_CLASS(SIDE, ghg_squad_aar, "Squad Assitant Automatic Rfleman") \
GHG_UNIT_CLASS(SIDE, ghg_squad_at, "Squad Anti-Tank") \
GHG_UNIT_CLASS(SIDE, ghg_squad_rifle, "Squad Rifleman") \
GHG_UNIT_CLASS(SIDE, ghg_squad_gl, "Squad Grenadier") \
GHG_UNIT_CLASS(SIDE, ghg_squad_mksm, "Squad Marksman") \
GHG_UNIT_CLASS(SIDE, ghg_squad_aa, "Squad Anti-Air") \
\
GHG_UNIT_CLASS(SIDE, ghg_ews_lead, "Electronic Warfare Team Lead") \
GHG_UNIT_CLASS(SIDE, ghg_ews_comms, "Electronic Warfare Communications Specialist") \
GHG_UNIT_CLASS(SIDE, ghg_ews_comp, "Electronic Warfare Computer Specialist") \
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
GHG_UNIT_CLASS(SIDE, ghg_logi_lead, "Logistics Team Lead") \
GHG_UNIT_CLASS(SIDE, ghg_logi_doctor, "Logistics Doctor") \
GHG_UNIT_CLASS(SIDE, ghg_logi_explosive, "Logistics Demolitions Specialist") \
GHG_UNIT_CLASS(SIDE, ghg_logi_repair, "Logistics Repair Specialist") \
GHG_UNIT_CLASS(SIDE, ghg_logi_defusal, "Logistics EOD Tech") \
GHG_UNIT_CLASS(SIDE, ghg_logi_saboteur, "Logistics Saboteur") \
\
GHG_UNIT_CLASS(SIDE, ghg_wolf_cmdr, "Wolf Commander") \
GHG_UNIT_CLASS(SIDE, ghg_wolf_crew, "Wolf Crew") \
\
GHG_UNIT_CLASS(SIDE, ghg_knfs_cmdr, "Kingfish Captain") \
GHG_UNIT_CLASS(SIDE, ghg_knfs_crew, "Kingfish Crew") \
\
GHG_UNIT_CLASS(SIDE, ghg_phtm_pilot, "Phantom Pilot") \
GHG_UNIT_CLASS(SIDE, ghg_phtm_crew, "Phantom Crew") \
\
GHG_UNIT_CLASS(SIDE, ghg_rptr_pilot, "Raptor Pilot")

class CfgVehicles
{
    class B_Survivor_F;
    class O_Survivor_F;
    class I_Survivor_F;
    
    GHG_SIDE_CLASS(b)
    GHG_SIDE_CLASS(o)
    GHG_SIDE_CLASS(i)
};