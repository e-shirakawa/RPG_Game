#include<stdio.h>
#include<string.h>
#include"head_rpg.h"


void prebattle(PLAYER *p)
{
    //変数宣言
    int select;         //選択コマンド格納用
    int useselect;      //スキル・アイテム選択コマンド格納用
    int tobattle;       //関数を抜ける（戦闘開始）ためのフラグ

    //変数初期化
    select = 0;
    useselect = 0;
    tobattle = 0;

    printf("【戦闘前画面】\n\n");

    while(tobattle != 1)
    {
        printf("～～行動選択～～\n");
        printf("▶1：スキル・アイテム使用 ▶2：セーブ ▶3：戦闘に進む");

        //コマンド選択 + 入力チェック
        do{
            scanf("%d", &select);

            if(select < 1 || select > 3)
            {
                printf("1～3を選択してください");
            }
        }while(select < 1 || select > 3);


        switch(select)
        {
            case 1:     //スキル・アイテム使用


                    printf("▶1：スキル使用 ▶2：アイテム使用");
            
                    //useselectの選択と入力チェック
                    do{

                        scanf("%d", &useselect);

                        if(useselect < 1 || useselect > 2)
                        {
                            printf("1か2を選択してください");
                        }

                    }while(useselect < 1 || useselect > 2);       


                    //スキル・アイテム使用の処理
                    switch(useselect)
                    {

                        case 1:     //スキル使用

                            useskill(p);
                            break;

                        
                        case 2:     //アイテム使用

                            useitem(p);
                            break;
                        

                        default:

                            printf("不正な値です\n");
                            break;
                    }

                break;


            case 2:     //セーブ処理へ

                //save関数呼び出し
                save();
            
                break;


            case 3:     //戦闘開始

                //while文抜け出しフラグON
                tobattle = 1;
            
                break;

            default:
            
                printf("不正な値です\n");
            
                break;
        }
    }
        return;
}