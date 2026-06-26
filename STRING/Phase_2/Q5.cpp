// Count How Many Spaces Are in a Sentence

#include <iostream>
#include <string>

int main() {
    std::string str;
    std::cout << "Enter the Sentence: ";
    std::getline(std::cin, str);

    int count = 0;

    for (char x : str) {
        if (x == ' ') {
            count++;
        }
    }

    std::cout << "Number of spaces: " << count << std::endl;

    return 0;
}
