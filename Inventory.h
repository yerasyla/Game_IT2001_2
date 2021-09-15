#ifndef IT2001_2002_L1_INVENTORY_H
#define IT2001_2002_L1_INVENTORY_H
#include "Item.h"

class Inventory {
public:
    Inventory();
    virtual ~Inventory();

    Item **getArrItems() const;

    int getCap() const;

    int getNumOfItems() const;
    void addItem(const Item &item);

    //Item items[]; //static

private:
    Item **arrItems;
    int cap;
    int numOfItems;

    void expand();
    void initialize(int from);
};


#endif //IT2001_2002_L1_INVENTORY_H
