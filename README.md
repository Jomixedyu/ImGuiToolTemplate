# ImGuiToolTemplate
 


UIUpdate.cpp

```c++
void _UIWindowInit(char* title, int* weight, int* height)
{
    ::strcpy_s(title, 256, __PROJECT_NAME);
    *weight = 400;
    *height = 600;
}

void _UIStyleInit()
{
    ImGui::StyleColorsDark();
    ImGuiStyle& style = ImGui::GetStyle();
    style.FrameRounding = 12;
}

void _UIUpdate()
{
    ImGui::Text("���磬���");
    if (ImGui::Button("Hello world!", {-1,0}))
    {

    }
}
```