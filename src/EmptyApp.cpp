#include "EmptyApp.h"
#include "Core/ECS/Components/Transform.h"
#include "Scene/GameObject.h"

void EmptyApp::Begin()
{
    m_MainScene = new Core::GameScene(100);

    Scene::GameObject* gameObject = m_MainScene->CreateGameObject();
    gameObject->AddComponent<Core::ECS::Components::Transform>();
    gameObject->RemoveComponent<Core::ECS::Components::Transform>();
}

void EmptyApp::Update()
{

}

void EmptyApp::End()
{

}