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
};

int main()
{
    youtubeChannel ourYTChannel;
    ourYTChannel.name = "Tech Ram";
    ourYTChannel.ownerName = "Dhananjay Porwal";
    ourYTChannel.subscriberCount = 100;
    ourYTChannel.publishedVideoTitles = {"CEH tutorials", "Basics of Ubuntu", "Temp Mail"};

    cout << "Name : " << ourYTChannel.name << endl;
    cout << "Owner Name : " << ourYTChannel.ownerName << endl;
    cout << "Subscriber : " << ourYTChannel.subscriberCount << endl;
    cout << "Videos : " << endl;
    for (string title : ourYTChannel.publishedVideoTitles)
    {
        cout << title << endl;
    }
}