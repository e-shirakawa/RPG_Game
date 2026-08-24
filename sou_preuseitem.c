#include<stdio.h>
#include<string.h>
#include"head_rpg.h"

//======================================
//戦闘準備アイテム使用専用
//======================================

//=========================
//アイテム使用前段階
//=========================
void preuseitem_pre(PLAYER *p)
{
    //変数の宣言
    int command1;        //選択コマンド1
    int command2;        //選択コマンド2

    //変数の初期化
    command1 = 0;
    command2 = 0;

    printf("\n");

    //アイテム一覧を表示
    printf("[アイテムを使用しますか]\n");
    printf("▶1.アイテムを使用する ▶2.もどる\n\n");

    do{

        scanf("%d", &command1);

        if(command1 == 1)
        {
            //アイテム一覧表示
            itemdisplay(p);

            printf("▶1.アイテムを使用する ▶2.もどる\n");

            do{

                scanf("%d", &command2);

                if(command2 == 1)
                {
                    preuseitem_use(p);
                }
                else if(command2 == 2)
                {
                    goto EXIT;
                }
                else
                {
                    printf("1か2を選択してください");
                }

            }while(command2 < 1 || command2 > 2);


        }
        else if(command1 == 2)
        {
            goto EXIT;
        }
        else
        {
            printf("1か2を選択してください\n");
        }

    }while(command1 < 1 || command1 > 2);

    EXIT:

    return;
}




//=========================
//アイテム使用
//=========================
void preuseitem_use(PLAYER *p)
{
    //変数宣言
    int itemselect;

    //変数の初期化
    itemselect = 0;
    

    do
    {

        printf("使用するアイテムを選択してください\n\n");
        printf("▶使用するアイテム番号を選択 ▶-1：戻る\n");

        scanf("%d", &itemselect);


        //1.攻撃系アイテム
        if(p -> item[itemselect - 1].type == 1)
        {

            printf("戦闘前は回復系アイテムのみ使用可能です\n");

        }

        //2.HP回復アイテム
        else if(p -> item[itemselect - 1].type == 2)
        {

            if(p -> item[itemselect - 1].count > 0)
            {
                //HP回復アイテムによるHP回復
                printf("%sは%sを使用した！\n", p -> name, p -> item[itemselect -1].name);

                //回復処理
                //現在のHPがMaxHPより小さいとき
                if (p -> hp < p -> maxHp)
                {
                    //HP回復
                    p -> hp += p -> item[itemselect -1].powerpoint;
                    //アイテム所持数：-1
                    p -> item[itemselect -1].count -= 1; 

                    printf("%sは%dを使用した\n", p -> name, p -> item[itemselect - 1].name);
                    printf("%sはHPを%d回復した\n", p -> name, p -> item[itemselect - 1].powerpoint);

                    if(p -> hp > p -> maxHp)
                    {
                        //HPが上限を超える場合、HP上限値で上書き
                        p -> hp = p -> maxHp;
                    }
                }
                //現在のHPがMaxHPと同じとき
                else if (p -> hp == p -> maxHp)
                {
                    printf("体力はこれ以上回復できません\n");
                }
            }
            //アイテム所持数が0になったとき
            else if(p -> item[itemselect - 1].count <= 0)
            {
                printf("選択したアイテムを所持してません\n");
            }

        }

        //3.MP回復アイテム
        else if(p -> item[itemselect - 1].type == 3)
        {

            if(p -> item[itemselect - 1].count > 0)
            {

                //MP回復アイテムによるHP回復
                printf("%sは%sを使用した！\n", p -> name, p -> item[itemselect -1].name);

                //回復処理
                //現在のMPがMaxMPより小さいとき
                if (p -> mp < p -> maxMp)
                {
                    //HP回復
                    p -> mp += p -> item[itemselect -1].powerpoint;
                    //アイテム所持数：-1
                    p -> item[itemselect -1].count -= 1; 

                    printf("%sは%dを使用した\n", p -> name, p -> item[itemselect - 1].name);
                    printf("%sはMPを%d回復した\n", p -> name, p -> item[itemselect - 1].powerpoint);

                    if(p -> mp > p -> maxMp)
                    {
                        //MPが上限を超える場合、MP上限値で上書き
                        p -> mp = p -> maxMp;
                    }
                }
                //現在のMPがMaxMPと同じとき
                else if (p -> mp == p -> maxMp)
                {
                    printf("MPはこれ以上回復できません\n");
                }
            }
            //アイテム所持数が0になったとき
            else if(p -> item[itemselect - 1].count <= 0)       //所持数0で表示されない：念のため実装？
            {
                printf("選択したアイテムを所持してません\n");
            }

        }
        else if(itemselect > p -> skillCount)
        {
            printf("表示されているアイテム番号を選択してください\n");
        }

    } while (itemselect != -1 || itemselect > p -> itemCount);

    EXIT:

    return;
}