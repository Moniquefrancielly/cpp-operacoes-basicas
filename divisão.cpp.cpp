#include <iostream>

using namespace std;

int main() {
  float numero1, numero2, quociente;

  cout << "Digite o primeiro número: ";
  cin >> numero1;

  cout << "Digite o segundo número: ";
  cin >> numero2;

  if (numero2 == 0) {
    cout << "Erro: Divisão por zero!" << endl;
  } else {
    quociente = numero1 / numero2;
    cout << "A divisão de " << numero1 << " por " << numero2 << " é: " << quociente << endl;
  }

  return 0;
}