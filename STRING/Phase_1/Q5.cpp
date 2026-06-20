//Count how many Characters (excluding spaces) are in the string
#include<iostream>
#include<string>

int main(){
    std::string str="Hello HOw are you. My dear friend";
    int count=0;
    for(char x: str){
    if(x != ' '){
       count++;
    }
    }
    std::cout<<"The total characters in the string are "<<count<<std::endl;
    return 0;
}

