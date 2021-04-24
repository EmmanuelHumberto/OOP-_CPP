#include "Funcionarios.hpp"

class Gerente: public Funcionarios
{

public:
	Gerente(Cpf cpf, std::string nome, float salario);
	float bonificacao() const;

};

