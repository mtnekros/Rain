#pragma once
#include "Graphics.h"

class Raindrops
{
public:
	Raindrops() = default;
	Raindrops( float x, float y, float width, float height );
	void Draw(Graphics& gfx) const;
private:
	float y;
	float x;
	float width;
	float height;
	constexpr static Color c = Colors::Red;
};