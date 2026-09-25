#include "Scanner.hpp"
#include <string>
#include <vector>
using namespace std;

vector<char> scan_tokens(string userInput) {
  int size = userInput.length();
  vector<char> tokens(size);

  //take userinput and break it down into an array
  for (int i = 0; i < size; i++) {
    tokens[i] = userInput[i];
  }

  return tokens;
}
