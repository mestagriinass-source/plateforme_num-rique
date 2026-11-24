#include <iostream>

#include "GestionnaireNotifications.h"
#include "NotificationEmail.h"
#include "NotificationSMS.h"
#include "NotificationPush.h"

using namespace std;

int main()
{
    cout << "===== PARTIE C : ENVOI INDIVIDUEL =====" << endl;

    NotificationEmail email(
        "user@example.com",
        "Securite",
        "Nouvelle connexion detectee");

    NotificationSMS sms(
        "0612345678",
        "Orange",
        "Votre code est 4582");

    NotificationPush push(
        "user_102",
        "MyBank",
        "Paiement confirme");

    Notification* notifications[] = { &email, &sms, &push };
    const int nombreNotifications = 3;

    for (int i = 0; i < nombreNotifications; ++i)
    {
        notifications[i]->afficher();
        notifications[i]->envoyer();
        cout << endl;
    }

    cout << "===== PARTIE D : ENVOI GROUPE =====" << endl;

    GestionnaireNotifications gestionnaire;
    gestionnaire.ajouter(&email);
    gestionnaire.ajouter(&sms);
    gestionnaire.ajouter(&push);
    gestionnaire.envoyerToutes();

    return 0;
}
