#pragma once
#include <iostream>
#include <string>
using namespace std;
class Validation
{
public:

    // to ckeck name
    static bool check_name(string name) {
        if (name.size() < 5 || name.size() > 20) {
            return false;
        }


        for (int i = 0; i < name.size(); i++) {
            if (!isalpha(name[i]) && name[i] != ' ') {
                return false;
            }

        }
        return true;

    }
    // check pass
    static bool check_pass(string pass) {
        if (pass.size() >= 8 && pass.size() <= 20) { return true; }
        else { return false; }

    }

    static bool check_balance(double balance) {
        if (balance < 1500) {

            return false;

        }
        else {
            return true;
        }
    }

};