/*======================================
	Loadout for MMG Gunner (usArmySF)
======================================*/
params ["_linkItems", "_weapons", "_uniform", "_vests", "_headgear", "_backpacks", "_goggles"];

[
  [
    "rhs_weap_m240b_elcan",
    "muzzle_snds_h_mg_blk_f",
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
    _uniform,
    [
		["ACE_CableTie",2]
	]
  ],
  [
    _vests select 3,
    [
      ["rhsusf_100Rnd_762x51",3,100],
      ["rhs_mag_m67",1,1]
    ]
  ],
  [
    _backpacks select 0,
    [
      ["rhsusf_100Rnd_762x51",3,100]
    ]
  ],
  _headgear select 1,
  _goggles select 1,
  [],
  _linkItems
]