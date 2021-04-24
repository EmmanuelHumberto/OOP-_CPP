#include "Caixa.hpp"

Caixa::Caixa(Cpf cpf, std::string nome, float salario):
Funcionarios(cpf, nome, salario)

{
}

float Caixa::bonificacao() const{

	return recuperaSalario() * 0.1;


}
