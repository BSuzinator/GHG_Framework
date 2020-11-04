/*======================================
	Loadout for Recon Spotter
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
    ""
  ],
  [],
  [],
  [
    _uniform select 0,
    []
  ],
  [
    _vests select 3,
    [
      [
        "ACE_EntrenchingTool",
        1
      ],
      [
        "ACE_MapTools",
        1
      ],
      [
        "ACE_Kestrel4500",
        1
      ],
      [
        "ACE_RangeCard",
        1
      ],
      [
        "ACE_SpottingScope",
        1
      ],
      [
        "rhs_30Rnd_545x39_7N10_AK",
        6,
        30
      ],
      [
        "rhs_mag_rgo",
        2,
        1
      ]
    ]
  ],
  [
    _backpacks select 2,
    [
      [
        "rhs_5Rnd_338lapua_t5000",
        16,
        5
      ]
    ]
  ],
  _headgear select 1,
  "rhsusf_oakley_goggles_clr",
  [
    "rhsusf_bino_lrf_Vector21",
    "",
    "",
    "",
    [],
    [],
    ""
  ],
  _linkItems
]