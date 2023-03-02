#include <iostream>
using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
   int mes;

   cout << "Digite um número entre 1 e 12: ";
   cin >> mes;

   if (mes == 1) {
      cout << "Janeiro" << endl;
   } else if (mes == 2) {
      cout << "Fevereiro" << endl;
   } else if (mes == 3) {
      cout << "Março" << endl;
   } else if (mes == 4) {
      cout << "Abril" << endl;
   } else if (mes == 5) {
      cout << "Maio" << endl;
   } else if (mes == 6) {
      cout << "Junho" << endl;
   } else if (mes == 7) {
      cout << "Julho" << endl;
   } else if (mes == 8) {
      cout << "Agosto" << endl;
   } else if (mes == 9) {
      cout << "Setembro" << endl;
   } else if (mes == 10) {
      cout << "Outubro" << endl;
   } else if (mes == 11) {
      cout << "Novembro" << endl;
   } else if (mes == 12) {
      cout << "Dezembro" << endl;
   } else {
      cout << "Mês inválido" << endl;
   }

   return 0;
}

