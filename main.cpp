#include <SFML/Graphics.hpp>

#include "Engine.h"
using namespace sf;
using namespace SolarSystem;
int main()

{
	
	// ��������� ��������� ������ Engine
	Engine engine;

	// �������� ������� start
	engine.start();

	// ������������� ��������� ���������, ����� ������ ����������
	return 0;


	/*RenderWindow window(VideoMode(200, 200), "SFMLworks");

	CircleShape shape(100.f);

	shape.setFillColor(Color::Blue);

	while (window.isOpen())

	{

		Event event;

		while (window.pollEvent(event))

		{

			if (event.type == Event::Closed)

				window.close();

		}

		window.clear();

		window.draw(shape);

		window.display();

	}

	return 0;
*/
}