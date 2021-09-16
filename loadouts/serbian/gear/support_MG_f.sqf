/*======================================
	Loadout for MMG Gunner (serbian)
======================================*/
params ["_linkItems", "_uniform", "_vests", "_headgear", "_backpacks"];

[
  [
    "rhs_weap_m240G",
    "",
    "rhsusf_acc_anpeq15side_bk",
    "rhsusf_acc_ELCAN",
    ["rhsusf_100Rnd_762x51",100],
    [],
    "rhsusf_acc_rvg_blk"
  ],
  [],
  [],
  [
    _uniform,
    []
  ],
  [
    _vests select 2,
    [
      ["rhsusf_100Rnd_762x51",3,100],
      ["rhs_mag_m67",1,1]
    ]
  ],
  [
    _backpacks select 1,
    [
      ["rhsusf_100Rnd_762x51",3,100]
    ]
  ],
  _headgear select 1,
  "rhsusf_oakley_goggles_clr",
  [],
  _linkItems
]