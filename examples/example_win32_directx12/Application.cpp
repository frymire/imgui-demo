#include "Application.h"
#include "imgui.h"

namespace MyApp {

    void RenderUI() {
        ImGui::Begin("Settings");
        ImGui::Button("Hi");
        static float value = 0.0f;
        ImGui::DragFloat("Value", &value);
        ImGui::End();

        // Leave the demo window in to browse design options during debugging.
        // Search for corresponding text labels in imgui_demo.cpp (e.g. "Basic trees").
        // NOTE: This causes errors when used with a dockspace.
#ifdef _DEBUG
        ImGui::ShowDemoWindow();
#endif
    }

}
