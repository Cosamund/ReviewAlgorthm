#ifndef __CHAPTER1__
#define __CHAPTER1__

#include <vector>
#include <string>
using namespace std;

/******************************************************
 * 作业： 1.35
 * 令A[1...n]为整数数组，n>2，请设计一个O(1)时间的算法，
 * 它在A中找出一个既不是最大值也不是最小值的元素
 *****************************************************/
class Chapter1
{
public:
  static int DoSearch(vector<int>& vec);
private:
  static int value;
};


#endif
