#include <SFML/Graphics.hpp>
#include <iostream>
#include "map.h"
#include "render.h"
#include "tile.h"
#include "colors.h"
#include "engine.h"
#include "player.h"
#include "input.h"
#include "monster.h"

Tile level1[24][16] = {
    {
        Tile('#', Color::BLUE, false),
        Tile('#', Color::BLUE, false),
        Tile('#', Color::BLUE, false),
        Tile('#', Color::BLUE, false),
        Tile('#', Color::BLUE, false),
        Tile('#', Color::BLUE, false),
        Tile('#', Color::BLUE, false),
        Tile('#', Color::BLUE, false),
        Tile('#', Color::BLUE, false),
        Tile('#', Color::BLUE, false),
        Tile('#', Color::BLUE, false),
        Tile('#', Color::BLUE, false),
        Tile('#', Color::BLUE, false),
        Tile('#', Color::BLUE, false),
        Tile('#', Color::BLUE, false),
        Tile('#', Color::BLUE, false),
    },
    {
        Tile('#', Color::BLUE, false),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile('#', Color::BLUE, false),
    },
    {
        Tile('#', Color::BLUE, false),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile('#', Color::BLUE, false),
    },
    {
        Tile('#', Color::BLUE, false),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile('#', Color::BLUE, false),
    },
    {
        Tile('#', Color::BLUE, false),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile('#', Color::BLUE, false),
    },
    {
        Tile('#', Color::BLUE, false),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile('#', Color::BLUE, false),
    },
    {
        Tile('#', Color::BLUE, false),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile('#', Color::BLUE, false),
    },
    {
        Tile('#', Color::BLUE, false),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile('"', Color::BLUE, true),
        Tile('"', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile('#', Color::BLUE, false),
    },
    {
        Tile('#', Color::BLUE, false),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile('"', Color::BLUE, true),
        Tile('"', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile('#', Color::BLUE, false),
    },
    {
        Tile('#', Color::BLUE, false),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile('#', Color::BLUE, false),
    },
    {
        Tile('#', Color::BLUE, false),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile('#', Color::BLUE, false),
    },
    {
        Tile('#', Color::BLUE, false),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile('#', Color::BLUE, false),
    },
    {
        Tile('#', Color::BLUE, false),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile('#', Color::BLUE, false),
    },
    {
        Tile('#', Color::BLUE, false),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile('#', Color::BLUE, false),
    },
    {
        Tile('#', Color::BLUE, false),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile('#', Color::BLUE, false),
    },
    {
        Tile('#', Color::BLUE, false),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile('#', Color::BLUE, false),
    },
    {
        Tile('#', Color::BLUE, false),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile('"', Color::BLUE, true),
        Tile('"', Color::BLUE, true),
        Tile('"', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile('#', Color::BLUE, false),
    },
    {
        Tile('#', Color::BLUE, false),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile('"', Color::BLUE, true),
        Tile('"', Color::BLUE, true),
        Tile('"', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile('#', Color::BLUE, false),
    },
    {
        Tile('#', Color::BLUE, false),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile('"', Color::BLUE, true),
        Tile('"', Color::BLUE, true),
        Tile('"', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile('#', Color::BLUE, false),
    },
    {
        Tile('#', Color::BLUE, false),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile('"', Color::BLUE, true),
        Tile('"', Color::BLUE, true),
        Tile('"', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile('#', Color::BLUE, false),
    },
    {
        Tile('#', Color::BLUE, false),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile('#', Color::BLUE, false),
    },
    {
        Tile('#', Color::BLUE, false),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile('#', Color::BLUE, false),
    },
    {
        Tile('#', Color::BLUE, false),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile(' ', Color::BLUE, true),
        Tile('#', Color::BLUE, false),
    },
    {
        Tile('#', Color::BLUE, false),
        Tile('#', Color::BLUE, false),
        Tile('#', Color::BLUE, false),
        Tile('#', Color::BLUE, false),
        Tile('#', Color::BLUE, false),
        Tile('#', Color::BLUE, false),
        Tile('#', Color::BLUE, false),
        Tile('#', Color::BLUE, false),
        Tile('#', Color::BLUE, false),
        Tile('#', Color::BLUE, false),
        Tile('#', Color::BLUE, false),
        Tile('#', Color::BLUE, false),
        Tile('#', Color::BLUE, false),
        Tile('#', Color::BLUE, false),
        Tile('#', Color::BLUE, false),
        Tile('#', Color::BLUE, false),
    }};

int main()
{
    sf::RenderWindow window(sf::VideoMode(1200, 800), "SFML works!");
    Render render;
    Map map;
    PlayerManager playerManager;
    InputManager inputManager;
    MonsterManager monsterManager;
    Engine engine;

    // Initialize monster types before creating any monsters
    initializeMonsterTypes();

    // Now it's safe to add monsters
    playerManager.addMonster(1, monsterManager);

    engine.state = GAME_RUNNING;
    render.loadFont();

    memcpy(map.currentMap, level1, sizeof(level1));
    bool needsUpdate = true;

    // Initialize player position
    playerManager.setPlayerPosition(5, 5); // Set initial position to a valid walkable tile

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();

            if (event.type == sf::Event::KeyPressed)
            {
                if (engine.state == GAME_RUNNING)
                {
                    needsUpdate = inputManager.handleInput(event, playerManager.getPlayer(), playerManager, map);
                }
            }
        }

        // Only draw if update is needed
        if (needsUpdate)
        {
            window.clear();
            engine.update(map, playerManager.getPlayer());
            render.drawScreen(window, engine, map, playerManager.getPlayer());
            window.display();
            needsUpdate = false; // Reset the flag after drawing
        }
    }

    return 0;
}