#include "GSGameCoustomConfig.h"

UGSGameCoustomConfig::UGSGameCoustomConfig() {
    this->ArchiveRefactor = false;
    this->DebugWidget = false;
    this->ILRuntime = true;
    this->ILRuntimeJITOnDemand = false;
    this->Clrbinding = false;
    this->ILRuntimeDebugger = false;
    this->EnableRtx = false;
    this->Report820Windows = false;
    this->ManualBuiGC = false;
    this->Report820PS5 = false;
    this->Report820XSX = false;
    this->Report820WindowsRealtime = true;
    this->ArchiveBackup = true;
    this->OverridePlayerLogMaxSize = false;
    this->DebugCFSMG = false;
    this->SimTimeMarkBase = false;
    this->SimTimeMarkStep = false;
    this->Navigation = false;
    this->Intimidation = false;
    this->OpenSeparateFrameEntityBeginPlay = true;
    this->InteractiveObj = false;
    this->DrawSimpleOverlapDebug = false;
    this->ProfilerSimpleOverlap = false;
    this->TopdownBattleMode = false;
    this->IsTmpTestFlag = false;
    this->OpenNewChapterPlayerSafeLocation = true;
    this->IsLiteBuild = false;
    this->OpenGSRepLog = false;
    this->ClientReset = true;
    this->ProfileEnable = false;
    this->Enablepreload = false;
    this->CantCloseNetConnectWithError = false;
    this->SkipRoleDataCheck = false;
    this->EnableMoveSpeedInfoDebug = false;
    this->EnablePrintJXSQCheckerResult = false;
    this->EnableChapterRoamV2 = false;
    this->ChapterDebug = false;
    this->EnableShrineAllFunc = false;
    this->EnableInteractAllFunc = false;
    this->DisableSkipInteractFunc = false;
    this->DisableSkipMontageInteractFunc = false;
    this->SpawnWaveDebug = false;
    this->BPNeutralAnimalDebug = false;
    this->PureVersion = false;
    this->PreOrderAwardDebug = false;
    this->DeluxeAwardDebug = false;
    this->DisableRpcLog = false;
    this->ActiveAllUI = true;
    this->Open1080Check = true;
    this->GSDisableLoadingScreen = false;
    this->OnlyOpenPVUI = false;
    this->AdvanceDropManualClose = false;
    this->InputDebugInfo = false;
    this->InputDebug_Window = false;
    this->InputDebug_KeyCache = false;
    this->GroupAI = false;
    this->AIInfo = false;
    this->TeamInfo = false;
    this->FollowPartnerDispInfo = false;
    this->TargetInfo = false;
    this->HatredInfo = false;
    this->AINodeDebug = false;
    this->ABPHelperInfo = false;
    this->OnlineAttr = false;
    this->OnlineUnitState = false;
    this->IsDebugDS = false;
    this->ConnectionInfo = true;
    this->PlayerDebugDraw = false;
    this->OpenNetConnectDebugUI = false;
    this->DebugGSRepRole = false;
    this->OpenEventDebugger = false;
    this->IsDebugAKB = false;
    this->IsDebugUISys = false;
    this->IsDebugUIMore = false;
    this->IsDebugUIProc = false;
    this->IsDebugWidgetMore = false;
    this->IsDebugButton = false;
    this->IsDebugAutoSizeScrollBox = false;
    this->IsDebugWidgetProfile = false;
    this->IsDebugUITick = false;
    this->IsOpenStatGSCustom = false;
    this->IsShowDebugDrawUI = false;
    this->DebugPhaseCSG = false;
    this->IsOpenBattleInfoTool = false;
    this->CancelSkillCD = false;
    this->ShowChrEnvMaskValue = false;
    this->IsOpenRemoteTestCheat = false;
    this->IsIgnoreValidateData = false;
    this->EventMemoryLeakTest = false;
    this->TickEventMemoryLeakTest = false;
    this->ObjMemoryLeakTest = false;
    this->MemoryLeakTestCacheObj = false;
    this->DebugStartWithOutArchive = false;
    this->EnableSelectChapter = false;
    this->CanOptimizeTick = true;
    this->Debug820Demo = false;
    this->Demo820OverSeaVersion = false;
    this->Demo820DebugTest = false;
    this->Demo820UseSetting = false;
    this->DebugFristStartGameSetting = false;
    this->OpenSeamlessLevelTravel = true;
    this->Demo820ExceptionUI = false;
    this->Demo820IgnoreAllOverlap = false;
    this->DebugPlayerTransLog = true;
    this->CricketBattleMode = false;
    this->CricketReportServer = false;
    this->DebugSettingLog = false;
    this->NeedGSSDKUserCheck = true;
    this->DebugTransGuideUI = false;
    this->LQALanguage = false;
    this->GSIsGlobalColorDeficiency = true;
    this->DebugGameIntent = false;
    this->ShowLoadingTimeText = false;
    this->IsNeedPsoPrecompileWhenStartGame = true;
    this->IsNeedPreStartGameProcess = true;
    this->DisableInputMessage = false;
    this->EnableUseNewTimelineForCPG = true;
    this->DebugPlayGo = false;
    this->EnablePlaneMoveMode = false;
    this->DebugPlayerGuide = false;
    this->DebugNewGamePlusGuide = false;
    this->DebugDonutAudio = false;
    this->IsOverSeaChannel = true;
    this->EnableEncrypt = true;
    this->SettingHostSimulation = false;
    this->SettingEditorSimulation = false;
    this->DevArchiveSizeCheck = true;
    this->DisableDissolveDisplay = false;
    this->ExceptionShowBtn = true;
    this->ThrowException = false;
    this->DebugSettingCvar = false;
    this->DebugReInitRoleCheck = true;
    this->DebugCollection = false;
    this->ButtonMatSyncCheck = true;
    this->OpenPastMemory = true;
    this->OpenSimpleTips = false;
    this->OpenLocalizationInEditor = false;
    this->EnableEnhancedInputDelay = true;
    this->EndingCreditsUseJson = false;
    this->HideMiniGMSequenceTab = true;
    this->GSWithBink = true;
    this->BenckMarkOnly = false;
    this->BenckMarkLoop = false;
    this->DamageLogic = false;
    this->DropItem = false;
    this->Secret = true;
    this->EntitySharedRefLeakDetect = false;
    this->TaskGroup = false;
    this->NPC = false;
    this->ActiveManageUI = true;
    this->GymModeInWindows = false;
    this->GSSdkEnableCETesting = false;
    this->KAServerUseTcp = true;
    this->NeedLauncher = false;
    this->HideCrashReportClientUi = true;
    this->GSSdkReportUseCSharpHttp = false;
    this->GSSdkReportUseAsyncHttp = false;
    this->GSSdkReportEnable = true;
    this->GSSdkReportDisableHttpRequest = false;
    this->GSSdkEnableSensDataClean = false;
    this->GSSdkEnableMonitor = true;
    this->GSSdkEnablePerf = true;
    this->SentryDebug = false;
    this->SentryEnable = true;
    this->SentryEnableTracing = false;
    this->SentryCaptureFailRequests = false;
    this->SentryUseLocalCacheFile = false;
    this->PlatformEventSendIntervalMilliSecond = 2000;
    this->PlatformEventTimeoutMilliSecond = 60000;
    this->PlayerLogMaxSize = 50;
    this->ReportTimeout = 10;
    this->UseDebugTamerConfig = 0;
    this->HideLockTarget = 1;
    this->EventWarningLevel = 0;
    this->DebugOnlineLevelId = 0;
    this->UITickProfileLevel = 0;
    this->CollectionForceType = 0;
    this->LockDesiredPlayerHP = 0;
    this->Demo820PlayCountMax = 0;
    this->CricketBattleModeType = 2;
    this->LoadingMaxTime = 300;
    this->LoadingMaxTimeShowTips = 180;
    this->EnsureReportInterval = 60;
    this->DevArchiveSizeMax = 5242880;
    this->DebugOverSeaType = 0;
    this->WaitMSToThrowException = 10000;
    this->UpdateUserConfigInterval = 5;
    this->DebugGameCount = 0;
    this->WeaponBuildMode = 1;
    this->EnhancedInputDelayTime = 30;
    this->EnhancedInputSpecialDelayTime = 50;
    this->MediaPlayerSyncToleranceMS = 500;
    this->MediaPlayerSyncCDMS = 3000;
    this->BenckMarkGPULow = 40;
    this->ForceEnableDebugGMFlags = 0;
    this->KAServerPort = 12800;
    this->GSSdkReportMergeBatchEventNum = 300;
    this->GSSdkReportMergeBatchIntervalSeconds = 60;
    this->EnableAllGMCMDAndDebug = TEXT("b.WTF");
    this->DebugDrawTag = TEXT("Seq,");
    this->FileIOStrategy = TEXT("UGSFileHelper");
    this->FAQWebsiteLink = TEXT("https://www.heishenhua.com/support");
    this->FileMd5CheckIgnorePathPattern = TEXT("/Saved/,/Logs/,b1/Tools/");
    this->KAServerHost = TEXT("gshb.b1.gamesci.com.cn");
    this->DevGamesciLoginServerUrl = TEXT("http://gslogin.b1.gamesci.com.cn:19912");
    this->Environment = TEXT("dev");
    this->GSSdkCDNRootUrlList = TEXT("http://gsbasecdn.gs.com/gs_cdn/build/upload/b1pbtable_cdn");
    this->GSSdkEnvServerUrlList = TEXT("http://gssdk.b1.gamesci.com.cn:9812");
    this->GSSdkAppChannel = TEXT("gamesci");
    this->GSSdkLoginChannel = TEXT("gamesci");
    this->SentryDSN = TEXT("http://bdca0e842c6806e70e718e79641b3fbf@sentry.gs.com/6");
    this->SentryHostBackup = TEXT("heishenhua.com:gamesci.com.cn");
    this->SentrySampleRate = TEXT("1.0");
}


