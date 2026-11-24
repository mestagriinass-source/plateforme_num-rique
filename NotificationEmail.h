#pragma once

#include "Notification.h"

using namespace std;

class NotificationEmail : public Notification
{
private:
    string objet;

public:
    NotificationEmail(const string& destinataire, const string& objet,
        const string& message);
    void afficher() const override;
    void envoyer() override;
};
