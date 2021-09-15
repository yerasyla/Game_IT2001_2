#include "Item.h"

Item::Item() {}

Item::Item(string name, int atk) {
    this->name = name;
    this->atk = atk;
}

const string &Item::getName() const {
    return name;
}

void Item::setName(const string &name) {
    Item::name = name;
}

int Item::getAtk() const {
    return atk;
}

void Item::setAtk(int atk) {
    Item::atk = atk;
}
