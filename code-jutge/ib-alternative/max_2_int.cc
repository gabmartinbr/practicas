// Write a program that reads two numbers and prints their maximum.
#include <iostream>
int main() {
  int a, b;
  int maximum;
  std::cin >> a >> b;
  if (a > b) {
    maximum = a;
    std::cout << maximum << std::endl;
  } else {
    maximum = b;
    std::cout << maximum << std::endl;
  }
  return 0;
}