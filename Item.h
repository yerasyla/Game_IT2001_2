#ifndef IT2001_2002_L1_ITEM_H
#define IT2001_2002_L1_ITEM_H
#include <string>
using namespace std;

class Item {
public:
    Item();
    Item(string name, int atk);

    const string &getName() const;

    void setName(const string &name);

    int getAtk() const;

    void setAtk(int atk);

private:
    string name;
    int atk;


};


#endif //IT2001_2002_L1_ITEM_H
