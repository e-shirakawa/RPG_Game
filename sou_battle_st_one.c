#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"head_rpg.h"


void st_one(PLAYER *p, MONSTER m[])
{

    //変数宣言
    int random;         //乱数格納変数
    int wincount;       //勝利回数

    //モンスターのポインタ変数の宣言
    MONSTER *m;

    //変数の初期化
    random = 0;
    wincount = 0;
    m = 0;

    //乱数生成
    srand((unsigned int)time(NULL));

    random = rand() % 4;       //0～3の乱数を生成

    //生成したモンスターのアドレスをポインタに格納
    m = &m[random];

    //=====================
    //戦闘処理
    //=====================
    do
    {
        printf("%Sがあらわれた!!\n\n", m -> name);

        while(p -> hp > 0 && m -> hp >0)
        {

            //プレイヤーの素早さ >= モンスターの素早さ
            if(p -> speed >= m -> speed)
            {   

                //プレイヤーの行動選択
                playeraction(p, m);

                //モンスターのHPが0以下になったとき
                if(m -> hp < 0)
                {
                    break;
                }

                //モンスターの行動
                monsteraction(p, m);
            }

            //モンスターの素早さ > プレイヤーの素早さ
            else
            {
                //モンスターの行動
                monsteraction(p, m);

                //プレイヤーのHPが0以下になったとき
                if(p -> hp < 0)
                {
                    break;
                }

                //プレイヤーの行動選択
                playeraction(p, m);
            }
        }
        


    }while(wincount > 5);



    return;
}