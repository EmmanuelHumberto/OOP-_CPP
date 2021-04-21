#pragma once


#include "Conta.hpp" 

class ContaPoupanca : public Conta
{
public:
	ContaPoupanca();
	ContaPoupanca(std::string numero, Titular titular);

};

