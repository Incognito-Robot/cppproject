#pragma once
#include <SFML/Graphics.hpp>

class Game
{
public:
	Game();
	~Game();
    static Game& GetInstance() { return instance_; };

    void Init();
    void Teardown();
    void Update();
    void Render();
    void Input();
    void Restart();

private:
    static Game instance_;
    sf::RenderWindow varWindow;
    sf::CircleShape varShape;
};
