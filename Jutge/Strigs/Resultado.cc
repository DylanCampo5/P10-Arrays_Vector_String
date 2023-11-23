#include <iostream>
#include <vector>
#include <string>
 
int letra() {
  std::string word;
  std::cin >> word;

  char letra, letra2;
  int num, num2;
  int suma{0};

  for (int i = 0; i < word.length(); ++i) {
    std::cout << word[i] << " ";
  }
  std::cout << std::endl; 

  for (int i = 0; i < word.length(); ++i) {
    char l;
    int n;
    l = word[i];
    n = l;
    std::cout << n << " ";
  }
  std::cout << std::endl;

  for (int i = 0; i < word.length(); ++i) {
    letra = word[i];
    num = letra;
  
    letra2 = word[i-1];
    num2 = letra2;
  
    suma = (num - num2);
    std::cout << suma << " ";
  }
  std::cout << std::endl;
  return suma;
}

int main() {
  int resultado = letra();
  return 0;
}
