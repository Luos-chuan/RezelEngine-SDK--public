#pragma once
namespace engine
{
	class REZEL_API Pawn
	{
	public:
		Pawn(Transform transform);
		virtual void Update();
		virtual void Draw();
	};
}

