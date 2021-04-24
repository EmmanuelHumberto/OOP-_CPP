
#include "Funcionarios.hpp"

class Caixa: public Funcionarios
{

public:
	Caixa(Cpf cpf, std::string nome, float salario);
	float bonificacao() const;

};



