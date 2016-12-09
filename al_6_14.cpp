#include "al_6_14.hpp"

/***************************************************
 * Function Name : 
 * Discription   : 
 × Arguments     :
 × Returns       : 
 **************************************************/
CMergeSort::CMergeSort()
{
  ;
}

/***************************************************
 * Function Name : 
 * Discription   : 
 × Arguments     :
 × Returns       : 
 **************************************************/
CMergeSort::CMergeSort(const vector<int>& vec)
  : m_Data(vec)
{
  ;
}

/***************************************************
 * Function Name : 
 * Discription   : 
 × Arguments     :
 × Returns       : 
 **************************************************/
CMergeSort::~CMergeSort()
{
  ;
}


/***************************************************
 * Function Name : 
 * Discription   : 
 × Arguments     :
 × Returns       : 
 **************************************************/
void CMergeSort::Merge(vector<int>& A, int low, int mid, int high)
{
  int i, j, k;
  int len1 = mid - low + 1;
  int len2 = high - mid;
  vector<int> L, R;
  L.clear();
  R.clear();

  for (i = 0; i < len1; i++)
  {
    L.push_back(A[low + i]);
  }
  for (i = 0; i < len2; i++)
  {
    R.push_back(A[mid + 1 + i]);
  }

  L.push_back(100000);
  R.push_back(100000);

  for (i = 0, j = 0, k = low; k <= high; k++)
  {
    if (L[i] > R[j])
    {
      A[k] = R[j];
      j++;
    }
    else
    {
      A[k] = L[i];
      i++;
    }
  }
}
/***************************************************
 * Function Name : 
 * Discription   : 
 × Arguments     :
 × Returns       : 
 **************************************************/
void CMergeSort::MergeSort(vector<int>& A, int low, int high)
{
//cout <<low<<" "<<high <<endl;
  if (low < high)
  {
    int mid = (low + high) / 2;
    MergeSort(A, low, mid);
    MergeSort(A, mid + 1, high);
    Merge(A, low, mid, high);
  }
}


/***************************************************
 * Function Name : 
 * Discription   : 
 × Arguments     :
 × Returns       : 
 **************************************************/
void CMergeSort::MergeSort614()
{
  ;
}
