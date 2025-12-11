#include "GlobalNamespace/BeatmapObjectSpawnMovementData.hpp"

namespace MappingExtensions {
    class BeatmapObjectsTransform {
    public:
        static UnityEngine::Vector3 ObstacleOffset(GlobalNamespace::BeatmapObjectSpawnMovementData *const self, int32_t noteLineIndex, GlobalNamespace::NoteLineLayer noteLineLayer);
        static UnityEngine::Vector3 NoteOffset(GlobalNamespace::BeatmapObjectSpawnMovementData *const self, int32_t noteLineIndex, const GlobalNamespace::NoteLineLayer noteLineLayer);
    };
}
