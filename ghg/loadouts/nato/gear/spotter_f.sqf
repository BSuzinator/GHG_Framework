/*======================================
	Loadout for Recon Spotter (nato)
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
      ["ACE_EntrenchingTool",1],
      ["ACE_MapTools",1],
      ["ACE_Kestrel4500",1],
      ["ACE_RangeCard",1],
      ["ACE_SpottingScope",1],
      [_magazines select 0,6,30],
      ["rhs_mag_m67",2,1]
    ]
  ],
  [
    _backpacks select 2,
    [
      [_magazines select 2,5,10]
    ]
  ],
  _headgear select 1,
  "rhsusf_oakley_goggles_clr",
  ["rhsusf_bino_lrf_Vector21","","","",[],[],""],
  _linkItems
]