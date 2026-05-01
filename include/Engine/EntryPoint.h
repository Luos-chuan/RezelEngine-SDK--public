#pragma once
#ifdef RZ_PLATFORM_WINDOWS
#include <iostream>
extern engine::Application* engine::CreateApplication();

int main(int argc, char** argv)
{
	engine::Log::Init();
	auto app = engine::CreateApplication();
	engine::Log::GetCorelogger()->info("Init Rezel enigne");
	app->Run();
	delete app;
	return 0;
}

#endif