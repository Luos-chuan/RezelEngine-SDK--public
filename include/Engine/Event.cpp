#include "Event.h"

namespace engine
{
	std::unordered_map<EventType, int> Event::EventTap =
	{
		{KeySClicked, 0},
		{KeyWClicked, 1},
		{KeyAClicked, 2},
		{KeyDClicked, 3},
		{KeyJClicked, 4},
		{KeyKClicked, 5},
		{KeyLClicked, 6},
		{KeySpaceClicked, 7},
	};
}


