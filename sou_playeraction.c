#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"head_rpg.h"

//戦闘におけるプレイヤーの行動を実装する関数
/*
・（各？）ステージの関数から移行してくる
・選択肢は（攻撃/スキル/アイテム/逃げる）がある
・この関数を通過するたびに1つの行動（1ターン分）をする仕様になる
*/

void playeraction(PLAYER *p, MONSTER *enemy)
{
    //変数宣言
    int select = 0;

do{

        printf("行動を選択してください\n");
        printf("1:攻撃 2:スキル 3:アイテム 4:逃げる\n");

        scanf("%d", &select);

        switch(select)
        {
            //1.通常攻撃
            case 1:

            printf("%sの攻撃！", p -> name);
            printf("%sに%dのダメージ！", enemy -> name, p -> power);

            enemy -> hp -= p -> power;
            break;


            //2.スキル使用
            case 2:

            //※移動先関数のスキル使用後の処理は未完成
            useskill_pre(p, enemy);

            //戻る（キャンセル）を選択した場合、行動選択をやり直す処理が必要？
            break;


            //3.アイテム使用
            case 3:

            //※移動先関数の処理は未完成
            useitem_pre(p);
            break;


            //4.逃げる
            case 4:

            //逃げる処理関数を作成して呼び出す
            break;

            default:

            printf("1～4の番号を選択してください");

            //選択肢にない番号を選択 → もう一度選択する処理

        }

    }while(select >= 1 && select <= 4);

    return;
    
}