#pragma once
#include <iostream>
#include "Titular.hpp"
#include "Conta.hpp"



class ContaPoupanca final: public Conta

{
public:
	ContaPoupanca(std::string numero, Titular titular);
	float taxaSaque() const override;
};

