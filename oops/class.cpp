#include <iostream>
//#include "Hero.cpp"
using namespace std;

class Hero {
    
    public:

    // static keyword
    // can be accessed without making object
    // this variable belong to object not class
    static int time;
    static int random() {
        // cant use other member then static member
        return time;
    }

    string name;
    int health;
    int stamina; 
    int superpowers;
    char level = 'D';

    // Constructor - gets executed as new Hero is declared
    Hero(string name, int health, int stamina, int superpowers) {
        //cout << "hello world" << endl;
        this->health = health;
        this->name = name;
        this->stamina = stamina;
        this->superpowers = superpowers;
    }

};

int Hero::time = 3000;

int main(){

    cout << Hero::time << endl;

    Hero hero1("Iron Man", 150, 170, 200);
    Hero hero2("Captain America", 180, 200, 130);

    // copying construtor
    Hero hero1a(hero1);

    /*
    cout << "Health: " << h1.health << endl;
    cout << "Level: " << h1.level << endl;

    // dynamically
    Hero *h = new Hero;

    cout << "Health: " << (*h).health << endl;
    cout << "Health: " << h->health << endl;
    cout << "Level: " << (*h).level << endl;
    cout << "Level: " << h->level << endl;
    */
    return 0;
}