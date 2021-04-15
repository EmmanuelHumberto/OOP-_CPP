#include "Conta.hpp"
#include <iostream>

//=======================================================

int Conta::conta_nun_decontas = 0;

	//lista de inicialização.
	Conta::Conta(std::string numero, Titular titular):
	 
	 numero(numero),
	 titular(titular),
	 saldo(0)
	 
	 { 
		//atributo de classe
		conta_nun_decontas++;
 }

 //=======================================================
 
Conta::~Conta(){
	  
	conta_nun_decontas--;

 }
  
 //=========================================================  
void Conta::sacar(float valorASacar){ 

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
 
//============================================================

void Conta::depositar(float valorADepositar){
	
	if (valorADepositar < 0){
		std::cout << "Não pode sacar valor negativo." << std::endl;
		return;
		
	 }

	saldo += valorADepositar;

 }
 
//==============================================================

std::string Conta::recuperaNumero(){
	
	return numero;
} 

//================================================================

int Conta::recupera_conta_nun_decontas(){
	
	return conta_nun_decontas;
}

//=================================================================

float Conta::recuperaSaldo() const
{
	return saldo;
}

 