#pragma once

#include <string>

using namespace std;

class Notification
{
protected:
    string destinataire;
    string message;

public:
    Notification(const string& destinataire, const string& message);
    virtual void afficher() const;
    virtual void envoyer() = 0;
    virtual ~Notification();
};
