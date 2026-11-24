#include "GestionnaireNotifications.h"

#include <iostream>

using namespace std;

GestionnaireNotifications::GestionnaireNotifications() : compteur(0)
{
    for (int i = 0; i < 100; ++i)
    {
        notifications[i] = nullptr;
    }
}

void GestionnaireNotifications::ajouter(Notification* notification)
{
    if (notification == nullptr)
    {
        return;
    }

    if (compteur < 100)
    {
        notifications[compteur] = notification;
        ++compteur;
    }
    else
    {
        cout << "Le gestionnaire est plein." << endl;
    }
}

void GestionnaireNotifications::envoyerToutes()
{
    for (int i = 0; i < compteur; ++i)
    {
        notifications[i]->envoyer();
    }
}
