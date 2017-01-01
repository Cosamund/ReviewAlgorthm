#include "chapter1.hpp"

int Chapter1::value = -1;

int Chapter1::DoSearch(vector<int>& vec)
{
  string::size_type size = vec.size();
  if (size <= 2)
    return -1;

  int a = vec.at(0);
  int b = vec.at(1);
  int c = vec.at(2);

  if (a > b && a > c)
    value = (b > c) ? b : c;
  else if (b > a && b > c)
    value = (a > c) ? a : c;
  else
    value = (a > b) ? a : b;
  return value;
}


