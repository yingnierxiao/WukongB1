#include "CLSDirectionalLightData.h"

FCLSDirectionalLightData::FCLSDirectionalLightData() {
    this->bValid = false;
    this->Intensity = 0.00f;
    this->bAffectsWorld = false;
    this->CastShadows = false;
    this->CastStaticShadows = false;
    this->CastDynamicShadows = false;
    this->bAffectTranslucentLighting = false;
    this->bTransmission = false;
    this->bCastVolumetricShadow = false;
    this->bCastDeepShadow = false;
    this->CastRaytracedShadow = ECastRayTracedShadow::Disabled;
    this->bAffectReflection = false;
    this->bAffectGlobalIllumination = false;
    this->DeepShadowLayerDistribution = 0.00f;
    this->IndirectLightingIntensity = 0.00f;
    this->VolumetricScatteringIntensity = 0.00f;
    this->SamplesPerPixel = 0;
    this->Temperature = 0.00f;
    this->MaxDrawDistance = 0.00f;
    this->MaxDistanceFadeRange = 0.00f;
    this->bUseTemperature = false;
    this->SpecularScale = 0.00f;
    this->ShadowResolutionScale = 0.00f;
    this->ShadowBias = 0.00f;
    this->ShadowSlopeBias = 0.00f;
    this->ShadowSharpen = 0.00f;
    this->ContactShadowLength = 0.00f;
    this->ContactShadowLengthInWS = false;
    this->CastTranslucentShadows = false;
    this->bCastShadowsFromCinematicObjectsOnly = false;
    this->bAffectDynamicIndirectLighting = false;
    this->bForceCachedShadowsForMovablePrimitives = false;
    this->LightFunctionMaterial = NULL;
    this->IESTexture = NULL;
    this->bUseIESBrightness = false;
    this->IESBrightnessScale = 0.00f;
    this->LightFunctionFadeDistance = 0.00f;
    this->DisabledBrightness = 0.00f;
    this->bEnableLightShaftBloom = false;
    this->BloomScale = 0.00f;
    this->BloomThreshold = 0.00f;
    this->BloomMaxBrightness = 0.00f;
    this->bUseRayTracedDistanceFieldShadows = false;
    this->RayStartOffsetDepthScale = 0.00f;
    this->ShadowCascadeBiasDistribution = 0.00f;
    this->bEnableLightShaftOcclusion = false;
    this->OcclusionMaskDarkness = 0.00f;
    this->OcclusionDepthRange = 0.00f;
    this->DynamicShadowDistanceMovableLight = 0.00f;
    this->DynamicShadowDistanceStationaryLight = 0.00f;
    this->DynamicShadowCascades = 0;
    this->CascadeDistributionExponent = 0.00f;
    this->CascadeTransitionFraction = 0.00f;
    this->ShadowDistanceFadeoutFraction = 0.00f;
    this->bUseInsetShadowsForMovableObjects = false;
    this->FarShadowCascadeCount = 0;
    this->FarShadowDistance = 0.00f;
    this->DistanceFieldShadowDistance = 0.00f;
    this->LightSourceAngle = 0.00f;
    this->LightSourceSoftAngle = 0.00f;
    this->ShadowSourceAngleFactor = 0.00f;
    this->TraceDistance = 0.00f;
    this->bAtmosphereSunLight = false;
    this->AtmosphereSunLightIndex = 0;
    this->bPerPixelAtmosphereTransmittance = false;
    this->bCastShadowsOnClouds = false;
    this->bCastShadowsOnAtmosphere = false;
    this->bCastCloudShadows = false;
    this->CloudShadowStrength = 0.00f;
    this->CloudShadowOnAtmosphereStrength = 0.00f;
    this->CloudShadowOnSurfaceStrength = 0.00f;
    this->CloudShadowDepthBias = 0.00f;
    this->CloudShadowExtent = 0.00f;
    this->CloudShadowMapResolutionScale = 0.00f;
    this->CloudShadowRaySampleCountScale = 0.00f;
    this->bCastModulatedShadows = false;
    this->ShadowAmount = 0.00f;
}

