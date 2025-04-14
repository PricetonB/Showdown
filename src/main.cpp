// Assignment2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <memory>
#include <fstream>
#include <sstream>
#include <stdio.h>

#include <SFML/Graphics.hpp>
#include <SFML/System/Vector2.hpp>
#include "Game.h"

int main()
{
	Game* game = new Game("../../config.txt");

	game->Run();

	delete game;
	return 0;
}




























/*

#include <SFML/Graphics.hpp>

int main()
{
    auto window = sf::RenderWindow(sf::VideoMode({1920u, 1080u}), "CMake SFML Project");
    window.setFramerateLimit(60);

	
    // create an array of 3 vertices that define a triangle primitive
    sf::VertexArray triangle(sf::PrimitiveType::Triangles, 3);
    
    // define the position of the triangle's points
    triangle[0].position = sf::Vector2f(100.f, 100.f);
    triangle[1].position = sf::Vector2f(1000.f, 100.f);
    triangle[2].position = sf::Vector2f(1000.f, 800.f);
    
    // define the color of the triangle's points
    triangle[0].color = sf::Color::Red;
    triangle[1].color = sf::Color::Blue;
    triangle[2].color = sf::Color::Green;
    
    // no texture coordinates here, we'll see that later
    
    while (window.isOpen())
    {
        while (const std::optional event = window.pollEvent())
        {
            if (event->is<sf::Event::Closed>())
            {
                window.close();
            }
        }

	

        window.clear();
	window.draw(triangle);
        window.display();
    }
}
*/