#include <iostream>
#include "utils.h"

using namespace std;

int main() {
    string username, password;
    cin >> username >> password;
    if (login(username, password)) {
        cout << "Success!";
    } else {
        cout << "Login Failed :(";
    }
}