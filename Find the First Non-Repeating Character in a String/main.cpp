#include <iostream>
#include <string>

int find_first_non_repeating_char(const std::string &str) {
    int count[256] = {0};
    for(char ch : str) {
        count[static_cast<unsigned char>(ch)]++;
    }
    for (char ch : str) {
        if (count[static_cast<unsigned char>(ch)] == 1) {
            return ch;
        }
    }
    return -1;
}

int main() {
    std::string str;
    std::getline(std::cin, str);
    int result = find_first_non_repeating_char(str);
    if (result != -1) {
        std::cout << "First non-repeating character is: " << static_cast<char>(result) << std::endl;
    } else {
        std::cout << "No non-repeating character found." << std::endl;
    }
    return 0;
}