/*======================================
	Loadout for Vehicle Crew (russian)
======================================*/
params ["_linkItems", "_weapons", "_uniform", "_vests", "_headgear", "_backpacks", "_goggle"];

[
  [
    "rhs_weap_aks74u",
    "",
    "rhs_acc_perst1ik",
    "rhs_acc_okp7_dovetail",
    ["rhs_30Rnd_545x39_7N10_AK",30],
    [],
    ""
  ],
  [],
  [],
  [
    _uniform select 0,
	[
	  ["ACE_microDAGR",1]
	]
  ],
  [
    _vests select 6,
    [
      ["rhs_30Rnd_545x39_7N10_AK",4,30],
      ["rhs_mag_rdg2_white",1,1],
      ["rhs_mag_rgo",2,1]
    ]
  ],
  [],
  _headgear select 2,
  _goggle,
  ["Binocular","","","",[],[],""],
  _linkItems
]