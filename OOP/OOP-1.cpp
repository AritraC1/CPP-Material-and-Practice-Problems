#include <iostream>
// #include "Hero.cpp"
using namespace std;

class Empty {

};

/*

Two ways of creating a class:-
1. Either including in the main file explicitely
2. Or we can create class in a different file and include it in the header

*/

class Hero {

    // Properties

    // private:
    int health;

    public:
    char name[100];
    char level;

    // Hero() 
    // {
    //     cout << "Constructor Called" << endl;
    // }

    Hero()
    {
        cout << "Simple Constructor Called" << endl;
    }

    // Parameterized constructor
    Hero(int Health)
    {
        cout << "this -> " << this << endl;
        this -> health = health;
    }
    
    Hero(int Health, char level)
    {
        this -> level = level;
        this -> health = health;
    }

    void print() 
    {
        cout << "Health is = " << this -> health << endl;
        cout << "Level is = " << this -> level << endl;
    }

    int getHealth() 
    {
        return health;
    }

    char getLevel() 
    {
        return level;
    }

    void setHealth(int h) 
    {
        health = h;
    }

    void setlevel(int l) 
    {
        level = l;
    }

    // Destructor
    ~Hero() {
        cout << "Destructor Called" << endl;
    }
};

int main() {

    // Static
    Hero a;

    // Dynamic
    Hero *b = new Hero();
    delete b;

    /*
    Hero s(60, 'C');
    s.print();

    // Copy Constructor
    Hero r(s);
    r.print();
    */

    /*
    //  Object created statically
    Hero spidey(50);
    cout << "Address of spidey: " << &spidey << endl;
    spidey.getHealth();

    //  Object created dynamically
    Hero *h = new Hero;
    */

    /*

    // Creation of object
    Empty e1;
    // Size is 1 - for identification (Uska track rakhne k liye 1 allocate kia h)
    cout << "size of an empty class : " << sizeof(e1) << endl;

    // Creation of object
    Hero h1;
    // Prints the size of the int in class Hero i.e. 4 (4 bytes = int)
    cout << "size : " << sizeof(h1) << endl;

    h1.health = 70;
    h1.level = 'A';

    // To access health and level i.e properties/ data memebers we use "." operator
    cout << "Health is = " << h1.health << endl;
    cout << "Level is = " << h1.level << endl;

    // Static Allocation
    Hero a;
    cout << "Health is = " << a.level << endl;

    // Dynamic Allocation
    Hero *b = new Hero;

    */

    return 0;
}