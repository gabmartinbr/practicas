//6. Escriba un programa que solicite al usuario un número entero de tres dígitos y escriba en pantalla el número con los dígitos en orden inverso.
#include <iostream>
int main(){
	int numero{0};
	int new_centena, new_decena, new_unidad;
	std::cout<<"introduce un número de 3 cifras: ";
	std::cin>>numero;
	new_centena = numero%10;
	numero = numero / 10;
	new_decena = numero % 10;
	numero = numero / 10;
	new_unidad = numero % 10;
	std::cout<<new_centena<<new_decena<<new_unidad<<std::endl;

	return 0;
}
