#include <iostream>
#include <locale.h>
#define tam 3 //Apresenta uma diretiva � aplica��o, que percorre o c�digo substituindo o valor em cada ocorr�ncia.
using namespace std;

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	struct prodCad
	{
		int cod;
		float precoDeCompra, precoDeVenda;
	};

	//Declara��o de uma vari�vel din�mica, constitu�da conforme a entrada de dados.
	prodCad produtos[tam];
	
	int x, num;
	float margem;
	cout<<"Informe a margem percentual aplicada sobre o pre�o de compra (n�o utilize %): ";
	cin>>margem;
	margem = 1+(margem/100);
	
	for (x=0; x<tam ; x++)
	{
		cout<<"\nInforme o C�digo do Produto: ";
		cin>>num;
		
		//Verificando se o valor inserido corresponde � faixa permitida
		while(num<1 || num > 1000)
		{
			cout<<"\nC�digo Inv�lido. Fora da faixa permitida, utilize valores na faixa 1-1000!";
			cout<<"\nInforme o C�digo do Produto: ";
			cin>>num;
		}
		
		//A vari�vel din�mica � ajustada no loop utilizando a vari�vel x, assim � poss�vel inserir dados 
		//sem uma declara��o pr�via de um n�mero x de vari�veis.
		produtos[x].cod=num;
		cout<<"Pre�o de Compra: ";
		cin>>produtos[x].precoDeCompra;
		while(produtos[x].precoDeCompra<=0)
		{
			cout<<"\nValor inv�lido. Informe um pre�o de compra diferente de zero.";
			cin>>produtos[x].precoDeCompra;
		}
		produtos[x].precoDeVenda = produtos[x].precoDeCompra*margem;
		
	}
//		system("cls");
		cout<<"\nC�digo\tCompra\tVenda";
		cout<<"\n----------------------------------------------";
		for(x=0; x<tam; x++)
		cout<<"\n"<<produtos[x].cod<<"\t"<<produtos[x].precoDeCompra<<"\t"<<produtos[x].precoDeVenda;
		cout<<"\n\nA margem aplicada sobre os pre�os de compra foi de: "<<(margem-1)*100<<"%"<<endl;
		system("pause");		
		
}
