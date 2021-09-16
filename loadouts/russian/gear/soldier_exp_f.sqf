/*======================================
	Loadout for Explosive Specialist (russian)
======================================*/
params ["_linkItems", "_weapons", "_uniform", "_vests", "_headgear", "_backpacks", "_goggle"];

[
  [
    _weapons select 0,
    "",
    "rhs_acc_perst1ik",
    "rhs_acc_okp7_dovetail",
    ["rhs_30Rnd_545x39_7N10_AK",30],
    [],
    ""
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
    _uniform select 0,
    []
  ],
  [
    _vests select 5,
    [
      ["ACE_DefusalKit",1],
      ["ACE_Clacker",1],
      ["ACE_M26_Clacker",1],
      ["rhs_30Rnd_545x39_7N10_AK",8,30],
      ["rhs_mag_m18_red",1,1]
    ]
  ],
  [
    _backpacks select 2,
    [
      ["rhssaf_tm500_mag",2,1],
      ["rhssaf_tm200_mag",3,1],
	  ["ACE_Fortify",1],
      ["SatchelCharge_Remote_Mag",1,1]
    ]
  ],
  _headgear select 0,
  "rhsusf_oakley_goggles_clr",
  [],
  _linkItems
]