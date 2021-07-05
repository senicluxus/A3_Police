// Arma 3 Police
class Police_I_Altis_Man_Base_F: Police_I_P_Man_Base_F
{
	faction = Police_IND_Altis_F;
	genericNames = GreekMen;
	identityTypes[] =
	{
		LanguageGRE_F,
		Head_Greek,
        G_HAF_default
	};
};
class Police_I_Altis_PoliceOfficer_Base_F: Police_I_Altis_Man_Base_F
{
    uniformClass = U_C_Uniform_Formal_01_Blue_F;
};
class Police_I_Altis_PoliceOfficer_F: Police_I_Altis_PoliceOfficer_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Police\EditorPreviews_F_Police\Data\CfgVehicles\I_P_PoliceOfficer_F.jpg";
	scope = public;
    scopeCurator = public;
	displayName = $STR_A3_P_CfgVehicles_I_P_PoliceOfficer_F0;
	linkedItems[] =
	{
		V_CarrierRigKBT_01_base_POLICE_F,
		H_beret_blk_POLICE,
		DefaultManPoliceLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_base_POLICE_F,
		H_beret_blk_POLICE,
		DefaultManPoliceLinkedItems
	};
	weapons[] =
	{
		SMG_03C_black,
		hgun_G17_black_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		SMG_03C_black,
		hgun_G17_black_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_4(50Rnd_570x28_SMG_03),
		mag_2(17Rnd_9x21_Mag),
        mag_2(Chemlight_blue)
	};
	respawnMagazines[] =
	{
		mag_4(50Rnd_570x28_SMG_03),
		mag_2(17Rnd_9x21_Mag),
        mag_2(Chemlight_blue)
	};
	role = Rifleman;
};
class Police_I_Altis_PoliceOfficer_Rifle_F: Police_I_Altis_PoliceOfficer_F
{
	displayName = $STR_A3_P_CfgVehicles_I_P_PoliceOfficer_Rifle_F0;
	weapons[] =
	{
		arifle_SPAR_01_blk_F,
		hgun_G17_black_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_SPAR_01_blk_F,
		hgun_G17_black_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_4(30Rnd_556x45_Stanag),
		mag_2(17Rnd_9x21_Mag),
        mag_2(Chemlight_blue)
	};
	respawnMagazines[] =
	{
		mag_4(30Rnd_556x45_Stanag),
		mag_2(17Rnd_9x21_Mag),
        mag_2(Chemlight_blue)
	};
};
class Police_I_Altis_PoliceOfficer_SG_F: Police_I_Altis_PoliceOfficer_F
{
	displayName = $STR_A3_P_CfgVehicles_I_P_PoliceOfficer_SG_F0;
	weapons[] =
	{
		sgun_M4_F,
		hgun_G17_black_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		sgun_M4_F,
		hgun_G17_black_F,
		DefaultManWeapons
	};
	magazines[] =
	{
        mag_3(8Rnd_12Gauge_Pellets),
        mag_3(8Rnd_12Gauge_Slug),
		mag_2(17Rnd_9x21_Mag),
        mag_2(Chemlight_blue)
	};
	respawnMagazines[] =
	{
        mag_3(8Rnd_12Gauge_Pellets),
        mag_3(8Rnd_12Gauge_Slug),
		mag_2(17Rnd_9x21_Mag),
        mag_2(Chemlight_blue)
	};
};