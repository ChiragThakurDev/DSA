//Convert the all character of a string to lower case
#include<iostream>
#include<string>
#include<cctype>

int main(){
    std::string str="Hello ,HOW ARE YOU .What ARE you DOING";
    for(int i=0;i<str.length();i++){
        str[i]=tolower(str[i]);
    }
    std::cout<<str<<std::endl;
    return 0;
}
