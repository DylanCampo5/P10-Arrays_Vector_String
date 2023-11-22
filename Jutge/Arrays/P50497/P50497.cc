#include <iostream>
#include <string>
#include <algorithm>

bool is_palindrome() {
  bool respuesta;
  std::string word;
  std::getline(std::cin, word);
  std::string word2 = word;
  std::reverse(word.begin(), word.end());
  if (word == word2) {
    respuesta = true;
  }
  else { 
    respuesta = false;
  }

  return respuesta;
}

int main() {
  bool Palindromo = is_palindrome();
  std::cout << Palindromo << '\n';
  return 0;
}
 
