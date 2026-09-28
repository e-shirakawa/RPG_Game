#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"head_rpg.h"

//戦闘におけるプレイヤーの行動を実装する関数
/*
・（各？）ステージの関数から移行してくる
・選択肢は（攻撃/スキル/アイテム/逃げる）がある
・この関数を通過するたびに1つの行動をする仕様になる
*/

void playeraction(PLAYER *p, MONSTER *m)
{
    //変数宣言
    int select = 0;

do{

        printf("行動を選択してください\n");
        printf("1:攻撃 2:スキル 3:アイテム 4:逃げる\n");

        scanf("%d", &select);

        switch(select)
        {
            case 1:

            printf("%fの攻撃！", p -> name);
            printf("%fに%dのダメージ！", m -> name, p -> power);
            m -> hp -= p -> power;

            case 2:

            //※移動先関数のスキル使用後の処理は未完成
            useskill_pre(p);

            case 3:

            //※移動先関数の処理は未完成
            useitem_pre(p);

            case 4:

            //逃げる処理関数を作成して呼び出す

            default:

            printf("1～4の番号を選択してください");

            //選択肢にない番号を選択 → もう一度選択する処理
        }

    }while(select >= 1 && select <= 4);
}