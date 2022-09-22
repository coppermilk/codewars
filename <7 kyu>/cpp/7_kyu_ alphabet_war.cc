//
// Created by zvgdb on 22.09.22.
//
#include <string>

using namespace std;

string alphabetWar(const string &fight) {
    int balance = 0;
    for (char ch: fight) {
        switch (ch) {
            case 'w':
                balance += 4;
                break;
            case 'p':
                balance += 3;
                break;
            case 'b':
                balance += 2;
                break;
            case 's':
                balance += 1;
                break;
            case 'm':
                balance -= 4;
                break;
            case 'q':
                balance -= 3;
                break;
            case 'd':
                balance -= 2;
                break;
            case 'z':
                balance -= 1;
                break;
            default:
                break;
        }
    }

    if (balance < 0) {
        return "Right side wins!";
    } else if (balance > 0) {
        return "Left side wins!";
    } else {
        return "Let's fight again!";
    }
}

string alphabetWar2(const string &fight) {
    int balance = 0;
    for (char ch: fight) {
        switch (ch) {
            case 'w':
                ++balance;
            case 'p':
                ++balance;
            case 'b':
                ++balance;
            case 's':
                ++balance;
                break;
            case 'm':
                --balance;
            case 'q':
                --balance;
            case 'd':
                --balance;
            case 'z':
                --balance;
            default:
                break;
        }
    }

    if (balance < 0) {
        return "Right side wins!";
    } else if (balance > 0) {
        return "Left side wins!";
    } else {
        return "Let's fight again!";
    }
}

int main() {
    /*Tests.*/

    alphabetWar("zdqmwpbs");
    alphabetWar2("zdqmwpbs");
    return 0;
}