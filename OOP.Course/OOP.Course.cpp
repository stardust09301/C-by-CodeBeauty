// OOP.Course.cpp 
// Real life object
//Class- template/blueprint - user defined data type
//Object-example or instance of that object
//Attributes and behaviours
//Class Youtube channel


#include <iostream>
#include<list> // For list<string>
using namespace std;

class YouTubeChannel {
    // In order to make that public, accessible outside of this class, you put public access modifier
public:
    //4 attributes; 4 properties
    string Name;
    string OwnerName;
    int SubscribersCount;
    list<string> PublishedVideoTitles;
};

int main()
{
    // Create an object of that class
    YouTubeChannel ytChannel;
    // To assign properties of  the ytChannel
    ytChannel.Name = "CodeBeauty";
    ytChannel.OwnerName = "Saldina";
    ytChannel.SubscribersCount = 1800;
    ytChannel.PublishedVideoTitles = { "C++ for beginners Video 1", "HTML & CSS Video 1", "C++ OOP Video 1"};

    cout << "Name: " << ytChannel.Name << endl;
    cout << "OwnerName: " << ytChannel.OwnerName << endl;
    cout << "SubscribersCount: " << ytChannel.SubscribersCount << endl;
    //cout << "PublishedVideoTitles: " << ytChannel.PublishedVideoTitles << endl; // Not working this way;You need loop
    cout << "Videos: " << endl;
    for (string videoTitle : ytChannel.PublishedVideoTitles) {
        cout << videoTitle << endl;
    }

    system("pause>0");
}

