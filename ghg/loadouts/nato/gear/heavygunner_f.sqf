/*======================================
	Loadout for MMG Gunner (nato)
======================================*/
params ["_linkItems", "_weapons", "_magazine", "_scopes", "_uniforms", "_vests", "_headgears", "_backpacks", "_goggle"];

[
  [
    "rhs_weap_m240b_elcan",
    "",
    "rhsusf_acc_anpeq15_bk",
    "rhsusf_acc_ELCAN",
    [
      "rhsusf_100Rnd_762x51",
      100
    ],
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
    _vests select 4,
    [
      ["rhsusf_100Rnd_762x51",3,100],
      ["rhs_mag_m67",1,1]
    ]
  ],
  [
    _backpacks select 2,
    [
      ["rhsusf_100Rnd_762x51",3,100]
    ]
  ],
  _headgear select 1,
  "rhsusf_oakley_goggles_clr",
  [],
  _linkItems
]