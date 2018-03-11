#pragma once

#include "settings.h"
#include "SDK/SDK.h"

#include "ATGUI/atgui.h"

#include "../lib/ImGUI/imgui.h"
#include "../lib/ImGUI/imgui_impl_sdl.h"
#include "../lib/ImGUI/imgui_internal.h"

namespace Shortcuts
{
    void PollEvent(SDL_Event* event);
    void SetKeyCodeState(ButtonCode_t code, bool bPressed);
}