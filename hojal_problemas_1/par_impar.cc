//1. Desarrolle en C++ un programa que determine si el número entero introducidopor el usuario es par o no.
#include <iostream>
int main(){
	int num{0};
	std::cout<<"Introduzca un número: ";
	std::cin>>num;
	if (num%2 == 0)
	{
		std::cout<<"Su número es par"<<std::endl;
	}
	else
	{
		std::cout<<"Su número es impar"<<std::endl;
	}

	return 0;
}
