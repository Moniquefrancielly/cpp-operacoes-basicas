#include <iostream>

using namespace std;

int main() {
  int numero1, numero2, soma;

  cout << "Digite o primeiro número: ";
  cin >> numero1;

  cout << "Digite o segundo número: ";
  cin >> numero2;

  soma = numero1 + numero2;

  cout << "A soma de " << numero1 << " e " << numero2 << " é: " << soma << endl;

  return 0;
}