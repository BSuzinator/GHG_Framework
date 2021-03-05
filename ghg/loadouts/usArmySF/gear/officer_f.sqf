/*======================================
	Loadout for Platoon Lead (usArmySF)
======================================*/
params ["_linkItems", "_weapons", "_uniform", "_vests", "_headgear", "_backpacks", "_goggles"];

[
  [
    _weapons select 0,
    "rhsusf_acc_nt4_black",
    "rhsusf_acc_anpeq15_bk",
    "rhsusf_acc_su230_mrds",
    ["rhs_mag_30Rnd_556x45_Mk318_Stanag",30],
    [],
    ""
  ],
  [],
  [],
  [
    _uniform,
    [
      ["ACRE_PRC152",1],
	  ["ACE_CableTie",2]
    ]
  ],
  [
    _vests select 0,
    [
      ["rhs_mag_30Rnd_556x45_Mk318_Stanag",8,30],
	  ["rhs_mag_m18_red",1,1],
      ["rhs_mag_m18_purple",1,1],
      ["rhs_mag_m18_yellow",1,1],
      ["rhs_mag_m67",1,1],
      ["Chemlight_red",2,1]
    ]
  ],
  [],
  _headgear select 0,
  _goggles select 1,,
  ["Binocular","","","",[],[],""],
  _linkItems
]