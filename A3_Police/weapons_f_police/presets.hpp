// Mk14 7.62 mm (Black) + AMS (Black) + Bipod [AAF] (Black)
class srifle_DMR_06_black_AMS_BI_F: srifle_DMR_06_black_F
{
	author = $STR_A3_A_AveryTheKitty;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_AMS;
		};
		class LinkedItemsUnder
		{
			slot = UnderBarrelSlot;
			item = bipod_03_F_blk;
		};
	};
};

class Aegis_srifle_SVD_blk_f;
class Aegis_srifle_SVD_blk_dms_f: Aegis_srifle_SVD_blk_f
{
	author = $STR_A3_A_AveryTheKitty;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_DMS_weathered_F;
		};
	};
};