#include <iostream>
#include <stdio.h>

// handleInput ... Handle the data given from standard input.
void handleInput() {
    //First line is C -- The amount of lines there are.
    unsigned int C;
    std::cin >> C;

    //Debug information.
    std::cout << "There are " << C << " lines." << std::endl;
}

// main ... The main function.
int main() {
    handleInput();
    return 0;
};
