#define GROUP_UNIT(a,b,c,d,e,f) \
	class Unit##a## \
	{ \
		side = ##b##; \
		vehicle = ##c##; \
		rank = ##d##; \
		position[] = {##e##,##f##,0}; \
	};

class CfgGroups
{
    class Indep
	{
		name = $STR_A3_CfgGroups_Indep0;
		side = TGuerrila;
		class Police_Livonia_F
		{
			name = $STR_A3_P_CfgFactionClasses_IND_Livonia_F0;
			class Infantry
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Infantry0;
				class POLICE_Livonia_Inf_Patrol
				{
					name = "Police Patrol";
					side = TGuerrila;
					faction = Police_IND_Livonia_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_inf.paa";
					GROUP_UNIT(0,TGuerrila,Police_I_P_PoliceOfficer_Rifle_F,CORPORAL,0,0)
					GROUP_UNIT(1,TGuerrila,Police_I_P_PoliceOfficer_F,PRIVATE,5,-5)
				};
            };
			class SpecOps
			{
				name = $STR_A3_CfgGroups_West_BLU_F_SpecOps0;
				class POLICE_Livonia_Spec_Team
				{
					name = "Tactical Police Team";
					side = TGuerrila;
					faction = Police_IND_Livonia_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_recon.paa";
					GROUP_UNIT(0,TGuerrila,Police_I_P_TacPoliceOfficer_F,SERGEANT,0,0)
					GROUP_UNIT(1,TGuerrila,Police_I_P_TacPoliceOfficer_Sniper_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TGuerrila,Police_I_P_TacPoliceOfficer_SG_F,PRIVATE,-5,-5)
					GROUP_UNIT(3,TGuerrila,Police_I_P_TacPoliceOfficer_F,PRIVATE,10,-10)
				};
            };
			class Motorized
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Motorized0;
				class POLICE_Livonia_MotInf_Patrol
				{
					name = "Motorized Police Patrol";
					side = TGuerrila;
					faction = Police_IND_Livonia_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_motor_inf.paa";
					GROUP_UNIT(0,TGuerrila,Police_I_P_Offroad_01_police_F,SERGEANT,0,0)
					GROUP_UNIT(1,TGuerrila,Police_I_P_PoliceOfficer_F,CORPORAL,5,-5)
				};
            };
        };
		class Police_Altis_F
		{
			name = $STR_A3_P_CfgFactionClasses_IND_Altis_F0;
			class Infantry
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Infantry0;
				class POLICE_Altis_Inf_Patrol
				{
					name = "Police Patrol";
					side = TGuerrila;
					faction = Police_IND_Altis_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_inf.paa";
					GROUP_UNIT(0,TGuerrila,Police_I_Altis_PoliceOfficer_Rifle_F,CORPORAL,0,0)
					GROUP_UNIT(1,TGuerrila,Police_I_Altis_PoliceOfficer_F,PRIVATE,5,-5)
				};
            };
			class Motorized
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Motorized0;
				class POLICE_Altis_MotInf_Patrol
				{
					name = "Motorized Police Patrol";
					side = TGuerrila;
					faction = Police_IND_Altis_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_motor_inf.paa";
					GROUP_UNIT(0,TGuerrila,Police_I_Altis_Offroad_01_police_F,SERGEANT,0,0)
					GROUP_UNIT(1,TGuerrila,Police_I_Altis_PoliceOfficer_F,CORPORAL,5,-5)
				};
            };
        };
    };
};