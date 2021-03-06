#include <iostream>
#include <cmath>
#include <vector>

int main(int argc, char **argv)
{
  std::cout.precision(8);
  std::cout.setf(std::ios::fixed);

  int N;
  double p;
  std::cout << "Por favor escriba el valor de N:\n";
  std::cin >> N;
  std::cout << "Por favor escriba el valor de p:\n";
  std::cin >> p;
  std::cout << "\n";

  std::vector<double> myvector(N, 0);

  double suma = 0;
  for (int ii = 0; ii < N; ++ii)
    {
      myvector[ii] = 2*ii;
      suma += std::pow(myvector[ii], p); 
    }
  std::cout << "suma: " << suma << std::endl;
  
  double norma = std::pow(suma, 1.0/p);
  std::cout << "norma p: " << norma << std::endl;
  
  return 0;
}
