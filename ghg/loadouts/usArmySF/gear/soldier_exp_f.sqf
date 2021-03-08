/*======================================
	Loadout for Explosive Specialist (usArmySF)
======================================*/
params ["_linkItems", "_weapons", "_uniform", "_vests", "_headgear", "_backpacks", "_goggles"];

[
  [
    _weapons select 0,
    "rhsusf_acc_nt4_black",
    "rhsusf_acc_anpeq15_bk",
    "rhsusf_acc_compm4",
    ["rhs_mag_30Rnd_556x45_Mk318_Stanag",30],
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
    _uniform,
    [
		["ACE_CableTie",2]
	]
  ],
  [
    _vests select 1,
    [
      ["ACE_DefusalKit",1],
      ["ACE_Clacker",1],
      ["ACE_M26_Clacker",1],
      ["rhs_mag_30Rnd_556x45_Mk318_Stanag",8,30],
      ["rhs_mag_m18_red",1,1]
    ]
  ],
  [
    _backpacks select 0,
    [
      ["rhsusf_m112x4_mag",1,1],
      ["rhsusf_m112_mag",3,1],
      ["SatchelCharge_Remote_Mag",1,1],
	  ["ACE_Fortify",1]
    ]
  ],
  _headgear select 0,
  _goggles select 1,
  [],
  _linkItems
]