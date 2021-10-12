/*======================================
	Loadout for Medics (usArmy)
======================================*/
params ["_linkItems", "_weapons", "_uniform", "_vests", "_headgear", "_backpacks", "_goggle"];

[
  [
    _weapons select 0,
    "",
    "rhsusf_acc_anpeq15_bk",
    "rhsusf_acc_compm4",
    ["rhs_mag_30Rnd_556x45_M855A1_Stanag",30],
    [],
    ""
  ],
  [],
  [],
  [
    _uniform,
    []
  ],
  [
    _vests select 1,
    [
      ["rhs_mag_30Rnd_556x45_M855A1_Stanag",8,30],
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