#ifndef POKEMON_H
#define POKEMON_H
#include <string>
#include <iostream>
using namespace std;

class Pokemon{
    protected:
    int hp{100};
    string name;    public:
    void Info();
    int getHp() const;
    void setHp(int );
    void setName(string );
    explicit 
    Pokemon(string name, int hp);
    Pokemon(string name);
    Pokemon(int hp);
    Pokemon();
    ~Pokemon();
};


#endif