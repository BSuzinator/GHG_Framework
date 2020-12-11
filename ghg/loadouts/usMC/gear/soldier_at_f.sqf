/*======================================
	Loadout for MAT Gunner (usMC)
======================================*/
params ["_linkItems", "_uniform", "_headgear", "_goggle"];

[
  [
    "rhs_weap_m16a4_carryhandle",
    "",
    "rhsusf_acc_anpeq15_bk",
    "rhsusf_acc_compm4",
    ["rhs_mag_30Rnd_556x45_M855_Stanag",30],
    [],
    ""
  ],
  [
    "rhs_weap_fgm148",
    "",
    "",
    "",
    ["rhs_fgm148_magazine_AT",1],
    [],
    ""
  ],
  [],
  [
    _uniform,
    []
  ],
  [
    "rhsusf_spc_rifleman",
    [
      ["rhs_mag_30Rnd_556x45_M855_Stanag",8,30],
      ["rhs_mag_m67",1,1]
    ]
  ],
  [
    "B_Carryall_cbr",
    [
      ["rhs_fgm148_magazine_AT",1,1]
    ]
  ],
  _headgear select 1,
  "rhsusf_oakley_goggles_clr",
  [],
  _linkItems
]