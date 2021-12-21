#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
    map<string, string> myDictionary;
    myDictionary.insert(pair<string, string>("Apple", "Seb"));
    myDictionary.insert(pair<string, string>("Orange", "Santra")); //Map is ordered automatically
    myDictionary.insert(pair<string, string>("Banana", "Kela"));
    myDictionary.insert(pair<string, string>("Watermelon", "Tarbuj"));

    myDictionary["Watermelon"] = "Tarbuza";
    cout<<myDictionary.size()<<endl;

    for(auto pair : myDictionary)
        cout<<pair.first<<" - "<<pair.second<<endl;
    
    myDictionary.clear();

    for(auto pair : myDictionary)
        cout<<pair.first<<" - "<<pair.second<<endl;
    
    return 0;
}