//Count how many words are there in the sentence of the string
#include<iostream>
#include<string>

int main(){
    std::string str="Hello How are you my dear friend";
    int words= 1;
    for(char x : str){
        if(x == ' '){
            words++;
        }
    }
    std::cout<<"The total words in the string sentence is: "<<words<<std::endl;
    return 0;
}
