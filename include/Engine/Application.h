#pragma once
namespace engine
{
	class REZEL_API Application
	{
	public:
		Application(int WindowWidth, int WindowHeight);
		~Application();
		void Run();
		Window* m_Window;
	protected: // To Programer
		virtual void Draw(); // Draw the Window
		virtual void Tick(); // Update the Window
	};
	Application* CreateApplication();
}


