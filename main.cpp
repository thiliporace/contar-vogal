#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Declaração da função VowelsCount().
int VowelsCount(std::string str);

int main() {
  std::string texto;
  std::cout << "Digite o texto: \n";
  // std::cin >> texto;
  // cin.ignore();
  std::getline(cin, texto);
  std::cout << texto << "(vogais: " << VowelsCount(texto) << ")\n";
}

// Definição (implementação) da função VowelsCount().
int VowelsCount(std::string str) {
  int length = str.length();
  int cont = 0;

  for (int i = 0; i < length; i++) {
    switch (toupper(str[i])) {
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
      ++cont;
      break;
    }
  }
  return cont;
}