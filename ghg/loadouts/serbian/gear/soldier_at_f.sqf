/*======================================
	Loadout for MAT Gunner (serbian)
======================================*/
params ["_linkItems", "_uniform", "_vests", "_headgear", "_backpacks"];

[
  [
    "rhs_weap_g36c_grip3",
    "",
    "rhsusf_acc_anpeq15side_bk",
    "rhsusf_acc_eotech_xps3",
    ["rhssaf_30rnd_556x45_EPR_G36",30],
    [],
    "rhsusf_acc_rvg_blk"
  ],
  [
    "rhs_weap_rpg7",
    "",
    "",
    "",
    ["rhs_rpg7_PG7VR_mag",1],
    [],
    ""
  ],
  [],
  [
    _uniform,
    []
  ],
  [
    _vests select 2,
    [
      ["rhssaf_30rnd_556x45_EPR_G36",8,30],
      ["rhs_mag_m67",1,1],
	  ["rhs_mag_an_m8hc",1,1]
    ]
  ],
  [
    _backpacks select 0,
    [
      ["rhs_rpg7_PG7VR_mag",2,1]
    ]
  ],
  _headgear select 8,
  "rhsusf_oakley_goggles_clr",
  [],
  _linkItems
]