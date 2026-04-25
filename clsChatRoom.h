#pragma once
#include<iostream>
#include<vector>
using namespace std;

class clsChatRoom
{
private:
    int chatRoomID;
    string chatRoomName;
    int totalUsers;
    vector<int> usersIDs;

public:
    clsChatRoom(int chatRoomID, string chatRoomName, int totalUsers);

    void AddUser(int userID);
};