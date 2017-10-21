#ifndef MONSTER_H
#define MONSTER_H
#include<iostream>
#include"agent.h"


class monster : public agent
{

  public:
      monster(string,string,string,room*);
      bool act();


};

#endif // MONSTER_H
