#include "Conta.hpp"
#include <iostream>
#include <string>
#include "Conta.hpp"

 int Conta::conta_nun_decontas = 0;

//lista de inicialização.
 Conta::Conta(std::string numero_conta, std::string cpf_titular, std::string nome_titular)
 : numero_conta(numero_conta),cpf_titular(cpf_titular), nome_titular(nome_titular), saldo(0)
 { 
	 
   /*this->numero_conta = numero_conta;
	 this->cpf_titular = cpf_titular;
	 this->nome_titular = nome_titular;
	 this->saldo = 0;
	*/
	
	//atributo de classe
	conta_nun_decontas++;
 }
 
void Conta::sacar(float valorASacar){ 
		if (valorASacar < 0){
				std::cout << "Não pode sacar valor negativo." << std::endl;
				return;
		 }
			
		if (valorASacar > saldo){
				std::cout << "Saldo insuficiente." << std::endl;
				return;
				
		 }
			
			saldo -= valorASacar;
		}

void Conta::depositar(float valorADepositar){
	
		if (valorADepositar < 0){
			std::cout << "Não pode sacar valor negativo." << std::endl;
			return;}

		saldo += valorADepositar;
		
		}

void Conta::defineNome(std::string nome){
	nome_titular = nome;

}

void Conta::defineCpf(std::string cpf){
			cpf_titular = cpf;
	
}
void Conta::defineNumero(std::string numero){
			numero_conta = numero;
	
}

 std::string Conta::recuperaCpf(){
		return cpf_titular;
} 

 std::string Conta::recuperaNome(){
		return nome_titular;
} 

std::string Conta::recuperaNumero(){
		return numero_conta;
} 

float Conta::recuperaSaldo()const{
		return saldo;
}