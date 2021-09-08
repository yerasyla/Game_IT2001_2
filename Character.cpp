#include "Character.h"

Character::Character() {
    name = "Player";
    maxHP = 0;
    HP = 0;
    atk = 0;
    level = 0;
    exp = 0;
}

Character::~Character() {}

const string &Character::getName() const {
    return name;
}

void Character::setName(const string &name) {
    Character::name = name;
}

int Character::getMaxHp() const {
    return maxHP;
}

void Character::setMaxHp(int maxHp) {
    maxHP = maxHp;
}

int Character::getHp() const {
    return HP;
}

void Character::setHp(int hp) {
    HP = hp;
}

int Character::getAtk() const {
    return atk;
}

void Character::setAtk(int atk) {
    Character::atk = atk;
}

int Character::getLevel() const {
    return level;
}

void Character::setLevel(int level) {
    Character::level = level;
}

int Character::getExp() const {
    return exp;
}

void Character::setExp(int exp) {
    Character::exp = exp;
}
