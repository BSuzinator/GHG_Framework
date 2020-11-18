/*======================================
	Loadout for Repair Specialist
======================================*/
params ["_linkItems", "_weapons", "_uniform", "_vests", "_headgear", "_backpacks", "_goggle"];

[
  [
    _weapons select 0,
    "",
    "rhs_acc_perst1ik",
    "rhs_acc_okp7_dovetail",
    [
      "rhs_30Rnd_545x39_7N10_AK",
      30
    ],
    [],
    "rhsusf_acc_kac_grip"
  ],
  [],
  [],
  [
    _uniform select 0,
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
        "rhs_30Rnd_545x39_7N10_AK",
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
      ],
	  [
        "ACE_Fortify",
        1
      ]
    ]
  ],
  _headgear select 0,
  "rhsusf_oakley_goggles_clr",
  [],
  _linkItems
]