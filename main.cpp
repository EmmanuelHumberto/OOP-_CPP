#include <iostream>
#include <string>
#include "Conta.hpp"
#include "Titular.hpp"
#include "Cpf.hpp"
#include "Funcionarios.hpp"
#include "Poupanca.hpp"
#include "ContaCorrente.hpp"
#include "Pessoa.hpp"
#include "Gerente.hpp"

/*------------------------------------------*/

using namespace std;
/*------------------------------------------
 * EXIBE SALDO*/
void ExibeSaldo(const Conta& conta)

/*Chamada por Referência
Este método copia a referência de um argumento para o parâmetro formal.
Dentro da função, a referência é usada para acessar o argumento real
usado na chamada. Isso significa que as alterações feitas no parâmetro
afetam o argumento.
*/

{
    cout << "O saldo da conta é: " << conta.recuperaSaldo() << endl;
}
/*------------------------------------------
 * REALIZA SAQUE*/
void RealizaSaque(Conta& conta)

{
	conta.sacar(200);
}
/*------------------------------------------
 * MAIN*/

int main()
{
    Titular JoanaDarc(Cpf("123.456.789-10"), "JoanaDarc");
	ContaPoupanca p("123456", JoanaDarc);
    p.depositar(8000);
    RealizaSaque(p);
    ExibeSaldo(p);
    std::cout << "============================================" << std::endl;
    std::cout << std::endl;

    Titular RaulSeixas(Cpf("098.765.432-10"),"RaulSeixas");
	ContaCorrente c_1("654321", RaulSeixas);
	c_1.depositar(13666);
	ExibeSaldo(c_1);
	RealizaSaque(c_1);

	Titular DomPedro(Cpf("098.465.432-10"),"DomPedro");
	ContaCorrente c_3("654321", DomPedro);
	ExibeSaldo(c_3);
	ExibeSaldo(c_1);
	c_1.transferePara(c_3,5000);
	ExibeSaldo(c_1);
	ExibeSaldo(c_3);





    cout << "Número de contas: " << Conta::recupera_conta_nun_decontas() << endl;
    //Funcionarios gerente(Cpf("123.456.789-10"), "Juca Pirama", 15000);
	//cout << "Nome do funcionário: " << gerente.recuperaNome() << endl;

    return 0;
}
