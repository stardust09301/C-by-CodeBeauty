// OOP_Inheritance_GIT.cpp 
//

#include <iostream>
#include<list>
using namespace std;

class YouTubeChannel {
private:
    string Name;
    /*string OwnerName;*/
    int SubscribersCount;
    list<string> PublishedVideoTitles;
protected: // protected access modifier-> certain properties to be accessible in the derived class
    string OwnerName;

    // These should stay public - to change the value
public:
    // Constructors
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
        if (SubscribersCount > 0) // to fix the bug, not to get -1 for count
            SubscribersCount--;
    }
    void PublishVideo(string title) {
        PublishedVideoTitles.push_back(title);
    }
};
// To Inherit YouTubeChannel, From base class; The derived Class is CookingYouTubeChannel
class CookingYouTubeChannel:public YouTubeChannel {
public:// to make it accessible
    // Creating constructor:base class constructor
    CookingYouTubeChannel(string name, string ownerName):YouTubeChannel(name, ownerName){
        
    }
    //Method
    void Practice() {
        cout << OwnerName <<" is practicing cooking, learning new recipes, experimenting with spices..." << endl;
    }
};
int main()
{
    CookingYouTubeChannel cookingYtChannel("Amy's Kitchen", "Amy");
    CookingYouTubeChannel cookingYtChannel2("John's Kitchen", "John");
    cookingYtChannel.PublishVideo("Apple pie");
    cookingYtChannel.PublishVideo("Chocolate cake");
    cookingYtChannel.Subscribe();
    cookingYtChannel.Subscribe();
    cookingYtChannel.GetInfo();
    cookingYtChannel.Practice(); // This is only available for CookingYouTubeChannel
    cookingYtChannel2.Practice();


    system("pause>0");
}
