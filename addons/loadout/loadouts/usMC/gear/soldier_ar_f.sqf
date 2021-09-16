/*======================================
	Loadout for Autorifleman (usMC)
======================================*/
params ["_linkItems", "_uniform", "_headgear", "_goggle"];

[
  [
    "rhs_weap_m27iar",
    "",
    "rhsusf_acc_anpeq15_bk",
    "rhsusf_acc_compm4",
    ["rhs_mag_100Rnd_556x45_M855_cmag",100],
    [],
    "rhsusf_acc_harris_bipod"
  ],
  [],
  [],
  [
    _uniform,
    []
  ],
  [
    "rhsusf_spc_iar",
    [
      ["rhs_mag_100Rnd_556x45_M855_cmag",3,100],
      ["rhs_mag_m67",1,1]
    ]
  ],
  [
    "rhsusf_assault_eagleaiii_coy",
    [
      ["rhs_mag_100Rnd_556x45_M855_cmag",3,100]
    ]
  ],
  _headgear select 1,
  "rhsusf_oakley_goggles_clr",
  [],
  _linkItems
]