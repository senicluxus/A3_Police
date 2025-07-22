// Arma 3
// Arma 3 Police
class O_A_soldier_F;
class Police_Argana_P_Man_Base_F: O_A_soldier_F
{
	scope = private;
    scopeCurator = private;
    side = TGuerrila;
	faction = Police_IND_Argana_F;
};
class Police_Argana_P_PoliceOfficer_Base_F: Police_Argana_P_Man_Base_F
{
    uniformClass = Police_U_I_A_Uniform_01_F;
};
class Police_Argana_P_PoliceOfficer_F: Police_Argana_P_PoliceOfficer_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Police\EditorPreviews_F_Police\Data\CfgVehicles\Argana_P_PoliceOfficer_F.jpg";
	scope = public;
    scopeCurator = public;
	displayName = $STR_A3_P_CfgVehicles_I_P_PoliceOfficer_F0;
	linkedItems[] =
	{
		Tacvest_Argana_F,
		Aegis_H_MilCap_tachs_tan_F,
		DefaultManPoliceLinkedItems
	};
	respawnLinkedItems[] =
	{
		Tacvest_Argana_F,
		Aegis_H_MilCap_tachs_tan_F,
		DefaultManPoliceLinkedItems
	};
	weapons[] =
	{
		Aegis_SMG_Gepard_blk_F,
		hgun_Pistol_01_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		Aegis_SMG_Gepard_blk_F,
		hgun_Pistol_01_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_4(Aegis_40Rnd_9x21_Gepard_Mag_F),
		mag_2(10Rnd_9x21_Mag),
        mag_2(Chemlight_blue)
	};
	respawnMagazines[] =
	{
		mag_4(Aegis_40Rnd_9x21_Gepard_Mag_F),
		mag_2(10Rnd_9x21_Mag),
        mag_2(Chemlight_blue)
	};
	role = Rifleman;
};
class Police_Argana_P_PoliceOfficer_Galat_F: Police_Argana_P_PoliceOfficer_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Police\EditorPreviews_F_Police\Data\CfgVehicles\Argana_P_PoliceOfficer_Rifle_F.jpg";
	scope = public;
    scopeCurator = public;
	displayName = $STR_A3_P_CfgVehicles_I_P_PoliceOfficer_Galat_F0;
	uniformClass = Police_U_I_A_Uniform_02_F;
	linkedItems[] =
	{
		Tacvest_Argana_F,
		Aegis_H_MilCap_tachs_tan_F,
		DefaultManPoliceLinkedItems
	};
	respawnLinkedItems[] =
	{
		Tacvest_Argana_F,
		Aegis_H_MilCap_tachs_tan_F,
		DefaultManPoliceLinkedItems
	};
	weapons[] =
	{
		arifle_Galat_lxWS,
		hgun_Pistol_01_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_Galat_lxWS,
		hgun_Pistol_01_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_4(30Rnd_762x39_Mag_F),
		mag_2(10Rnd_9x21_Mag),
        mag_2(Chemlight_blue)
	};
	respawnMagazines[] =
	{
		mag_4(30Rnd_762x39_Mag_F),
		mag_2(10Rnd_9x21_Mag),
        mag_2(Chemlight_blue)
	};
	cost = 100000;
	role = Rifleman;
};
class Police_Argana_P_PoliceOfficer_AKM_F: Police_Argana_P_PoliceOfficer_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Police\EditorPreviews_F_Police\Data\CfgVehicles\Argana_P_PoliceOfficer_Rifle_F.jpg";
	scope = public;
    scopeCurator = public;
	displayName = $STR_A3_P_CfgVehicles_I_P_PoliceOfficer_AKM_F0;
	uniformClass = Police_U_I_A_Uniform_02_F;
	linkedItems[] =
	{
		Tacvest_Argana_F,
		Aegis_H_MilCap_tachs_tan_F,
		DefaultManPoliceLinkedItems
	};
	respawnLinkedItems[] =
	{
		Tacvest_Argana_F,
		Aegis_H_MilCap_tachs_tan_F,
		DefaultManPoliceLinkedItems
	};
	weapons[] =
	{
		arifle_AKM_F,
		hgun_Pistol_01_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AKM_F,
		hgun_Pistol_01_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_4(30Rnd_762x39_Mag_F),
		mag_2(10Rnd_9x21_Mag),
        mag_2(Chemlight_blue)
	};
	respawnMagazines[] =
	{
		mag_4(30Rnd_762x39_Mag_F),
		mag_2(10Rnd_9x21_Mag),
        mag_2(Chemlight_blue)
	};
	cost = 100000;
	role = Rifleman;
};
class Police_Argana_P_PoliceOfficer_SG_F: Police_Argana_P_PoliceOfficer_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Police\EditorPreviews_F_Police\Data\CfgVehicles\Argana_P_PoliceOfficer_SG_F.jpg";
	scope = public;
    scopeCurator = public;
	displayName = $STR_A3_P_CfgVehicles_I_P_PoliceOfficer_SG_F0;
	uniformClass = Police_U_I_A_Uniform_02_F;
	linkedItems[] =
	{
		Tacvest_Argana_F,
		Aegis_H_MilCap_tachs_tan_F,
		DefaultManPoliceLinkedItems
	};
	respawnLinkedItems[] =
	{
		Tacvest_Argana_F,
		Aegis_H_MilCap_tachs_tan_F,
		DefaultManPoliceLinkedItems
	};
	weapons[] =
	{
		sgun_Mp153_classic_F,
		hgun_Pistol_01_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		sgun_Mp153_classic_F,
		hgun_Pistol_01_F,
		DefaultManWeapons
	};
	magazines[] =
	{
        mag_3(4Rnd_12Gauge_Pellets),
        mag_3(4Rnd_12Gauge_Slug),
		mag_2(10Rnd_9x21_Mag),
        mag_2(Chemlight_blue)
	};
	respawnMagazines[] =
	{
        mag_3(4Rnd_12Gauge_Pellets),
        mag_3(4Rnd_12Gauge_Slug),
		mag_2(10Rnd_9x21_Mag),
        mag_2(Chemlight_blue)
	};
    cost = 130000;
	role = Rifleman;
    threat[] = {1,0.3,0.1};
};
class Police_Argana_P_TacPoliceOfficer_Base_F: Police_Argana_P_PoliceOfficer_Base_F
{
    uniformClass = Police_U_I_A_Uniform_01_F;
	vehicleClass = MenRecon;
	editorSubcategory = EdSubcat_Personnel_SpecialForces;
    icon = iconManRecon;
};
class Police_Argana_P_TacPoliceOfficer_F: Police_Argana_P_TacPoliceOfficer_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Police\EditorPreviews_F_Police\Data\CfgVehicles\Argana_P_TacPoliceOfficer_F.jpg";
	scope = public;
    scopeCurator = public;
	displayName = $STR_A3_P_CfgVehicles_I_P_TacPoliceOfficer_F0;
	uniformClass = Police_U_I_A_Uniform_02_F;
	linkedItems[] =
	{
		Tacvest_Argana_F,
		H_HelmetLuchnik_headset_khk_F,
        G_Balaclava_light_G_blk_F,
		DefaultManPoliceLinkedItems
	};
	respawnLinkedItems[] =
	{
		Tacvest_Argana_F,
		H_HelmetLuchnik_headset_khk_F,
        G_Balaclava_light_G_blk_F,
		DefaultManPoliceLinkedItems
	};
	weapons[] =
	{
		Aegis_arifle_AKM74_F,
		hgun_Pistol_01_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		Aegis_arifle_AKM74_F,
		hgun_Pistol_01_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_545x39_Black_Mag_Yellow_F),
		mag_2(10Rnd_9x21_Mag),
        mag_2(Chemlight_blue)
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_545x39_Black_Mag_Yellow_F),
		mag_2(10Rnd_9x21_Mag),
        mag_2(Chemlight_blue)
	};
	role = Rifleman;
};
class Police_Argana_P_TacPoliceOfficer_Sniper_F: Police_Argana_P_TacPoliceOfficer_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Police\EditorPreviews_F_Police\Data\CfgVehicles\Argana_P_TacPoliceOfficer_Sniper_F.jpg";
	scope = public;
    scopeCurator = public;
	displayName = $STR_B_Sniper_F0;
	linkedItems[] =
	{
		Tacvest_Argana_F,
		H_HelmetLuchnik_headset_khk_F,
        G_Balaclava_light_G_blk_F,
		DefaultManPoliceLinkedItems
	};
	respawnLinkedItems[] =
	{
		Tacvest_Argana_F,
		H_HelmetLuchnik_headset_khk_F,
        G_Balaclava_light_G_blk_F,
		DefaultManPoliceLinkedItems
	};
	weapons[] =
	{
		Aegis_srifle_SVD_blk_dms_f,
		hgun_Pistol_01_F,
		DefaultManWeapons,
        Binocular
	};
	respawnWeapons[] =
	{
		Aegis_srifle_SVD_blk_dms_f,
		hgun_Pistol_01_F,
		DefaultManWeapons,
        Binocular
	};
	magazines[] =
	{
		mag_6(10Rnd_762x54_Mag),
		mag_2(10Rnd_9x21_Mag),
        mag_2(Chemlight_blue)
	};
	respawnMagazines[] =
	{
		mag_6(10Rnd_762x54_Mag),
		mag_2(10Rnd_9x21_Mag),
        mag_2(Chemlight_blue)
	};
	role = Rifleman;
};
class Police_Argana_P_TacPoliceOfficer_SG_F: Police_Argana_P_TacPoliceOfficer_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Police\EditorPreviews_F_Police\Data\CfgVehicles\Argana_P_TacPoliceOfficer_SG_F.jpg";
	scope = public;
    scopeCurator = public;
	displayName = $STR_A3_P_CfgVehicles_I_P_TacPoliceOfficer_SG_F0;
	uniformClass = Police_U_I_A_Uniform_02_F;
	linkedItems[] =
	{
		Tacvest_Argana_F,
		H_HelmetLuchnik_headset_khk_F,
        G_Balaclava_light_G_blk_F,
		DefaultManPoliceLinkedItems
	};
	respawnLinkedItems[] =
	{
		Tacvest_Argana_F,
		H_HelmetLuchnik_headset_khk_F,
        G_Balaclava_light_G_blk_F,
		DefaultManPoliceLinkedItems
	};
	weapons[] =
	{
		sgun_Mp153_black_F,
		hgun_Pistol_01_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		sgun_Mp153_black_F,
		hgun_Pistol_01_F,
		DefaultManWeapons
	};
	magazines[] =
	{
        mag_3(4Rnd_12Gauge_Pellets),
        mag_3(4Rnd_12Gauge_Slug),
		mag_2(10Rnd_9x21_Mag),
        mag_2(Chemlight_blue)
	};
	respawnMagazines[] =
	{
        mag_3(4Rnd_12Gauge_Pellets),
        mag_3(4Rnd_12Gauge_Slug),
		mag_2(10Rnd_9x21_Mag),
        mag_2(Chemlight_blue)
	};
	role = Rifleman;
};
class Police_Argana_P_TacPoliceOfficer_UGV_02_F: Police_Argana_P_TacPoliceOfficer_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Police\EditorPreviews_F_Police\Data\CfgVehicles\Argana_P_TacPoliceOfficer_UGV_02_F.jpg";
	scope = public;
    scopeCurator = public;
	displayName = $STR_A3_A_CfgVehicles_B_ION_soldier_UGV_02_Demining_F0;
	linkedItems[] =
	{
		Tacvest_Argana_F,
		H_HelmetLuchnik_headset_khk_F,
        G_Balaclava_light_G_blk_F,
        I_UavTerminal,
		DefaultManPoliceLinkedItems
	};
	respawnLinkedItems[] =
	{
		Tacvest_Argana_F,
		H_HelmetLuchnik_headset_khk_F,
        G_Balaclava_light_G_blk_F,
        I_UavTerminal,
		DefaultManPoliceLinkedItems
	};
    backpack = Police_Argana_P_UGV_02_Demining_backpack_F;
	weapons[] =
	{
		Aegis_arifle_AKM74_F,
		hgun_Pistol_01_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		Aegis_arifle_AKM74_F,
		hgun_Pistol_01_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_545x39_Black_Mag_Yellow_F),
		mag_2(10Rnd_9x21_Mag),
        mag_2(Chemlight_blue)
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_545x39_Black_Mag_Yellow_F),
		mag_2(10Rnd_9x21_Mag),
        mag_2(Chemlight_blue)
	};
	role = Rifleman;
};
class Police_Argana_P_Helipilot_F: Police_Argana_P_PoliceOfficer_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	////editorPreview = "\A3_Police\EditorPreviews_F_Police\Data\CfgVehicles\Argana_P_Helipilot_F.jpg";
	scope = protected;
    scopeCurator = private;
	displayName = $STR_B_Helipilot_F0;
	linkedItems[] =
	{
		Tacvest_Argana_F,
		H_PilotHelmetHeli_O,
		G_Aviators,
		DefaultManPoliceLinkedItems
	};
	respawnLinkedItems[] =
	{
		Tacvest_Argana_F,
		H_PilotHelmetHeli_O,
		G_Aviators,
		DefaultManPoliceLinkedItems
	};
	weapons[] =
	{
		Aegis_SMG_Gepard_blk_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		Aegis_SMG_Gepard_blk_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_4(Aegis_40Rnd_9x21_Gepard_Mag_F),
        mag_2(Chemlight_blue)
	};
	respawnMagazines[] =
	{
		mag_4(Aegis_40Rnd_9x21_Gepard_Mag_F),
        mag_2(Chemlight_blue)
	};
	cost = 50000;
	role = Crewman;
};