/*======================================
	Loadout for Assistant Autorifleman (nato)
======================================*/
params ["_linkItems", "_weapons", "_magazine", "_scopes", "_uniforms", "_vests", "_headgears", "_backpacks", "_goggle"];

[
  [
    _weapons select 0,
    "",
    "rhsusf_acc_anpeq15_bk",
    "optic_Aco",
    [_magazines select 0,30],
    [],
    ""
  ],
  [],
  [],
  [
    _uniforms select 0,
    []
  ],
  [
    _vests select 3,
    [
      [_magazines select 0,6,30],
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