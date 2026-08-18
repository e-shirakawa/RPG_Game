#include<stdio.h>
#include<string.h>
#include"RPG.h"


void parameterset(PLAYER *p)
{
    //変数宣言
    int select = 0;

    printf("--キャラクターを選択してください--\n\n");
    printf("1.パラディン\n");
    printf("2.ソルジャー\n");
    printf("3.ウィザード\n");
    printf("4.アクロバット\n");
    printf("5.アサシン\n");

    do
    {
        scanf("%d", &select);

        if(select < 1 || select > 5)
        {
            printf("1～5を選択してください");
        }

    }while(select < 1 || select > 5);

    switch(select)
    {
        case 1:

        //基礎パラメーター
        strcpy(p -> name, "プリズム");
        p -> hp = 800;
        p -> mp = 500;
        p -> power = 73;
        p -> defence = 68;
        p -> maxHp = 800;
        p -> maxMp = 500;
        p -> level = 1;
        p -> exp = 0;
        p -> stageCount = 0;
        p -> stageClear = 0;
        p -> criticalRatio = 15;
        p -> criticalPoint = 1.8;

        //攻撃スキル1
        strcpy(p -> attackskill[0].name, "突風突き");
        p -> attackskill[0].reqmp = 20;
        p -> attackskill[0].powerpoint = 120;

        //攻撃スキル2
        strcpy(p -> attackskill[1].name, "ライト");
        p -> attackskill[1].reqmp = 35;
        p -> attackskill[1].powerpoint = 210;

        //回復スキル
        strcpy(p -> healskill[0].name, "ウォッシュ");
        p -> healskill[0].reqmp = 30;
        p -> healskill[0].powerpoint = 180;

        break;
    }



}