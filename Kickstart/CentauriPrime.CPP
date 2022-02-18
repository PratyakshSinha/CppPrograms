#include <iostream>
#include <string>

using namespace std;

string GetRuler(const string& kingdom) {
  // TODO: implement this method to determine the ruler name, given the kingdom.
  string ruler = "";
  char ch = kingdom[kingdom.size()-1];
  if(ch=='y')
  {
    ruler = "nobody";
  }
  else if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
  {
    ruler = "Alice";
  }
  else ruler = "Bob";
  return ruler;
}

int main() {
  int testcases;
  cin >> testcases;
  string kingdom;
  for (int t = 1; t <= testcases; ++t) {
    cin >> kingdom;
    cout << "Case #" << t << ": " << kingdom << " is ruled by "
         << GetRuler(kingdom) << ".\n";
  }
  return 0;
}
