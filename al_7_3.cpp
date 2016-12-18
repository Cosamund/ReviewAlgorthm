#include "al_7_3.hpp"
#include <iostream>
#include <iomanip>
using namespace std;
int Dynamic_Scheme::PolynomialCoefficient(int n, int k)
{
  int **p;
  if ((k == 0) || ( k == n))
    return 1;
  
  p = new int*[n + 1];
  for (int i = 0; i <= n; i++)
    p[i] = new int [k + 1];
  for (int i = 0; i <= n; i++)
    for (int j = 0; j<= k; j++)
      p[i][j] = 0;
  
  for (int i = 0; i <=n; i++)
    p[i][0] = 0;
  for (int i = 0; i <=k; i++)
    p[i][i] = 1;

  for (int i = 2; i <= n; i++)
    for (int j = 1; j < (i>k?k+1 :i); j++)
      p[i][j] = p[i - 1][j - 1] + p[i - 1][j];

  for (int i = 0; i <=n; i++)
  {
    for (int j = 0; j <= k; j++)
      cout<<setw(5)<<p[i][j]<<' ';
    cout<<endl;
  }
  for (int i = 0; i <=n; i++)
    delete[] p[i];
  
  return p[n][k];
}
