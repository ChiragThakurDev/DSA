//Print the ASCII value of each character in a string
#include<iostream>
#include<string>

int main(){
    std::string str="Hello How are you my dear friend";
    for(char ch : str){
        std::cout<<ch<< " = "<<int(ch)<<std::endl;
    }
    std::cout<<std::endl;
    return 0;
}
