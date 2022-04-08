/*======================================
	Loadout for Repair Specialist (usMC)
======================================*/
params ["_linkItems", "_uniform", "_headgear", "_goggle"];

[
  [
    "rhs_weap_m16a4_carryhandle_grip2",
    "",
    "rhsusf_acc_anpeq15",
    "rhsusf_acc_compm4",
    ["rhs_mag_30Rnd_556x45_M855_Stanag",30],
    [],
    "rhsusf_acc_kac_grip"
  ],
  [],
  [],
  [
    _uniform,
    []
  ],
  [
  "rhsusf_spc_patchless_radio",
    [
      ["ACE_microDAGR",1],
      ["rhs_mag_30Rnd_556x45_M855_Stanag",8,30],
      ["rhs_mag_m18_red",1,1]
    ]
  ],
  [
    "rhsusf_assault_eagleaiii_coy",
    [
      ["ToolKit",1],
	  ["ACE_Fortify",1]
    ]
  ],
  _headgear select 0,
  "rhsusf_oakley_goggles_clr",
  [],
  _linkItems
]