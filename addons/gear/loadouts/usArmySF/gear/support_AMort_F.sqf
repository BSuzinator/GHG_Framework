/*======================================
	Loadout for Assistant MTR (usArmySF)
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
  [
	"ace_csw_carryMortarBaseplate",
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
    [["ACE_CableTie",2]]
  ],
  [
    _vests select 0,
    [
      ["rhs_mag_30Rnd_556x45_Mk318_Stanag",8,30],
      ["SmokeShell",1,1],
      ["rhs_mag_m67",2,1]
    ]
  ],
  [
    _backpacks select 2,
  [
	["ACE_1Rnd_82mm_Mo_HE",3,1],
	["ACE_1Rnd_82mm_Mo_Smoke",1,1],
	["ACE_1Rnd_82mm_Mo_Illum",1,1]
  ]
  ],
  _headgear select 1,
  _goggles select 1,
  ["Binocular","","","",[],[],""],
  _linkItems
]