#pragma once
namespace engine
{
	class Cube
	{
	public:
		Material color;
		Cube(GLFWwindow* window, Material color, Transform transform);
		virtual void Draw() override; // Draw the Cube
		virtual void Update() override // Update the Cube
		{
		}
	protected:
		Transform Rect; // Rect for change Transform
	};
}


