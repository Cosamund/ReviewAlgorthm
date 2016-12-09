#ifndef __AL_6_14_HPP__
#define __AL_6_14_HPP__

#include <iostream>
#include <vector>
using namespace std;

class CMergeSort
{
public:
  CMergeSort();
  ~CMergeSort();
  CMergeSort(const vector<int>& vec);

  void MergeSort(vector<int>& A, int low, int high);
  void KWayMergeSort(vector<int>& A, int low, int high);
protected:
  void Merge(vector<int>&A, int low, int mid, int high);
private:
  vector<int> m_Data;
};


#endif
