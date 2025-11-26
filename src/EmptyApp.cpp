#include "EmptyApp.h"
#include "../KMiniEngine/include/Assets/Components/Transform.h"
#include "Scene/GameObject.h"

void EmptyApp::Begin()
{
    m_MainScene = new Core::GameScene(100);

    m_gameObject1 = m_MainScene->CreateGameObject();
    Scene::GameObject* gameObject2 = m_MainScene->CreateGameObject();
    Scene::GameObject* gameObject3 = m_MainScene->CreateGameObject();

    m_gameObject1->AddComponent<Assets::Components::Transform>();

    gameObject2->AddComponent<Assets::Components::Transform>();

    gameObject3->AddComponent<Assets::Components::Transform>();
}

void EmptyApp::Update(const float deltaTime)
{
    m_MainScene->Update(deltaTime);
    std::cout << deltaTime << "\n" << std::flush;
    auto& t = m_gameObject1->GetComponent<Assets::Components::Transform>();
}

void EmptyApp::End()
{

}