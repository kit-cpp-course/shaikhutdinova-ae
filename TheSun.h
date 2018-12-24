#pragma once
#include <SFML/Graphics.hpp>

using namespace std;
using namespace sf;



namespace SolarSystem {

	class TheSun {

		sf::RenderWindow* window; 
		Sprite circle;
		Vector2f position;
		
		/*Color color;*/
		Texture texture;
		//int rad;
		float _angle;
		float speed;
		//int trackrad;
		
	public:
		  TheSun();
		  void update(float ElapsedTime);
		  Sprite GetCircle();
		
	
	};

}