#include "GlobalNamespace/BeatmapObjectSpawnMovementData.hpp"

namespace MappingExtensions {
    class BeatmapObjectsTransform {
    public:
        static UnityEngine::Vector3 ObstacleOffset(GlobalNamespace::BeatmapObjectSpawnMovementData *const self, int32_t noteLineIndex, GlobalNamespace::NoteLineLayer noteLineLayer);
    };
}
