/*======================================
	Loadout for Assistant MTR (russian)
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
    _uniform select 0,
    []
  ],
  [
    _vests select 3,
    [
      ["rhs_30Rnd_545x39_7N10_AK",8,30],
      ["rhs_mag_rdg2_white",1,1],
      ["rhs_mag_rgo",2,1]
    ]
  ],
  [
    _backpacks select 3,
  [
	["ACE_1Rnd_82mm_Mo_HE",3,1],
	["ACE_1Rnd_82mm_Mo_Smoke",1,1],
	["ACE_1Rnd_82mm_Mo_Illum",1,1]
  ]
  ],
  _headgear select 1,
  "rhsusf_oakley_goggles_clr",
  ["Binocular","","","",[],[],""],
  _linkItems
]