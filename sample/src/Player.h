#pragma once
#include "Rezel/Event/Event.h"
#include "Rezel/Cube/Cube.h"
#include <Rezel/Tools.h>
#include "Engine/Engine.h"
class Player : public engine::Event, public engine::Cube
{
public:
	Player(GLFWwindow* window, engine::Material color, engine::Transform transform);
	~Player();
	void Update() override;
	void Draw() override;
};

