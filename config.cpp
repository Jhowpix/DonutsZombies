#define _ARMA_
class CfgMods
{
	class DonutsZombies
	{
		dir = "DonutsZombies";
		picture = "DonutsZombies/Gui/Donuts_Logo512x512.paa";
		logoOver = "DonutsZombies/gui/Donuts_Logo512x512.paa";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "DonutsZombies";
		credits = "Model 3d: ForevereQ, RainOnTheMoon, Nedd_Nelson, Teslov, Martijn, FinBass ,Sound Effect by DRAGON-STUDIO from Pixabay";
		author = "JhowPix";
		authorID = "76561199247898368";
		version = "1.0";
		extra = 0;
		type = "mod";
		dependencies[] = {"Game","World","Mission"};
		class defs
		{
			class gameScriptModule
			{
				value = "";
				files[] = {"DonutsZombies/Scripts/3_Game"};
			};
			class worldScriptModule
			{
				value = "";
				files[] = {"DonutsZombies/Scripts/4_World"};
			};
			class missionScriptModule
			{
				value = "";
				files[] = {"DonutsZombies/Scripts/5_Mission"};
			};
		};
	};
};
class CfgPatches
{
	class DonutsFactory
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = 
		{
			"DZ_AI",
			"DZ_Scripts",
			"DZ_Characters",
			"DZ_Characters_Zombies",
			"DZ_Data",
			"DZ_Characters_Pants",
			"DZ_Characters_Tops",
			"DZ_Characters_Backpacks",
			"DZ_Characters_Masks"
		};
	};
};
class cfgVehicles
{	
	class ZmbM_DoctorFat_Base;
	class Donuts_ZmbM_Doctor_No_Arms: ZmbM_DoctorFat_Base
	{
		scope = 2;
		displayName = "John Miller";
		hiddenSelectionsTextures[] = {"DonutsZombies\data\Donuts_DoctorFat_No_Arm_co.paa"}; 
		attachments[] ={"Vest"};
		hiddenSelectionsMaterials[]={"DonutsZombies\data\Donuts_DoctorNoArms.rvmat"};
	};
	class Donuts_ZmbM_Doctor_No_Arms2: ZmbM_DoctorFat_Base
	{
		scope = 2;
		displayName = "Michael Johnson";
		attachments[] ={"Vest"};
		hiddenSelectionsTextures[] = {"DonutsZombies\data\Donuts_DoctorFat_No_Arm2_co.paa"};
	};
    class Donuts_doctorIII: ZmbM_DoctorFat_Base
	{
		scope=2;
		displayName = "James Smith";
		hiddenSelectionsTextures[]={"DonutsZombies\data\Donuts_doctorIII_co.paa"};
	};
	class ZmbM_usSoldier_Officer_Desert;
	class Donuts_Armyofficer_No_Arms: ZmbM_usSoldier_Officer_Desert
	{
		scope = 2;
		displayName = "David Brown";
		hiddenSelectionsTextures[] = {"DonutsZombies\data\Donuts_Armyofficer_co.paa"};
	};
	class Donuts_Zmb_usSoldierIII: ZmbM_usSoldier_Officer_Desert
	{
		scope=2;
		displayName ="Robert Davis";
		model="\DZ\characters\zombies\ArmyOfficer_fat_m.p3d";
		hiddenSelectionsTextures[]={"DonutsZombies\data\Donuts_armyofficerIII_co.paa"};
		hiddenSelectionsMaterials[]={"DonutsZombies\data\Donuts_ArmyOfficer_fat_m.rvmat"};

	};
	class Donuts_Zmb_usSoldierIV: ZmbM_usSoldier_Officer_Desert
	{
		scope=2;
		displayName ="William Wilson";
		model="\DZ\characters\zombies\ArmyOfficer_fat_m.p3d";
		hiddenSelectionsTextures[]={"DonutsZombies\data\Donuts_armyofficerIV_co.paa"};
		hiddenSelectionsMaterials[]={"DonutsZombies\data\Donuts_ArmyOfficer_fat_m.rvmat"};

	};
	class Donuts_ZmbM_Doctor_No_Legs: ZmbM_DoctorFat_Base
	{
		scope = 2;
		displayName = "Daniel Moore";
		attachments[] ={"Vest"};
		hiddenSelectionsTextures[] = {"DonutsZombies\data\Donuts_DoctorFat_No_Leg_co.paa"};
	};
	class ZmbM_FirefighterNormal_Base;
	class Donuts_Firefighter_No_Legs: ZmbM_FirefighterNormal_Base
	{
		scope = 2;
		displayName = "Mark Taylor";
		attachments[] ={"Vest"};
		hiddenSelectionsTextures[] = {"DonutsZombies\data\Donuts_Firefighter_co.paa"};
	};
	class Donuts_Firefighter_Ritual: ZmbM_FirefighterNormal_Base
	{
		scope = 2;
		displayName = "Paul Anderson";
		hiddenSelectionsTextures[] = {"DonutsZombies\data\Donuts_ZmbM_RitualII_co.paa"};
	};
	class ZmbF_BlueCollarFat_Base;
	class Donuts_Bluecollar_No_Legs: ZmbF_BlueCollarFat_Base
	{
		scope = 2;
		displayName = "Lucia Fernandez";
		attachments[] ={"Vest"};
		hiddenSelectionsTextures[] = {"DonutsZombies\data\Donuts_Bluecollar_co.paa"};
	};
	class ZmbM_FishermanOld_Base;
	class Donuts_Fisherman_Ritual: ZmbM_FishermanOld_Base
	{
		scope = 2;
		displayName = "Richard Thomas";
		attachments[] ={"Vest"};
		hiddenSelectionsTextures[] = {"DonutsZombies\data\Donuts_Fisherman_Ritual_co.paa"};
	};
	class ZmbM_FarmerFat_Base;
	class Donuts_Farmer_Ritual: ZmbM_FarmerFat_Base
	{
		scope = 2;
		displayName = "Thomas Jackson";
		attachments[] ={"Vest"};
		hiddenSelectionsTextures[] = {"DonutsZombies\data\Donuts_Farmer_Ritual_co.paa"};
	}; 
	class Donuts_FarmerI: ZmbM_FarmerFat_Base
	{
		scope = 2;
		displayName = "Andrew White";
		hiddenSelectionsTextures[] = {"DonutsZombies\data\Donuts_ZmbXX_co.paa"};
		hiddenSelectionsMaterials[]={"DonutsZombies\data\farmer.rvmat"}; 
	}; 
	class ZmbM_ClerkFat_Base;
	class Donuts_Clerk: ZmbM_ClerkFat_Base
	{
		scope = 2;
		displayName = "Kevin Harris";
		hiddenSelectionsTextures[] = {"DonutsZombies\data\Donuts_Clerk_co.paa"};
	};
	class Donuts_Ritual: ZmbM_ClerkFat_Base
	{
		scope = 2;
		displayName = "Jason Martin";
		attachments[] ={"Vest"};
		hiddenSelectionsTextures[] = {"DonutsZombies\data\Donuts_ZmbM_Ritual_co.paa"};
	};
	class ZmbM_HermitSkinny_Base;
	class Donuts_ZmbM_ChefNoTshirt: ZmbM_HermitSkinny_Base
	{
		scope = 2;
		displayName = "Brian Thompson";
		hiddenSelectionsTextures[] = {"DonutsZombies\data\Donuts_ZmbM_ChefNoTshirt_co.paa"};
		hiddenSelectionsMaterials[]={"DonutsZombies\data\hermit.rvmat"}; 
	};
    class ZmbF_HikerSkinny_Base;
	class Donuts_Zmb_HikerIII: ZmbF_HikerSkinny_Base
	{
		scope=2;
		displayName = "Emma Smith";
		hiddenSelectionsTextures[]={"DonutsZombies\data\Donuts_hikerIII_co.paa"};
	};
	class Donuts_Zmb_OldMan: ZmbM_HermitSkinny_Base
	{
		scope = 2;
		displayName = "Steven Clark";
		hiddenSelectionsTextures[] = {"DonutsZombies\data\Donuts_ZmbVIII_co.paa"};
		hiddenSelectionsMaterials[]={"DonutsZombies\data\hermit.rvmat"}; 
	};
	class Donuts_Zmb_OldManI: ZmbM_HermitSkinny_Base
	{
		scope = 2;
		displayName = "Gary Lewis";
		hiddenSelectionsTextures[] = {"DonutsZombies\data\Donuts_ZmbIX_co.paa"};
		hiddenSelectionsMaterials[]={"DonutsZombies\data\hermit.rvmat"}; 
	};
	class Donuts_Zmb_OldManII: ZmbM_HermitSkinny_Base
	{
		scope = 2;
		displayName = "Eric Walker";
		hiddenSelectionsTextures[] = {"DonutsZombies\data\Donuts_ZmbX_co.paa"};
		hiddenSelectionsMaterials[]={"DonutsZombies\data\hermit.rvmat"}; 
	};
	class ZmbM_JournalistSkinny_Base;
	class Donuts_ZmbM_journalist: ZmbM_JournalistSkinny_Base
	{
		scope = 2;
		displayName = "Scott Hall";
		hiddenSelectionsTextures[] = {"DonutsZombies\data\Donuts_ZmbM_journalist_co.paa"};
		hiddenSelectionsMaterials[]={"DonutsZombies\data\Donuts_Journalist.rvmat"};
	};
	class Donuts_ZmbM_journalistII: ZmbM_JournalistSkinny_Base
	{
		scope = 2;
		displayName = "Adam Young";
		hiddenSelectionsTextures[] = {"DonutsZombies\data\Donuts_ZmbM_journalistII_co.paa"};
		hiddenSelectionsMaterials[]={"DonutsZombies\data\Donuts_Journalist.rvmat"};
	};
	class Donuts_ZmbM_journalistIII: ZmbM_JournalistSkinny_Base
	{
		scope = 2;
		displayName = "Hans Muller";
		hiddenSelectionsTextures[] = {"DonutsZombies\data\Donuts_ZmbM_journalistIII_co.paa"};
		hiddenSelectionsMaterials[]={"DonutsZombies\data\Donuts_Journalist.rvmat"};
	};
	class ZmbF_MilkMaidOld_Base;
	class Donuts_ZmbF_MilkMaidOld: ZmbF_MilkMaidOld_Base
	{
		scope = 2;
		displayName = "Isabel García";
		hiddenSelectionsTextures[] = {"DonutsZombies\data\Donuts_ZmbF_milkmaid_co.paa"};
		hiddenSelectionsMaterials[]={"DonutsZombies\data\milkmaid_old_f.rvmat"};
	};
	class Donuts_ZmbF_MilkMaidOldII: ZmbF_MilkMaidOld_Base
	{
		scope = 2;
		displayName = "Julia muller";
		attachments[] ={"Vest"};
		hiddenSelectionsTextures[] = {"DonutsZombies\data\Donuts_ZmbF_milkmaidII_co.paa"};
		hiddenSelectionsMaterials[]={"DonutsZombies\data\milkmaid_old_f.rvmat"};
	};
	class Donuts_ZmbF_MilkMaidOldIII: ZmbF_MilkMaidOld_Base
	{
		scope = 2;
		displayName = "Laura Rossi";
		hiddenSelectionsTextures[] = {"DonutsZombies\data\Donuts_ZmbF_milkmaidIII_co.paa"};
		hiddenSelectionsMaterials[]={"DonutsZombies\data\milkmaid_old_f.rvmat"};
	};
	class ZmbM_ConstrWorkerNormal_Base;
	class Donuts_Clown: ZmbM_ConstrWorkerNormal_Base
	{
		scope = 2;
		displayName = "Klaus Schmidt";
		hiddenSelectionsTextures[] = {"DonutsZombies\data\Donuts_Clown_co.paa"};
	};
	class Donuts_ZmbM_ClownII: ZmbM_ConstrWorkerNormal_Base
	{
		scope = 2;
		displayName = "Dieter Schneider";
		hiddenSelectionsTextures[] = {"DonutsZombies\data\Donuts_ClownII_co.paa"};
	};
	class ZmbM_CitizenASkinny_Base;
	class Donuts_Devol: ZmbM_CitizenASkinny_Base
	{
		scope = 2;
		displayName = "Martin Fischer";
		hiddenSelectionsTextures[] = {"DonutsZombies\data\Donuts_Devol_co.paa"};
	};
	class Donuts_ZmbM_Chef: ZmbM_DoctorFat_Base
	{
		scope = 2;
		displayName = "Lukas Weber";
		attachments[] ={"Vest"};
		hiddenSelectionsTextures[] ={"DonutsZombies\data\Donuts_ZmbM_Chef_co.paa"};
	};
	class ZmbM_NBC_Yellow;
	class Donuts_NBC: ZmbM_NBC_Yellow
	{
		scope=2;
		displayName = "Jean Dupont";
		hiddenSelectionsTextures[]={"DonutsZombies\data\Donuts_Zmb_co.paa"};
	};
	class Donuts_NBCI: ZmbM_NBC_Yellow
	{
		scope=2;
		displayName = "Pierre Laurent";
		hiddenSelectionsTextures[]={"DonutsZombies\data\Donuts_ZmbII_co.paa"};
	};
	class ZmbM_priestPopSkinny;
	class Donuts_Zmb_Padre: ZmbM_priestPopSkinny
	{
		scope=2;
		displayName = "Louis Moreau";
		attachments[] ={"Vest"};
		hiddenSelectionsTextures[]={"DonutsZombies\data\Donuts_ZmbIII_co.paa"};
	};
	class Donuts_Zmb_PadreI: ZmbM_priestPopSkinny
	{
		scope=2;
		displayName = "Fabio Rossi";
		attachments[] ={"Vest"};
		hiddenSelectionsTextures[]={"DonutsZombies\data\Donuts_ZmbIV_co.paa"};
		hiddenSelectionsMaterials[]={"DonutsZombies\data\priestpop_skinny_m.rvmat"};
	};
	class Donuts_Zmb_PadreII: ZmbM_priestPopSkinny
	{
		scope=2;
		displayName = "Miguel Fernández";
		attachments[] ={"Vest"};
		hiddenSelectionsTextures[]={"DonutsZombies\data\Donuts_ZmbVI_co.paa"};
		hiddenSelectionsMaterials[]={"DonutsZombies\data\priestpop_skinny_m.rvmat"};
	};
	class ZmbF_DoctorSkinny_Base;
	class Donuts_Zmb_DoctorF: ZmbF_DoctorSkinny_Base
	{
		scope=2;
		displayName = "Elena Petrova";
		hiddenSelectionsTextures[]={"DonutsZombies\data\Donuts_ZmbXI_co.paa"};
	};
	class Donuts_Zmb_DoctorFI: ZmbF_DoctorSkinny_Base
	{
		scope=2;
		displayName = "Clara Schmidt";
		hiddenSelectionsTextures[]={"DonutsZombies\data\Donuts_ZmbXII_co.paa"};
	};
	class ZmbF_Clerk_Normal_Base;
	class Donuts_Zmb_Clerk: ZmbF_Clerk_Normal_Base
	{
		scope=2;
		displayName = "Sophie Dubois";
		hiddenSelectionsTextures[]={"DonutsZombies\data\Donuts_ZmbXIII_co.paa"};
	};
	class ZmbF_CitizenBSkinny_Base;
	class Donuts_CitizenF: ZmbF_CitizenBSkinny_Base
	{
		scope=2;
		displayName = "Maria Silva";
		hiddenSelectionsTextures[]={"DonutsZombies\data\Donuts_ZmbXIV_co.paa"};
		hiddenSelectionsMaterials[]={"DonutsZombies\data\citizenb_skinny_f.rvmat"};
	};
	class Donuts_CitizenFI: ZmbF_CitizenBSkinny_Base
	{
		scope=2;
		displayName = "Anna Ivanova";
		hiddenSelectionsTextures[]={"DonutsZombies\data\Donuts_ZmbXV_co.paa"};
		hiddenSelectionsMaterials[]={"DonutsZombies\data\citizenb_skinny_f.rvmat"};
	};
	class ZmbM_HunterOld_Base;
	class Donuts_Zmb_HunterIII: ZmbM_HunterOld_Base
	{
		scope=2;
		displayName = "Carlos Oliveira";
		attachments[] ={"Vest"};
		hiddenSelectionsTextures[]={"DonutsZombies\data\Donuts_hunterIII_co.paa"};
	};
	class Donuts_Zmb_HunterIV: ZmbM_HunterOld_Base
	{
		scope=2;
		displayName = "Javier Garcia";
		attachments[] ={"Vest"};
		hiddenSelectionsTextures[]={"DonutsZombies\data\Donuts_hunterIV_co.paa"};
	};
	class Donuts_Zmb_HunterV: ZmbM_HunterOld_Base
	{
		scope=2;
		displayName = "Pablo Martínez";
		attachments[] ={"Vest"};
		hiddenSelectionsTextures[]={"DonutsZombies\data\Donuts_hunterV_co.paa"};
	};
	class HuntingVest;
	class Donuts_HunterVestWolf: HuntingVest
	{
		scope=2;
		displayName = "Vest Wolf";
		hiddenSelections[]={"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[]={"DonutsZombies\data\Donuts_VestHunterWolf_co.paa","DonutsZombies\data\Donuts_VestHunterWolf_co.paa","DonutsZombies\data\Donuts_VestHunterWolf_co.paa"};
	};
	class Donuts_HunterVestBear: HuntingVest
	{
		scope=2;
		displayName = "Vest Bear";
		hiddenSelections[]={"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[]={"DonutsZombies\data\Donuts_VestHunterBear_co.paa","DonutsZombies\data\Donuts_VestHunterBear_co.paa","DonutsZombies\data\Donuts_VestHunterBear_co.paa"};
	};
	class Donuts_Zmb_FireFight: ZmbM_FirefighterNormal_Base
	{
		scope=2;
		displayName = "Sergio Lopez";
		hiddenSelectionsTextures[]={"DonutsZombies\data\Donuts_ZmbXVI_co.paa"};
	};
	class Donuts_Zmb_FireFightI: ZmbM_FirefighterNormal_Base
	{
		scope=2;
		displayName = "Mario Romano";
		hiddenSelectionsTextures[]={"DonutsZombies\data\Donuts_ZmbXVII_co.paa"};
	};
	class ZmbF_Runner_Base;
	class Donuts_jogger: ZmbF_Runner_Base
	{
		scope=2;
		displayName = "Lauren Johnson";
		hiddenSelectionsTextures[]={"DonutsZombies\data\Donuts_jogger_skinny_co.paa"};
	};
	class Donuts_joggerII: ZmbF_Runner_Base
	{
		scope=2;
		displayName = "Megan Brown";
		hiddenSelectionsTextures[]={"DonutsZombies\data\Donuts_joggerIII_co.paa"};
	};
	class ZmbM_HeavyIndustryWorker_Base;
	class Donuts_Zmb_ConstruIII: ZmbM_HeavyIndustryWorker_Base
	{
		scope=2;
		displayName = "Marco Bianchi";
		hiddenSelectionsTextures[]={"DonutsZombies\data\Donuts_heavyindustryworker_co.paa"};
	};
	class ZmbM_ConstrWorkerNormal_Beige;
	class Donuts_Zmb_Constru: ZmbM_ConstrWorkerNormal_Beige
	{
		scope=2;
		displayName = "Lorenzo Ricci";
		attachments[] ={"Headgear"};
		hiddenSelectionsTextures[]={"DonutsZombies\data\Donuts_Zmb_Constructor_co.paa"};
	};
	class Donuts_Zmb_ConstruII: ZmbM_ConstrWorkerNormal_Beige
	{
		scope=2;
		displayName = "Nico Hoffmann";
		attachments[] ={"Headgear"};
		hiddenSelectionsTextures[]={"DonutsZombies\data\Donuts_Zmb_ConstructorII_co.paa"};
	};
	class Donuts_farmerIII: ZmbM_FarmerFat_Base
	{
		scope=2;
		displayName = "Viktor Petrov";
		attachments[] ={"Vest"};
		hiddenSelectionsTextures[]={"DonutsZombies\data\Donuts_farmerIII_co.paa"};
	};
	class Donuts_farmerIV: ZmbM_FarmerFat_Base
	{
		scope=2;
		displayName = "Leon Novak";
		hiddenSelectionsTextures[]={"DonutsZombies\data\Donuts_farmerIV_co.paa"};
	};
	class Donuts_fishermanIII: ZmbM_FishermanOld_Base
	{
		scope=2;
		displayName = "Ivan Ivanov";
		attachments[] ={"Vest", "Headgear"};
		hiddenSelectionsTextures[]={"DonutsZombies\data\Donuts_fishermanIII_co.paa"};
	};
	class Donuts_hermitIII: ZmbM_HermitSkinny_Base
	{
		scope=2;
		displayName = "Ethan Carter";
		attachments[] ={"Vest", "Headgear"};
		hiddenSelectionsTextures[]={"DonutsZombies\data\Donuts_hermitIII_co.paa"};
	};
	class ZmbF_ParamedicNormal_Base;
	class Donuts_Zmb_ParamedicFIII: ZmbF_ParamedicNormal_Base
	{
		scope=2;
		displayName = "Nicole Davis";
		hiddenSelectionsTextures[]={"DonutsZombies\data\Donuts_paramedicFIII_co.paa"};
	};
	class Donuts_Zmb_ParamedicFIV: ZmbF_ParamedicNormal_Base
	{
		scope=2;
		displayName = "Elizabeth Wilson";
		hiddenSelectionsTextures[]={"DonutsZombies\data\Donuts_paramedicFIV_co.paa"};
	};

	class Donuts_HunterF: ZmbF_ParamedicNormal_Base
	{
		scope=2;
		displayName = "Amanda Taylor";
		attachments[] ={"Vest", "Headgear"};
		hiddenSelectionsTextures[]={"DonutsZombies\data\Donuts_hunterF_co.paa"};
	};
	class Donuts_HunterFI: ZmbF_ParamedicNormal_Base
	{
		scope=2;
		displayName = "Jennifer Anderson";
		attachments[] ={"Vest"};
		hiddenSelectionsTextures[]={"DonutsZombies\data\Donuts_hunterFI_co.paa"};
	};
	class Donuts_HunterFII: ZmbF_ParamedicNormal_Base
	{
		scope=2;
		displayName = "Ashley Thomas";
		attachments[] ={"Vest", "Headgear"};
		hiddenSelectionsTextures[]={"DonutsZombies\data\Donuts_hunterFII_co.paa"};
	};
	class ZmbM_HandymanNormal_Base;
	class Donuts_Zmb_CoverallsIII: ZmbM_HandymanNormal_Base
	{
		scope=2;
		displayName = "Dmitri Volkov";
		hiddenSelectionsTextures[]={"DonutsZombies\data\Donuts_Zmb_CoverallsIII_co.paa"};
	};
	class Donuts_Zmb_CoverallsIV: ZmbM_HandymanNormal_Base
	{
		scope=2;
		displayName = "Alexei Smirnov";
		hiddenSelectionsTextures[]={"DonutsZombies\data\Donuts_Zmb_CoverallsIV_co.paa"};
	};
	class Donuts_Zmb_CoverallsV: ZmbM_HandymanNormal_Base
	{
		scope=2;
		displayName = "Nikolai Sokolov";
		hiddenSelectionsTextures[]={"DonutsZombies\data\Donuts_Zmb_CoverallsV_co.paa"};
		hiddenSelectionsMaterials[]={"DonutsZombies\data\coveralls.rvmat"};
	};
	class ZmbM_CitizenBFat_Base;
	class Donuts_Zmb_CitizenIII: ZmbM_CitizenBFat_Base
	{
		scope=2;
		displayName = "Mohammed Hassan";
		attachments[] ={"Vest"};
		hiddenSelectionsTextures[]={"DonutsZombies\data\Donuts_citizenbIII_co.paa"};
	};
	class Donuts_Zmb_CitizenIV: ZmbM_CitizenBFat_Base
	{
		scope=2;
		displayName = "Elvis Presley";
		attachments[] ={"Vest"};
		hiddenSelectionsTextures[]={"DonutsZombies\data\Donuts_citizenbVI_co.paa"};
	};
	class ZmbF_PoliceWomanNormal;
	class Donuts_policewomanIII: ZmbF_PoliceWomanNormal
	{
		scope = 2;
		displayName = "Emily Jackson";
		hiddenSelectionsTextures[] = {"DonutsZombies\data\Donuts_policewomanIII_co.paa"};
	};
	class Donuts_policewomanIV: ZmbF_PoliceWomanNormal
	{
		scope = 2;
		displayName = "Jessica White";
		attachments[] ={"Vest", "Headgear"};
		hiddenSelectionsTextures[] = {"DonutsZombies\data\Donuts_policewomanIV_co.paa"};
	};
	class Donuts_policewomanV: ZmbF_PoliceWomanNormal
	{
		scope = 2;
		displayName = "Sarah Harris";
		hiddenSelectionsTextures[] = {"DonutsZombies\data\Donuts_policewomanV_co.paa"};
	};
	class Donuts_policewomanCherno: ZmbF_PoliceWomanNormal
	{
		scope = 2;
		displayName = "Karina Novak";
		attachments[] ={"Vest", "Headgear"};
		hiddenSelectionsTextures[] = {"DonutsZombies\data\Donuts_policewomanCherno_co.paa"};
	};
	class Donuts_policewomanChernoII: ZmbF_PoliceWomanNormal
	{
		scope = 2;
		displayName = "Samantha Clark";
		attachments[] ={"Vest", "Headgear"};
		hiddenSelectionsTextures[] = {"DonutsZombies\data\Donuts_policewomanChernoII_co.paa"};
	};
	class Donuts_policewomanClothesBlack: ZmbF_PoliceWomanNormal
	{
		scope = 2;
		displayName = "Pietra Romano";
		attachments[] ={"Vest", "Headgear"};
		hiddenSelectionsTextures[] = {"DonutsZombies\data\Donuts_policewomanChernoClothesBlack_co.paa"};
	};
	class Donuts_policewomanClothesBlackII: ZmbF_PoliceWomanNormal
	{
		scope = 2;
		displayName = "Kaori Tanaka";
		hiddenSelectionsTextures[] = {"DonutsZombies\data\Donuts_policewomanChernoClothesBlackII_co.paa"};
	};
	class Donuts_policewomanClothesCamufle: ZmbF_PoliceWomanNormal
	{
		scope = 2;
		displayName = "Marta Kowalska";
		hiddenSelectionsTextures[] = {"DonutsZombies\data\Donuts_policewomanChernoClothesCamufle_co.paa"};
	};

	class ZmbM_PolicemanFat_Base;
	class Donuts_policemanIII: ZmbM_PolicemanFat_Base
	{
		scope = 2;
		displayName = "Boris Kuznetsov";
		attachments[] ={"Vest", "Headgear"};
		hiddenSelectionsTextures[] = {"DonutsZombies\data\Donuts_policemanIII_co.paa"};
	};
	class Donuts_policemanIV: ZmbM_PolicemanFat_Base
	{
		scope = 2;
		displayName = "Ahmed Al-Farsi";
		attachments[] ={"Vest", "Headgear"};
		hiddenSelectionsTextures[] = {"DonutsZombies\data\Donuts_policemanIV_co.paa"};
	};
	class Donuts_policemanV: ZmbM_PolicemanFat_Base
	{
		scope = 2;
		displayName = "Karim Haddad";
		attachments[] ={"Vest", "Headgear"};
		hiddenSelectionsTextures[] = {"DonutsZombies\data\Donuts_policemanV_co.paa"};
	};
	class Donuts_policemanCherno: ZmbM_PolicemanFat_Base
	{
		scope = 2;
		displayName = "Ali Rahman";
		attachments[] ={"Vest", "Headgear"};
		hiddenSelectionsTextures[] = {"DonutsZombies\data\Donuts_policemanCherno_co.paa"};
	};
	class Donuts_policemanChernoII: ZmbM_PolicemanFat_Base
	{
		scope = 2;
		displayName = "Neo Anderson";
		attachments[] ={"Vest", "Headgear"};
		hiddenSelectionsTextures[] = {"DonutsZombies\data\Donuts_policemanChernoII_co.paa"};
	};
	class Donuts_policemanChernoClothesBlack: ZmbM_PolicemanFat_Base
	{
		scope = 2;
		displayName = "Christopher King";
		attachments[] ={"Vest", "Headgear"};
		hiddenSelectionsTextures[] = {"DonutsZombies\data\Donuts_policemanChernoClothesBlack_co.paa"};
	};
	class Donuts_policemanChernoClothesBlackII: ZmbM_PolicemanFat_Base
	{
		scope = 2;
		displayName = "Benjamin Scott";
		attachments[] ={"Vest", "Headgear"};
		hiddenSelectionsTextures[] = {"DonutsZombies\data\Donuts_policemanChernoClothesBlackII_co.paa"};
	};
	class Donuts_policemanClothesCamufle: ZmbM_PolicemanFat_Base
	{
		scope = 2;
		displayName = "Jack Turner";
		attachments[] ={"Vest", "Headgear"};
		hiddenSelectionsTextures[] = {"DonutsZombies\data\Donuts_policemanClothesCamufle_co.paa"};
	};
	class Donuts_policemanClothesCamufleII: ZmbM_PolicemanFat_Base
	{
		scope = 2;
		displayName = "Joao Souza";
		attachments[] ={"Vest", "Headgear"};
		hiddenSelectionsTextures[] = {"DonutsZombies\data\Donuts_policemanClothesCamufleII_co.paa"};
	};
	class ZmbM_ParamedicNormal_Base;
	class Donuts_paramedicIII: ZmbM_ParamedicNormal_Base
	{
		scope = 2;
		displayName = "Jesus Morales";
		hiddenSelectionsTextures[] = {"DonutsZombies\data\Donuts_paramedicIII_co.paa"};
	};
	class Donuts_paramedicIV: ZmbM_ParamedicNormal_Base
	{
		scope = 2;
		displayName = "Judas Black";
		hiddenSelectionsTextures[] = {"DonutsZombies\data\Donuts_paramedicIV_co.paa"};
	};
	class Donuts_paramedicV: ZmbM_ParamedicNormal_Base
	{
		scope = 2;
		displayName = "Otto Becker";
		hiddenSelectionsTextures[] = {"DonutsZombies\data\Donuts_paramedicV_co.paa"};
	};
	class ZmbM_SoldierNormal_Base;
	class Donuts_soldier_normalIV: ZmbM_SoldierNormal_Base
	{
		scope = 2;
		displayName = "Bernardo Costa";
		attachments[] ={"Vest"};
		hiddenSelectionsTextures[] = {"DonutsZombies\data\Donuts_soldier_normaIIV_co.paa"};
	};
	class Donuts_soldier_normalV: ZmbM_SoldierNormal_Base
	{
		scope = 2;
		displayName = "Levi Cohen";
		attachments[] ={"Vest"};
		hiddenSelectionsTextures[] = {"DonutsZombies\data\Donuts_soldier_normaIV_co.paa"};
	};
	class Donuts_soldier_normalVI: ZmbM_SoldierNormal_Base
	{
		scope = 2;
		displayName = "Gomes Silva";
		attachments[] ={"Vest"};
		hiddenSelectionsTextures[] = {"DonutsZombies\data\Donuts_soldier_normaIVI_co.paa"};
	};
	class Donuts_soldier_normalIII: ZmbM_SoldierNormal_Base
	{
		scope = 2;
		displayName = "Theo Dubois";
		attachments[] ={"Vest"};
		hiddenSelectionsTextures[] = {"DonutsZombies\data\Donuts_soldier_normalIII_co.paa"};
	};
	class ZmbF_VillagerOld_Base;
	class Donuts_villager_Female_No_Legs: ZmbF_VillagerOld_Base
	{
		scope=2;
		displayName = "Amelie Bouchard";
		attachments[] ={"Vest"};
		hiddenSelectionsTextures[]={"DonutsZombies\data\NewZombies\Donuts_villager_old_f__No_Legs_co.paa"};
	};
	class Donuts_villagerII_old_F: ZmbF_VillagerOld_Base
	{
		scope=2;
		displayName = "Noemie Charbonneau";
		attachments[] ={"Vest"};
		hiddenSelectionsTextures[]={"DonutsZombies\data\NewZombies\Donuts_villagerII_old_f_co.paa"};
	};
	class Donuts_villagerIII_old_F: ZmbF_VillagerOld_Base
	{
		scope=2;
		displayName = "Freya McAllister";
		attachments[] ={"Vest"};
		hiddenSelectionsTextures[]={"DonutsZombies\data\NewZombies\Donuts_villagerIII_old_f_co.paa"};
	};
	class ZmbM_VillagerOld_Base;
	class Donuts_villager_Male_No_Legs: ZmbM_VillagerOld_Base
	{
		scope=2;
		displayName = "Rowan Sinclair";
		attachments[] ={"Vest"};
		hiddenSelectionsTextures[]={"DonutsZombies\data\NewZombies\Donuts_villager_old_Male_co.paa"};
	};
	class ZmbM_Jacket_Base;
	class Donuts_jacket_No_Legs: ZmbM_Jacket_Base
	{
		scope=2;
		displayName = "Matteo Gagne";
		attachments[] ={"Vest"};
		hiddenSelectionsTextures[]={"DonutsZombies\data\NewZombies\Donuts_jacket_co.paa"};
	};
	class Donuts_jacket_Chest: ZmbM_Jacket_Base
	{
		scope=2;
		displayName = "Daniel Ventura";
		attachments[] ={"Vest"};
		hiddenSelectionsTextures[]={"DonutsZombies\data\NewZombies\Donuts_jacket_Chest_co.paa"};
	};
	class Donuts_Hermit_Horror_Chest: ZmbM_HermitSkinny_Base
	{
		scope = 2;
		displayName = "Elias Moreau";
		hiddenSelectionsTextures[] = {"DonutsZombies\data\NewZombies\Donuts_Horror_hermit_co.paa"}; 
	};
	class Donuts_JacketII_beige: ZmbM_Jacket_Base
	{
		scope=2;
		displayName = "Severino Santos";
		hiddenSelectionsTextures[]={"DonutsZombies\data\NewZombies\Donuts_jacketII_co.paa"};
	};
	class Donuts_villagerI_old_M: ZmbM_VillagerOld_Base
	{
		scope=2;
		displayName = "Doug Platus";
		hiddenSelectionsTextures[]={"DonutsZombies\data\NewZombies\Donuts_villagerI_old_m_co.paa"};
	};
	class Donuts_villagerII_old_M: ZmbM_VillagerOld_Base
	{
		scope=2;
		displayName = "Pietro Navarro";
		hiddenSelectionsTextures[]={"DonutsZombies\data\NewZombies\Donuts_villagerII_old_m_co.paa"};
	};
	class Donuts_villagerIII_old_M: ZmbM_VillagerOld_Base
	{
		scope=2;
		displayName = "Flavio Silva";
		hiddenSelectionsTextures[]={"DonutsZombies\data\NewZombies\Donuts_villagerIII_old_m_co.paa"};
	};
	class ZmbM_PrisonerSkinny_Base;
	class Donuts_prisoner_Waldo: ZmbM_PrisonerSkinny_Base
	{
		scope = 2;
		displayName = "Waldo Donuts";
		hiddenSelectionsTextures[] = {"DonutsZombies\data\NewZombies\Donuts_prisoner_skinny_m_co.paa"}; 
		hiddenSelectionsMaterials[]={"DonutsZombies\data\Donuts_DoctorNoArms.rvmat"};
	};
	class BeanieHat_ColorBase;
	class Donuts_BoonieHat_Waldo: BeanieHat_ColorBase
	{
		scope=2;
		color="black";
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"DonutsZombies\data\NewZombies\Donuts_beaniehat_black_co.paa",
			"DonutsZombies\data\NewZombies\Donuts_beaniehat_black_co.paa",
			"DonutsZombies\data\NewZombies\Donuts_beaniehat_black_co.paa"
		};
	};

	class Clothing;
	class Donuts_MaczetaZombieChest: Clothing
	{
		scope=2;
		displayName="";
		descriptionShort="";
		model="DonutsZombies\data\maczeta\maczeta.p3d";
		inventorySlot[]={"Vest"};
		itemInfo[]={"Clothing", "Vest"};
		class ClothingTypes
		{
			male="DonutsZombies\data\maczeta\maczeta.p3d";
			female="DonutsZombies\data\maczeta\maczeta.p3d";
		};
	};
	class Donuts_CudgelZombieBack: Clothing
	{
		scope=2;
		displayName="";
		descriptionShort="";
		model="DonutsZombies\data\Cudgel\Cudgel.p3d";
		inventorySlot[]={"Vest"};
		itemInfo[]={"Clothing", "Vest"};
		class ClothingTypes
		{
			male="DonutsZombies\data\Cudgel\Cudgel.p3d";
			female="DonutsZombies\data\Cudgel\Cudgel.p3d";
		};
	};
	class Donuts_holyAxeChest: Clothing
	{
		scope=2;
		displayName="";
		descriptionShort="";
		model="DonutsZombies\data\holyAxe\holyAxe.p3d";
		inventorySlot[]={"Vest"};
		itemInfo[]={"Clothing", "Vest"};
		class ClothingTypes
		{
			male="DonutsZombies\data\holyAxe\holyAxe.p3d";
			female="DonutsZombies\data\holyAxe\holyAxe.p3d";
		};
	};
	class Donuts_arrowChest: Clothing
	{
		scope=2;
		displayName="";
		descriptionShort="";
		model="DonutsZombies\data\arrow\arrowZombieChest.p3d";
		inventorySlot[]={"Vest"};
		itemInfo[]={"Clothing", "Vest"};
		class ClothingTypes
		{
			male="DonutsZombies\data\arrow\arrowZombieChest.p3d";
			female="DonutsZombies\data\arrow\arrowZombieChest.p3d";
		};
	};
	class Donuts_arrowBack: Clothing
	{
		scope=2;
		displayName="";
		descriptionShort="";
		model="DonutsZombies\data\arrowBack\arrowZombieBack.p3d";
		inventorySlot[]={"Vest"};
		itemInfo[]={"Clothing", "Vest"};
		class ClothingTypes
		{
			male="DonutsZombies\data\arrowBack\arrowZombieBack.p3d";
			female="DonutsZombies\data\arrowBack\arrowZombieBack.p3d";
		};
	};
	class Donuts_toolHead: Clothing
	{
		scope=2;
		displayName="";
		descriptionShort="";
		model="DonutsZombies\data\tool\tool.p3d";
		inventorySlot[]={"Headgear"};
		itemInfo[]={"Clothing", "Headgear"};
		class ClothingTypes
		{
			male="DonutsZombies\data\tool\tool.p3d";
			female="DonutsZombies\data\tool\tool.p3d";
		};
	};
	class Donuts_butcherHead: Clothing
	{
		scope=2;
		displayName="";
		descriptionShort="";
		model="DonutsZombies\data\butcher\butcher.p3d";
		inventorySlot[]={"Headgear"};
		itemInfo[]={"Clothing", "Headgear"};
		class ClothingTypes
		{
			male="DonutsZombies\data\butcher\butcher.p3d";
			female="DonutsZombies\data\butcher\butcher.p3d";
		};
	};
	class Donuts_arrowHead: Clothing
	{
		scope=2;
		displayName="";
		descriptionShort="";
		model="DonutsZombies\data\arrowHead\arrowZombieHead.p3d";
		inventorySlot[]={"Headgear"};
		itemInfo[]={"Clothing", "Headgear"};
		class ClothingTypes
		{
			male="DonutsZombies\data\arrowHead\arrowZombieHead.p3d";
			female="DonutsZombies\data\arrowHead\arrowZombieHead.p3d";
		};
	};
};

class CfgSoundShaders
{
	class Donuts_Blind_SoundShader
	{
		samples[] = {{"DonutsZombies\Sounds\blind.ogg",1}};
		volume = 2.5;
		range = 150;
	};
};

class CfgSoundSets
{
	class Donuts_Blind_SoundSet
	{
		soundShaders[] = {"Donuts_Blind_SoundShader"};
		volumeFactor = 1.0;
		spatial = 1;
		loop = 0;
	};
};
