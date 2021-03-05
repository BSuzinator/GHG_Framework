/*======================================
	Loadout for MMG Ammo Bearer (nato)
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
      [_magazines select 0,8,30],
	  ["rhs_mag_m67",2,1]
    ]
  ],
  [
    _backpacks select 2,
    [
      ["ACE_SpareBarrel",1,1],
      ["rhsusf_100Rnd_762x51",5,100]
    ]
  ],
  _headgear select 1,
  "rhsusf_oakley_goggles_clr",
  ["Binocular","","","",[],[],""],
  _linkItems
]