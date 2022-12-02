#include <iostream>
#include <string.h>
using namespace std;

int number_of_digits (); // funcion que devuelve el número de dígitos 

int number_of_digits (int n) {
  int counter;
  for (counter = 1; n >= 10; counter++) {
    n = n / 10;
  }
  return counter;
}

int main () {
  int n;
  cin >> n;
  cout << number_of_digits (n) << endl;
  return 0;
}