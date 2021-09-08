#include <iostream>
#include <string>
using namespace std;

#ifndef IT2001_2002_L1_GAME_H
#define IT2001_2002_L1_GAME_H

class Game {
public:
    Game();
    virtual ~Game();

    void mainMenu();
    bool isPlaying() const;
    void setPlaying(bool playing);

private:
    int choice;
    bool playing;
};


#endif //IT2001_2002_L1_GAME_H
