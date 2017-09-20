#include "RainDrops.h"

Raindrops::Raindrops(float x, float y, float width, float height)
	: 
	x(x),
	y(y),
	width(width),
	height(height)
{}

void Raindrops::Draw(Graphics & gfx) const
{
	for (int i = int(x) ; i - int(x) < width; i++)
	{
		for (int j = int(y); j - int(y) < height; j++)
		{
			
			gfx.PutPixel( i, j, c);
		}
	}
	
}
