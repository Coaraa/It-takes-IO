#ifndef _SFMLJEU_H
#define _SFMLJEU_H

#include "../core/Level.h"
#include "blockSfml.h"
#include "playerSfml.h"
#include "sensorSfml.h"
#include "../sfml/menu/Menu.h"

#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <SFML/System/Clock.hpp>
#include <vector>

/**
    La classe g�rant le jeu avec un affichage SFML
*/

class sfmlJeu {

private :

    int spriteSize;
	Level * level = nullptr;
	sf::RenderWindow * m_window;
    PlayerSfml * playerSfml0;
    PlayerSfml * playerSfml1;
    sf::Sprite door;
    sf::Texture doorTexture;
    int frameDoor;
    sf::Clock doorClock;
    sf::Texture backgroundTexture;
    sf::Sprite background;
    std::vector<SensorSfml*> sensorsSfml;
    sf::Texture elec;
    sf::Texture elecAct;
    std::vector<BlockSfml*> blocksSfml;
    sf::Texture gateAnd;
    sf::Texture pickN;
    sf::Texture generator0;
    sf::Texture generator1;
    Menu * menu;
    sf::Music music;
    sf::SoundBuffer buffer;
    sf::Sound sound;
    int levelNumber;
    int levelMax;

public :

    sfmlJeu ();
    ~sfmlJeu ();

    void sfmlInit();
    void sfmlBoucle();
    void sfmlAff();
    void animDoor();
    void loadLevel();
    void sfmlMenu();
};

#endif
