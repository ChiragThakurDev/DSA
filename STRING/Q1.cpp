//Count how many vowels and consonants are in a string
#include<iostream>
#include<string>
#include<cctype>

int main(){
    std::string str="Hello buddy, How are you";
    int vowels=0;
    int consonants=0;
    for(char x:str){
        x=tolower(x);
    
    if(isalpha(x)){
        if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u'){
            vowels++;
        }
        else{
            consonants++;
        }
    }}
    std::cout<<"The total vowels are: "<<vowels<<std::endl;
    std::cout<<"The total consonants are: "<<consonants<<std::endl;
    return 0;
}
