#include "Transport.h"
#include "MailMessage.h"

#include <iostream>

using namespace std;

Transport::Transport(void) {}

Transport::~Transport(void) {}

/* static */ void Transport::send(const MailMessage& message) {
    cout << "sending email!" << endl;
    throw 1;
}
