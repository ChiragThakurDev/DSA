//Count how many substrings start and end with the same character (simple logic).
#include<iostream>
#include<string>

int main(){
    std::string str="abca";
    int count=0;
    int n=str.length();

    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(str[i]==str[j]){
                count++;
            }
        }
    }
    std::cout<<"Total Substrings: "<<count<<std::endl;

    return 0;
}
