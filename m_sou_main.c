#include<stdio.h>
#include<string.h>
#include"head_rpg.h"

int main()
{

    //変数宣言
    MONSTER monsters [100];                    //モンスター構造体変数

    //変数の初期化
    memset(monsters, 0, sizeof(monsters));

    //ポインタ変数へのplayer変数の格納
    PLAYER *p = &player;

    //==========================
    //モンスターパラメーター設定
    //==========================
    sou_monsterset(monsters);


    printf("【ゲーム開始】\n\n");

    //======================
    //キャラクター選択
    //======================
    //パラメーター設定関数の呼び出し
    parameterset(p);


    //======================
    //戦闘準備
    //======================
    //戦闘前準備関数の呼び出し
    prebattle(p);


    //======================
    //戦闘開始
    //======================
    //ステージ1
    st_one(p, monsters);


    return 0;

}