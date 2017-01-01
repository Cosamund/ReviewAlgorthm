#ifndef __CHAPTER4__
#define __CHAPTER4__

#include <vector>
#include <string>
#include <iostream>
using namespace std;

/******************************************************
 * 作业： 4.9
 * 从n个元素的最大堆中找到最小键值可能有多快
 *****************************************************/
class Chapter4
{
public:
  Chapter4();
  ~Chapter4();
  // O(lgN)
  static int DoSearchMinKeyValue();
  
protected:
  // O(nlgN)
  void createheap();
  void dump();
private:
  static int* m_heap;
};

#endif
