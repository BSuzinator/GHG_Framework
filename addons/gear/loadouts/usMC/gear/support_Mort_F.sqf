/*======================================
	Loadout for MTR Gunner (usMC)
======================================*/
params ["_linkItems", "_uniform", "_headgear", "_goggle"];

[
  [
     "rhs_weap_m16a4_carryhandle",
    "",
    "rhsusf_acc_anpeq15_bk",
    "rhsusf_acc_compm4",
    ["rhs_mag_30Rnd_556x45_M855_Stanag",30],
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
		["ACE_Kestrel4500", 1],
		["ACE_CableTie",2]
	]
  ],
  [
    "rhsusf_spc_rifleman",
    [
	  ["itc_land_tablet_fdc", 1],
      ["rhs_mag_30Rnd_556x45_M855_Stanag",8,30],
      ["SmokeShell",1,1],
      ["rhs_mag_m67",2,1]
    ]
  ],
  [
  "B_Carryall_cbr",
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