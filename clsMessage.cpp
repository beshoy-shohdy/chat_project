#include "clsMessage.h"

clsMessage::clsMessage(int messageID, int senderID, int receiverID, string content, string dateSent, string timeSent)
{
    messageID = messageID;
    senderID = senderID;
    receiverID = receiverID;
    content = content;
    dateSent = dateSent;
    timeSent = timeSent;
    msgSeen = false;
}

void clsMessage::msgIsRead()
{
    msgSeen = true;
}