#include "parser.h"
#include "parser.h"
#include <iostream>
#include <cstdlib>
#include <fstream>

using namespace std;

void printHelp() {
    cout << "Usage: cmilan input_file" << endl;
}

int main() {
    ifstream input;
    input.open("input.txt");
    if(input) {
        Parser p("input.txt", input);
        p.parse();
        return EXIT_SUCCESS;
    } else {
        cerr << "File 'input.txt' not found" << endl;
        return EXIT_FAILURE;
    }
}

