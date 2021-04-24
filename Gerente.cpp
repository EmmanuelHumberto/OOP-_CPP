#include "Gerente.hpp"

Gerente::Gerente(Cpf cpf, std::string nome, float salario):
Funcionarios(cpf, nome, salario)

{
}

float Gerente::bonificacao() const{

	return recuperaSalario() * 0.1;


}

