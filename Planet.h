#pragma once
#include <SFML/Graphics.hpp>

using namespace std;
using namespace sf;



namespace SolarSystem {

	 class Planet {
	
		sf::RenderWindow* window; 
		Sprite circle;
		Vector2f position;
		Vector2f center;
		Vector2f newpos;
		/*Color color;*/
		Texture texture;
		//int rad;
		float _angle;
		float speed;
		//int trackrad;
		bool RightButtonPressed;
		bool LeftButtonPressed;
	public:
		/*  Planet();*/
		  Sprite GetCircle() /*const=0*/;
		  void MoveClockwise() /*const = 0*/;
		 void StopClockwise() /*const = 0*/;
		 
		 void MoveCounterClockwise() /*const = 0*/;
		  void StopCounterClockwise() /*const = 0*/;
		 
		  void update() /*const = 0*/;
	};

}