#include "BGUGhostActorBase.h"
#include "Components/PoseableMeshComponent.h"
#include "ActorCompContainer.h"
#include "ActorCompContainerCS.h"
#include "BUS_ActorConfigInfoComp.h"
#include "BUS_GhostActorDataComp.h"
#include "BUS_GuidComp.h"
#include "BUS_SaveInitDataComp.h"

ABGUGhostActorBase::ABGUGhostActorBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UPoseableMeshComponent>(TEXT("PoseableMeshComp"));
    this->ActorCompContainer = CreateDefaultSubobject<UActorCompContainer>(TEXT("ActorCompContainer"));
    this->DataComp = CreateDefaultSubobject<UBUS_GhostActorDataComp>(TEXT("GhostActorDataComp"));
    this->ActorCompContainerCS = CreateDefaultSubobject<UActorCompContainerCS>(TEXT("ActorCompContainerCS"));
    const FProperty* p_GuidComp = GetClass()->FindPropertyByName("GuidComp");
    (*p_GuidComp->ContainerPtrToValuePtr<UBUS_GuidComp*>(this)) = CreateDefaultSubobject<UBUS_GuidComp>(TEXT("GuidSystem"));
    const FProperty* p_SaveInitDataComp = GetClass()->FindPropertyByName("SaveInitDataComp");
    (*p_SaveInitDataComp->ContainerPtrToValuePtr<UBUS_SaveInitDataComp*>(this)) = CreateDefaultSubobject<UBUS_SaveInitDataComp>(TEXT("SaveInitDataSystem"));
    const FProperty* p_ActorConfigInfoComp = GetClass()->FindPropertyByName("ActorConfigInfoComp");
    (*p_ActorConfigInfoComp->ContainerPtrToValuePtr<UBUS_ActorConfigInfoComp*>(this)) = CreateDefaultSubobject<UBUS_ActorConfigInfoComp>(TEXT("ActorConfigInfoSystem"));
    this->PoseableMeshComp = (UPoseableMeshComponent*)RootComponent;
}


