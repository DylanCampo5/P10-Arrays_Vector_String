#include <iostream>
#include <string>
#include <algorithm>

std::string Inverso() {
  std::string word;
  std::getline(std::cin, word);
  std::reverse(word.begin(), word.end());
  return word;
}

int main() {
  std::string Invertida = Inverso();
  std::cout << Invertida << '\n';
  return 0;
}
