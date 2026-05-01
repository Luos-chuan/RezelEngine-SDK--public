#pragma once
namespace engine
{
	class REZEL_API Scene
	{
	public:
		Scene();
		void AddChild(Pawn* child);
		void Update();
		void Draw();
	};
}
