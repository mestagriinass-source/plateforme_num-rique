#include "NotificationEmail.h"

#include <iostream>

using namespace std;

NotificationEmail::NotificationEmail(const string& destinataire,
    const string& objet, const string& message)
    : Notification(destinataire, message), objet(objet)
{
}

void NotificationEmail::afficher() const
{
    cout << "EMAIL | A : " << destinataire
        << " | Objet : " << objet
        << " | Message : " << message << endl;
}

void NotificationEmail::envoyer()
{
    cout << "Envoi de l'email..." << endl;
    afficher();
}
