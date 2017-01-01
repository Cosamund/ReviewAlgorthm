#ifndef __CHAPTER5__
#define __CHAPTER5__

#include <vector>
#include <string>
using namespace std;

/******************************************************
 * 作业： 5.4
 * 用归纳法设计一个递归算法，求A[1..n]中n个实数的平均值
 * 作业： 5.15
 * 用归纳法：
 * 令S1是一个包含n个元素的堆栈，写一个算法将S1中的元素排序，
 * 排序结果使得最小的元素在栈顶。假设可以用另一个对战S2做暂存器。
 * 你的算法的时间复杂性是多少
 *****************************************************/
class Chapter5
{
public:
  static int DoSearch(vector<int>& vec);
private:
  static int value;
};

#endif
