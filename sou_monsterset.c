#include<stdio.h>
#include<string.h>
#include"head_rpg.h"


void monsterset(MONSTER monsters[])
{

//======================
//ステージ1
//======================

    //モンスター1
    strcpy(monsters[0].name, "スライム");
    monsters[0].power = 6;
    monsters[0].speed = 3;
    monsters[0].physicaldefence = 0.988;
    monsters[0].magicaldiffence = 0.992;
    monsters[0].gainexp = 6;

    //スキル（初期段階では、必要MP、スキルタイプはなしとする）
    strcpy(monsters[0].monsterskill[0].name, "粘膜");
    monsters[0].monsterskill[0].powerpoint = 9;


    //モンスター2
    strcpy(monsters[1].name, "グラス");
    monsters[1].power = 4;
    monsters[1].speed = 5;
    monsters[1].physicaldefence = 0.990;
    monsters[1].magicaldiffence = 0.985;
    monsters[1].gainexp = 7;

    //スキル
    strcpy(monsters[1].monsterskill[0].name, "リーフカッター");
    monsters[1].monsterskill[0].powerpoint = 11;


    //モンスター3
    strcpy(monsters[2].name, "クリルモ");
    monsters[2].power = 3;
    monsters[2].speed = 9;
    monsters[2].physicaldefence = 0.987;
    monsters[2].magicaldiffence = 0.979;
    monsters[2].gainexp = 8;

    //スキル
    strcpy(monsters[2].monsterskill[0].name, "リコルフィン");
    monsters[2].monsterskill[0].powerpoint = 10;


    //モンスター4
    strcpy(monsters[3].name, "アーピト");
    monsters[3].power = 7;
    monsters[3].speed = 6;
    monsters[3].physicaldefence = 0.974;
    monsters[3].magicaldiffence = 0.963;
    monsters[3].gainexp = 9;

    //スキル
    strcpy(monsters[3].monsterskill[0].name, "インハーゾ");
    monsters[3].monsterskill[0].powerpoint = 13;


//======================
//ステージ2
//======================   

    strcpy(monsters[0].name, "");
    monsters[0].power = 0;
    monsters[0].speed = 0;
    monsters[0].physicaldefence = 0;
    monsters[0].magicaldiffence = 0;
    monsters[0].gainexp = 0;

    strcpy(monsters[0].name, "");
    monsters[0].power = 0;
    monsters[0].speed = 0;
    monsters[0].physicaldefence = 0;
    monsters[0].magicaldiffence = 0;
    monsters[0].gainexp = 0;

    strcpy(monsters[0].name, "");
    monsters[0].power = 0;
    monsters[0].speed = 0;
    monsters[0].physicaldefence = 0;
    monsters[0].magicaldiffence = 0;
    monsters[0].gainexp = 0;

    strcpy(monsters[0].name, "");
    monsters[0].power = 0;
    monsters[0].speed = 0;
    monsters[0].physicaldefence = 0;
    monsters[0].magicaldiffence = 0;
    monsters[0].gainexp = 0;

    strcpy(monsters[0].name, "");
    monsters[0].power = 0;
    monsters[0].speed = 0;
    monsters[0].physicaldefence = 0;
    monsters[0].magicaldiffence = 0;
    monsters[0].gainexp = 0;

    strcpy(monsters[0].name, "");
    monsters[0].power = 0;
    monsters[0].speed = 0;
    monsters[0].physicaldefence = 0;
    monsters[0].magicaldiffence = 0;
    monsters[0].gainexp = 0;

    strcpy(monsters[0].name, "");
    monsters[0].power = 0;
    monsters[0].speed = 0;
    monsters[0].physicaldefence = 0;
    monsters[0].magicaldiffence = 0;
    monsters[0].gainexp = 0;

    strcpy(monsters[0].name, "");
    monsters[0].power = 0;
    monsters[0].speed = 0;
    monsters[0].physicaldefence = 0;
    monsters[0].magicaldiffence = 0;
    monsters[0].gainexp = 0;

    strcpy(monsters[0].name, "");
    monsters[0].power = 0;
    monsters[0].speed = 0;
    monsters[0].physicaldefence = 0;
    monsters[0].magicaldiffence = 0;
    monsters[0].gainexp = 0;

    strcpy(monsters[0].name, "");
    monsters[0].power = 0;
    monsters[0].speed = 0;
    monsters[0].physicaldefence = 0;
    monsters[0].magicaldiffence = 0;
    monsters[0].gainexp = 0;

    strcpy(monsters[0].name, "");
    monsters[0].power = 0;
    monsters[0].speed = 0;
    monsters[0].physicaldefence = 0;
    monsters[0].magicaldiffence = 0;
    monsters[0].gainexp = 0;

    strcpy(monsters[0].name, "");
    monsters[0].power = 0;
    monsters[0].speed = 0;
    monsters[0].physicaldefence = 0;
    monsters[0].magicaldiffence = 0;
    monsters[0].gainexp = 0;

    strcpy(monsters[0].name, "");
    monsters[0].power = 0;
    monsters[0].speed = 0;
    monsters[0].physicaldefence = 0;
    monsters[0].magicaldiffence = 0;
    monsters[0].gainexp = 0;

    strcpy(monsters[0].name, "");
    monsters[0].power = 0;
    monsters[0].speed = 0;
    monsters[0].physicaldefence = 0;
    monsters[0].magicaldiffence = 0;
    monsters[0].gainexp = 0;

    strcpy(monsters[0].name, "");
    monsters[0].power = 0;
    monsters[0].speed = 0;
    monsters[0].physicaldefence = 0;
    monsters[0].magicaldiffence = 0;
    monsters[0].gainexp = 0;

    strcpy(monsters[0].name, "");
    monsters[0].power = 0;
    monsters[0].speed = 0;
    monsters[0].physicaldefence = 0;
    monsters[0].magicaldiffence = 0;
    monsters[0].gainexp = 0;

    strcpy(monsters[0].name, "");
    monsters[0].power = 0;
    monsters[0].speed = 0;
    monsters[0].physicaldefence = 0;
    monsters[0].magicaldiffence = 0;
    monsters[0].gainexp = 0;

    strcpy(monsters[0].name, "");
    monsters[0].power = 0;
    monsters[0].speed = 0;
    monsters[0].physicaldefence = 0;
    monsters[0].magicaldiffence = 0;
    monsters[0].gainexp = 0;

    strcpy(monsters[0].name, "");
    monsters[0].power = 0;
    monsters[0].speed = 0;
    monsters[0].physicaldefence = 0;
    monsters[0].magicaldiffence = 0;
    monsters[0].gainexp = 0;

    strcpy(monsters[0].name, "");
    monsters[0].power = 0;
    monsters[0].speed = 0;
    monsters[0].physicaldefence = 0;
    monsters[0].magicaldiffence = 0;
    monsters[0].gainexp = 0;

    strcpy(monsters[0].name, "");
    monsters[0].power = 0;
    monsters[0].speed = 0;
    monsters[0].physicaldefence = 0;
    monsters[0].magicaldiffence = 0;
    monsters[0].gainexp = 0;

    strcpy(monsters[0].name, "");
    monsters[0].power = 0;
    monsters[0].speed = 0;
    monsters[0].physicaldefence = 0;
    monsters[0].magicaldiffence = 0;
    monsters[0].gainexp = 0;

    strcpy(monsters[0].name, "");
    monsters[0].power = 0;
    monsters[0].speed = 0;
    monsters[0].physicaldefence = 0;
    monsters[0].magicaldiffence = 0;
    monsters[0].gainexp = 0;

    strcpy(monsters[0].name, "");
    monsters[0].power = 0;
    monsters[0].speed = 0;
    monsters[0].physicaldefence = 0;
    monsters[0].magicaldiffence = 0;
    monsters[0].gainexp = 0;

    strcpy(monsters[0].name, "");
    monsters[0].power = 0;
    monsters[0].speed = 0;
    monsters[0].physicaldefence = 0;
    monsters[0].magicaldiffence = 0;
    monsters[0].gainexp = 0;

    strcpy(monsters[0].name, "");
    monsters[0].power = 0;
    monsters[0].speed = 0;
    monsters[0].physicaldefence = 0;
    monsters[0].magicaldiffence = 0;
    monsters[0].gainexp = 0;

    strcpy(monsters[0].name, "");
    monsters[0].power = 0;
    monsters[0].speed = 0;
    monsters[0].physicaldefence = 0;
    monsters[0].magicaldiffence = 0;
    monsters[0].gainexp = 0;

    strcpy(monsters[0].name, "");
    monsters[0].power = 0;
    monsters[0].speed = 0;
    monsters[0].physicaldefence = 0;
    monsters[0].magicaldiffence = 0;
    monsters[0].gainexp = 0;

    strcpy(monsters[0].name, "");
    monsters[0].power = 0;
    monsters[0].speed = 0;
    monsters[0].physicaldefence = 0;
    monsters[0].magicaldiffence = 0;
    monsters[0].gainexp = 0;

    strcpy(monsters[0].name, "");
    monsters[0].power = 0;
    monsters[0].speed = 0;
    monsters[0].physicaldefence = 0;
    monsters[0].magicaldiffence = 0;
    monsters[0].gainexp = 0;


 }