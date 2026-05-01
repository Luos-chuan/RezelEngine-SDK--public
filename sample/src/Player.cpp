#include "Player.h"
#include <Rezel/Log/Log.h>
#include <iostream>
Player::Player(GLFWwindow* window, engine::Material color, engine::Transform transform) : engine::Cube(window, color, transform)
{

}
Player::~Player()
{

}
void Player::Update()
{
	if (KEY_S == "press" || KEY_S == "repeat")
	{
		engine::Log::GetClientlogger()->info("S key pressed");
		Cube::Rect.position.y -= 10.0f;
	}
	if (KEY_W == "press" || KEY_W == "repeat")
	{
		engine::Log::GetClientlogger()->info("W key pressed");
		Cube::Rect.position.y += 10.0f;
	}
	if (KEY_A == "press" || KEY_A == "repeat")
	{
		engine::Log::GetClientlogger()->info("A key pressed");
		Cube::Rect.position.x -= 10.0f;
	}
	if (KEY_D == "press" || KEY_D == "repeat")
	{
		engine::Log::GetClientlogger()->info("D key pressed");
		Cube::Rect.position.x += 10.0f;
	}
}
// This "This_transform" didn't need to be used, I used it because Pawn need it.
void Player::Draw()
{
	engine::Cube::Draw();
}