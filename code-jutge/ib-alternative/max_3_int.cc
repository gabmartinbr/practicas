// Write a program that reads three numbers, all different, and prints their
// maximum.
#include <iostream>
int main() {
  int a, b, c;
  int maximum;
  std::cin >> a >> b >> c;
  if (a > b & a > c) {
    maximum = a;
    std::cout << maximum << std::endl;
  } else if (b > a & b > c) {
    maximum = b;
    std::cout << maximum << std::endl;
  } else {
    maximum = c;
    std::cout << maximum << std::endl;
  }
  return 0;
}