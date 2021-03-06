#include "Saturn.h"
#include <cmath>
#include "Engine.h"
#include "Planet.h"
#include <iostream>

using namespace sf;
using namespace SolarSystem;

Saturn::Saturn() {
	speed = 300;
	Mas = 500;
	rad = 200;
	vx = 2;
	vy = 2;
	ax = 2;
	ay = 2;
	
	startx = VideoMode::getDesktopMode().width / 2;
	starty = VideoMode::getDesktopMode().height / 2;
	position.x = startx + rad;
	position.y = starty - rad;

	texture.loadFromFile("saturn.jpg");

	circle.setTexture(texture);
	

}
Sprite Saturn::GetCircle()
{
	return circle;
}
void Saturn::MoveClockwise()
{
	RightButtonPressed = true;
}

void Saturn::MoveCounterClockwise()
{
	LeftButtonPressed = true;
}

void  Saturn::StopClockwise()
{
	RightButtonPressed = false;
}

void  Saturn::StopCounterClockwise()
{
	LeftButtonPressed = false;
}
void Saturn::update(float ElapsedTime) {
	if (RightButtonPressed)
	{
		
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

