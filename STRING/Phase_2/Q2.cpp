//Count how many digits, letters and special characters are in a string
#include<iostream>
#include<string>
#include<cctype>

int main(){
    std::string str="Hello buddy, How are you 1234";
    int digits=0;
    int letters=0;
    int special=0;
    for(char x:str){
        if(isdigit(x)){
            digits++;
        }
        else if(isalpha(x)){
            letters++;
        }
        else{
            special++;
        }
    }
    std::cout<<"The total digits are: "<<digits<<std::endl;
    std::cout<<"The total letters are: "<<letters<<std::endl;
    std::cout<<"The total special characters are: "<<special<<std::endl;
    return 0;
}