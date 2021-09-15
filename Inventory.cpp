#include "Inventory.h"

Inventory::Inventory() {
    cap=3;
    numOfItems=0;
    arrItems = new Item *[cap];
    // Item **arrItems = new Item *[cap];
}

Inventory::~Inventory() {

}

void Inventory::expand() {
    cap = cap*2;
    Item **tempItems = new Item *[cap];

    for(int i=0; i<numOfItems; i++) {
        tempItems[numOfItems] = new Item (*arrItems[i]);
    }
    for(int i=0; i<numOfItems; i++){
        delete arrItems[i];
    }
    delete [] arrItems;
    arrItems = tempItems;
    initialize(numOfItems);
}


void Inventory::initialize(int from){
    for(int i=from; i<cap; i++) {
        arrItems[i] = nullptr;
    }
}

void Inventory::addItem(const Item &item){
    if (cap<numOfItems){
        expand();
    }

    arrItems[numOfItems++] =  new Item(item);
}

Item **Inventory::getArrItems() const {
    return arrItems;
}

int Inventory::getCap() const {
    return cap;
}

int Inventory::getNumOfItems() const {
    return numOfItems;
}
