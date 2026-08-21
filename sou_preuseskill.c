#include<stdio.h>
#include<string.h>
#include"head_rpg.h"

//======================================
//この関数は戦闘準備のスキル使用専用？（仮）
//======================================

/*
    スキル選択について
    1.スキル一覧表示で、格納した配列の要素数に対応する番号が表示される
    （実際は、[配列要素数 + 1]になっているため、[選択した番号 - 1]にする？）
    2.表示されている番号を選択すると、その番号のスキルを使用できる
    →スキルの効果が発言するようにする
    （戦闘前の場合は回復スキルに限定する必要がある？）
    （必要に応じてスキル使用をする前に「使用しますか」のような確認を入れる？）
    3.スキル使用後にスキル一覧表示に戻る
    4.続けてスキルを使用するか、コマンド選択に戻るかを選択できる
    （一度もスキルを使用しなくてもコマンド選択に戻れる）
*/

//=========================
//スキル使用前段階の関数
//=========================
void preuseskill_pre(PLAYER *p)
{
    //変数の宣言
    int command1;        //選択コマンド1
    int command2;        //選択コマンド2

    //変数の初期化
    command1 = 0;
    command2 = 0;

    printf("\n");

    //スキル一覧を表示
    printf("[スキルを使用しますか]\n");
    printf("▶1.スキルを使用する ▶2.もどる\n\n");

    do{

        scanf("%d", &command1);

        if(command1 == 1)
        {
            //スキル一覧表示
            skilldisplay(p);

            printf("▶1.スキルを使用する ▶2.もどる\n");

            do{

                scanf("%d", &command2);

                if(command2 == 1)
                {
                    preuseskill_use(p);
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
//スキル使用の関数
//=========================
void preuseskill_use(PLAYER *p)
{
    //変数宣言
    int skillselect;

    //変数の初期化
    skillselect = 0;
    

    do
    {

        printf("使用するスキルを選択してください\n\n");
        printf("▶使用するスキル番号を選択 ▶-1：戻る\n");

        //場合分けが必要？（1.物理攻撃 2.魔法攻撃 3.回復）
        //[skillselect-1]が配列の要素番号に該当
        //戦闘準備なので回復のみ使用できるように制限？

        scanf("%d", &skillselect);

        if(p -> playerskill[skillselect - 1].type == 1)
        {
            printf("戦闘前は回復スキルのみ使用可能です\n");
        }
        else if(p -> playerskill[skillselect - 1].type == 2)
        {
            printf("戦闘前は回復スキルのみ使用可能です\n");
        }
        else if(p -> playerskill[skillselect - 1].type == 3)
        {
            //回復魔法によるHP回復
            printf("");
            printf("%sは%sを唱えた！\n", p -> name, p -> playerskill[skillselect -1].name);

            if(p -> mp >= p -> playerskill[skillselect - 1].reqmp)
            {

                //回復処理（上限を超えないような処理が必要？）
                if (p -> hp < p -> maxHp)
                {
                    p -> hp += p -> playerskill[skillselect -1].powerpoint;
                    p -> mp -= p -> playerskill[skillselect -1].reqmp;

                    printf("%sはMPを%d消費した\n", p -> name, p -> playerskill[skillselect - 1].reqmp);
                    printf("%sはHPを%d回復した\n", p -> name, p -> playerskill[skillselect - 1].powerpoint);

                    if(p -> hp > p -> maxHp)
                    {
                        //HPが上限を超える場合、HP上限値で上書き
                        p -> hp = p -> maxHp;
                    }
                }
                else if (p -> hp == p -> maxHp)
                {
                    printf("体力はこれ以上回復できません\n");
                }
            }
            else if(p -> mp < p -> playerskill[skillselect - 1].reqmp)
            {
                printf("MPが不足しています\n");
            }

        }
        else if(skillselect > p -> skillCount)
        {
            printf("表示されているスキル番号を選択してください\n");
        }

    } while (skillselect != -1 || skillselect > p -> skillCount);

    EXIT:

    return;
}