/*======================================
	Loadout for Vehicle Crew (usMC)
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
  [],
  [],
  [
    _uniform,
	[
	  ["ACE_microDAGR",1]
	]
  ],
  [
    "rhsusf_spc_crewman",
    [
      ["rhs_mag_30Rnd_556x45_M855_Stanag",4,30],
      ["SmokeShell",1,1],
      ["rhs_mag_m67",2,1]
    ]
  ],
  [],
  _headgear select 2,
  _goggle,
  ["rhsusf_bino_m24_ARD","","","",[],[],""],
  _linkItems
]