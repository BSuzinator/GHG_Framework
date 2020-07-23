/*======================================
	Loadout for Autorifleman
======================================*/
params ["_linkItems", "_weapons", "_uniform", "_vests", "_headgear", "_backpacks", "_goggle"];

[
  [
    "rhs_weap_m249_pip",
    "",
    "rhsusf_acc_anpeq15_bk",
    "rhsusf_acc_compm4",
    [
      "rhsusf_200Rnd_556x45_soft_pouch",
      200
    ],
    [],
    "rhsusf_acc_saw_bipod"
  ],
  [],
  [],
  [
    _uniform,
    []
  ],
  [
    _vests select 4,
    [
      [
        "rhsusf_200Rnd_556x45_soft_pouch",
        2,
        200
      ],
      [
        "rhs_mag_m67",
        1,
        1
      ]
    ]
  ],
  [
    _backpacks select 2,
    [
      [
        "rhsusf_200Rnd_556x45_soft_pouch",
        4,
        200
      ]
    ]
  ],
  _headgear select 1,
  "rhsusf_oakley_goggles_clr",
  [],
  _linkItems
]