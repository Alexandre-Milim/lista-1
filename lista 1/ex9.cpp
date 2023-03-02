#include <iostream>
using namespace std;

int main() {
   int num, original, resto, soma = 0;
   cout << "Digite um número inteiro: ";
   cin >> num;

   original = num;

   while (original != 0) {
      resto = original % 10;
      soma += resto * resto * resto;
      original /= 10;
   }

   if (soma == num) {
      cout << "O número " << num << " é um número de Armstrong" << endl;
   } else {
      cout << "O número " << num << " não é um número de Armstrong" << endl;
   }

   return 0;
}

