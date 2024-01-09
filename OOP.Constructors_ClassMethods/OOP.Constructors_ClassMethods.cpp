// OOP.Constructors_ClassMethods.cpp : This file contains the 'main' function. Program execution begins and ends there.
// DRY rules 
// Constructors-Rules: 1. Constructors have the same name as the class. 2. Constructors don't have return types

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

    YouTubeChannel(string name, string ownerName) {
        Name = name;
        OwnerName = ownerName;
        SubscribersCount = 0;
    }
    void GetInfo(){
        /*cout << "Name: " << ytChannel.Name << endl;*/
        cout << "Name: " << Name << endl; //We are in the class
        cout << "OwnerName: " << OwnerName << endl;
        cout << "SubscribersCount: " << SubscribersCount << endl;
        cout << "Videos: " << endl;
        for (string videoTitle : PublishedVideoTitles) {
            cout << videoTitle << endl;
        }
    }
};

int main()
{
    // Create an object of that class
    YouTubeChannel ytChannel("CodeBeauty", "Saldina");
    ytChannel.PublishedVideoTitles.push_back("C++ for beginners");
    ytChannel.PublishedVideoTitles.push_back("HTML & CSS for beginners");
    ytChannel.PublishedVideoTitles.push_back("C++ OOP");

    YouTubeChannel ytChannel2("AmySings", "Amy"); //Invoking the second channel

    ytChannel.GetInfo();
    cout << endl;
    ytChannel2.GetInfo();
    // To assign values of the properties of  the ytChannel
    /*
    ytChannel.Name = "CodeBeauty";
    ytChannel.OwnerName = "Saldina";
    ytChannel.SubscribersCount = 1800;
    ytChannel.PublishedVideoTitles = { "C++ for beginners Video 1", "HTML & CSS Video 1", "C++ OOP Video 1" };
    */

    //cout << "Name: " << ytChannel.Name << endl;
    //cout << "OwnerName: " << ytChannel.OwnerName << endl;
    //cout << "SubscribersCount: " << ytChannel.SubscribersCount << endl;
    ////cout << "PublishedVideoTitles: " << ytChannel.PublishedVideoTitles << endl; // Not working this way;You need loop
    //cout << "Videos: " << endl;
    //for (string videoTitle : ytChannel.PublishedVideoTitles) {
    //    cout << videoTitle << endl;
    //}
    
    // create second youtube channel
    //YouTubeChannel ytChannel2("AmySings", "Amy"); //Invoking the second channel
    // To assign values of the properties of  the ytChannel
    /*ytChannel2.Name = "AmySings";
    ytChannel2.OwnerName = "Amy";
    ytChannel2.SubscribersCount = 2000;
    ytChannel2.PublishedVideoTitles = { "Johny B - Cover", "Lorelei - Cover"};*/

    //cout << "Name: " << ytChannel2.Name << endl;
    //cout << "OwnerName: " << ytChannel2.OwnerName << endl;
    //cout << "SubscribersCount: " << ytChannel2.SubscribersCount << endl;
    ////cout << "PublishedVideoTitles: " << ytChannel.PublishedVideoTitles << endl; // Not working this way;You need loop
    //cout << "Videos: " << endl;
    //for (string videoTitle : ytChannel2.PublishedVideoTitles) {
    //    cout << videoTitle << endl;
    //}
    system("pause>0");
}

