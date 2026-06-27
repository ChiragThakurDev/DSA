
//Count how many alphabets are before 'm' and after 'm' in a given string
#include<iostream>
#include<string>
#include<cctype>

int main(){
    std::string str;
    int count_before=0;
    int count_after=0;
    std::cout<<"Enter the string"<<std::endl;
    std::getline(std::cin,str);
    for(char x:str){
        x=tolower(x);
        if(isalpha(x)){
            if(x<'m'){
                count_before++;
            }
            else if(x>'m'){
                count_after++;
            }
        }
    }
    std::cout<<"The total alphabets before the m are: "<<count_before<<std::endl;
    std::cout<<"The total alphabets after the m are: "<<count_after<<std::endl;
    return 0;
}
