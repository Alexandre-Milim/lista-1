#include <iostream>

using namespace std;

main() {
	setlocale(LC_ALL, "Portuguese");
	
	float n1, n2, operacao;
	
	cout<<"Informe o primeiro numero inteiro: ";
	cin>> n1;
	
	cout<<"Informe o segundo numero inteiro: ";
	cin>> n2;
	
	cout<<"Informe a operação\n";
	cout<<"1- adição\n";
	cout<<"2- subtração\n";
	cout<<"3- divisão\n";
	cout<<"4- multiplicação\n";
	cout<<"R: ";
	cin>> operacao;
	
	if(operacao == 1){
		cout<<"O resultado é " << n1+n2;
	}else if(operacao == 2){
		cout<<"O resultado é "<< n1-n2;
	}else if (operacao == 3){
		cout<<"O resultado é " << n1/n2;
	}else if (operacao == 4){
		cout<<"O resultado é " << n1*n2;
	}
}
