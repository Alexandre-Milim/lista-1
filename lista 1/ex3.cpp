#include <iostream>
using namespace std;

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
   int numero, i;
   
   bool primo = true;
   
   cout << "Digite um número inteiro: ";
   cin >> numero;

   for (i = 2; i <= numero / 2; i++) {
      if (numero % i == 0) {
         primo = false;
         break;
      }
   }

   if (primo) {
      cout << "O número " << numero << " é primo" << endl;
   } else {
      cout << "O número " << numero << " não é primo" << endl;
   }

   return 0;
}

	
