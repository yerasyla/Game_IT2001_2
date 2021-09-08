#include "Game.h"
using namespace std;

Game::Game() {
    choice = 0;
    playing = true;
}

Game::~Game() {

}

void Game::mainMenu() {
    cout<<"Main Menu"<<endl<<endl;
    cout<<"1: Start"<<endl;
    cout<<"0: Quit"<<endl;

    cout<<endl<<"Choice: ";
    cin>>choice;
    switch (choice) {
        case 0: playing = false;
            break;
        default: break;

    }

}

bool Game::isPlaying() const{
    return playing;
}

void Game::setPlaying(bool playing) {
    Game::playing = playing;
}
