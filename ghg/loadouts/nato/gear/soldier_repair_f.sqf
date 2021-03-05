/*======================================
	Loadout for Repair Specialist (nato)
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
    "rhsusf_acc_kac_grip"
  ],
  [],
  [],
  [
    _uniforms select 0,
    []
  ],
  [
    _vests select 5,
    [
      ["ACE_microDAGR",1],
      [_magazines select 0,8,30],
      ["rhs_mag_m18_red",1,1]
    ]
  ],
  [
    _backpacks select 2,
    [
      ["ToolKit",1],
	  ["ACE_Fortify",1]
    ]
  ],
  _headgear select 0,
  "rhsusf_oakley_goggles_clr",
  [],
  _linkItems
]