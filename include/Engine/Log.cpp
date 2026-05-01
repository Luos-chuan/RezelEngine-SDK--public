#include "Log.h"
namespace engine
{
	void Log::Init()
	{
		s_Clientlogger = spdlog::stderr_color_mt("Debug:");
		s_Clientlogger->set_level(spdlog::level::debug);
	}
}