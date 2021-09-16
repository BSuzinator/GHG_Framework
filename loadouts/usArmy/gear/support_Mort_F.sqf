/*======================================
	Loadout for MTR Gunner (usArmy)
======================================*/
params ["_linkItems", "_weapons", "_uniform", "_vests", "_headgear", "_backpacks", "_goggle"];

[
  [
    _weapons select 0,
    "",
    "rhsusf_acc_anpeq15_bk",
    "rhsusf_acc_compm4",
    ["rhs_mag_30Rnd_556x45_M855A1_Stanag",30],
    [],
    ""
  ],
  [
	"ace_compat_rhs_usf3_m252_carry",
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
		["ACE_microDAGR", 1],
		["ACE_Kestrel4500", 1]
	]
  ],
  [
    _vests select 3,
    [
	  ["itc_land_tablet_fdc", 1],
      ["rhs_mag_30Rnd_556x45_M855A1_Stanag",8,30],
      ["SmokeShell",1,1],
      ["rhs_mag_m67",2,1]
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