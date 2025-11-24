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
    void Update(const float deltaTime);
    void End();

    Core::GameScene* m_MainScene = nullptr;

private:
    Scene::GameObject* m_gameObject1 = nullptr;
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

inline void UpdateApplication(const float deltaTime)
{
    GetApplicationInstance().Update(deltaTime);
}

inline void EndApplication()
{
    GetApplicationInstance().End();
}
