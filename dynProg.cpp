#include <iostream>
#include <stdio.h>
#include <map>
//Filthy strings -.-
#include <string.h>
#include <fstream>
//Unordered Set -- Cheap Hash Table \-0~0-/
#include <unordered_set>

//Memoized array of string, bool pairs.
std::map<std::string, bool> memoizedMemory;

//Create a reference to the dictionary.
std::unordered_set<std::string> dictRef;
// dict ... Check if the passed word is valid in the dictionary.
bool dict(std::string word) {

    if (memoizedMemory.count(word) <= 0) {
	   	//If it exists return true.
	   	memoizedMemory[word] = (1 && dictRef.count(word));
    }

    return memoizedMemory[word];
}

// loadDictionary ... Load the dictionary into memory.
void loadDictionary() {
    //Load file by name.
    std::fstream file("dictionBig.txt");
    std::string line;

    //Get all lines until EOF.
    while (file >> line) {
        dictRef.insert(line);
    }
}

// split ... Is it possible to add spaces to x1 ... xn to create a string of English words.
bool split(std::string line) {
    bool canSplit = false;

    return canSplit;
}

// handleInput ... Handle the data given from standard input.
void handleInput() {
    //First line is C -- The amount of lines there are.
    unsigned int C;
    std::cin >> C;

    //Line for std::cin to read in.
    std::string line;

    //Creating the loop that reads all of the lines.
    for (int lineCount = 0; lineCount < C + 1; lineCount++) {
        getline(std::cin, line);
        split(line);
    }

    //Debug information.
    //std::cout << "There are " << C << " lines." << std::endl;
}

// main ... The main function.
int main() {
    //Load the dictionary into memory.
    loadDictionary();

    //Handle / Parse the input.
    handleInput();
    
    //And we're done!
    return 0;
};
