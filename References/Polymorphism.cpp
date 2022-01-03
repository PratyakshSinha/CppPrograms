#include <iostream>
#include <list>
using namespace std;

class YouTubeChannel {
private:
	string Name;
	int SubscribersCount;
	list<string> PublishedVideoTitles;
protected:
	string OwnerName;
	int ContentQuality;
public:
	YouTubeChannel(string name, string ownerName) {
		Name = name;
		OwnerName = ownerName;
		SubscribersCount = 0;
		ContentQuality = 0;
	}
	void GetInfo() {
		cout << "Name: " << Name << endl;
		cout << "OwnerName: " << OwnerName << endl;
		cout << "SubscribersCount: " << SubscribersCount << endl;
		cout << "Videos: " << endl;
		for (string videoTitle : PublishedVideoTitles) {
			cout << videoTitle << endl;
		}
	}
	void Subscribe() {
		SubscribersCount++;
	}
	void Unsubscribe() {
		if (SubscribersCount > 0)
			SubscribersCount--;
	}
	void PublishVideo(string title) {
		PublishedVideoTitles.push_back(title);
	}
};

class CookingYouTubeChannel :public YouTubeChannel {
public:
	CookingYouTubeChannel(string name, string ownerName):YouTubeChannel(name, ownerName) {

	}
	void Practice() {
		cout << OwnerName << " is practicing cooking, learning new recipes, experimenting with spices..." << endl;
	}
};

class SingerYouTubeChannel :public YouTubeChannel {
public:
	SingerYouTubeChannel(string name, string ownerName):YouTubeChannel(name, ownerName) {

	}
	void Practice() {
		cout << OwnerName << " is taking singing classes, learning new songs, learning how to dance..." << endl;
	}
};

int main()
{
	CookingYouTubeChannel cookingYouTubeChannel("Amy's Kitchen", "Amy");
	SingerYouTubeChannel singingYouTubeChannel("JohnSings", "John");

	cookingYouTubeChannel.Practice();
	singingYouTubeChannel.Practice();

	system("pause>0");
}