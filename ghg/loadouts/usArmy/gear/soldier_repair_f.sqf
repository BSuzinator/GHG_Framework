/*======================================
	Loadout for Repair Specialist
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
    "rhsusf_acc_kac_grip"
  ],
  [],
  [],
  [
    _uniform,
    []
  ],
  [
    _vests select 5,
    [
      [
        "ACE_microDAGR",
        1
      ],
      [
        "rhs_mag_30Rnd_556x45_M855A1_Stanag",
        8,
        30
      ],
      [
        "rhs_mag_m18_red",
        1,
        1
      ]
    ]
  ],
  [
    _backpacks select 2,
    [
      [
        "ToolKit",
        1
      ]
    ]
  ],
  _headgear select 0,
  "rhsusf_oakley_goggles_clr",
  [],
  _linkItems
]