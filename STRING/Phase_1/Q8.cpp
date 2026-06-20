//Compare two strings lexicographically (like dictionary order);
#include<iostream>
#include<string>

int main(){
    std::string str1="I am a boy ";
    std::string str2="I am a girl";
    if(str1 < str2 ){
        std::cout<<str1<<"comes first";
    }
    else{
        std::cout<<str2<<"comes first";
    }
    return 0;
}
