#include <SFML/Graphics.hpp>
#include "Game.hpp"

int main()
{
    Game::GetInstance().Init();
    Game::GetInstance().Update();
    
    return 0;
}

