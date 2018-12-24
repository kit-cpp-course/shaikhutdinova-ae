#include "Uranus.h"
#include <cmath>
#include "Engine.h"
//#include "Planet.h"
#include <iostream>

using namespace sf;
using namespace SolarSystem;

Uranus::Uranus() {
	speed = 300;
	Mas = 500;
	rad = 240;
	vx = 2;
	vy = 2;
	ax = 2;
	ay = 2;

	startx = VideoMode::getDesktopMode().width / 2;
	starty = VideoMode::getDesktopMode().height / 2;
	position.x = startx + rad;
	position.y = starty - rad;

	texture.loadFromFile("uranus.jpg");

	circle.setTexture(texture);


}
Sprite Uranus::GetCircle()
{
	return circle;
}
void Uranus::MoveClockwise()
{
	RightButtonPressed = true;
}

void Uranus::MoveCounterClockwise()
{
	LeftButtonPressed = true;
}

void  Uranus::StopClockwise()
{
	RightButtonPressed = false;
}

void  Uranus::StopCounterClockwise()
{
	LeftButtonPressed = false;
}
void  Uranus::update(float ElapsedTime) {
	if (RightButtonPressed)
	{
		/*_angle -= 2 * 3.14 / 180/3;
		float newx = cos(_angle);
		float newy = sin(_angle);
		position.x -= newx;
		position.y -= newy ;*/
		ax = Mas * (startx - position.x) / pow(rad, 3);
		ay = Mas * (starty - position.y) / pow(rad, 3);
		vx += 1 * ax;
		vy += 1 * ay;
		position.x += 1 * vx;
		position.y += 1 * vy;
	}

	if (LeftButtonPressed)
	{
		ax = Mas * (startx - position.x) / pow(rad, 3);
		ay = Mas * (starty - position.y) / pow(rad, 3);
		vx -= 1 * ax;
		vy -= 1 * ay;
		position.x -= 1 * vx;
		position.y -= 1 * vy;
	}

	circle.setPosition(position);

}

