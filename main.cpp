#include "al_6_14.hpp"
#include "al_6_27.hpp"
#include <stdlib.h>

void Dump(vector<int>& vec, int num)
{
  vector<int>::iterator it;
  int i = 0;
  cout<<"start"<<endl;
  for (i =0, it = vec.begin(); (i<num) && (it < vec.end()); it++, i++)
  {
    cout <<*it <<endl;
  }
  cout<<"end"<<endl;
}


int main()
{
  CMergeSort sort;

  vector<int> vec;
  vec.clear();
  srand((unsigned)time(NULL));
  for (int i = 0; i < 100; i++)
  {
    vec.push_back(static_cast<unsigned short>(rand()));
  }
  Dump(vec, 10);
  sort.MergeSort(vec, 0, 9);

  Dump(vec, 10);
  return 0;
}
