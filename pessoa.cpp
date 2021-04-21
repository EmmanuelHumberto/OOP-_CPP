#include "pessoa.hpp"
#include <iostream>

/*------------------------------------------
 *CONSTRUTOR PESSOAS */	
Pessoa::Pessoa(Cpf cpf, std::string nome):
cpf(cpf),nome(nome)
{
}

/*------------------------------------------
 * VERIFICA TAM NOME*/	
void Pessoa::verifica_tam_nome(){
	
	if(nome.size() < 5){
		std::cout << "Nome muito curto." << std::endl;
		exit(1);
	 }
}