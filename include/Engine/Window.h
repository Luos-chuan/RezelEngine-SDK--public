#pragma once
#include <GLFW/glfw3.h>
#include "../Core.h"
#include "../Log/Log.h"
#include "../Event/Event.h"
namespace engine
{
	class REZEL_API Window
	{
	public:
		GLFWwindow* window;
		int fbw, fbh;
	public:
		Window(int width, int height);
		~Window();
		void OnUpdate();
	};
}