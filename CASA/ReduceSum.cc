//Si hay muchos comentarios, es porque son para mi para a la hora de estudiar
#include <iostream>
#include <vector>



std::vector<float> GenerateVector(int tamano1){
//Declaración de variables  
  std::vector<float> vector1;
//La parte que nos va metiendo elemento al vector de tamano1
  for (int i = 0; i < tamano1; ++i) {
    int elemento1;
    std::cin >> elemento1;
    vector1.push_back(elemento1);
  }

  return vector1;
}



float ReduceSum(int tamano1) {
  std::vector<float> vector1 = GenerateVector(tamano1);
  float sumatorio{0};
//Esto sirve para que sume los elementos del vector
  for (int i = 0; i <= tamano1; ++i) {
    sumatorio += vector1[i];
  }

  return sumatorio;
}



int main() {
//Esto es el tamaño del vector, y lo pase a fuera de la funcion para usarlo más
  int tamano1;
  std::cin >> tamano1;
//
  float resultado = ReduceSum(tamano1);
  std::cout << resultado << '\n';

  return 0;
}
