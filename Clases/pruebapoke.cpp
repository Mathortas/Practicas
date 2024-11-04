#include "Pokemon.h"
#include <iostream>
#include <string>
using namespace std;

int main(){
    Pokemon Unown;
    Pokemon Chikorita("CHikorita", 150);
    Pokemon Raltz("Raltz");
    Pokemon Rattata(50);

    Pokemon array[6];

    Chikorita.Info();
    Raltz.Info();
    Rattata.Info();
    Unown.Info();

}