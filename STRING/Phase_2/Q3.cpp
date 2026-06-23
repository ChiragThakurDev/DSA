//Count how many uppercase and lowercase characters are in a string
#include<iostream>
#include<string>
#include<cctype>
int main(){
    std::string str="Hello buddy, How are you 1234";
    int uppercase=0;
    int lowercase=0;
    for(char x:str){
        if(isupper(x)){
            uppercase++;
        }
        else if(islower(x)){
            lowercase++;
        }
    }
    std::cout<<"The total uppercase characters are: "<<uppercase<<std::endl;
    std::cout<<"The total lowercase characters are: "<<lowercase<<std::endl;
    return 0;
}