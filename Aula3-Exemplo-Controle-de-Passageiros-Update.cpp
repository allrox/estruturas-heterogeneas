//Desenvolvido a partir de exemplo não funcional da aula 3 de Estrutura de Dados,
//curso de Engenharia de Software Estácio.

#include <iostream>
#include <locale.h>
#include <string>
#define LIM 3
using namespace std;

	struct Passageiros
	{
		char nomeDoPassageiro[30], origem[20], destino[20], numeroDaPassagem[15], identidade[15], tel[15];
	};
	
int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int x;
	Passageiros passageiro[LIM];	

	cout<<"\nSistema de registro de passageiros"<<endl;
	
	//Loop para entrada de dados dos passageiros
	for(x=0 ; x<LIM; x++)
	{
		cout<<"----------------------------------"<<endl;
		cout<<"Informe o nome do passageiro:\t";cin>>passageiro[x].nomeDoPassageiro;
		cout<<"Informe a origem:\t\t";cin>>passageiro[x].origem;
		cout<<"Informe o destino:\t\t";cin>>passageiro[x].destino;
		cout<<"Informe o número da Passagem:\t";cin>>passageiro[x].numeroDaPassagem;
		cout<<"Informe o número da Identidade:\t";cin>>passageiro[x].identidade;
		cout<<"Informe o número do telefone:\t";cin>>passageiro[x].tel;
	}

	system("pause");
	system("cls");

	cout<<"Exibindo os dados armazenados na etapa de cadastro\n";

	//Loop para exibição dos dados armazenados
	for(x=0 ; x<LIM; x++)
	{
		cout<<"\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++";
		cout<<"\nNome do Passageiro: "<<passageiro[x].nomeDoPassageiro;
		cout<<"\nOrigem: "<<passageiro[x].origem<<"\t\tDestino: "<<passageiro[x].destino;
		cout<<"\nNúmero da Passagem: "<<passageiro[x].numeroDaPassagem<<"\tIdentidade: "<<passageiro[x].identidade<<"\tTelefone: "<<passageiro[x].tel<<endl;
	}
	
	cout<<"\n";
	system("pause");
	
}
