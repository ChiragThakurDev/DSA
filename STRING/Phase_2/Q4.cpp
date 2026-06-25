//Find the frequency of each character in a string (without using a map).
#include <iostream>
#include <string>

int main(){
    std::string str;
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);
   int freq[256] = {0}; // Assuming ASCII characters

    // Count frequency of each character
    for(char c : str){
        freq[static_cast<unsigned char>(c)]++;
    }

    std::cout << "Character frequencies:\n";
    for(int i = 0; i < 256; i++){
        if(freq[i] > 0){
            std::cout << static_cast<char>(i) << ": " << freq[i] << "\n";
        }
    }

    return 0;
}