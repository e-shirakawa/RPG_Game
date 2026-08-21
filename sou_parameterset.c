#include<stdio.h>
#include<string.h>
#include"head_rpg.h"


void parameterset(PLAYER *p)
{
    //変数宣言
    int select = 0;

    printf("--キャラクターを選択してください--\n\n");
    printf("1.プリズム [パラディン]\n");
    printf("2.ボイド [ソルジャー]\n");
    printf("3.スキュード [ウィザード]\n");
    printf("4.ポロル [アクロバット]\n");
    printf("5.シェルク [アサシン]\n");

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
        case 1:     //パラディンタイプ

        //基礎パラメーター
        strcpy(p -> name, "プリズム");
        p -> hp = 600;
        //p -> mp = 180;
        p -> mp = 1;
        p -> power = 73;
        p -> physicaldefence = 0.865;
        p -> magicaldefence = 0.895;
        p -> maxHp = 600;
        p -> maxMp = 180;
        p -> level = 1;
        p -> exp = 0;
        p -> stageCount = 0;
        p -> stageClear = 0;
        p -> criticalRatio = 0.065;
        p -> criticalPoint = 1.4;
        p -> hitratio = 0.865;
        p -> evasionratio = 0.065;


        p->skillCount = 0;

        //スキル1
        strcpy(p -> playerskill[0].name, "閃光突き");
        p -> playerskill[0].reqmp = 15;
        p -> playerskill[0].powerpoint = 180;
        p -> playerskill[0].type = 1;

        p -> skillCount++;

        //スキル2
        strcpy(p -> playerskill[1].name, "ライト");
        p -> playerskill[1].reqmp = 12;
        p -> playerskill[1].powerpoint = 125;
        p -> playerskill[1].type = 2;

        p -> skillCount++;

        //スキル3
        strcpy(p -> playerskill[2].name, "ウォッシュ");
        p -> playerskill[2].reqmp = 15;
        p -> playerskill[2].powerpoint = 230;
        p -> playerskill[2].type = 3;

        p -> skillCount++;

        break;


        case 2:     //ソルジャータイプ

        //基礎パラメーター
        strcpy(p -> name, "ボイド");
        p -> hp = 920;
        p -> mp = 60;
        p -> power = 120;
        p -> physicaldefence = 0.785;
        p -> magicaldefence = 0.965;
        p -> maxHp = 920;
        p -> maxMp = 60;
        p -> level = 1;
        p -> exp = 0;
        p -> stageCount = 0;
        p -> stageClear = 0;
        p -> criticalRatio = 0.045;
        p -> criticalPoint = 1.75;
        p -> hitratio = 0.825;
        p -> evasionratio = 0.035;


        p->skillCount = 0;

        //スキル1
        strcpy(p -> playerskill[0].name, "強撃");
        p -> playerskill[0].reqmp = 8;
        p -> playerskill[0].powerpoint = 115;
        p -> playerskill[0].type = 1;

        p -> skillCount++;

        //スキル2
        strcpy(p -> playerskill[1].name, "一点集中");
        p -> playerskill[1].reqmp = 20;
        p -> playerskill[1].powerpoint = 280;
        p -> playerskill[1].type = 1;

        p -> skillCount++;

        break;



        case 3:     //ウィザードタイプ

        //基礎パラメーター
        strcpy(p -> name, "スキュード");
        p -> hp = 390;
        p -> mp = 290;
        p -> power = 38;
        p -> physicaldefence = 0.925;
        p -> magicaldefence = 0.845;
        p -> maxHp = 390;
        p -> maxMp = 290;
        p -> level = 1;
        p -> exp = 0;
        p -> stageCount = 0;
        p -> stageClear = 0;
        p -> criticalRatio = 0.070;
        p -> criticalPoint = 1.6;
        p -> hitratio = 0.895;
        p -> evasionratio = 0.058;


        p->skillCount = 0;

        //スキル1
        strcpy(p -> playerskill[0].name, "爆裂");
        p -> playerskill[0].reqmp = 18;
        p -> playerskill[0].powerpoint = 230;
        p -> playerskill[0].type = 2;

        p -> skillCount++;

        //スキル2
        strcpy(p -> playerskill[1].name, "ホーリーサーベル");
        p -> playerskill[1].reqmp = 26;
        p -> playerskill[1].powerpoint = 390;
        p -> playerskill[1].type = 2;

        p -> skillCount++;

        //スキル3
        strcpy(p -> playerskill[2].name, "クリア");
        p -> playerskill[2].reqmp = 25;
        p -> playerskill[2].powerpoint = 400;
        p -> playerskill[2].type = 3;

        p -> skillCount++;

        break;



        case 4:     //アクロバットタイプ

        //基礎パラメーター
        strcpy(p -> name, "ポロル");
        p -> hp = 490;
        p -> mp = 210;
        p -> power = 62;
        p -> physicaldefence = 0.912;
        p -> magicaldefence = 0.893;
        p -> maxHp = 490;
        p -> maxMp = 210;
        p -> level = 1;
        p -> exp = 0;
        p -> stageCount = 0;
        p -> stageClear = 0;
        p -> criticalRatio = 0.063;
        p -> criticalPoint = 1.3;
        p -> hitratio = 0.875;
        p -> evasionratio = 0.072;


        p->skillCount = 0;

        //スキル1
        strcpy(p -> playerskill[0].name, "ウェポンスロー");
        p -> playerskill[0].reqmp = 10;
        p -> playerskill[0].powerpoint = 138;
        p -> playerskill[0].type = 1;

        p -> skillCount++;

        //スキル2
        strcpy(p -> playerskill[1].name, "ロッドフラッシュ");
        p -> playerskill[1].reqmp = 14;
        p -> playerskill[1].powerpoint = 169;
        p -> playerskill[1].type = 2;

        p -> skillCount++;

        //スキル3
        strcpy(p -> playerskill[2].name, "リモートクラッシュ");
        p -> playerskill[2].reqmp = 21;
        p -> playerskill[2].powerpoint = 215;
        p -> playerskill[2].type = 2;

        p -> skillCount++;

        //スキル4
        strcpy(p -> playerskill[3].name, "ガーゼ");
        p -> playerskill[3].reqmp = 12;
        p -> playerskill[3].powerpoint = 160;
        p -> playerskill[3].type = 3;

        p -> skillCount++;

        break;


        case 5:     //アサシンタイプ

        //基礎パラメーター
        strcpy(p -> name, "シェルク");
        p -> hp = 450;
        p -> mp = 165;
        p -> power = 42;
        p -> physicaldefence = 0.920;
        p -> magicaldefence = 0.912;
        p -> maxHp = 450;
        p -> maxMp = 165;
        p -> level = 1;
        p -> exp = 0;
        p -> stageCount = 0;
        p -> stageClear = 0;
        p -> criticalRatio = 0.115;
        p -> criticalPoint = 2.8;
        p -> hitratio = 0.855;
        p -> evasionratio = 0.096;


        p->skillCount = 0;

        //スキル1
        strcpy(p -> playerskill[0].name, "クナイ");
        p -> playerskill[0].reqmp = 8;
        p -> playerskill[0].powerpoint = 90;
        p -> playerskill[0].type = 1;

        p -> skillCount++;

        //スキル2
        strcpy(p -> playerskill[1].name, "ボム");
        p -> playerskill[1].reqmp = 17;
        p -> playerskill[1].powerpoint = 195;
        p -> playerskill[1].type = 1;

        p -> skillCount++;

        //スキル3
        strcpy(p -> playerskill[2].name, "丸薬");
        p -> playerskill[2].reqmp = 14;
        p -> playerskill[2].powerpoint = 186;
        p -> playerskill[2].type = 3;

        p -> skillCount++;

        break;

        default:
            printf("不正な値です\n");
        break;
    }
        return;
}