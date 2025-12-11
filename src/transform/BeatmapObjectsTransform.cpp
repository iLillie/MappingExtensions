#include "BeatmapObjectsTransform.hpp"

#include "GlobalNamespace/StaticBeatmapObjectSpawnMovementData.hpp"
#include "sombrero/shared/FastVector3.hpp"

namespace MappingExtensions {
    UnityEngine::Vector3 BeatmapObjectsTransform::ObstacleOffset(
        GlobalNamespace::BeatmapObjectSpawnMovementData* const self, int32_t noteLineIndex, GlobalNamespace::NoteLineLayer noteLineLayer
    ) {
        return Sombrero::FastVector3(self->_rightVec) * (static_cast<float>(-self->noteLinesCount + 1) * .5f +
                static_cast<float>(noteLineIndex) * (GlobalNamespace::StaticBeatmapObjectSpawnMovementData::kNoteLinesDistance / 1000.f)) +
                Sombrero::FastVector3(0, GlobalNamespace::StaticBeatmapObjectSpawnMovementData::LineYPosForLineLayer(noteLineLayer) +
                        GlobalNamespace::StaticBeatmapObjectSpawnMovementData::kObstacleVerticalOffset, 0);
    }

}
