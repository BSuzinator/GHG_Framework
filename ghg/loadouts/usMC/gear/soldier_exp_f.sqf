/*======================================
	Loadout for Explosive Specialist (usMC)
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
  [
    _uniform,
    []
  ],
  [
    "rhsusf_spc_patchless_radio",
    [
      ["ACE_Clacker",1],
      ["ACE_M26_Clacker",1],
      ["rhs_mag_30Rnd_556x45_M855_Stanag",8,30],
      ["rhs_mag_m18_red",1,1]
    ]
  ],
  [
    "rhsusf_assault_eagleaiii_coy",
    [
      ["MineDetector",1],
      ["rhsusf_m112x4_mag",1,1],
      ["rhsusf_m112_mag",3,1],
      ["SatchelCharge_Remote_Mag",1,1],
	  ["ACE_Fortify",1]
    ]
  ],
  _headgear select 0,
  "rhsusf_oakley_goggles_clr",
  [],
  _linkItems
]