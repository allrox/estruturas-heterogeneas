//Desenvolvido a partir de exemplo não funcional da aula 3 de Estrutura de Dados,
//curso de Engenharia de Software Estácio.

#include <iostream>
#include <locale.h>
#include <string>
using namespace std;

	struct passageiros
	{
		char nomeDoPassageiro[30], origem[20], destino[20], numeroDaPassagem[15], identidade[15], tel[15];
	};
	
int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int i, ii;

	passageiros passageiro1;
	passageiros passageiro2;
	passageiros	passageiro3;
	

	cout<<"\nSistema de registro de passageiros"<<endl;
	cout<<"Informe o nome do passageiro:\t";cin.getline(passageiro1.nomeDoPassageiro,30);
	cout<<"Informe a origem:\t\t";cin.getline(passageiro1.origem,20);
	cout<<"Informe o destino:\t\t";cin.getline(passageiro1.destino,20);
	cout<<"Informe o número da Passagem:\t";cin.getline(passageiro1.numeroDaPassagem,15);
	cout<<"Informe o número da Identidade:\t";cin.getline(passageiro1.identidade,15);
	cout<<"Informe o número do telefone:\t";cin.getline(passageiro1.tel,15);
	
	cout<<"\nInforme o nome do passageiro:\t";cin.getline(passageiro2.nomeDoPassageiro,30);
	cout<<"Informe a origem:\t\t";cin.getline(passageiro2.origem,20);
	cout<<"Informe o destino:\t\t";cin.getline(passageiro2.destino,20);
	cout<<"Informe o número da Passagem:\t";cin.getline(passageiro2.numeroDaPassagem,15);
	cout<<"Informe o número da Identidade:\t";cin.getline(passageiro2.identidade,15);
	cout<<"Informe o número do telefone:\t";cin.getline(passageiro2.tel,15);

	cout<<"\nInforme o nome do passageiro:\t";cin.getline(passageiro3.nomeDoPassageiro,30);
	cout<<"Informe a origem:\t\t";cin.getline(passageiro3.origem,20);
	cout<<"Informe o destino:\t\t";cin.getline(passageiro3.destino,20);
	cout<<"Informe o número da Passagem:\t";cin.getline(passageiro3.numeroDaPassagem,15);
	cout<<"Informe o número da Identidade:\t";cin.getline(passageiro3.identidade,15);
	cout<<"Informe o número do telefone:\t";cin.getline(passageiro3.tel,15);
	
	system("pause");
	system("cls");

	cout<<"Exibindo os dados armazenados na etapa de cadastro\n";

	cout<<"\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++";
	cout<<"\nNome do Passageiro: "<<passageiro1.nomeDoPassageiro;
	cout<<"\nOrigem: "<<passageiro1.origem<<"\t\tDestino: "<<passageiro1.destino;
	cout<<"\nNúmero da Passagem: "<<passageiro1.numeroDaPassagem<<"\tIdentidade: "<<passageiro1.identidade<<"\tTelefone: "<<passageiro1.tel;
	cout<<"\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
	
	cout<<"\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++";
	cout<<"\nNome do Passageiro: "<<passageiro2.nomeDoPassageiro;
	cout<<"\nOrigem: "<<passageiro2.origem<<"\t\tDestino: "<<passageiro2.destino;
	cout<<"\nNúmero da Passagem: "<<passageiro2.numeroDaPassagem<<"\tIdentidade: "<<passageiro2.identidade<<"\tTelefone: "<<passageiro2.tel;
	cout<<"\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
	
	cout<<"\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++";
	cout<<"\nNome do Passageiro: "<<passageiro3.nomeDoPassageiro;
	cout<<"\nOrigem: "<<passageiro3.origem<<"\t\tDestino: "<<passageiro3.destino;
	cout<<"\nNúmero da Passagem: "<<passageiro3.numeroDaPassagem<<"\tIdentidade: "<<passageiro3.identidade<<"\tTelefone: "<<passageiro3.tel;
	cout<<"\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
	
	
	cout<<"\n";
	system("pause");
	
}


