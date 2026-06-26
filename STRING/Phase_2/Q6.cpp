// Count How Many Times a Character Appears in a String

#include <iostream>
#include <string>

int main() {
    std::string str;
    char val;
    int count = 0;

    std::cout << "Enter the String: ";
    std::getline(std::cin, str);

    std::cout << "Enter the character to check: ";
    std::cin >> val;

    for (char c : str) {
        if (c == val) {
            count++;
        }
    }

    std::cout << "The character '" << val
              << "' appears " << count
              << " time(s)." << std::endl;

    return 0;
}
