#include "pessoa.hpp"
#include <iostream>

Pessoa::Pessoa(Cpf cpf, std::string nome):cpf(cpf),nome(nome)
{
};

void Pessoa::verifica_tam_nome(){
	
	if(nome.size() < 5){
		std::cout << "Nome muito curto." << std::endl;
		exit(1);
	 }
}