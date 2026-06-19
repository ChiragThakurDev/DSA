//Convert all character of a sting to uppercase
#include<iostream>
#include<string>
#include <cctype>
int main(){
    std::string str="Heloo how are you. I am fine, Thank you. What about you? ";
    for(int i=0;i<str.length();i++){
    str[i]=toupper(str[i]);
    }
    std::cout<<str<<std::endl;
    return 0;
}
