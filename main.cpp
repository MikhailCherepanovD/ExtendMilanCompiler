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
    string file_name="input1.txt";
    //string file_name="input2.txt";
    //string file_name="input3err.txt";
    //string file_name="input4err.txt";
    input.open(file_name);

    if(input) {
        Parser p(file_name, input);
        p.parse();
        return EXIT_SUCCESS;
    } else {
        cerr << "File "<< file_name<< " not found" << endl;
        return EXIT_FAILURE;
    }
}

