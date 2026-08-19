#include<stdio.h>
#include<string.h>
#include"RPG.h"




void itemset(ITEM items[])
{
    strcpy(items[0].name, "薬草");
    items[0].powerpoint = 120;
    items[0].type = 2;

    strcpy(items[0].name, "エーテル");
    items[0].powerpoint = 50;
    items[0].type = 3;

}