#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

// Function to count vowels in a string
int countVowels(const std::string& str) {
    int count = 0;
    for (char c : str) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            count++;
        }
    }
    return count;
}

// Function to count words in a string
int countWords(const std::string& str) {
    int count = 0;
    bool inWord = false;

    for (char c : str) {
        if (std::isalpha(c)) {
            if (!inWord) {
                count++;
                inWord = true;
            }
        } else {
            inWord = false;
        }
    }
    return count;
}

// Function to reverse a string
std::string reverse(const std::string& str) {
    return std::string(str.rbegin(), str.rend());
}

// Function to capitalize the second letter of each word
std::string capitalize(const std::string& str) {
    std::string result = str;
    bool capitalizeNext = false;

    for (char& c : result) {
        if (std::isalpha(c)) {
            if (capitalizeNext) {
                c = std::toupper(c);
                capitalizeNext = false;
            } else {
                capitalizeNext = true;
            }
        } else {
            capitalizeNext = false;
        }
    }
    return result;
}

int main() {
    std::ifstream file("fileData.txt");
    if (!file) {
        std::cerr << "Unable to open file." << std::endl;
        return 1;
    }

    std::string fileData;
    std::getline(file, fileData);

    // Count vowels
    int vowelCount = countVowels(fileData);
    std::cout << "Number of vowels: " << vowelCount << std::endl;

    // Count words
    int wordCount = countWords(fileData);
    std::cout << "Number of words: " << wordCount << std::endl;

    // Reverse string
    std::string reversed = reverse(fileData);
    std::cout << "Reversed statement: " << reversed << std::endl;

    // Capitalize second letter of each word
    std::string capitalized = capitalize(fileData);
    std::cout << "Capitalized statement: " << capitalized << std::endl;

    file.close();
    return 0;
}
