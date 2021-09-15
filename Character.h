#ifndef IT2001_2002_L1_CHARACTER_H
#define IT2001_2002_L1_CHARACTER_H
#include <string>
#include "Inventory.h"

using namespace std;

class Character {
public:

    Character();

    virtual ~Character();

    const string &getName() const;

    void setName(const string &name);

    int getMaxHp() const;

    void setMaxHp(int maxHp);

    int getHp() const;

    void setHp(int hp);

    int getAtk() const;

    void setAtk(int atk);

    int getLevel() const;

    void setLevel(int level);

    int getExp() const;

    void setExp(int exp);
    string getInfo();
    void gainExp(int exp);

    Inventory getInventory() const;

private:
    string name;
    int maxHP;
    int HP;
    int atk;
    int level;
    int exp;
    Inventory inventory;

};


#endif //IT2001_2002_L1_CHARACTER_H
