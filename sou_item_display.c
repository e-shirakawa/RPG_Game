#include<stdio.h>
#include<string.h>
#include"head_rpg.h"

//====================
//アイテム一覧表示
//====================

//所持数が0になったアイテムは一覧に表示しない処理が必要

void itemdisplay(PLAYER *p)
{
//変数宣言
int i;      //ループカウント用変数

//変数初期化
i = 0;

    printf("\n");

    printf("1.攻撃系アイテム\n");

    for(i = 0; i < p -> itemCount; i++ )
    {
        if(p -> item[i].type == 1)
        {
            //アイテム所持数が1以上の時
            if(p -> item[i].count > 0)
            {
                printf("[%d]：", (i + 1));
                printf("%s", p-> item[i].name);
                printf("：%d", p -> item[i].count);
                printf("\n");
            }
            //アイテム所持数が0以下の時：何もしない
        }
    }


    printf("\n");


    printf("2.HP回復系アイテム\n");

    for(i = 0; i < p -> itemCount; i++ )
    {
        if(p -> item[i].type == 2)
        {
            //アイテム所持数が1以上の時
            if(p -> item[i].count > 0)
            {
                printf("[%d]：", (i + 1));
                printf("%s", p-> item[i].name);
                printf("：%d", p -> item[i].count);
                printf("\n");
            }
            //アイテム所持数が0以下の時：何もしない
        }
    }


    printf("\n");


    printf("3.MP回復系アイテム\n");

    for(i = 0; i < p -> itemCount; i++ )
    {
        if(p -> item[i].type == 3)
        {
            //アイテム所持数が1以上の時
            if(p -> item[i].count > 0)
            {
                printf("[%d]：", (i + 1));
                printf("%s", p-> item[i].name);
                printf("：%d", p -> item[i].count);
                printf("\n");
            }
            //アイテム所持数が0以下の時：何もしない
        }
    }

    return;
}