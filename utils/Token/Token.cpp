#include "Token.hpp"
#include <iostream>
using namespace std;

Token* allocateNewToken(char tokenValue, TokenType tokenType) {
  Token* newToken = new Token(tokenValue, tokenType);
  return newToken;
}

bool isNumber(char token) {
  return (token >= '0' && token <= '9');
}

bool isLetter(char token) {
  return (token >= 'a' && token <= 'z') || (token >= 'A' && token <= 'Z');
}

vector<Token> tokenization(vector<char> tokenChar) {
  vector<Token> tokens;
  char tokenValue;
  Token* newToken;

  for (size_t i = 0; i < tokenChar.size(); i++) {
    tokenValue = tokenChar[i];

    if (tokenValue == '+' || tokenValue == '-' || tokenValue == '*' || tokenValue == '/') {
      newToken = allocateNewToken(tokenValue, OPERATOR);
      tokens.push_back(*newToken);
    } else if (tokenValue == '(') {
      newToken = allocateNewToken(tokenValue, OPEN_PAREN);
      tokens.push_back(*newToken);
    } else if (tokenValue == ')') {
      newToken = allocateNewToken(tokenValue, CLOSE_PAREN);
      tokens.push_back(*newToken);
    } else if (isNumber(tokenValue)) {
      newToken = allocateNewToken(tokenValue, NUMBER);
      tokens.push_back(*newToken);
    } else if (isLetter(tokenValue)) {
      newToken = allocateNewToken(tokenValue, VARIABLE);
      tokens.push_back(*newToken);
    } else {
      cout << "Token not found. " << tokenValue << endl;
    }
  }  


  return tokens;
}
