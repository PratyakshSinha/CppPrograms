#include<iostream>
#include<string>
#include<list>
using namespace std;

class YouTubeChannel{
    
    private:
    string name;
    int subs;

    public:
    YouTubeChannel(){           //Default Constructor
        name = "";
        subs = 0;
    }
    YouTubeChannel(string Name, int Subs){
        name = Name;
        subs = Subs;
    }

    bool operator==(const YouTubeChannel& channel) const{
        return this->name == channel.name;
    }

    friend ostream& operator<<(ostream& COUT, YouTubeChannel& ytChannel){
        COUT<<"Name: "<<ytChannel.name<<endl;
        COUT<<"Subs: "<<ytChannel.subs<<endl;
        return COUT;
    }

    friend istream& operator>>(istream& CIN, YouTubeChannel& ytChannel){
        std::cout<<"Enter name: ";
        CIN>>ytChannel.name;
        std::cout<<"Enter Subs: ";
        CIN>>ytChannel.subs;
    }

};

class MyCollection
{   
    private:
    list<YouTubeChannel>myChannels;

    public:

    void operator+=(YouTubeChannel& channel){
        this->myChannels.push_back(channel);
    }
    void operator-=(YouTubeChannel& channel){
        this->myChannels.remove(channel);
    }

    friend ostream& operator<<(ostream& COUT, MyCollection& myCollection){
        for(YouTubeChannel ytChannel:myCollection.myChannels)
            COUT<< ytChannel << endl;
        return COUT;
    }

};

int main()
    {
        YouTubeChannel yt1 = YouTubeChannel("CodeBeauty", 75000);
        YouTubeChannel yt2 = YouTubeChannel("Are You Hungry", 1500000);
        YouTubeChannel yt3;
        cin>>yt3;
        cout<<endl<<yt1<<endl;
        operator<<(cout, yt2);
        cout<<endl<<yt3;
        MyCollection myCollection;
        myCollection += yt1;
        myCollection += yt2;
        //myCollection -= yt2;
        myCollection += yt3;
        cout<<myCollection;

        cin.get();
        return 0;
    }