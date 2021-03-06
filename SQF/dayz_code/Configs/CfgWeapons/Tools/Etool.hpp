class ItemEtool : ItemCore
{
	scope = public;
	model = "\dayz_equip\models\etool.p3d";
	picture = "\dayz_equip\textures\equip_etool_ca.paa";
	displayName = $STR_EQUIP_NAME_1;
	descriptionShort = $STR_EQUIP_DESC_1;
	
	stashsmall = "StashSmall";
	stashmedium = "StashMedium";
	consume = "ItemSandbag";
	
	class ItemActions
	{
		class Build
		{
			text = "Build Sandbag Fence";
			script = "spawn player_build;";
			require[] = {"ItemEtool"};
			consume[] = {"ItemSandbag"};
			create = "Sandbag1_DZ";
		};
		
		/*class Use
		{
			text=$STR_CREATE_STASH;
			script="spawn player_createstash;";
		};*/
	};
};