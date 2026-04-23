#include<iostream>
#include"clsStatus.h"

using namespace std;

int main() {
	int total = 10; // number of users in the chat

	clsStatus status("23-04-206", "03:00 PM", total);

	for (int i = 1;i <= total;i++) {
		status.msgIsRead();
		cout << i << " opened the chat" << endl;
		cout << "Status:";
		if (status.msgSeen) {
			cout << "Seen\n" << endl;
		}
		else {
			cout << "UnSeen\n" << endl;
		}
	}

	return 0;
}