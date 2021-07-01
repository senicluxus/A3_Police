// Arma 3 Police
class Police_I_Altis_Man_Base_F: Police_I_Livonia_Man_Base_F
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
    uniformClass = Police_U_I_P_PoliceUniform_F;
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
		V_TacVest_blk_POLICE,
		H_Cap_police,
		DefaultManPoliceLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_TacVest_blk_POLICE,
		H_Cap_police,
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
class Police_I_Altis_PoliceOfficer_Rifle_F: Police_I_Altis_PoliceOfficer_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Police\EditorPreviews_F_Police\Data\CfgVehicles\I_P_PoliceOfficer_Rifle_F.jpg";
	scope = public;
    scopeCurator = public;
	displayName = $STR_A3_P_CfgVehicles_I_P_PoliceOfficer_Rifle_F0;
	linkedItems[] =
	{
		V_TacVest_blk_POLICE,
		H_Beret_blk_POLICE,
		DefaultManPoliceLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_TacVest_blk_POLICE,
		H_Beret_blk_POLICE,
		DefaultManPoliceLinkedItems
	};
	weapons[] =
	{
		arifle_G36C_F,
		hgun_G17_black_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_G36C_F,
		hgun_G17_black_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_4(30Rnd_65x39_caseless_msbs_mag),
		mag_2(17Rnd_9x21_Mag),
        mag_2(Chemlight_blue)
	};
	respawnMagazines[] =
	{
		mag_4(30Rnd_65x39_caseless_msbs_mag),
		mag_2(17Rnd_9x21_Mag),
        mag_2(Chemlight_blue)
	};
	cost = 100000;
	role = Rifleman;
};
class Police_I_Altis_PoliceOfficer_SG_F: Police_I_Altis_PoliceOfficer_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Police\EditorPreviews_F_Police\Data\CfgVehicles\I_P_PoliceOfficer_SG_F.jpg";
	scope = public;
    scopeCurator = public;
	displayName = $STR_A3_P_CfgVehicles_I_P_PoliceOfficer_SG_F0;
	linkedItems[] =
	{
		V_TacVest_blk_POLICE,
		H_Cap_police,
		DefaultManPoliceLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_TacVest_blk_POLICE,
		H_Cap_police,
		DefaultManPoliceLinkedItems
	};
	weapons[] =
	{
		sgun_Mp153_classic_F,
		hgun_G17_black_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		sgun_Mp153_classic_F,
		hgun_G17_black_F,
		DefaultManWeapons
	};
	magazines[] =
	{
        mag_3(4Rnd_12Gauge_Pellets),
        mag_3(4Rnd_12Gauge_Slug),
		mag_2(17Rnd_9x21_Mag),
        mag_2(Chemlight_blue)
	};
	respawnMagazines[] =
	{
        mag_3(4Rnd_12Gauge_Pellets),
        mag_3(4Rnd_12Gauge_Slug),
		mag_2(17Rnd_9x21_Mag),
        mag_2(Chemlight_blue)
	};
    cost = 130000;
	role = Rifleman;
    threat[] = {1,0.3,0.1};
};