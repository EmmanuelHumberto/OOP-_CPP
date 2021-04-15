#include <iostream>
#include "cpf.hpp"

Cpf::Cpf(std::string numero): numero(numero)

{
	std::cout << "Cpf criado" << std::endl;
}

std::string Cpf::recuperaNumero() const
{
    return numero;
}