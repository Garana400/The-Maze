#ifndef AGENT_H
#define AGENT_H
#include<iostream>
#include "room.h"

using namespace std;
class room;
class object;

class agent
{
    protected:
        string name,disc,weapontokill;
        room *cur_room;
    public:
        virtual bool act()=0;
        object **holding=new object*[2];
        bool found_treasure=false;
        string getname()
        {
            return name;
        }
        string getdisc()
        {
            return disc;
        }
        string getweapontokill()
        {
            return weapontokill;
        }

};

#endif // AGENT_H
