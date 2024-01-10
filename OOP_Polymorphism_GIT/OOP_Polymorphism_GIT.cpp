// OOP_Polymorphism_GIT.cpp 
// ability to have multiple forms-  have 2 or more objects inherit from the same base class
// Same name but different implementaion-different behaviour

#include <iostream>
#include<list>
using namespace std;

//Base class
class YouTubeChannel {
private:
    string Name;
    int SubscribersCount;
    list<string> PublishedVideoTitles;
protected: // protected access modifier-> certain properties to be accessible in the derived class
    string OwnerName; 
    int ContentQuality;
public:  // These should stay public - to change the value
    // Constructors
    YouTubeChannel(string name, string ownerName) {
        Name = name;
        OwnerName = ownerName;
        SubscribersCount = 0;
        ContentQuality = 0;
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
    void CheckAnalytics() {
        if (ContentQuality < 5)
            cout << Name << " has bad quality content." << endl;
        else
            cout << Name << " has great content." << endl; // To invoke this, with polymorphism, we can use pointers
    }
};
// To Inherit YouTubeChannel, From base class; The derived Class is CookingYouTubeChannel
class CookingYouTubeChannel :public YouTubeChannel {
public:// to make it accessible
    // Creating own constructor:base class constructor
    CookingYouTubeChannel(string name, string ownerName) :YouTubeChannel(name, ownerName) {

    }
    //Method
    void Practice() {
        cout << OwnerName << " is practicing cooking, learning new recipes, experimenting with spices..." << endl;
        ContentQuality++;
    }
};
// Create another derived class
class SingersYouTubeChannel :public YouTubeChannel {
public:// to make it accessible
    // Creating own constructor:base class constructor
    SingersYouTubeChannel(string name, string ownerName) :YouTubeChannel(name, ownerName) {

    }
    //Method-different implementation from above
    void Practice() {
        cout << OwnerName << " is taking singing classes, learning new songs, learning how to dance..." << endl;
        ContentQuality++;
    }
};

int main()
{
    CookingYouTubeChannel cookingYtChannel("Amy's Kitchen", "Amy");
    SingersYouTubeChannel singersYtChannel("JohnSings", "John");

    // We use polymorphism in order to use Practice method.
    cookingYtChannel.Practice();
    singersYtChannel.Practice();
    singersYtChannel.Practice();
    singersYtChannel.Practice();
    singersYtChannel.Practice();
    singersYtChannel.Practice();

    //Pointers of the base class can point to an object(a variable) of the derived class
    YouTubeChannel* yt1 = &cookingYtChannel;
    YouTubeChannel* yt2 = &singersYtChannel;

    //. is changed to -> This is when you invoke the methods using pointers
    yt1->CheckAnalytics();
    yt2->CheckAnalytics();

    system("pause>0");
}
