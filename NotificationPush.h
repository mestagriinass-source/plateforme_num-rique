#pragma once

#include "Notification.h"

using namespace std;

class NotificationPush : public Notification
{
private:
    string application;

public:
    NotificationPush(const string& destinataire, const string& application,
        const string& message);
    void afficher() const override;
    void envoyer() override;
};
