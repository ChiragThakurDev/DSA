//Print first and last character of a string
#include<iostream>
#include<string>

int main(){
    std::string str="hi how are you!";
    std::cout<<str[0]<<" and "<<str[str.length()-1]<<" ";
    return 0;
}
