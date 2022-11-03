// Universidad de La Laguna
// Escuela Superior de Ingeniería y Tecnología
// Grado en Ingeniería Informática
// Informática Básica
// @author Gabriel Martin Broock
// @description prints a line with the sum of 2 integer numbers

#include <iostream>

int main () {
  int numero1, numero2, suma;
  std::cin >> numero1 >> numero2;
  suma = numero1 + numero2;
  std::cout << suma << std::endl;
  
  return 0;

}

