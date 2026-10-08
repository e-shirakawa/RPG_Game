#include<stdio.h>
#include<string.h>
#include"head_rpg.h"

//プレイヤーの習得しているスキルの一覧が表示される
//スキルごとの番号が表示されるため、その番号を選択するとそのスキルが使用できる実装？

void skilldisplay(PLAYER *p)
{
    
//変数宣言
int i;      //ループカウント用変数

//変数初期化
i = 0;

    printf("\n");

    printf("1.物理系攻撃スキル\n");

    for(i = 0; i < p -> skillCount; i++ )
    {
        if(p -> playerskill[i].type == 1)
        {
            printf("[%d]：", (i + 1));
            printf("%s", p-> playerskill[i].name);
            printf("\n");
        }
    }


    printf("\n");


    printf("2.魔法系攻撃スキル\n");

    for(i = 0; i < p -> skillCount; i++ )
    {
        if(p -> playerskill[i].type == 2)
        {
            printf("[%d]：", (i + 1));
            printf("%s", p-> playerskill[i].name);
            printf("\n");
        }
    }


    printf("\n");


    printf("3.回復系魔法スキル\n");

    for(i = 0; i < p -> skillCount; i++ )
    {
        if(p -> playerskill[i].type == 3)
        {
            printf("[%d]：", (i + 1));
            printf("%s", p-> playerskill[i].name);
            printf("\n");
        }
    }

    return;
}