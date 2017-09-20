#include "FramTimer.h"

using namespace std::chrono;

FrameTimer::FrameTimer()
{
	last = steady_clock::now();
}

float FrameTimer::Mark()
{
	std::chrono::steady_clock::time_point old = last;
	last = std::chrono::steady_clock::now();
	std::chrono::duration<float> ft = last - old;
	return ft.count();
}
