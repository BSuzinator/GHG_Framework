/*======================================
	Loadout for Assistant MAT (usMC)
======================================*/
params ["_linkItems", "_uniform", "_headgear", "_goggle"];

[
  [
    "rhs_weap_m16a4_carryhandle",
    "",
    "rhsusf_acc_anpeq15",
    "rhsusf_acc_compm4",
    ["rhs_mag_30Rnd_556x45_M855_Stanag",30],
    [],
    ""
  ],
  [],
  [],
  [
    _uniform,
    []
  ],
  [
    "rhsusf_spc_rifleman",
    [
      ["rhs_mag_30Rnd_556x45_M855_Stanag",8,30],
      ["SmokeShell",1,1],
      ["rhs_mag_m67",2,1]
    ]
  ],
  [
    "B_Carryall_cbr",
    [
      ["rhs_mag_smaw_HEAA",2,1]
    ]
  ],
  _headgear select 1,
  "rhsusf_oakley_goggles_clr",
  ["Binocular","","","",[],[],""],
  _linkItems
]