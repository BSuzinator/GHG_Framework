/*======================================
	Loadout for Medics (usArmySF)
======================================*/
params ["_linkItems", "_weapons", "_uniform", "_vests", "_headgear", "_backpacks", "_goggles"];

[
  [
    _weapons select 0,
    "rhsusf_acc_nt4_black",
    "rhsusf_acc_anpeq15_bk",
    "rhsusf_acc_compm4",
    ["rhs_mag_30Rnd_556x45_Mk318_Stanag",30],
    [],
    ""
  ],
  [],
  [],
  [
    _uniform,
    [
		["ACE_CableTie",2]
	]
  ],
  [
    _vests select 1,
    [
      ["rhs_mag_30Rnd_556x45_Mk318_Stanag",8,30],
      ["rhs_mag_m18_red",1,1]
    ]
  ],
  [
    _backpacks select 0,
    [
		["ACE_elasticBandage",32],
		["ACE_packingBandage",32],
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
  _goggles select 1,
  [],
  _linkItems
]