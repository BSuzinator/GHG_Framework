from pathlib import Path

classes = ["plt_lead.hpp","plt_fac.hpp","plt_doctor.hpp","plt_interp.hpp","squad_lead.hpp","squad_medic.hpp","squad_ar.hpp","squad_aar.hpp","squad_at.hpp","squad_at.hpp","squad_mksm.hpp","squad_rifle.hpp","squad_aa.hpp","squad_grenadier.hpp","ews_lead.hpp","ews_comms.hpp","ews_comp.hpp","maa_lead.hpp","maa_gunner.hpp","maa_ammo.hpp","mat_lead.hpp","mat_gunner.hpp","mat_ammo.hpp","mmg_lead.hpp","mmg_gunner.hpp","mmg_ammo.hpp","mtr_lead.hpp","mtr_gunner.hpp","mtr_ammo.hpp","rcn_lead.hpp","rcn_gunner.hpp","rcn_ammo.hpp","logi_lead.hpp","logi_doctor.hpp","logi_repair.hpp","demo_lead.hpp","demo_explosive.hpp","demo_defusal.hpp","demo_saboteur.hpp","lynx_cmdr.hpp","lynx_driver.hpp","lynx_crew.hpp","wolf_cmdr.hpp","wolf_driver.hpp","wolf_crew.hpp","ravn_pilot.hpp","ravn_crew.hpp","flcn_pilot.hpp","flcn_crew.hpp","rptr_pilot.hpp","knfs_captain.hpp","knfs_crew.hpp","knfs_driver.hpp"]

for x in classes:
    fle = Path(x)
    fle.touch(exist_ok=True)
    f = open(fle)
    f.close()