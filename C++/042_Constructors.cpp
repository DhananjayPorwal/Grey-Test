#include <iostream>
#include <list>
using namespace std;

class youtubeChannel
{
public:
    string name;
    string ownerName;
    int subscriberCount;
    list<string> publishedVideoTitles;
    youtubeChannel(string name, string ownerName, int subscriberCount)
    {
        name = name;
        ownerName = ownerName;
        subscriberCount = subscriberCount;

    }
};

int main()
{
    youtubeChannel ourYTChannel("Tech Ram", "Dhananjay Porwal", 100);
    // ourYTChannel.name = "Tech Ram";
    // ourYTChannel.ownerName = "Dhananjay Porwal";
    // ourYTChannel.subscriberCount = 100;
    // ourYTChannel.publishedVideoTitles = {"CEH tutorials", "Basics of Ubuntu", "Temp Mail"};

    // cout << "Name : " << ourYTChannel.name << endl;
    // cout << "Owner Name : " << ourYTChannel.ownerName << endl;
    // cout << "Subscriber : " << ourYTChannel.subscriberCount << endl;
    // cout << "Videos : " << endl;
    // for (string title : ourYTChannel.publishedVideoTitles)
    // {
    //     cout << title << endl;
    // }

    youtubeChannel ourYTChannel2("KnowledgeHub", "Dhananjay Porwal", 10000);
    ourYTChannel.publishedVideoTitles.push_back("Importance of book reading");
    ourYTChannel.publishedVideoTitles.push_back("Importance of Silence");
    // ourYTChannel2.name = "KnowledgeHub ";
    // ourYTChannel2.ownerName = "Dhananjay Porwal";
    // ourYTChannel2.subscriberCount = 10000;
    // ourYTChannel2.publishedVideoTitles = {"Importance of book reading", "Importance of Silence"};

    cout << "Name : " << ourYTChannel.name << endl;
    cout << "Owner Name : " << ourYTChannel.ownerName << endl;
    cout << "Subscriber : " << ourYTChannel.subscriberCount << endl;
    cout << "Videos : " << endl;
    for (string title : ourYTChannel.publishedVideoTitles)
    {
        cout << title << endl;
    }
}