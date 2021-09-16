/*======================================
	Loadout for Repair Specialist (serbian)
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
  [],
  [],
  [
    _uniform,
    []
  ],
  [
  _vests select 2,
    [
      ["ACE_microDAGR",1],
      ["rhssaf_30rnd_556x45_EPR_G36",8,30],
      ["rhs_mag_m18_red",1,1]
    ]
  ],
  [
    _backpacks select 0,
    [
      ["ToolKit",1],
	  ["ACE_Fortify",1]
    ]
  ],
  _headgear select 11,
  "rhsusf_oakley_goggles_clr",
  [],
  _linkItems
]