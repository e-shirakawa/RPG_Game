#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include"head_rpg.h"

//モンスターの行動関数
/*
・モンスターの行動は自動ランダムとする
・通常攻撃もしくはスキルを発動する
・スキルは複数持つ予定なので、どのスキルを発動するかもランダムとする？
・通常攻撃とスキル仕様の発動率のバランスも考慮する？

（実装例）
・random関数で整数を生成
→switch文で分岐（0の時通常攻撃、それ以外はスキル使用）
→該当する要素にスキルがなければ通常攻撃とするなどの実装にする？
*/

void monsteraction(PLAYER *p, MONSTER *enemy)
{

        //変数宣言
        int random = 0;
        int skillno = 0;

        int *s = &skillno;

        //乱数生成
        srand((unsigned int)time(NULL));

        random = rand() % 9;       //0～9の乱数を生成

        switch(random)
        {
            case 0:
            *s = 1;
            break;

            case 1:
            *s = 1;
            break;

            case 2:
            *s = 1;
            break;

            case 3:
            *s = 1;
            break;

            case 4:
            *s = 1;
            break;

            case 5:
            *s = 2;
            break;

            case 6:
            *s = 3;
            break;

            case 7:
            *s = 4;
            break;

            case 8:
            *s = 5;
            break;

            case 9:
            *s = 6;
            break;

            default:
            printf("存在しない値");
            break;
        }

        if(*s == 1)
        {
        
            printf("%sの攻撃！", enemy->name);
            printf("%sは%dのダメージを受けた\n", p->name, enemy->power);

            p->hp -= enemy->power;

        }
        else
        {
            useskill(p, enemy, s);
        }
        
    return;
}


void atackselect(PLAYER *p, MONSTER *enemy, int *s){

    switch(*s)
    {
        case 1:

        printf("%sの攻撃！", enemy->name);
        printf("%sは%dのダメージを受けた\n", p->name, enemy->power);

        p->hp -= enemy->power;
        break;

        case 2:
        if(enemy->monsterskill[0].powerpoint > 0)
        {
            printf("%sは%sを発動した！！\n", enemy->name, enemy->monsterskill[0].name);
        }
        break;

        case 3:
        if(enemy->monsterskill[1].powerpoint > 0)
        {
            printf("%sは%sを発動した！！\n", enemy->name, enemy->monsterskill[1].name);
        }
        break;

        case 4:
        if(enemy->monsterskill[2].powerpoint > 0)
        {
            printf("%sは%sを発動した！！\n", enemy->name, enemy->monsterskill[2].name);
        }
        break;

        case 5:
        if(enemy->monsterskill[3].powerpoint > 0)
        {
            printf("%sは%sを発動した！！\n", enemy->name, enemy->monsterskill[3].name);
        }
        break;

        case 6:
        if(enemy->monsterskill[4].powerpoint > 0)
        {
            printf("%sは%sを発動した！！\n", enemy->name, enemy->monsterskill[4].name);
        }
        break;
    }

        useskill(p, enemy, s);

        return;
}


void useskill(PLAYER *p, MONSTER *enemy, int *s)
{
    //変数の宣言
    int hpflag = 0;

    if(enemy->monsterskill[*s - 2].powerpoint != 0)
    {
        if(enemy->monsterskill[*s - 2].type == 1)
        {
            //物理攻撃スキルの発動
            printf("%sは%sを発動した！！", enemy->name, enemy->monsterskill[*s - 2].name);
            printf("%sは%dのダメージを受けた！\n", p->name, enemy->monsterskill[*s - 2].powerpoint);

            p->hp -= enemy->monsterskill[*s - 2].powerpoint;

        }
        else if(enemy->monsterskill[*s - 2].type == 2)
        {
            //魔法攻撃スキルの発動
            printf("%sは%sを発動した！！", enemy->name, enemy->monsterskill[*s - 2].name);
            printf("%sは%dのダメージを受けた！\n", p->name, enemy->monsterskill[*s - 2].powerpoint);

            p->hp -= enemy->monsterskill[*s - 2].powerpoint;
        }
        else if(enemy->monsterskill[*s - 2].type == 3)
        {

            printf("%sは%sを発動した！！\n", enemy->name, enemy->monsterskill[*s - 2].name);

            if(enemy->hp < enemy->maxHp)
            {
                printf("%sはHPを%d回復した！\n", enemy->name, enemy->monsterskill[*s - 2].powerpoint);
                
                enemy->hp += enemy->monsterskill[*s - 2].powerpoint;
                
                if(enemy->hp > enemy->maxHp);
                {
                    //HPが最大値を超えた場合、HPを最大値にリセット
                    enemy->hp = enemy->maxHp;
                }
            }
            else
            {
                printf("しかしこれ以上回復できない\n");
            }
        }
    }
    else
    {
        printf("%sの攻撃！", enemy->name);
        printf("%sは%dのダメージを受けた\n", p->name, enemy->power);

        p->hp -= enemy->power;
    }

    return;
}