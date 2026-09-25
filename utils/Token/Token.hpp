//this is responsible for turning the characters from the scanner into a token

#pragma once
#include <vector>

enum TokenType {
  NUMBER,
  OPERATOR,
  OPEN_PAREN,
  CLOSE_PAREN,
  VARIABLE
};

struct Token{
  char token = NULL;
  TokenType tokenType;

  Token(char tokenValue, TokenType tokensType) {
    token = tokenValue;
    tokenType = tokensType;
  }
};

Token* allocateNewToken(char tokenValue);

std::vector<Token> tokenization(std::vector<char> tokenChar);

bool isNumber(char token);

bool isLetter(char token);
