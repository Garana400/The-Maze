#include "monster.h"
#include"room.h"
#include<iostream>
#include <stdlib.h>
#include <time.h>

monster :: monster(string nam,string dis,string weap, room* start)
{
    name=nam;
    disc=dis;
    weapontokill=weap;
    cur_room=start;
    cur_room->enter(this);
    cur_room->entermonster(this);
}
bool monster :: act()
{
        cur_room->leave(this);
        cur_room->leavemonster(this);
        int n = rand() % 4;
        string direction;
        switch(n)
        {
        case 0:
            direction = "north";
            break;
        case 1:
            direction = "south";
            break;
        case 2:
            direction = "west";
            break;
        case 3:
            direction = "east";
            break;
        }
        if(cur_room->getlinked(direction) != NULL)
        {
            cur_room = cur_room->getlinked(direction);
        }
        cur_room->enter(this);
        cur_room->entermonster(this);
        return true;
}

