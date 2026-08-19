//キャラクターのパラメーターの構造体を作成


//====================================
//キャラクターのパラメーター構造体
//====================================
typedef struct{
    //基礎パラメーター
    char name [20];                 //名前
    int hp;                         //HP
    int mp;                         //MP
    int power;                      //攻撃力
    double physicaldefence;         //物理防御力（敵の物理攻撃力×物理防御力（低いほど防御力が高い））
    double magicaldefence;          //魔法防御力（敵の魔法攻撃力×魔法防御力（低いほど防御力が高い））
    int maxHp;                      //最大HP（レベルアップで上昇）
    int maxMp;                      //最大MP（レベルアップで上昇）
    int level;                      //レベル
    int exp;                        //経験値
    int stageCount;                 //現在のステージ
    int stageClear;                 //クリアしたステージ数
    double criticalRatio;           //通常攻撃でクリティカルヒットする確率
    double criticalPoint;           //通常攻撃でクリティカルヒットした時のダメージ倍率

    //攻撃スキル
    SKILL playerskill[10];     //覚えた攻撃スキルを格納
    int skillCount;           //覚えた攻撃スキル数

    //アイテム
    ITEM item[100];                 //所持しているアイテムを格納
    int itemCount;                  //所持しているアイテム数

}PLAYER;


//=================
//スキル構造体
//=================
typedef struct {
    char name [20];                 //スキル名
    int reqmp;                      //必要MP
    int powerpoint;                 //攻撃力、回復量
    int type;                       //スキルタイプ（1 = 物理攻撃系 / 2 = 魔法攻撃系 / 3 = 回復魔法系）
}SKILL;


//====================
//アイテム構造体
//====================
typedef struct {
    char name [20];                 //アイテム名
    int powerpoint;                 //攻撃力 / 回復量
    int count;                      //所持数
}ITEM;


//==============================
//モンスターパラメーター構造体
//==============================
typedef struct {
    char name [20];
    int power;
    int defence;
    SKILL monsterskill [10];
    int gainexp;
}MONSTER;



//============================
//プレイヤー構造体変数の宣言
//============================
PLAYER player;


//=========================
//関数のプロトタイプ宣言
//=========================

void parameterset(PLAYER *p);