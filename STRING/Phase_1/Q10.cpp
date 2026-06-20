//Check wheather the string is empty or not
#include<iostream>
#include<string>

int main(){
 std::string str;
 std::cout<<"Enter the string "<<std::endl;
 std::getline(std::cin,str);
 if(str==""){ // i can use the empty() or just use the size()==0 or lenght==0
     std::cout<<"The string is Empty"<<std::endl;
 }
 else{
     std::cout<<"The string is not Empty"<<std::endl;
 }
 return 0;
}
