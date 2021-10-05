#pragma once
#include <SFML/Graphics.hpp>

class Game
{
public:
	Game();
	~Game();

    void Init();
    void Teardown();
    void Update();
    void Render();
    void Input();
    void Restart();

private:
    sf::RenderWindow varWindow;
    sf::CircleShape varShape;
};
