/*======================================
	Loadout for HeliCrew
======================================*/
params ["_linkItems", "_weapons", "_uniform", "_vests", "_headgear", "_backpacks", "_goggle"];

[
  [
    "rhs_weap_aks74u",
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
    _uniform_select 1,
    []
  ],
  [
    _vests select 6,
    [
      [
        "rhs_30Rnd_545x39_7N10_AK",
        4,
        30
      ]
    ]
  ],
  [],
  "rhsusf_hgu56p_visor_mask_black",
  "rhsusf_oakley_goggles_clr",
  [],
  _linkItems
]