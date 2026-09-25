#include "Scanner.hpp"
#include <string>
#include <vector>
using namespace std;

vector<char> scan_tokens(string userInput) {
  vector<char> tokens(userInput.length());

  //take userinput and break it down into an array
  for (size_t i = 0; i < userInput.length(); i++) {
    tokens[i] = userInput[i];
  }

  return tokens;
}
