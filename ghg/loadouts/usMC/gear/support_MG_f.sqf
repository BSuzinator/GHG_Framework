/*======================================
	Loadout for MMG Gunner (usMC)
======================================*/
params ["_linkItems", "_uniform", "_headgear", "_goggle"];

[
  [
    "rhs_weap_m240b_elcan",
    "",
    "rhsusf_acc_anpeq15_bk",
    "rhsusf_acc_ELCAN",
    ["rhsusf_100Rnd_762x51",100],
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
    "rhsusf_spc_mg",
    [
      ["rhsusf_100Rnd_762x51",3,100],
      ["rhs_mag_m67",1,1]
    ]
  ],
  [
    "rhsusf_assault_eagleaiii_coy",
    [
      ["rhsusf_100Rnd_762x51",3,100]
    ]
  ],
  _headgear select 1,
  "rhsusf_oakley_goggles_clr",
  [],
  _linkItems
]