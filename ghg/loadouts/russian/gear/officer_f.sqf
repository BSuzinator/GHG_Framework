/*======================================
	Loadout for Platoon Lead
======================================*/
params ["_linkItems", "_weapons", "_uniform", "_vests", "_headgear", "_backpacks", "_goggle"];

[
  [
    _weapons select 0,
    "",
    "rhs_acc_perst1ik",
    "rhs_acc_1p29",
    [
      "rhs_30Rnd_545x39_7N10_AK",
      30
    ],
    [],
    ""
  ],
  [],
  [],
  [
    _uniform select 0,
    [
      [
        "ACRE_PRC152",
        1
      ]
    ]
  ],
  [
    _vests select 0,
    [
      [
        "rhs_30Rnd_545x39_7N10_AK",
        8,
        30
      ],
	  [
        "rhs_mag_m18_red",
        1,
        1
      ],
      [
        "rhs_mag_m18_purple",
        1,
        1
      ],
      [
        "rhs_mag_m18_yellow",
        1,
        1
      ],
      [
        "rhs_mag_rgo",
        1,
        1
      ],
      [
        "Chemlight_red",
        2,
        1
      ]
    ]
  ],
  [],
  _headgear select 0,
  "rhsusf_oakley_goggles_clr",
  [
    "Binocular",
    "",
    "",
    "",
    [],
    [],
    ""
  ],
  _linkItems
]