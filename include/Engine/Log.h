#pragma once
namespace engine
{
	class REZEL_API Log
	{
	public:
		inline static std::shared_ptr<spdlog::logger>& GetClientlogger() { return s_Clientlogger; }
	private:
		static std::shared_ptr<spdlog::logger> s_Clientlogger;
	};
}
