#include "Conta.hpp"
#include <iostream>
#include <string>
#include "Conta.hpp"
void Conta::sacar(float valorASacar){ 
    if (valorASacar < 0){
            std::cout << "Não pode sacar valor negativo." << std::endl;
            return;}
        
        if (valorASacar > saldo){
            std::cout << "Saldo insuficiente." << std::endl;
            return;}
        
        saldo -= valorASacar;}

void Conta::depositar(float valorADepositar){
	
        if (valorADepositar < 0){
            std::cout << "Não pode sacar valor negativo." << std::endl;
            return;}

        saldo += valorADepositar;
}

float Conta::recuperaSaldo(){
			return saldo;

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