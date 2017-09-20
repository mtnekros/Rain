#pragma once
#include "Graphics.h"

class Raindrops
{
public:
	Raindrops() = default;
	Raindrops( float x, float y, float width);
	void Draw(Graphics& gfx) const;
	void Update(const float dt);

private:
	float y;
	float x;
	float width;
	float height;
	float speed;
	constexpr static Color c = {0,0,0};
};