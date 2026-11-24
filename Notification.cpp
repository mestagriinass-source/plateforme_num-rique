#include "Notification.h"

#include <iostream>

using namespace std;

Notification::Notification(const string& destinataire, const string& message)
    : destinataire(destinataire), message(message)
{
}

void Notification::afficher() const
{
    cout << "Destinataire : " << destinataire
        << " / Message : " << message << endl;
}

Notification::~Notification()
{
}
