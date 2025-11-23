#include "EmptyApp.h"
#include "../KMiniEngine/include/Assets/Components/Rigidbody.h"
#include "../KMiniEngine/include/Assets/Components/Transform.h"
#include "Scene/GameObject.h"

void EmptyApp::Begin()
{
    m_MainScene = new Core::GameScene(100);

    m_gameObject1 = m_MainScene->CreateGameObject();
    Scene::GameObject* gameObject2 = m_MainScene->CreateGameObject();
    Scene::GameObject* gameObject3 = m_MainScene->CreateGameObject();

    m_gameObject1->AddComponent<Assets::Components::Transform>();
    m_gameObject1->AddComponent<Assets::Components::Rigidbody>();

    gameObject2->AddComponent<Assets::Components::Transform>();

    gameObject3->AddComponent<Assets::Components::Rigidbody>();
    gameObject3->AddComponent<Assets::Components::Transform>();
}

void EmptyApp::Update()
{
    m_MainScene->Update(0.0f);
    Assets::Components::Transform& t = m_gameObject1->GetComponent<Assets::Components::Transform>();
    std::cout << t.PositionVector.x << "\n" << std::flush;
}

void EmptyApp::End()
{

}