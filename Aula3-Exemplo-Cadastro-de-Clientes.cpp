#include <iostream>
#include <locale.h>
//#define LIM 3
using namespace std;

struct Clientes {
	char nome[30], email[30], telefone[15], empresa[30];
};

int main(){
	
	//Definindo um limite para o loop
	int LIM;
	cout<<"\nQuantos clientes deseja cadastrar? ";cin>>LIM;
	Clientes cliente[LIM];
	
	//Loop de entrada de dados
	int x;
	for(x=0 ; x<LIM ; x++){
		cout<<"Informe o nome do cliente: ";cin>>cliente[x].nome;
		cout<<"Informe o email:\t ";cin>>cliente[x].email;
		cout<<"Informe o Telefone:\t ";cin>>cliente[x].telefone;
		cout<<"Nome da Empresa:\t ";cin>>cliente[x].empresa;
		cout<<"\n";
	}
	
	//Loop de saída de dados
	for(x=0 ; x<LIM ; x++){
		cout<<"Nome do cliente: ";cout<<cliente[x].nome;
		cout<<"\nEmail:\t\t";cout<<cliente[x].email;
		cout<<"\nTelefone:\t";cout<<cliente[x].telefone;
		cout<<"\nEmpresa:\t";cout<<cliente[x].empresa;
		cout<<"\n-----------------------------------------------------------"<<endl;
	}
	
}
