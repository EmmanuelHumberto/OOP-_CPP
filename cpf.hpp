#pragma once
#include <string>
#include <iostream>

	
class Cpf{

private:
	std::string numero;
	
	
public:
	explicit Cpf(std::string numero);
    std::string recuperaNumero() const;

	


};