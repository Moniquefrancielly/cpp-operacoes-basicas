#include <iostream>

using namespace std;

int main() {
  int numero1, numero2, produto;

  cout << "Digite o primeiro número: ";
  cin >> numero1;

  cout << "Digite o segundo número: ";
  cin >> numero2;

  produto = numero1 * numero2;

  cout << "A multiplicação de " << numero1 << " por " << numero2 << " é: " << produto << endl;

  return 0;
}