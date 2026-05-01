#pragma once
namespace engine
{
	enum EventType
	{
		KeySClicked,
		KeyWClicked,
		KeyAClicked,
		KeyDClicked,
		KeyJClicked,
		KeyKClicked,
		KeyLClicked,
		KeySpaceClicked,
	};
	class REZEL_API Event
	{
	public:
		Event();
		static std::vector<std::string> EventList; // This is "Press"
		static std::unordered_map<EventType, int> EventTap; // This is type
	};
}
