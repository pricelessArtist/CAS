#include <iostream>
#include <string>
#include "./utils/DoublyLinkedList.hpp"
#include "./utils/Algorithms/Abacus.hpp"
#include "./utils/Scanner/Scanner.hpp"
using namespace std;

int main() {
    vector<char> tokens;
    string userInput;  
    
    cout << "Enter math equation: " << endl;
    cin >> userInput;
    tokens = scan_tokens(userInput);

    for (auto token = tokens.begin(); token < tokens.end(); token++) {
      cout << "Tokens: " << *token << endl;
    }

    return 0;
}
