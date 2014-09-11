#include "SFML/Graphics.hpp"
#include <iostream>

int main()
{
	sf::RenderWindow window(sf::VideoMode(600, 600), "SFML WORK!");

	sf::Font font;

	if (!font.loadFromFile("arial.ttf"))
	{
		// handle error
	}

	sf::Text text;
	text.setFont(font);
	text.setString("BATMAN");
	text.setColor(sf::Color::Red);
	text.setCharacterSize(40);

	while (window.isOpen())
	{
		sf::Event event;

		while (window.pollEvent(event))
		{
			switch (event.type)
			{
			case sf::Event::Closed:
				window.close();

				break;

			}
		}

		window.clear();

		window.draw(text);

		window.display();
	}
}