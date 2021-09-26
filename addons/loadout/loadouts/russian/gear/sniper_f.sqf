/*======================================
	Loadout for Recon Sniper (russian)
======================================*/
params ["_linkItems", "_weapons", "_uniform", "_vests", "_headgear", "_backpacks", "_goggle"];

[
  [
    "rhs_weap_t5000",
    "",
    "",
    "rhs_acc_dh520x56",
    ["rhs_5Rnd_338lapua_t5000",5],
    [],
    "rhs_acc_harris_swivel"
  ],
  [],
  [
    "rhs_weap_makarov_pm",
    "",
    "",
    "",
    ["rhs_mag_9x18_8_57N181S",15],
    [],
    ""
  ],
  [
    _uniform select 0,
    []
  ],
  [
    _vests select 3,
    [
      ["rhs_5Rnd_338lapua_t5000",4,5],
      ["rhs_mag_9x18_8_57N181S",2,15],
      ["rhs_mag_rdg2_white",1,1]
    ]
  ],
  [],
  _headgear select 1,
  "rhsusf_oakley_goggles_clr",
  ["rhsusf_bino_lrf_Vector21","","","",[],[],""],
  _linkItems
]