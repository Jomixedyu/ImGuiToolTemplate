﻿#include "Main.h"
#include "UIMain.h"
#include <string>
#include <iostream>
#include <CoreLib/CoreLib.h>
#include <CoreLib.Serialization/JsonSerializer.h>
#include <CoreLib.Serialization/DataSerializer.h>
#include <imgui/imgui.h>

using namespace std;
using namespace jxcorlib;


void UIMain_WindowInit(char* title, int* width, int* height)
{
    ::strcpy_s(title, 256, __PROJECT_NAME);
    *width = 400;
    *height = 600;
}

void UIMain_StyleInit()
{
    ImGui::StyleColorsDark();
    ImGuiStyle& style = ImGui::GetStyle();
    style.FrameRounding = 12;
}

void UIMain_OnGui()
{
    ImGui::Text("世界，你好");
    if (ImGui::Button("Hello world!", {-1,0}))
    {

    }
}

void UIMain_Terminate()
{
}
