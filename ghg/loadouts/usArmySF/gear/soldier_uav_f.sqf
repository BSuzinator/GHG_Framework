/*======================================
	Loadout for FAC (usArmySF)
======================================*/
params ["_linkItems", "_weapons", "_uniform", "_vests", "_headgear", "_backpacks", "_goggles"];

[
  [
    _weapons select 1,
    "rhsusf_acc_nt4_black",
    "rhsusf_acc_anpeq15_bk",
    "rhsusf_acc_ACOG_RMR",
    ["rhs_mag_30Rnd_556x45_Mk318_Stanag",30],
    ["rhs_mag_m713_Red",1],""],
  [],
  [],
  [
    _uniform,
    [
		["ACE_CableTie",2]
	]
  ],
  [
    _vests select 2,
    [
      ["rhs_mag_30Rnd_556x45_Mk318_Stanag",8,30],
      ["rhs_mag_m715_Green",1,1],
	  ["rhs_mag_m661_green",1,1],
      ["rhs_mag_m18_red",1,1],
      ["rhs_mag_m18_green",1,1],
      ["rhs_mag_m18_yellow",1,1],
	  ["rhs_mag_m18_purple",1,1],
      ["Chemlight_green",1,1]
    ]
  ],
  [
    _backpacks select 1,
    [
      ["ACRE_PRC117F",1],
      ["rhs_mag_m662_red",1,1],
      ["rhs_mag_m661_green",1,1],
      ["rhs_mag_m713_Red",2,1],
      ["rhs_mag_m715_Green",2,1],
      ["rhs_mag_m714_White",1,1
      ]
    ]
  ],
  _headgear select 0,
  _goggles select 1,,
  ["Laserdesignator","","","",["Laserbatteries",1],[],""],
  _linkItems
]