//キャラクターのパラメーターの構造体を作成

typedef struct{
    char name [20];
    int hp;
    int mp;
    int power;
    int defence;
    int maxHp;
    int maxMp;
    int level;
    int exp;
    int stageCount;
    int stageClear;
    int criticalRatio;
    double criticalPoint;
    ATACKSKILL attackskill[10];
    HEALSKILL healskill[10];
    ITEM item[100];
}PLAYER;

typedef struct {
    char name [20];
    int reqmp;
    int powerpoint;
}ATACKSKILL;

typedef struct {
    char name [20];
    int reqmp;
    int healpoint;
}HEALSKILL;

typedef struct {
    char name [20];
    int powerpoint;
    int healpoint;
    int count;
}ITEM;

typedef struct {
    char name [20];
    int power;
    int defence;
    char skillname [20];
    int gainexp;
}MONSTER;


//プレイヤー構造体変数の宣言
PLAYER player;

//関数のプロトタイプ宣言

void parameterset(PLAYER *p);