#include "clsStatus.h"

clsStatus::clsStatus(string date, string time, int othersInChat) {
    dateSent = date;
    timeSent = time;
    msgSeen = false;
    totalUsers = othersInChat;
    usersWhoOpen = 0;
}

void clsStatus::msgIsRead() {
    if (!msgSeen) {
        usersWhoOpen++;
        if (usersWhoOpen == totalUsers) {
            msgSeen = true;
        }
    }
}