#include "Game.hpp"
#include <iostream>
#include <SFML/Graphics.hpp>

Game Game::instance_;

Game::Game()
{
	Init();
};

Game :: ~Game()
{

};

void Game::Init()
{
	varWindow.create(sf::VideoMode(200, 200), "SFML works!");
	varShape.setRadius(100.f);
	varShape.setFillColor(sf::Color::Red);

};

void Game::Teardown()
{

};

void Game::Update()
{
	while (varWindow.isOpen())
	{

		Game::Input();
		Game::Render();
	}
};

void Game::Render()
{
	varWindow.clear();
	varWindow.draw(varShape);
	varWindow.display();
};

void Game::Input() {
	sf::Event event;
	while (varWindow.pollEvent(event))
	{
		if (event.type == sf::Event::Closed)
			varWindow.close();

	}

};

void Game::Restart()
{

};



