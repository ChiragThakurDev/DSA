//Print digits of a number in words recursively (e.g., 123 → “one two three”)
#include<iostream>
using namespace std;
void check(int n){
    if(n==0){
        return;
    }
    int digit = n%10;
    check(n/10);
    switch(digit){
        case 0:
            cout<<"zero ";
            break;
        case 1:
            cout<<"one ";
            break;
        case 2:
            cout<<"two ";
            break;
        case 3:
            cout<<"three ";
            break;
        case 4:
            cout<<"four ";
            break;
        case 5:
            cout<<"five ";
            break;
        case 6:
            cout<<"six ";
            break;
        case 7:
            cout<<"seven ";
            break;
        case 8:
            cout<<"eight ";
            break;
        case 9:
            cout<<"nine ";
            break;
    }
}
int main(){
    cout<<"Enter a number: ";
    int n;
    cin>>n;
    check(n);
    // check(123);
    // cout<<endl;
    // check(456);
    // cout<<endl;
    // check(789);
    // cout<<endl;
    return 0;

}