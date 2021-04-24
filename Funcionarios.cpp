#include <iostream>
#include <string>
#include "Funcionarios.hpp"

/*------------------------------------------
 * CONSTRUTOR FUNCIONARIOS*/
Funcionarios::Funcionarios(Cpf cpf, std::string nome, float salario)
:Pessoa(cpf,nome),salario(salario)

{
}

/*------------------------------------------
 * RECUPERA NOME*/
std::string Funcionarios::recuperaNome()const{

return nome;
}
/*------------------------------------------
 * RECUPERA SALARIO*/
float Funcionarios::recuperaSalario()const{

	return salario;
}
