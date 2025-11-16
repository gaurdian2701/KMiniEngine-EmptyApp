#pragma once
#include "KMiniEngine.h"
#include "Core/GameScene.h"

class Application;

class EmptyApp : public Application
{
public:
    EmptyApp() = default;
    ~EmptyApp() = default;

    void Begin();
    void Update();
    void End();

    Core::Scene* m_MainScene = nullptr;
};

static EmptyApp& GetApplicationInstance()
{
    static EmptyApp app;
    return app;
}

inline Application& CreateApplication()
{
    return GetApplicationInstance();
}

inline void BeginApplication()
{
    GetApplicationInstance().Begin();
}

inline void UpdateApplication()
{
    GetApplicationInstance().Update();
}

inline void EndApplication()
{
    GetApplicationInstance().End();
}
