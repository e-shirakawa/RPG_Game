#include<stdio.h>
#include"RPG.h"

int main()
{

    //ポインタ変数へのplayer変数の格納
    PLAYER *p = &player;

    printf("【ゲーム開始】\n\n");

    //パラメーター設定関数の呼び出し
    parameterset(p);

}