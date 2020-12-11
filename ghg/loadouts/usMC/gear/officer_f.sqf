/*======================================
	Loadout for Platoon Lead (usMC)
======================================*/
params ["_linkItems", "_uniform", "_headgear", "_goggle"];

[
  [
    "rhs_weap_m16a4_carryhandle",
    "",
    "rhsusf_acc_anpeq15",
    "rhsusf_acc_ACOG_RMR",
    ["rhs_mag_30Rnd_556x45_M855_Stanag",30],
    [],
    ""
  ],
  [],
  [],
  [
    _uniform,
    [
      ["ACRE_PRC152", 1]
    ]
  ],
  [
    "rhsusf_spc_squadleader",
    [
      ["rhs_mag_30Rnd_556x45_M855_Stanag",8,30],
      ["rhs_mag_m67",1,1],
      ["rhs_mag_m18_red",1,1],
      ["rhs_mag_m18_purple",1,1],
      ["rhs_mag_m18_yellow",1,1],
      ["Chemlight_red",2,1]
    ]
  ],
  [],
  _headgear select 0,
  "rhsusf_oakley_goggles_clr",
  ["Binocular","","","",[],[],""],
  _linkItems
]