/*======================================
	Loadout for Platoon Lead (nato)
======================================*/
params ["_linkItems", "_weapons", "_magazine", "_scopes", "_uniforms", "_vests", "_headgears", "_backpacks", "_goggle"];

[
  [
    _weapons select 0,
    "",
    "rhsusf_acc_anpeq15_bk",
    "rhsusf_acc_ACOG_RMR",
    [_magazines select 0,30],
    [],
    ""
  ],
  [],
  [],
  [
    _uniforms select 0,
    [
      ["ACRE_PRC152",1]
    ]
  ],
  [
    _vests select 0,
    [
      [_magazines select 0,8,30],
	  ["rhs_mag_m18_red",1,1],
      ["rhs_mag_m18_purple",1,1],
      ["rhs_mag_m18_yellow",1,1],
      ["rhs_mag_m67",1,1],
      ["Chemlight_red",2,1]
    ]
  ],
  [],
  _headgear select 0,
  "rhsusf_oakley_goggles_clr",
  ["Binocular","","","",[],[],""],
  _linkItems
]