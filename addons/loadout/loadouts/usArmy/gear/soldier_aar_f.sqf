/*======================================
	Loadout for Assistant Autorifleman (usArmy)
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
  [],
  [],
  [
    _uniform,
    []
  ],
  [
    _vests select 3,
    [
      ["rhs_mag_30Rnd_556x45_M855A1_Stanag",6,30],
      ["SmokeShell",1,1],
      ["rhs_mag_m67",2,1]
    ]
  ],
  [
    _backpacks select 2,
    [
      ["ACE_SpareBarrel",1,1],
      ["rhsusf_200Rnd_556x45_soft_pouch",3,200]
    ]
  ],
  _headgear select 1,
  "rhsusf_oakley_goggles_clr",
  ["Binocular","","","",[],[],""],
  _linkItems
]