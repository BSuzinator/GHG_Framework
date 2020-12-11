/*======================================
	Loadout for Platoon Lead (serbian)
======================================*/
params ["_linkItems", "_uniform", "_vests", "_headgear", "_backpacks"];

[
  [
    "rhs_weap_g36kv",
    "",
    "rhsusf_acc_anpeq15side_bk",
    "rhsusf_acc_ACOG_RMR",
    ["rhssaf_30rnd_556x45_EPR_G36",30],
    [],
    "rhsusf_acc_rvg_blk"
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
    _vests select 2,
    [
      ["rhssaf_30rnd_556x45_EPR_G36",8,30],
      ["rhs_mag_m67",1,1],
      ["rhs_mag_m18_red",1,1],
      ["rhs_mag_m18_purple",1,1],
      ["rhs_mag_m18_yellow",1,1],
      ["Chemlight_red",2,1]
    ]
  ],
  [],
  _headgear select 5,
  "rhsusf_oakley_goggles_clr",
  ["Binocular","","","",[],[],""],
  _linkItems
]