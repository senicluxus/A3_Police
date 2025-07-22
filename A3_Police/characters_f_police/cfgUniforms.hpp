// Arma 3
class I_G_Soldier_LAT_F;
// Arma 3 Enoch
class I_E_Uniform_01_sweater_F;
// Arma 3 Police
class I_SFIA_soldier_lxWS;
class I_SFIA_medic_lxWS;

class Police_I_P_PoliceUniform_01_F: I_E_Uniform_01_sweater_F
{
    scope = protected;
    scopeCurator = private;
	uniformClass = Police_U_I_P_PoliceUniform_F;
	hiddenSelections[] =
	{
		camo,
		insignia
	};
	hiddenSelectionsTextures[] = {"\A3_Police\Characters_F_Police\Uniforms\Data\I_P_PoliceUniform_01_CO.paa"};
	hiddenSelectionsMaterials[] = {"A3_Police\Characters_F_Police\Uniforms\Data\I_P_PoliceUniform_01.rvmat"};
};
class Police_I_P_PoliceUniform_01_gloves_F: I_G_Soldier_LAT_F
{
    scope = protected;
    scopeCurator = private;
	uniformClass = Police_U_I_P_PoliceUniform_gloves_F;
	hiddenSelections[] =
	{
		camo,
		insignia
	};
	hiddenSelectionsTextures[] = {"\A3_Police\Characters_F_Police\Uniforms\Data\I_P_PoliceUniform_01_CO.paa"};
	hiddenSelectionsMaterials[] = {"A3_Police\Characters_F_Police\Uniforms\Data\I_P_PoliceUniform_01.rvmat"};
};
class Police_I_A_Uniform_01_F: I_SFIA_medic_lxWS
{
    scope = protected;
    scopeCurator = private;
	uniformClass = Police_U_I_A_Uniform_01_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Police\Characters_F_Police\Uniforms\Data\I_A_Gendarme_CO.paa",
		"\A3_Police\Characters_F_Police\Uniforms\Data\I_A_Gendarme_Pants_CO.paa"
	};
};
class Police_I_A_Uniform_02_F: I_SFIA_soldier_lxWS
{
    scope = protected;
    scopeCurator = private;
	uniformClass = Police_U_I_A_Uniform_02_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Police\Characters_F_Police\Uniforms\Data\I_A_Gendarme_CO.paa",
		"\A3_Police\Characters_F_Police\Uniforms\Data\I_A_Gendarme_Pants_CO.paa"
	};
};