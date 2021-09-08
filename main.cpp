#include "Game.h"

int main() {

    Game game; //Game initialized
    while (game.isPlaying()) {
        game.mainMenu();
    }

    //std::cout << "Hello, World!" << std::endl;
    return 0;
}
