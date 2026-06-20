#include "passwords.h"

bool login(string username, string password)
{
    if (userExists(username)) {
        return getPassword(username) == password;
    }

    return false;
}