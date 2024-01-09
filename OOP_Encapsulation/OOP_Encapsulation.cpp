// OOP_Encapsulation.cpp 
// 

#include <iostream>
#include<list>
using namespace std;

class YouTubeChannel {
    // To hide the properties from users- should be private: ENCAPSULATED
    // MEANING: This shouldn't be accessible outside of the class
private:
    string Name;
    string OwnerName;
    int SubscribersCount;
    list<string> PublishedVideoTitles;

    // These should stay public - to change the value
public:
    YouTubeChannel(string name, string ownerName) {
        Name = name;
        OwnerName = ownerName;
        SubscribersCount = 0;
    }
    void GetInfo() {
        /*cout << "Name: " << ytChannel.Name << endl;*/
        cout << "Name: " << Name << endl; //We are in the class
        cout << "OwnerName: " << OwnerName << endl;
        cout << "SubscribersCount: " << SubscribersCount << endl;
        cout << "Videos: " << endl;
        for (string videoTitle : PublishedVideoTitles) {
            cout << videoTitle << endl;
        }
    }
    // To create more methods
    void Subscribe() {
        SubscribersCount++;
    }
    void Unsubscribe() {
        if(SubscribersCount>0) // to fix the bug, not to get -1 for count
        SubscribersCount--;
    }
    void PublishVideo(string title) {
        PublishedVideoTitles.push_back(title);
    }
};
int main()
{
    YouTubeChannel ytChannel("CodeBeauty", "Saldina");
    /*ytChannel.PublishedVideoTitles.push_back("C++ for beginners");
    ytChannel.PublishedVideoTitles.push_back("HTML & CSS for beginners");
    ytChannel.PublishedVideoTitles.push_back("C++ OOP");
    ytChannel.SubscribersCount = 1000000;*/
    ytChannel.PublishVideo("C++ for beginners");
    ytChannel.PublishVideo("HTML & CSS for beginners");
    ytChannel.PublishVideo("C++ OOP");

    ytChannel.Subscribe();
    ytChannel.Subscribe();
    ytChannel.Subscribe();
    ytChannel.Unsubscribe();
    ytChannel.GetInfo();

    system("pause>0");
}

