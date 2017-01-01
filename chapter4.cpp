#include "chapter4.hpp"
#include <stdlib.h>
#include <time.h>

#define TEST_DATA_LEN (10)
int * Chapter4::m_heap = NULL;


void Chapter4::dump()
{
  for (int i = 0; i < TEST_DATA_LEN; ++i)
  {
    cout<<i<<"\t";
  }
  cout<<endl;
  for (int i = 0; i < TEST_DATA_LEN; ++i)
  {
    cout<<m_heap[i];
  }
  cout<<endl;  
}

Chapter4::Chapter4()
{
  if (!m_heap)
  {
    m_heap = new int [TEST_DATA_LEN];
    srand(time(0));
    for (int i = 0;i < TEST_DATA_LEN; ++i)
    {
      m_heap[i] = 1 + rand() % 100;
    }
  }
  createheap();
}
Chapter4::~Chapter4()
{
  if (m_heap != NULL)
  {
    delete [] m_heap;
    m_heap = NULL;
  }
}
int Chapter4::DoSearchMinKeyValue()
{
  ;
}

/*************************************************** 
 * 最大堆特性:
 * 索引2<=j<=n，且key(H[j/2]) >= key(H[j])
 **************************************************/
void Chapter4::createheap()
{
  // Insert and adjust
  
  dump();
}
