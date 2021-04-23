#include "ContaCorrente.hpp"
#include<iostream>

ContaCorrente::ContaCorrente(std::string numero, Titular titular):
Conta(numero, titular)
{
	 std::cout << "Conta - Corrente [OK]" << std::endl;
	 std::cout << "------------------------" << std::endl;

};

/*-----------------------------------------------------------------
 * SACAR CP*/
float ContaCorrente::taxaSaque()const {

	 std::cout << "Chamando o metodo sacar da conta Corrente" << std::endl;
	 return  0.05;

 }

void ContaCorrente::transferePara(Conta&contaDestino, float valor){

	sacar(valor);
	contaDestino.depositar(valor);


}
