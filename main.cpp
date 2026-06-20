#include <iostream>
#include "utils.h"

using namespace std;

int main() {
    string username, password;
    cout << "Enter Name: ";
    cin >> username;
    cout << "Enter Password: ";
    cin >> password;
    if (login(username, password)) {
        cout << "Success!";
    } else {
        cout << "Login Failed :(";
    }
}