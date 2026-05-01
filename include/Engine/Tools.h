#pragma once
#include <vector>
namespace engine
{
	struct Vector2D
	{
		double x;
		double y;
	};
	struct Position
	{
		double x;
		double y;
	};
	struct Rotation
	{
		double angle;
	};
	struct Scale
	{
		double X;
		double Y;
	};
	struct Transform
	{
		Position position;
		Rotation rotation;
		Scale scale;
	};
	struct Material
	{
		double red;
		double green;
		double blue;
	};
}