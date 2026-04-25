#pragma once
#include<iostream>
using namespace std;

class clsMessage
{
private:
    int messageID;
    int senderID;
    int receiverID;
    string content;//this is text plain end to end encryption not now
    string dateSent;//could be with time but this better
    string timeSent;

public:
    bool msgSeen;

    clsMessage(int messageID, int senderID, int receiverID, string content, string dateSent, string timeSent);

    void msgIsRead();
};