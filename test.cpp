#include <iostream>
#include <string.h>
using namespace std;

class animal
{
private:
    int health;
    char level;

public:
    int gethealth()
    {
        return health;
    };
    char getlevel()
    {
        return level;
    };

    void sethealth(int h)
    {
        health = h;
    };

    void setlevel(char l)
    {
        level = l;
    }
    animal(int health, char level)
    {
        this->health = health;
        this->level = level;
    };

    animal(animal &Tiger)
    {
        this->health = Tiger.health;
        this->level = Tiger.health;

        cout << "Copy const called" << endl;
    };
    char *name;
    animal()
    {
        name = new char[100];
    };

    void print()
    {
        cout << level << endl;
        cout << health << endl;
    };
};
int main()
{

    animal Lion(20, 'a');
    Lion.print();

    animal Tiger;
    Tiger = Lion;
    Tiger.print();

    animal Deer;
    Deer=Tiger;
    Deer.print();

    animal Dog;
    Dog=Tiger;
    Dog.print();

    

    return 0;
}
