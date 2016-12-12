#ifndef __WINER_LOSER_TREE_HPP__
#define __WINER_LOSER_TREE_HPP__



class CTree
{
public:
  // 败者树的重构跟胜者树是不一样的，败者树的重构只需要与其父结点比较。
  // Loser tree for 多路平衡归并外部排序
  void loser_tree();
  void winner_tree();


private:


};


#endif
