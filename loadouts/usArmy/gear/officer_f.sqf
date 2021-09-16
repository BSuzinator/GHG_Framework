/*======================================
	Loadout for Platoon Lead (usArmy)
======================================*/
params ["_linkItems", "_weapons", "_uniform", "_vests", "_headgear", "_backpacks", "_goggle"];

[
  [
    _weapons select 0,
    "",
    "rhsusf_acc_anpeq15_bk",
    "rhsusf_acc_ACOG_RMR",
    ["rhs_mag_30Rnd_556x45_M855A1_Stanag",30],
    [],
    ""
  ],
  [],
  [],
  [
    _uniform,
    [
      ["ACRE_PRC152",1]
    ]
  ],
  [
    _vests select 0,
    [
      ["rhs_mag_30Rnd_556x45_M855A1_Stanag",8,30],
	  ["rhs_mag_m18_red",1,1],
      ["rhs_mag_m18_purple",1,1],
      ["rhs_mag_m18_yellow",1,1],
      ["rhs_mag_m67",1,1],
      ["Chemlight_red",2,1]
    ]
  ],
  [],
  _headgear select 0,
  "rhsusf_oakley_goggles_clr",
  ["Binocular","","","",[],[],""],
  _linkItems
]