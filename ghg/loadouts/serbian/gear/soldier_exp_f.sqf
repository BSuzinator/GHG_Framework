/*======================================
	Loadout for Explosive Specialist (serbian)
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
  ["ACE_VMH3",
	"",
	"",
	"",
	[],
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
      ["ACE_Clacker",1],
      ["ACE_M26_Clacker",1],
      ["rhssaf_30rnd_556x45_EPR_G36",8,30],
      ["rhs_mag_m18_red",1,1]
    ]
  ],
  [
    _backpacks select 1,
    [
      ["rhsusf_m112x4_mag",1,1],
      ["rhsusf_m112_mag",3,1],
      ["SatchelCharge_Remote_Mag",1,1],
	  ["ACE_Fortify",1]
    ]
  ],
  _headgear select 9,
  "rhsusf_oakley_goggles_clr",
  [],
  _linkItems
]