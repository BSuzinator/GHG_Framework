/*======================================
	Loadout for HeliPilots (nato)
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
    _vests select 7,
    [
      [_magazines select 0,6,30],
      ["rhs_mag_an_m8hc",1,1],
      ["rhs_mag_m18_red",1,1]
    ]
  ],
  [],
  "rhsusf_hgu56p_visor_black",
  "rhsusf_oakley_goggles_clr",
  [],
  _linkItems
]