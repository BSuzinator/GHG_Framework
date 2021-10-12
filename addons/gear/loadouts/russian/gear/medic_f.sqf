/*======================================
	Loadout for Medics (russian)
======================================*/
params ["_linkItems", "_weapons", "_uniform", "_vests", "_headgear", "_backpacks", "_goggle"];

[
  [
    _weapons select 0,
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
    []
  ],
  [
    _vests select 1,
    [
      ["rhs_30Rnd_545x39_7N10_AK",8,30],
      ["rhs_mag_m18_red",1,1]
    ]
  ],
  [
    _backpacks select 0,
    [
		["ACE_elasticBandage",32],
		["ACE_packingBandage",32],
		["ACE_tourniquet",8],
		["ACE_bloodIV_250",8],
		["ACE_bloodIV_500",4],
		["ACE_bloodIV",4],
		["ACE_surgicalKit",1],
		["ACE_personalAidKit",2],
		["ACE_splint",10],
		["ACE_morphine",12],
		["ACE_epinephrine",12],
		["ACE_EarPlugs",1]
    ]
  ],
  _headgear select 1,
  "rhsusf_oakley_goggles_clr",
  [],
  _linkItems
]