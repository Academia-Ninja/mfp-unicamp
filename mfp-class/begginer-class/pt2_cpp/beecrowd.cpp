// BeeCrowd

#include <iostream>
#include <vector>

using namespace std;

// Problema 1037
string result(float n) {
  if (n >= 0 && n <= 25)
    return "Intervalo [0,25]";
  else if (n > 25 && n <= 50)
    return "Intervalo (25,50]";
  else if (n > 50 && n <= 75)
    return "Intervalo (50,75]";
  else if (n > 75 && n <= 100)
    return "Intervalo (75,100]";

  return "Fora de intervalo";
}

void print_1037() {
  float number;
  cin >> number;

  cout << result(number) << endl;
}

// Problema 1059

void print_1059() {
  for (int i = 1; i <= 100; i++) {
    if (i % 2 == 0)
      cout << i << endl;
  }
}

// Problema 1176
void print_1176() {
  vector<int> fib;
  unsigned int a1 = 0;
  unsigned int a2 = 1;
  unsigned int auxiliar;

  fib.push_back(a1);
  fib.push_back(a2);

  for (int i = 2; i <= 60; i++) {
    auxiliar = a1 + a2;
    fib.push_back(auxiliar);

    a1 = a2;
    a2 = auxiliar;
  }

  int value, position;

  cin >> value;

  for (int i = 0; i < value; i++) {
    cin >> position;
    cout << "Fib(" << position << ") = " << fib[position] << endl;
  }
}