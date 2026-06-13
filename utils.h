#ifndef UTILS_H
#define UTILS_H

#include "passwords.h"
#include <string>

using namespace std;

bool login(string name, string password) {
    if (userExists(name)) {
        return getPassword(name) == password;
    }
    return false;
}

#endif