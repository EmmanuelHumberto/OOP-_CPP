#include "Pessoa.hpp"
#include <iostream>

/*------------------------------------------
 *CONSTRUTOR PESSOAS */
Pessoa::Pessoa(Cpf cpf, std::string nome):
cpf(cpf),nome(nome)
{


	std::cout << "Nome: " << nome << std::endl;
	std::cout << "------------------------" << std::endl;

}
Pessoa::~Pessoa(){

 }

/*------------------------------------------
 * VERIFICA TAM NOME*/
void Pessoa::verifica_tam_nome(){

	if(nome.size() < 5){
		std::cout << "*------------------------*" << std::endl;
		std::cout << "Nome muito curto." << std::endl;
		std::cout << "*------------------------*" << std::endl;
		exit(1);
	 }
}
