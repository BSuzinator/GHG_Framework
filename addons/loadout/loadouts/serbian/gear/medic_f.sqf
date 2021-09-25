/*======================================
	Loadout for Medics (serbian)
======================================*/
params ["_linkItems", "_uniform", "_vests", "_headgear", "_backpacks"];

[
  [
    "rhs_weap_g36kv",
    "",
    "rhsusf_acc_anpeq15side_bk",
    "rhsusf_acc_eotech_xps3",
    ["rhssaf_30rnd_556x45_EPR_G36",30],
    [],
    "rhsusf_acc_rvg_blk"
  ],
  [],
  [],
  [
    _uniform,
    []
  ],
  [
    _vests select 2,
    [
      ["rhssaf_30rnd_556x45_EPR_G36",8,30],
      ["rhs_mag_m18_red",1,1]
    ]
  ],
  [
     _backpacks select 1,
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
  _headgear select 3,
  "rhsusf_oakley_goggles_clr",
  [],
  _linkItems
]