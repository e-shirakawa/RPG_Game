#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include"head_rpg.h"


void st_one(PLAYER *p, MONSTER monsters[])
{
    //変数宣言
    int random;         //乱数格納変数
    int wincount;       //勝利回数


    //モンスターのポインタ変数の宣言
    MONSTER enemy;


    //変数の初期化
    random = 0;
    wincount = 0;



    //=====================
    //戦闘処理
    //=====================
    do
    {
        //乱数生成
        srand((unsigned int)time(NULL));

        random = rand() % 4;       //0～3の乱数を生成


        //生成したモンスターを変数に格納
        enemy = monsters[random];


        printf("%sがあらわれた!!\n\n", enemy.name);

        
        while(p -> hp > 0 && enemy.hp >0)
        {

            //1ターン分の処理（プレイヤーの素早さ >= モンスターの素早さ）
            if(p -> speed >= enemy.speed)
            {   

                //プレイヤーの行動選択
                playeraction(p, &enemy);

                //モンスターのHPが0以下になったとき
                if(enemy.hp < 0)
                {
                    break;
                }

                //モンスターの行動
                monsteraction(p, &enemy);
            }

            //1ターン分の処理（モンスターの素早さ > プレイヤーの素早さ）
            else
            {
                //モンスターの行動
                monsteraction(p, &enemy);

                //プレイヤーのHPが0以下になったとき
                if(p -> hp < 0)
                {
                    break;
                }

                //プレイヤーの行動選択
                playeraction(p, &enemy);
            }
        }
        
        //モンスターを撃破で撃破カウント+1、プレイヤーHPが0でGAME OVER（呼び出し元に戻る）
        if(enemy.hp < 0)
        {
            wincount++;
        }
        else if(p->hp < 0)
        {
            return;
        }

    }while(wincount > 5);

    return;
}