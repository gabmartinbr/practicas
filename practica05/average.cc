// Universidad de La Laguna
// Escuela Superior de Ingeniería y Tecnología
// Grado en Ingeniería Informática
// Informática Básica
// @author Gabriel Martin Broock
// @description prints the average of the numbers with 2 digits after de decimal
// point

#include <iostream>

int main () {
  int numero1, numero2;
  double average;
  std::cin >> numero1 >> numero2;
  average = (numero1 + numero2) / 2;
  std::cout << average << std::endl;

  return 0; 
}

