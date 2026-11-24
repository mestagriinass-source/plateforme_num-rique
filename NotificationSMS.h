#pragma once

#include "Notification.h"

using namespace std;

class NotificationSMS : public Notification
{
private:
    string operateur;

public:
    NotificationSMS(const string& destinataire, const string& operateur,
        const string& message);
    void afficher() const override;
    void envoyer() override;
};
