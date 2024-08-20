#pragma once
namespace Mod_Hub_Base
{
	extern bool Godmode;
	extern bool Invisible;
	extern bool moneyloop2;
	extern bool SuperJump;
	extern bool NeverWanted;
	extern bool InfinityAmmo;
	extern bool VehInvisible;
	extern bool WalkOnWater;
	extern bool FlyCar;
	extern bool SuperRun;
	extern bool RandomOutfit;
	extern bool NoClip;
	extern bool RevHornBoost;
	extern bool UpHornBoost; 
	extern bool SuperMan;
	extern bool DownHornBoost;
	extern bool SCREENEFFECT;
	extern bool ExplosiveAmmo;
	extern bool yogafly;
	extern bool MoneyGun;
	extern bool HornBoost;
	extern bool TeleportGun;
	extern bool AirstrikeGun;
	extern bool GravityGun;
	extern bool WaterGun;
	extern bool PedGun;
	extern bool InfiniteAmmo;
	extern bool OffRadar;
	extern bool KickProtec;
	extern bool UnlockAll;
	extern bool CarColor;
	extern bool Shower;
	extern bool AimBot;
	extern bool NoGravity;
	extern bool ClownGun;
	extern bool ExpGun;
	extern bool DriveOnWater;
	extern bool VehicleJump;
	extern bool JumpingVehicles;
	extern bool NoRagdoll;
	extern bool ThermalVision;
	extern bool NightVision;
	extern bool KillPeds;
	extern bool AutoFlip;
	extern bool AutoFix;
	extern bool VehicleGodmode;
	extern bool DriftMode;
	extern bool DestroyGun;
	extern bool PlayerFly;
	extern bool TinyGun;
	extern bool Crash;
	extern bool InfLoad;
	extern bool BlockCayo;
	extern bool Freeze;
	extern bool ExplosionBlock;
	extern bool FireBlock;
	extern bool WeaBlock;
	extern bool WeaponBlock;
	extern bool ReportBlock;
	extern bool apBlock;
	extern bool GlitchVehicle;
	extern bool DriveUnderWater;
	extern bool NinjaJump;
	extern bool FPS;
	extern bool Version;
	extern bool Gamev;
	extern bool SpectatePlayer;
	extern bool Collision;
	extern bool DestroyPhone;
	extern bool MobileRadio;
	extern bool HideHud;
	extern bool ESPBox;
	extern bool ESPLine;
	extern bool SlowMotion;
	inline float g_Height{ 1.f };
	inline float g_Width{ 1.f };
	extern bool FootTrails;
	extern bool VehicleTrails;
	extern bool AlwaysWanted;
	extern bool Flash;
	void vehicle_acrobatics(int type);
	inline float handscale{ 0.5f };
	extern bool HandTrails;
	extern bool RapidFire;
	inline float handred{ 255.f };
	inline float handgreen{ 0.f };
	inline float handblue{ 0.f };
	extern bool DesyncProtection;
	extern bool SpectatePlayer2;
	void vehcrash();
	extern bool RapidFire;
	extern bool YoinkGun;
	extern bool RainbowCamo;
	extern bool LaserSight;
	extern bool AlwaysRagdoll;
	extern bool Blackout;
	extern bool DeadEye;
	extern bool Spedometer;
	extern bool PlayerNames;
	extern bool JumpAround;
	extern bool SuperBrakes;
	extern bool ExploAm;
	extern bool AntiAFK;
	extern bool CopsTurn;
	extern bool Snowing;
	extern bool UFOEvent;
	extern bool ScriptEventsProtection;
	extern bool SeatBelt;
	inline float hred{ 0.f };
	inline float hgreen{ 0.f };
	inline float hblue{ 0.f };
	inline float halpha{ 255.f };
	void seth();
	extern bool FlashRun;
	extern bool Tinyp;
	extern bool autoclean;
	extern bool Force;
	inline int breedtime;
	extern bool FireNow;
	extern bool NoBike;
	void waypoint();
	extern bool JustGun;
	extern bool Moneyloop;
	extern bool NightclubSafe;
	void setPlayerLevel(int level);
	void setInstantLevel(int level);
	inline int custom_level = 0;
	extern bool CartoonGun;
	extern bool VehGun;
	void PTFXCALL(char* call1, char* call2, char* name);
	extern bool setValkyire;
	extern bool mcGun;
	extern bool AllESP;
	extern bool Allbox;
	void TPtoCoords(Vector3 Coords);
	extern bool AutoTP;
	extern bool BypassArea;
	inline float m_Red{ 0.f };
	inline float m_Green{ 0.f };
	inline float m_Blue{ 0.f };
	extern bool Glowing;
	extern bool Rage;
	extern bool Orbit;
	extern bool PedFlag1;
	extern bool PedFlag2;
	extern bool PedFlag3;
	extern bool PedFlag4;
	extern bool PedFlag5;
	inline int testa;
	inline int testb;
	inline int testc;
	inline int testd;
	inline int teste;
	inline int testf;
	inline int testg;
	inline int testh;
	inline int testi;
	inline int testj;
	inline int testk;
	inline int testl;
	inline int testm;
	inline int testn;
	inline int testo;
	extern bool Dominos;
	extern bool PotatoMode;
	extern bool Wow;
	extern bool Wuw;
	extern bool ModWater;
	inline std::vector<Vector3> positions;
	inline int g_RedPaint{ 0 };
	inline int g_BluePaint{ 255 };
	inline int g_GreenPaint{ 0 };
	inline float m_Range{ 0.1f };
	inline float m_Intensity{ 1000.f };
	extern bool Pgun;
	extern bool Three_Veh;
	extern bool CloneProtection;
	inline int g_Alpha{ 255 };
	void Alpha();
	extern bool ForceGun;
	inline const char* wepattach[] = {
    "Add All", "Remove All"
	};
	inline std::size_t _wepattach = 0;
	void attachements();
	extern bool SpinBot;


	void Function_update_Loop();



	//=================
	// PED FUNCTIONS
	//=================

	void drawstring(char* text, float X, float Y);
	void setupdraw(bool outline);

	Ped ClonePed(Ped ped);
	Ped CreatePed(char* PedName);

	//Animations
	void LoadAnim(char* dict);
	void playAnimation(Ped ped, bool loop, char* dict, char* anim);

	//SKINS
	bool applyChosenSkin(std::string skinName);

	//CONTROL
	void RequestControlOfEnt(Entity entity);
	void RequestControlOfid(Entity netid);

	//FORCE
	void ApplyForceToEntity(Entity e, float x, float y, float z);

	//CALM PEDS
	void set_all_nearby_peds_to_calm();

	//NEARBY PEDS
	std::set<Ped> getNearbyPeds();
	void update_nearby_peds(Ped playerPed, int count);

	//VEHICLE
	bool get_vehicle_keyboard_result(uint* outModel);

	//little one-line function called '$' to convert $TRING into a hash-key:
	Hash $(std::string str);

	//Converts Radians to Degrees
	float degToRad(float degs);

	//quick function to get-coords-of-entity:
	Vector3 coordsOf(Entity entity);

	//quick function to get distance between 2 points:
	float distanceBetween(Vector3 A, Vector3 B);

	//quick "get random int in range 0-x" function:
	int rndInt(int start, int end);

	//KEYBOARD
	std::string show_keyboard(char* title_id, char* prepopulated_text);

	//VECTOR/FLOAT
	bool is_ped_shooting(Ped ped);
	Vector3 rot_to_direction(Vector3* rot);
	Vector3 add(Vector3* vectorA, Vector3* vectorB);
	Vector3 multiply(Vector3* vector, float x);
	float get_distance(Vector3* pointA, Vector3* pointB);
	float get_vector_length(Vector3* vector);

	//NOTIFICATION
	void notifyBottom(char* fmt, ...);
	void notifyBottom(std::string str);
	void notifyMap(char* fmt, ...);
	void notifyMap(std::string str);
	void notifyCenter(char* fmt, ...);
	void notifyCenter(std::string str);
	void update_status_text();
	void notifyleft(char* msg);
	void notify_Custom(char* Head_txt, char* fmt, ...);
	void notify_Original(char* fmt, ...);
	void notify_Red(char* fmt, ...);
	void notify_Green(char* fmt, ...);
	void welcomescreen(char* fmt, ...);

	// Header
	extern bool HeaderImage;
	char* Add_Strings(char* string1, char* string2);
	std::string Documents_Patha();

	//DRAWING FUNCTIONS
	void draw_rect(float A_0, float A_1, float A_2, float A_3, int A_4, int A_5, int A_6, int A_7);
	void draw_menu_line(std::string caption, float lineWidth, float lineHeight, float lineTop, float lineLeft, float textLeft, bool active, bool title, bool rescaleText = true);


	void AddTimeNetwork(int, int, int);

	inline LPCSTR AllWeapons[] = {
	"WEAPON_KNIFE", "WEAPON_NIGHTSTICK", "WEAPON_HAMMER", "WEAPON_BAT", "WEAPON_GOLFCLUB", "WEAPON_CROWBAR",
	"WEAPON_PISTOL", "WEAPON_COMBATPISTOL","weapon_hatchet", "weapon_battleaxe","weapon_stone_hatchet", "WEAPON_APPISTOL", "WEAPON_PISTOL50", "WEAPON_MICROSMG", "WEAPON_SMG",
	"WEAPON_ASSAULTSMG", "WEAPON_ASSAULTRIFLE", "WEAPON_CARBINERIFLE", "WEAPON_ADVANCEDRIFLE", "WEAPON_MG",
	"WEAPON_COMBATMG", "WEAPON_PUMPSHOTGUN", "WEAPON_SAWNOFFSHOTGUN", "WEAPON_ASSAULTSHOTGUN", "WEAPON_BULLPUPSHOTGUN",
	"WEAPON_STUNGUN", "WEAPON_SNIPERRIFLE", "WEAPON_HEAVYSNIPER", "WEAPON_GRENADELAUNCHER", "WEAPON_GRENADELAUNCHER_SMOKE",
	"WEAPON_RPG", "WEAPON_MINIGUN", "WEAPON_GRENADE", "WEAPON_STICKYBOMB", "WEAPON_SMOKEGRENADE", "WEAPON_BZGAS",
	"WEAPON_MOLOTOV", "WEAPON_FIREEXTINGUISHER", "WEAPON_PETROLCAN",
	"WEAPON_SNSPISTOL", "WEAPON_SPECIALCARBINE", "WEAPON_HEAVYPISTOL", "WEAPON_BULLPUPRIFLE", "WEAPON_HOMINGLAUNCHER",
	"WEAPON_PROXMINE", "WEAPON_SNOWBALL", "WEAPON_VINTAGEPISTOL", "WEAPON_DAGGER", "WEAPON_FIREWORK", "WEAPON_MUSKET",
	"WEAPON_MARKSMANRIFLE", "WEAPON_HEAVYSHOTGUN", "WEAPON_GUSENBERG", "WEAPON_HATCHET", "WEAPON_RAILGUN",
	"WEAPON_COMBATPDW", "WEAPON_KNUCKLE", "WEAPON_MARKSMANPISTOL", "WEAPON_RAYPISTOL", "weapon_ceramicpistol", "weapon_navyrevolver", "weapon_gadgetpistol", "weapon_autoshotgun", "weapon_combatshotgun", "weapon_assaultrifle_mk2",
	"weapon_carbinerifle_mk2", "weapon_specialcarbine_mk2", "weapon_bullpuprifle_mk2", "weapon_compactrifle", "weapon_militaryrifle", "weapon_heavysniper_mk2", "weapon_marksmanrifle_mk2", "weapon_raycarbine", "weapon_minismg",
	"weapon_dbshotgun", "weapon_compactlauncher", "weapon_rayminigun", "weapon_pipebomb", "weapon_flare", "weapon_smokegrenade", "weapon_pistol_mk2", "weapon_snspistol_mk2", "weapon_revolver_mk2", "weapon_combatmg_mk2", "weapon_pumpshotgun_mk2",
	"weapon_machinepistol", "weapon_smg_mk2"
	};

	inline LPCSTR AllAttachments[] = {
		"COMPONENT_PISTOL_CLIP_02", "COMPONENT_AT_PI_FLSH", "COMPONENT_AT_PI_SUPP_02", "COMPONENT_PISTOL_VARMOD_LUXE", "COMPONENT_COMBATPISTOL_CLIP_02", "COMPONENT_AT_PI_FLSH", "COMPONENT_AT_PI_SUPP", "COMPONENT_COMBATPISTOL_VARMOD_LOWRIDER",
		"COMPONENT_APPISTOL_CLIP_02", "COMPONENT_AT_PI_FLSH", "COMPONENT_AT_PI_SUPP", "COMPONENT_APPISTOL_VARMOD_LUXE", "COMPONENT_PISTOL50_CLIP_02", "COMPONENT_AT_PI_FLSH", "COMPONENT_AT_AR_SUPP_02", "COMPONENT_PISTOL50_VARMOD_LUXE",
		"COMPONENT_REVOLVER_VARMOD_GOON", "COMPONENT_SNSPISTOL_CLIP_02", "COMPONENT_SNSPISTOL_VARMOD_LOWRIDER", "COMPONENT_HEAVYPISTOL_CLIP_02", "COMPONENT_AT_PI_FLSH", "COMPONENT_AT_PI_SUPP", "COMPONENT_HEAVYPISTOL_VARMOD_LUXE",
		"COMPONENT_REVOLVER_MK2_CLIP_INCENDIARY", "COMPONENT_AT_SIGHTS", "COMPONENT_AT_PI_FLSH", "COMPONENT_AT_PI_COMP_03", "COMPONENT_REVOLVER_MK2_CAMO_10", "COMPONENT_SNSPISTOL_MK2_CLIP_INCENDIARY", "COMPONENT_AT_PI_FLSH_03", "COMPONENT_AT_PI_RAIL_02",
		"COMPONENT_AT_PI_SUPP_02", "COMPONENT_SNSPISTOL_MK2_CAMO_10", "COMPONENT_PISTOL_MK2_CLIP_INCENDIARY", "COMPONENT_AT_PI_RAIL", "COMPONENT_AT_PI_FLSH_02", "COMPONENT_AT_PI_SUPP_02", "COMPONENT_PISTOL_MK2_CAMO_10", "COMPONENT_VINTAGEPISTOL_CLIP_02",
		"COMPONENT_AT_PI_SUPP", "COMPONENT_RAYPISTOL_VARMOD_XMAS18", "COMPONENT_CERAMICPISTOL_CLIP_02", "COMPONENT_CERAMICPISTOL_SUPP",

		"COMPONENT_MICROSMG_CLIP_02","COMPONENT_AT_PI_FLSH","COMPONENT_AT_SCOPE_MACRO","COMPONENT_AT_AR_SUPP_02","COMPONENT_MICROSMG_VARMOD_LUXE","COMPONENT_SMG_CLIP_03","COMPONENT_AT_AR_FLSH","COMPONENT_AT_SCOPE_MACRO_02","COMPONENT_AT_PI_SUPP",
		"COMPONENT_SMG_VARMOD_LUXE","COMPONENT_ASSAULTSMG_CLIP_02","COMPONENT_AT_AR_FLSH","COMPONENT_AT_SCOPE_MACRO","COMPONENT_AT_AR_SUPP_02","COMPONENT_ASSAULTSMG_VARMOD_LOWRIDER","COMPONENT_MINISMG_CLIP_02","COMPONENT_SMG_MK2_CLIP_02",
		"COMPONENT_SMG_MK2_CLIP_INCENDIARY","COMPONENT_AT_AR_FLSH","COMPONENT_AT_SIGHTS_SMG","COMPONENT_AT_MUZZLE_05","COMPONENT_AT_SB_BARREL_02","COMPONENT_SMG_MK2_CAMO_10","COMPONENT_MACHINEPISTOL_CLIP_03","COMPONENT_AT_PI_SUPP",
		"COMPONENT_COMBATPDW_CLIP_03","COMPONENT_AT_AR_FLSH","COMPONENT_AT_AR_AFGRIP","COMPONENT_AT_SCOPE_SMALL",

		"COMPONENT_AT_AR_FLSH","COMPONENT_AT_SR_SUPP","COMPONENT_PUMPSHOTGUN_VARMOD_LOWRIDER","COMPONENT_SAWNOFFSHOTGUN_VARMOD_LUXE","COMPONENT_ASSAULTSHOTGUN_CLIP_02","COMPONENT_AT_AR_FLSH","COMPONENT_AT_AR_SUPP","COMPONENT_AT_AR_AFGRIP",
		"COMPONENT_AT_AR_FLSH","COMPONENT_AT_AR_SUPP_02","COMPONENT_AT_AR_AFGRIP","COMPONENT_PUMPSHOTGUN_MK2_CLIP_INCENDIARY","COMPONENT_AT_SIGHTS","COMPONENT_AT_AR_FLSH","COMPONENT_AT_SR_SUPP_03","COMPONENT_PUMPSHOTGUN_MK2_CAMO_10",
		"COMPONENT_HEAVYSHOTGUN_CLIP_03","COMPONENT_AT_AR_FLSH","COMPONENT_AT_AR_SUPP_02","COMPONENT_AT_AR_FLSH","COMPONENT_AT_AR_SUPP",

		"COMPONENT_ASSAULTRIFLE_CLIP_03","COMPONENT_AT_AR_FLSH","COMPONENT_AT_SCOPE_MACRO","COMPONENT_AT_AR_SUPP_02","COMPONENT_AT_AR_AFGRIP","COMPONENT_ASSAULTRIFLE_VARMOD_LUXE","COMPONENT_CARBINERIFLE_CLIP_03","COMPONENT_AT_AR_FLSH",
		"COMPONENT_AT_SCOPE_MEDIUM","COMPONENT_AT_AR_SUPP","COMPONENT_AT_AR_AFGRIP","COMPONENT_CARBINERIFLE_VARMOD_LUXE","COMPONENT_ADVANCEDRIFLE_CLIP_02","COMPONENT_AT_AR_FLSH","COMPONENT_AT_SCOPE_SMALL","COMPONENT_AT_AR_SUPP",
		"COMPONENT_ADVANCEDRIFLE_VARMOD_LUXE","COMPONENT_SPECIALCARBINE_CLIP_03","COMPONENT_AT_AR_FLSH","COMPONENT_AT_SCOPE_MEDIUM","COMPONENT_AT_AR_SUPP_02","COMPONENT_AT_AR_AFGRIP","COMPONENT_SPECIALCARBINE_VARMOD_LOWRIDER",
		"COMPONENT_BULLPUPRIFLE_CLIP_02","COMPONENT_AT_AR_FLSH","COMPONENT_AT_SCOPE_SMALL","COMPONENT_AT_AR_SUPP","COMPONENT_AT_AR_AFGRIP","COMPONENT_BULLPUPRIFLE_VARMOD_LOW","COMPONENT_BULLPUPRIFLE_MK2_CLIP_02","COMPONENT_BULLPUPRIFLE_MK2_CLIP_INCENDIARY",
		"COMPONENT_AT_AR_FLSH","COMPONENT_AT_SIGHTS","COMPONENT_AT_BP_BARREL_02","COMPONENT_AT_MUZZLE_05","COMPONENT_AT_AR_AFGRIP_02","COMPONENT_BULLPUPRIFLE_MK2_CAMO_10","COMPONENT_SPECIALCARBINE_MK2_CLIP_02","COMPONENT_SPECIALCARBINE_MK2_CLIP_INCENDIARY",
		"COMPONENT_AT_AR_FLSH","COMPONENT_AT_SIGHTS","COMPONENT_AT_MUZZLE_05","COMPONENT_AT_AR_AFGRIP_02","COMPONENT_AT_SC_BARREL_02","COMPONENT_SPECIALCARBINE_MK2_CAMO_10","COMPONENT_ASSAULTRIFLE_MK2_CLIP_02","COMPONENT_ASSAULTRIFLE_MK2_CLIP_INCENDIARY"
		,"COMPONENT_AT_AR_AFGRIP_02","COMPONENT_AT_AR_FLSH","COMPONENT_AT_SIGHTS","COMPONENT_AT_MUZZLE_05","COMPONENT_AT_AR_BARREL_02","COMPONENT_ASSAULTRIFLE_MK2_CAMO_10","COMPONENT_CARBINERIFLE_MK2_CLIP_02","COMPONENT_CARBINERIFLE_MK2_CLIP_INCENDIARY"
		,"COMPONENT_AT_AR_AFGRIP_02","COMPONENT_AT_AR_FLSH","COMPONENT_AT_SIGHTS","COMPONENT_AT_MUZZLE_05","COMPONENT_AT_CR_BARREL_02","COMPONENT_CARBINERIFLE_MK2_CAMO_10","COMPONENT_COMPACTRIFLE_CLIP_03","COMPONENT_MILITARYRIFLE_CLIP_02",
		"COMPONENT_AT_SCOPE_SMALL","COMPONENT_AT_AR_FLSH","COMPONENT_AT_AR_SUPP",

		"COMPONENT_MG_CLIP_02","COMPONENT_AT_SCOPE_SMALL_02","COMPONENT_MG_VARMOD_LOWRIDER","COMPONENT_COMBATMG_CLIP_02","COMPONENT_AT_SCOPE_MEDIUM","COMPONENT_AT_AR_AFGRIP","COMPONENT_COMBATMG_VARMOD_LOWRIDER","COMPONENT_COMBATMG_MK2_CLIP_02",
		"COMPONENT_COMBATMG_MK2_CLIP_INCENDIARY","COMPONENT_AT_AR_AFGRIP_02","COMPONENT_AT_SIGHTS","COMPONENT_AT_MUZZLE_05","COMPONENT_AT_MG_BARREL_02","COMPONENT_COMBATMG_MK2_CAMO_10","COMPONENT_GUSENBERG_CLIP_02",

		"COMPONENT_AT_AR_SUPP_02","COMPONENT_AT_SCOPE_MAX","COMPONENT_SNIPERRIFLE_VARMOD_LUXE","COMPONENT_AT_SCOPE_MAX","COMPONENT_MARKSMANRIFLE_MK2_CLIP_02","COMPONENT_MARKSMANRIFLE_MK2_CLIP_INCENDIARY","COMPONENT_AT_SCOPE_LARGE_FIXED_ZOOM_MK2",
		"COMPONENT_AT_AR_FLSH","COMPONENT_AT_MUZZLE_05","COMPONENT_AT_MRFL_BARREL_02","COMPONENT_AT_AR_AFGRIP_02","COMPONENT_MARKSMANRIFLE_MK2_CAMO_10","COMPONENT_HEAVYSNIPER_MK2_CLIP_02","COMPONENT_HEAVYSNIPER_MK2_CLIP_INCENDIARY",
		"COMPONENT_AT_SCOPE_THERMAL","COMPONENT_AT_MUZZLE_09","COMPONENT_AT_SR_BARREL_02","COMPONENT_HEAVYSNIPER_MK2_CAMO_10","COMPONENT_MARKSMANRIFLE_CLIP_02","COMPONENT_AT_SCOPE_LARGE_FIXED_ZOOM","COMPONENT_AT_AR_FLSH",
		"COMPONENT_AT_AR_SUPP","COMPONENT_AT_AR_AFGRIP","COMPONENT_MARKSMANRIFLE_VARMOD_LUXE",

		"COMPONENT_AT_AR_FLSH","COMPONENT_AT_AR_AFGRIP","COMPONENT_AT_SCOPE_SMALL"

	};

	// Vector things
	//Vector3 RotationToDirectionV3(Vector3 rot);
	//Vector3 AddV3(Vector3 vectorA, Vector3 vectorB);
	//Vector3 MultiplyV3(Vector3 vector, float x);
}