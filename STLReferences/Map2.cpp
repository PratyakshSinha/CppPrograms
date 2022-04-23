#include <iostream>
#include <map>
#include <string>
#include <list>

using namespace std;

int main()
{
    map<string, list<string>> pokedex;
    list<string> pikachuAttacks{"Thunder shock", "Tail whip", "Quick attack"};
    list<string> charmenderAttacks{"Flame thrower", "Scary face"};
    list<string> chikoritaAttacks{"Razor leaf", "Poison powder"};
    
    pokedex.insert(pair<string, list<string>>("Pikachu", pikachuAttacks));
    pokedex.insert(pair<string, list<string>>("Charmender", charmenderAttacks));
    pokedex.insert(pair<string, list<string>>("Chikorita", chikoritaAttacks));
    pokedex.insert({"Hello", pikachuAttacks});

    for(auto pair : pokedex)
    {
        cout<< pair.first<<" - ";
        for(auto attack : pair.second)
        {
            cout<< attack <<", ";
        }
        cout<<endl;
    }
}