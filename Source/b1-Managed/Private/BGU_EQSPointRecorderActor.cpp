#include "BGU_EQSPointRecorderActor.h"
#include "Components/SceneComponent.h"
#include "ActorCompContainer.h"
#include "ActorCompContainerCS.h"
#include "BUS_ActorBaseDataComp.h"
#include "BUS_ActorConfigInfoComp.h"
#include "BUS_GuidComp.h"
#include "BUS_SaveInitDataComp.h"

ABGU_EQSPointRecorderActor::ABGU_EQSPointRecorderActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->ActorCompContainer = CreateDefaultSubobject<UActorCompContainer>(TEXT("ActorCompContainer"));
    this->DataComp = CreateDefaultSubobject<UBUS_ActorBaseDataComp>(TEXT("EQSPointRecorderDataComp"));
    this->ActorCompContainerCS = CreateDefaultSubobject<UActorCompContainerCS>(TEXT("ActorCompContainerCS"));
    const FProperty* p_GuidComp = GetClass()->FindPropertyByName("GuidComp");
    (*p_GuidComp->ContainerPtrToValuePtr<UBUS_GuidComp*>(this)) = CreateDefaultSubobject<UBUS_GuidComp>(TEXT("GuidSystem"));
    const FProperty* p_SaveInitDataComp = GetClass()->FindPropertyByName("SaveInitDataComp");
    (*p_SaveInitDataComp->ContainerPtrToValuePtr<UBUS_SaveInitDataComp*>(this)) = CreateDefaultSubobject<UBUS_SaveInitDataComp>(TEXT("SaveInitDataSystem"));
    const FProperty* p_ActorConfigInfoComp = GetClass()->FindPropertyByName("ActorConfigInfoComp");
    (*p_ActorConfigInfoComp->ContainerPtrToValuePtr<UBUS_ActorConfigInfoComp*>(this)) = CreateDefaultSubobject<UBUS_ActorConfigInfoComp>(TEXT("ActorConfigInfoSystem"));
    this->Root = (USceneComponent*)RootComponent;
    this->LocalMode = false;
    this->RelativeTarget = NULL;
    this->GeneratePointsEQSTemplate = NULL;
    this->PreviewActor = NULL;
    this->bRunQueryWhenMove = false;
    this->bOnlyUpdateWhenMoveFinish = false;
    this->bEnableDebug = false;
}

void ABGU_EQSPointRecorderActor::ClearRecord() {
}

void ABGU_EQSPointRecorderActor::RunEQSQuery() {
}

void ABGU_EQSPointRecorderActor::RecordEQSPoints() {
}

void ABGU_EQSPointRecorderActor::ClearSpawnPoints() {
}

void ABGU_EQSPointRecorderActor::ClearCustomPoints() {
}

void ABGU_EQSPointRecorderActor::RecordCustomPoints() {
}

void ABGU_EQSPointRecorderActor::PreviewCustomPoints() {
}

void ABGU_EQSPointRecorderActor::ClearGenerateEQSActors() {
}

void ABGU_EQSPointRecorderActor::PreviewRecordSpawnPoints() {
}

void ABGU_EQSPointRecorderActor::BeginPlayCS_Implementation() {
}

void ABGU_EQSPointRecorderActor::OnPostEditMove_Implementation(bool bFinish) {
}

void ABGU_EQSPointRecorderActor::ReceiveDestroyed_Implementation() {
}


