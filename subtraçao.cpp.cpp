#include <iostream>

using namespace std;

int main() {
  int numero1, numero2, diferenca;

  cout << "Digite o primeiro número: ";
  cin >> numero1;

  cout << "Digite o segundo número: ";
  cin >> numero2;

  diferenca = numero1 - numero2;

  cout << "A diferença entre " << numero1 << " e " << numero2 << " é: " << diferenca << endl;

  return 0;
}