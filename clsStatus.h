#pragma once
#include<iostream>
using namespace std;

class clsStatus
{
private:
	string dateSent;
	string timeSent;
	int totalUsers; // all usres added to the group (if private chat will be 1)
	int usersWhoOpen; // all users who opened the group and see th msg

public:
	bool msgSeen;

	clsStatus(string date, string time, int othersInChat);
	void msgIsRead();

};

