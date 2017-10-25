// Copyright(c) 2017 POLYGONTEK
// 
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
// 
// http ://www.apache.org/licenses/LICENSE-2.0
// 
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "Precompiled.h"
#include "Game/GameSettings/GameSettings.h"

BE_NAMESPACE_BEGIN

ABSTRACT_DECLARATION("Game Settings", GameSettings, Object)
BEGIN_EVENTS(GameSettings)
END_EVENTS
BEGIN_PROPERTIES(GameSettings)
END_PROPERTIES

#ifdef NEW_PROPERTY_SYSTEM
void GameSettings::RegisterProperties() {
}
#endif

GameSettings::GameSettings() {
}

void GameSettings::Init() {
    // Mark as initialized
    SetInitialized(true);
}

void GameSettings::PropertyChanged(const char *classname, const char *propName) {
}

BE_NAMESPACE_END