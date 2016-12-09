#include "al_6_27.hpp"

/***************************************************
 * Function Name : 
 * Discription   : 
 × Arguments     :
 × Returns       : 
 **************************************************/
int CMean::GetMean(vector<int>& A, vector<int>& B)
{
  int mid = (A.size() + B.size()) / 2;
  if (A.back() < B.front())
  {
    return (mid > A.size())?B.at(B.size() + A.size() - mid): A.at(mid);
  }
  else if (B.back() < A.front())
  {
    return (mid > B.size())?A.at(A.size() + B.size() - mid) : B.at(mid);
  }
  else
  {
    if (A.front() <= B.front())
    {
      ;
    }
    else
    {
      ;
    }
  }
}
