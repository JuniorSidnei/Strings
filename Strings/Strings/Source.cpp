#include <iostream>
#include <string>
#include "stringConvert.h"

///PASSOS:
//Digitar uma string com espaços e virgulas OK
//Ler essa string com todos os caracteres OK
//Separar essa string a cada espaço em uma nova string
//Aplicar a função de inversão em cada string
//Juntar todas as frases em umna só


int main()
{
	stringConvert myS;


	std::cout << "Digite uma frase qualquer!" << std::endl;
	std::cout << "--------------------------" << std::endl;
	std::getline(std::cin, myS.my_expression);
	myS.countSpace(myS.my_expression);

	system("pause");
	return 0;
}