#include "EmptyApp.h"
#include "Core/ECS/Entity.h"

void EmptyApp::Begin()
{
    m_MainScene = new Core::Scene();
    Core::ECS::Entity* testEntity = m_MainScene->CreateEntity();

    testEntity->AddComponent<int>();
}

void EmptyApp::Update()
{

}

void EmptyApp::End()
{

}