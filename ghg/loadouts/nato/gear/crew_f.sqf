/*======================================
	Loadout for Vehicle Crew (nato)
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
    [
      ["ACE_microDAGR",1]
    ]
  ],
  [
    _vests select 6,
    [
      [_magazines select 0,2,30]
    ]
  ],
  [],
  _headgear select 2,
  _goggle,
  ["rhsusf_bino_m24_ARD","","","",[],[],""],
  _linkItems
]