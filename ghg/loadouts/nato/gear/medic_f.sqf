/*======================================
	Loadout for Medics (nato)
======================================*/
params ["_linkItems", "_weapons", "_magazine", "_scopes", "_uniforms", "_vests", "_headgears", "_backpacks", "_goggle"];

[
  [
    _weapons select 0,
    "",
    "rhsusf_acc_anpeq15_bk",
    "optic_Aco",
    [_magazines select 0,30],
    [],
    ""
  ],
  [],
  [],
  [
    _uniforms select 0,
    []
  ],
  [
    _vests select 1,
    [
      ["ACE_fieldDressing",1],
      ["ACE_morphine",1],
      ["ACE_tourniquet",1],
      [_magazines select 0,8,30],
      ["rhs_mag_m18_red",1,1]
    ]
  ],
  [
    _backpacks select 0,
    [
      ["ACE_elasticBandage",24],
      ["ACE_packingBandage",24],
      ["ACE_quikclot",20],
      ["ACE_fieldDressing",12],
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