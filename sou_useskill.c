#include<stdio.h>
#include<string.h>
#include"head_rpg.h"

//======================================
//この関数は戦闘中のスキル使用専用？（仮）
//======================================
//→※闘準備前の作成途中ものをコピーしている状態

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

void useskill_pre(PLAYER *p, MONSTER *enemy)
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
                    //スキル使用関数へ
                    useskill_use(p, enemy);
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

void useskill_use(PLAYER *p, MONSTER *enemy)
{
    //変数宣言
    int skillselect;
    int hpFlag;

    //変数の初期化
    skillselect = 0;
    hpFlag = 0;


    printf("使用するスキルを選択してください\n\n");

    do
    {
        hpFlag = 0;
        scanf("%d", &skillselect);

        if(p -> playerskill[skillselect - 1].type == 1)
        {

            //物理攻撃スキルによる攻撃処理
            printf("");
            printf("%sの攻撃！\n", p -> name);
            printf("%sは%sを発動した\n\n", p -> name, p -> playerskill[skillselect - 1].name);

            //ダメージ処理
            printf("%sに%dのダメージ", enemy -> name, p -> playerskill[skillselect -1].powerpoint);

            enemy -> hp -= p -> playerskill[skillselect -1].powerpoint;

        }
        else if(p -> playerskill[skillselect - 1].type == 2)
        {

            //魔法攻撃スキルによる攻撃処理
            printf("");
            printf("%sの攻撃！\n", p -> name);
            printf("%sは%sを発動した\n\n", p -> name, p -> playerskill[skillselect - 1].name);

            //ダメージ処理
            printf("%sに%dのダメージ", enemy -> name, p -> playerskill[skillselect -1].powerpoint);

            enemy -> hp -= p -> playerskill[skillselect -1].powerpoint;

        }
        else if(p -> playerskill[skillselect - 1].type == 3)
        {

            if(p -> hp < p -> maxHp){

                //回復スキルによる回復処理
                printf("");
                printf("%sの攻撃！\n", p -> name);
                printf("%sは%sを発動した\n\n", p -> name, p -> playerskill[skillselect - 1].name);

                //ダメージ処理
                printf("%sはHPを%d回復した", enemy -> name, p -> playerskill[skillselect -1].powerpoint);

                p -> hp += p -> playerskill[skillselect -1].powerpoint;
            }

            if(p -> hp >= p -> maxHp){
                
                printf("これ以上回復できません");

                hpFlag = 1;
            }
            
        }

    } while (skillselect < 1 || skillselect > p -> skillCount || hpFlag == 1);

    return;
}