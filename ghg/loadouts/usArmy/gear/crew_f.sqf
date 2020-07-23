/*======================================
	Loadout for Vehicle Crew
======================================*/
params ["_linkItems", "_weapons", "_uniform", "_vests", "_headgear", "_backpacks", "_goggle"];

[
  [
    _weapons select 0,
    "",
    "rhsusf_acc_anpeq15_bk",
    "rhsusf_acc_compm4",
    [
      "rhs_mag_30Rnd_556x45_M855A1_Stanag",
      30
    ],
    [],
    ""
  ],
  [],
  [],
  [
    _uniform,
    [
      [
        "ACE_microDAGR",
        1
      ]
    ]
  ],
  [
    _vests select 6,
    [
      [
        "rhs_mag_30Rnd_556x45_M855A1_Stanag",
        2,
        30
      ]
    ]
  ],
  [],
  _headgear select 2,
  _goggle,
  [
    "rhsusf_bino_m24_ARD",
    "",
    "",
    "",
    [],
    [],
    ""
  ],
  _linkItems
]