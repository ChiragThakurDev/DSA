//Check the number is a perfect number
#include<iostream>
using namespace std;

void check(int num){
    if(num <= 1){
        cout << "Number " << num << " is NOT a perfect number\n";
        return;
    }

    int sum = 0;

    for(int i = 1; i <= num / 2; i++){
        if(num % i == 0){
            sum += i;
        }
    }

    if(sum == num){
        cout << "Number " << num << " is a perfect number\n";
    } else {
        cout << "Number " << num << " is NOT a perfect number\n";
    }
}

int main(){
    check(6);
    check(3);
    check(2);
    check(28);
    check(496);
    check(8765);
    return 0;
}