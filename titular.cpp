#include "titular.hpp"
#include <iostream>


Titular::Titular(std::string nome): nome(nome)

{
	verifica_tam_nome();
}

void Titular::verifica_tam_nome(){
	
	if(nome.size() < 5){
		std::cout << "Nome muito curto." << std::endl;
		exit(1);
	 }
}

std::string Titular::recuperaTitular(){
	
	return nome;
	
	
}


