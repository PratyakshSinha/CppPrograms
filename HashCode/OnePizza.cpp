#include<bits/stdc++.h>

using namespace std;

int main()
{
    int c;
    cin>>c;
    set<string> likes;
    set<string> dislikes;
    while(c--){
        int l;
        cin>>l;
        while(l--){
            string a;
            cin>>a;
            likes.insert(a);
        }
        int d;
        cin>>d;
        while(d--){
            string b;
            cin>>b;
            dislikes.insert(b);
        }
    }

    for(auto itr=dislikes.begin();itr!=dislikes.end();itr++){
        likes.erase(*itr);
    }

    cout<<likes.size()<<" ";
    for(auto itr=likes.begin();itr!=likes.end();itr++){
        cout<<*itr<<" ";
    }
    return 0;
}

