/*======================================
	Loadout for MTR Gunner (russian)
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
	"ace_compat_rhs_afrf3_2b14_carry",
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
    [
		["ACE_microDAGR", 1],
		["ACE_Kestrel4500", 1]
	]
  ],
  [
    _vests select 3,
    [
	  ["itc_land_tablet_fdc", 1],
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
  [],
  _linkItems
]