#include <iostream>
#include "funcionarios.hpp"

/*------------------------------------------
 * CONSTRUTOR FUNCIONARIOS*/	
Funcionarios::Funcionarios(Cpf cpf, std::string nome, float salario)
:Pessoa(cpf,nome),salario(salario)

{
}

/*------------------------------------------
 * RECUPERA NOME*/	
std::string Funcionarios::recuperaNome()
{
	
return nome;
}