//The code for question 3

#include <iostream>
#include <string>
using namespace std;
int main() {
    // Declare and initialize the array
   string elements[] = {"B123", "C234", "A345", "C15", "B177", "G3003", "C235", "B179"};

    // Iterate through each element of the array
    for (int i = 0; i < sizeof(elements) / sizeof(elements[0]); ++i) {
        // Check if the element starts with the letter "B"
        if (elements[i][0] == 'B') {
            // Output the element if it starts with "B"
            cout << elements[i] << std::endl;
        }
    }

    return 0;
}
