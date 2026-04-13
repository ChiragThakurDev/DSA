#include<iostream>
#include<string>
using namespace std;

void check(string pass){
    int len = pass.length();

    if(len < 8){
        cout << "Invalid password (less than 8 characters): " << pass << endl;
        return;
    }

    bool hasDigit = false;

    // Manually checking characters (up to first 8 positions)
    if(len > 0 && pass[0] >= '0' && pass[0] <= '9') hasDigit = true;
    else if(len > 1 && pass[1] >= '0' && pass[1] <= '9') hasDigit = true;
    else if(len > 2 && pass[2] >= '0' && pass[2] <= '9') hasDigit = true;
    else if(len > 3 && pass[3] >= '0' && pass[3] <= '9') hasDigit = true;
    else if(len > 4 && pass[4] >= '0' && pass[4] <= '9') hasDigit = true;
    else if(len > 5 && pass[5] >= '0' && pass[5] <= '9') hasDigit = true;
    else if(len > 6 && pass[6] >= '0' && pass[6] <= '9') hasDigit = true;
    else if(len > 7 && pass[7] >= '0' && pass[7] <= '9') hasDigit = true;

    if(hasDigit){
        cout << "Valid password: " << pass << endl;
    } else {
        cout << "Invalid password (no digit): " << pass << endl;
    }
}

int main(){
    check("2345daddw");
    check("abcdefg");
    check("passw9876ord190");
    check("helloWorld");
    return 0;
}