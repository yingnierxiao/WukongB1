#pragma once
#include "CoreMinimal.h"
#include "BED_FSMNode_SubGraph.h"
#include "BED_FSMNode_GI_Global_SubG_GI_Loading_ToiletDedicateServer.generated.h"

UCLASS(Blueprintable)
class UBED_FSMNode_GI_Global_SubG_GI_Loading_ToiletDedicateServer : public UBED_FSMNode_SubGraph {
    GENERATED_BODY()
public:
    UBED_FSMNode_GI_Global_SubG_GI_Loading_ToiletDedicateServer();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCreateGraphNodeInCS();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetNodeDescriptionInCS() const;
    
};

