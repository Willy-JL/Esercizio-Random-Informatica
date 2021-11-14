#include <cstdlib>
#include <ctime>
#include <iostream>

const int amount = 100;
const int max = 20;

int main() {
  // Imposta seed per generatore random
  std::srand(std::time(nullptr));

  int array[amount];
  int somma = 0;
  int rand;

  for (int i = 0; i < amount; i++) {
    rand = std::rand() % max;
    std::cout << "Random: " << rand << "\n";
    array[i] = rand;
    somma += array[i];
  }

  std::cout << "\n";
  std::cout << "\n";
  std::cout << "La somma dei valori generati è: " << somma << "\n";
  std::cout << "La media dei valori generati è: " << somma / amount << "\n";
}
