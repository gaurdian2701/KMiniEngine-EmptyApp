#include "EmptyApp.h"
#include "Core/ECS/Components/Rigidbody.h"
#include "Core/ECS/Components/Transform.h"
#include "Scene/GameObject.h"

void EmptyApp::Begin()
{
    m_MainScene = new Core::GameScene(100);

    Scene::GameObject* gameObject1 = m_MainScene->CreateGameObject();
    Scene::GameObject* gameObject2 = m_MainScene->CreateGameObject();
    Scene::GameObject* gameObject3 = m_MainScene->CreateGameObject();

    gameObject1->AddComponent<Core::ECS::Components::Transform>();
    gameObject1->AddComponent<Core::ECS::Components::Rigidbody>();
    gameObject2->AddComponent<Core::ECS::Components::Transform>();
    gameObject3->AddComponent<Core::ECS::Components::Rigidbody>();
    gameObject3->AddComponent<Core::ECS::Components::Transform>();

    auto& array = m_MainScene->GetECSManager().GetSmallestEntityArray<Core::ECS::Components::Transform>();

    gameObject1->RemoveComponent<Core::ECS::Components::Transform>();

    delete gameObject1;
}

void EmptyApp::Update()
{

}

void EmptyApp::End()
{

}