#include "RainDrops.h"
#include <random>

Raindrops::Raindrops(float x, float y, float width)
	: 
	x(x),
	y(y),
	width(width)	
{
	height = width*5.5f;
	speed = 100.0f * width;
}

void Raindrops::Draw(Graphics & gfx) const
{
	for (int i = int(x) ; i - int(x) < width; i++)
	{
		for (int j = int(y); j - int(y) < height; j++)
		{
			if (i >= 0 && i < Graphics::ScreenWidth &&
				j >= 0 && j < Graphics::ScreenHeight)
			gfx.PutPixel( i, j, c);
		}
	}
	
}

void Raindrops::Update(const float dt)
{
	y += speed*dt;
	std::random_device rd;
	std::uniform_real_distribution<float> x_dist(0.0f, float(Graphics::ScreenWidth));
	std::uniform_real_distribution<float> y_dist( -100.0f, -10.0f);
	std::uniform_real_distribution<float> width_dist(1.5f, 4.5f);
	std::mt19937 rng( rd() );
	if ( y >= float(Graphics::ScreenHeight) )
		*this = Raindrops(x_dist(rng), y_dist(rng), width_dist(rng));
}

