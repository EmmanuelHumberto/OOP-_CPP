#include "Conta.hpp"
#include <iostream>

int Conta::conta_nun_decontas = 0;

/*-------------------------------------------------------------
* CONSTRUTOR CONTAS*/
Conta::Conta(std::string numero, Titular titular)://lista de inicialização.
 
numero(numero),
titular(titular),
saldo(0)
 
 { 
	//atributo de classe
	conta_nun_decontas++;
}

/*-------------------------------------------------------------
 *Construtor de Conta */
 
Conta::~Conta(){
	  
	conta_nun_decontas--;

 }
  
/*-------------------------------------------------------------
 * SACAR*/
 
void Conta::sacar(float valorASacar){ 
	
	std::cout << "Chamando o metodo sacar da conta Corrente" << std::endl;

	if (valorASacar < 0){
		std::cout << "Não pode sacar valor negativo." << std::endl;
		return;
	 }
	 
	 
	 float tarifaSaque = valorASacar * 0.05;
	 float valorSaque = valorASacar + tarifaSaque;

	if (valorSaque > saldo){
	std::cout << "Saldo insuficiente." << std::endl;
	return;

	 }

	saldo -= valorSaque;
	
 }
 
/*-------------------------------------------------------------
 * DEPOSITAR*/

void Conta::depositar(float valorADepositar){
	
	if (valorADepositar < 0){
		std::cout << "Não pode sacar valor negativo." << std::endl;
		return;
		
	 }

	saldo += valorADepositar;

 }
 
/*-------------------------------------------------------------
 * RECUPERA NUMERO*/

std::string Conta::recuperaNumero(){
	
	return numero;
} 

/*-------------------------------------------------------------
 * RECUPERA NUMERO DE CONTAS*/

int Conta::recupera_conta_nun_decontas(){
	
	return conta_nun_decontas;
}

/*-------------------------------------------------------------
 * RECUPERA SALDO*/

float Conta::recuperaSaldo() const
{
	return saldo;
}

 