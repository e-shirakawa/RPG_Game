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
    ATACKSKILL atackskill;
    HEALSKILL healskill;
    ITEM item;
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