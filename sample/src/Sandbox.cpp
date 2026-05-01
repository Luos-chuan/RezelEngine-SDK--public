#include <Rezel.h>
#include <iostream>
#include "Player.h"
int width = 1000;
int height = 700;
class Sandbox : public engine::Application
{

public:
	Player* player;
	engine::Scene* scene1;
	Sandbox()
		: engine::Application(width, height),
		  player(nullptr),
		  scene1(nullptr)
	{
		player = new Player(m_Window->window,
				engine::Material{ 1.0f, 1.0f, 1.0f },
				engine::Transform{
				engine::Position{0.0f, 0.0f},
				engine::Rotation{0.0f},
				engine::Scale{100.0f, 100.0f} 
			}
		);
		scene1 = new engine::Scene();
		scene1->AddChild(player);
	}
	void Tick()
	{
		scene1->Update();
	}
	void Draw()
	{
		scene1->Draw();
	}
};

engine::Application* engine::CreateApplication()
{
	return new Sandbox();
}