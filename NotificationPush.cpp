#include "NotificationPush.h"

#include <iostream>

using namespace std;

NotificationPush::NotificationPush(const string& destinataire,
    const string& application, const string& message)
    : Notification(destinataire, message), application(application)
{
}

void NotificationPush::afficher() const
{
    cout << "PUSH | Identifiant utilisateur : " << destinataire
        << " | Application : " << application
        << " | Message : " << message << endl;
}

void NotificationPush::envoyer()
{
    cout << "Envoi de la notification push..." << endl;
    afficher();
}
