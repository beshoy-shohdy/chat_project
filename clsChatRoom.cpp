#include "clsChatRoom.h"

clsChatRoom::clsChatRoom(int chatRoomID, string chatRoomName, int totalUsers)
{
    chatRoomID = chatRoomID;
    chatRoomName = chatRoomName;
    totalUsers = totalUsers;
}

void clsChatRoom::AddUser(int userID)
{
    usersIDs.push_back(userID);
    totalUsers++;
}