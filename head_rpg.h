//キャラクターのパラメーターの構造体を作成


//=================
//スキル構造体
//=================
typedef struct 
{
    char name [20];                 //スキル名
    int reqmp;                      //必要MP
    int powerpoint;                 //攻撃力、回復量
    int type;                       //スキルタイプ（1 = 物理攻撃系 / 2 = 魔法攻撃系 / 3 = 回復魔法系）
}SKILL;



//====================
//アイテム構造体
//====================
typedef struct
{
    char name [20];                 //アイテム名
    int powerpoint;                 //攻撃力 / 回復量
    int count;                      //所持数
    int type;                       //アイテムタイプ（1 = 攻撃系 / 2 = HP回復系 / 3 = MP回復系）
}ITEM;



//====================================
//キャラクターのパラメーター構造体
//====================================
typedef struct
{
    //基礎パラメーター関係
    char name [20];                 //名前
    int hp;                         //HP
    int mp;                         //MP
    int power;                      //攻撃力
    int speed;                      //素早さ
    double physicaldefence;         //物理防御力（敵の物理攻撃力×物理防御力（低いほど防御力が高い））
    double magicaldefence;          //魔法防御力（敵の魔法攻撃力×魔法防御力（低いほど防御力が高い））
    int maxHp;                      //最大HP（レベルアップで上昇）
    int maxMp;                      //最大MP（レベルアップで上昇）

    //レベル関係
    int level;                      //レベル
    int exp;                        //経験値

    //ステージ関係
    int stageCount;                 //現在のステージ
    int stageClear;                 //クリアしたステージ数

    //確率関係
    double criticalRatio;           //通常攻撃でクリティカルヒットする確率
    double criticalPoint;           //通常攻撃でクリティカルヒットした時のダメージ倍率
    double hitratio;                //攻撃成功倍率
    double evasionratio;            //攻撃回避倍率

    //攻撃スキル
    SKILL playerskill[50];          //覚えたスキルを格納
    int skillCount;                 //覚えたスキル数

    //アイテム
    ITEM item[100];                 //所持しているアイテムを格納
    int itemCount;                  //所持しているアイテム数

}PLAYER;




//==============================
//モンスターパラメーター構造体
//==============================
typedef struct
{
    char name [20];                 //名前
    int power;                      //攻撃力
    int speed;                      //素早さ
    double physicaldefence;         //物理防御力
    double magicaldiffence;         //魔法防御力
    SKILL monsterskill [10];        //所持スキル
    int gainexp;                    //撃破時の獲得経験値
}MONSTER;



//============================
//プレイヤー構造体変数の宣言
//============================
PLAYER player;


//=========================
//関数のプロトタイプ宣言
//=========================

//パラメーター設定
void parameterset(PLAYER *p);

//戦闘前準備
void prebattle(PLAYER *p);
//戦闘ステージ
void stone(PLAYER *p);

//設定系
void skillSet(SKILL skills[]);
void itemset(ITEM items[]);

//スキル系
void skilldisplay(PLAYER *p);
void useskill(PLAYER *p);

//アイテム系
void itemdisplay(PLAYER *p);
void useitem(PLAYER *p);

//ファイル保存系
void save();
void levelup();





