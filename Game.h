#include <iostream>

#ifndef IT2001_2002_L1_GAME_H
#define IT2001_2002_L1_GAME_H

class Game {
public:
    bool isPlaying() const;
    void setPlaying(bool playing);

    Game();
    virtual ~Game();
    void mainMenu();

private:
    int choice;
    bool playing;
};


#endif //IT2001_2002_L1_GAME_H
