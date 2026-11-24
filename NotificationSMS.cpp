#include "NotificationSMS.h"

#include <iostream>

using namespace std;

NotificationSMS::NotificationSMS(const string& destinataire,
    const string& operateur, const string& message)
    : Notification(destinataire, message), operateur(operateur)
{
}

void NotificationSMS::afficher() const
{
    cout << "SMS | Numero : " << destinataire
        << " | Operateur : " << operateur
        << " | Message : " << message << endl;
}

void NotificationSMS::envoyer()
{
    cout << "Envoi du SMS..." << endl;
    afficher();
}
