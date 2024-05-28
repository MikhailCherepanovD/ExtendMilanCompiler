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
    //input.open("input1.txt");
    //input.open("input2.txt");
    input.open("input3err.txt");
    //input.open("input4err.txt");
    if(input) {
        Parser p("input.txt", input);
        p.parse();
        return EXIT_SUCCESS;
    } else {
        cerr << "File 'input.txt' not found" << endl;
        return EXIT_FAILURE;
    }
}

