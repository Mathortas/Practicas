#include "Pokemon.h"
#include <string>
#include <iostream>
using namespace std;

Pokemon::Pokemon(std::string name, int hp) {
    this->name = name;
    this->hp = hp;
    cout << "constructor default \n";
}

// Constructor with only name (default HP)
Pokemon::Pokemon(std::string name) {
    this->name = name;
    this->hp = 100; // Default HP
    cout << "constructor solo nombre \n";
}

// Constructor with only HP (default name)
Pokemon::Pokemon(int hp) {
    this->name = "Unnamed"; // Default name
    this->hp = hp;
    cout << "constructor solo HP \n";
}

// Default constructor (default name and HP)
Pokemon::Pokemon() {
    this->name = "Unnamed";
    this->hp = 100;
    cout << "constructor sin declarar \n";
}

void Pokemon::Info(){
    cout << "el nombre es " << name << " su vida es " << hp<< endl;
}