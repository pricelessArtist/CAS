#include <iostream>
#include <string>
#include "./utils/Scanner/Scanner.hpp"
#include "utils/Token/Token.hpp"
using namespace std;

int main() {
    vector<char> tokens;
    vector<Token> tokenList;
    string userInput;  
    
    cout << "Enter math equation: ";
    cin >> userInput;
    tokens = scan_tokens(userInput);
    tokenList = tokenization(tokens);

    for (auto listOfTokens = tokenList.begin(); listOfTokens != tokenList.end(); ++listOfTokens) {
      cout << "Tokens value: " << (listOfTokens->token) << endl;
      cout << "Token Type: " << (listOfTokens->tokenType) << endl;
      cout << endl;
    }

    return 0;
}
