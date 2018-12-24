//#include "Planet.h"
//#include <cmath>
//#include "Engine.h"
//
//using namespace sf;
//using namespace SolarSystem;
//
//Planet::Planet() {
//	speed = 300;
//	center.x = 360;
//	center.y = 00;
//	
//	// Устанавливаем начальную позицию Боба в пикселях
//	position.x = 640;
//	position.y = 100;
//	// Связываем текстуру и спрайт
//	texture.loadFromFile("lil.jpg");
//	circle.setTexture(texture);
//
//}
//Sprite Planet::GetCircle()
//{
//	return circle;
//}
//void Planet::MoveClockwise()
//{
//	RightButtonPressed = true;
//}
//
//void Planet::MoveCounterClockwise()
//{
//	LeftButtonPressed = true;
//}
//
//void Planet::StopClockwise()
//{
//	RightButtonPressed = false;
//}
//
//void Planet::StopCounterClockwise()
//{
//	LeftButtonPressed = false;
//}
//void Planet::update(float ElapsedTime) {
//	if (RightButtonPressed)
//	{
//	
//
//		_angle -= 2 * 3.14 / 180/3;
//		float newx = cos(_angle)*3;
//		float newy = sin(_angle)*3;
//		position.x -= newx;
//		position.y -= newy;
//
//	}
//
//	if (LeftButtonPressed)
//	{
//		_angle += 2*3.14 / 180/3;
//		float newx = cos(_angle)*3;
//		float newy = sin(_angle)*3;
//		position.x += newx;
//		position.y += newy;
//	}
//
//	// Теперь сдвигаем спрайт на новую позицию
//	circle.setPosition(position);
//	
//}
//
//

