﻿#ifndef _CHESS_CONST_H_
#define _CHESS_CONST_H_


#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)

#else
#define CHECK_APP_SIGNATURE //正式版打开此宏，android 和 ios debug调试关闭此宏
#endif
#define GOOD_SKILL_HIT_RATIO_BOOST_MOST_PRIO   //宝物的，辅助法术命中提高，优先级最高，放到最后计算，可以突破mark_num和seid_mark_num
#define GOOD_MANJI_PRICE_RATIO 6 //满级物品的价格变化比例
//#define HMW_PAY

#define SCREEN_X_PART_NUM 32
#define SCREEN_Y_PART_NUM 32
#define BYTES_PER_PIXEL 4
extern int SCREEN_SIZE_X;
extern int SCREEN_SIZE_Y;
#define SCENE_TILE_WIDTH 48


#define ACTOR_RELATION_OWN 0
#define ACTOR_RELATION_FRIEND 1
#define ACTOR_RELATION_ENEMY 2

#define TIMER_GAME_SPEED 40
#define TIMER_SHOW_START_FRAME 0

#define REDE_MAP_FACE_APPEAR_FRAME 2
#define TIMER_ACTOR_ATTACK_FRAME 2
#define TIMER_ACTOR_CHANGE_STYLE_FRAME 10
#define TIMER_ACTOR_MOVE 1
#define TIMER_ACTOR_LEAVE_NORMAL_FRAME 3
#define TIMER_ACTOR_ROUND_SLOW_FRAME 2
#define TIMER_ACTOR_FAINT_FRAME 2
#define TIMER_ACTOR_ROUND_NORMAL_FRAME 1
#define TIMER_ACTOR_ROUND_QUICK_FRAME 1

#define TIMER_SHOW_MOVE_REGION 10
#define TIMER_SHOW_ATTACK_REGION 10
#define TIMER_SHOW_ACTION_GAIN 10
#define TIMER_SHOW_ACTION_EFFECT 20
#define TIMER_SHOW_ACTION_EFFECT_CHANGE 1
#define TIMER_ACTOR_TURN_DELAY 2
#define TIMER_ACTOR_PREPARE_ATTACK_DELAY 15//攻击停顿时间
#define TIMER_ACTOR_DEADLY_ATTACK_SOUND_DELAY 6
#define TIMER_ACTOR_HIT_DELAY 5
#define TIMER_ACTOR_SKILL_DELAY 5
#define TIMER_ACTOR_SKILL_FRAME 2
#define TIMER_DELAY_FRAME 5
#define TIMER_GOOD_GIVE_FRAME 15
#define TIMER_GOOD_ACCEPT_FRAME 15
#define TIMER_MAGIC_FRAME 1
#define TIMER_ACTOR_APPEAR 4
#define TIMER_REDE_MENU_SHOW_FRAME 5
#define TIMER_HIGH_LIGHT_FRAME 10
/**联系我们信息最大长度*/
#define MAX_CONTECT_INFO_LEN 1200
/**联系渠道id最大长度*/
#define MAX_CHARGE_ID_LEN 60
#define MAX_SUBJECT_LEN 200
#define MAX_BODY_LEN 200

/**最大渠道数*/
#define MAX_CHANNEL_ID_NUM 20


#define SHOW_BONUS_FRAME  20

/**随机奖励最大物品种类*/
#define RANDOM_BONUS_ITEM_COUNT 50

#define MAPID_SCENE_DAILYGOLD 5000
#define MAPID_SCENE_DAILYSOUL 5001
#define MAPID_SCENE_WOLF_CITY 9000
#define MAPID_SCENE_IMAGE 9100
#define MAPID_SCENE_ACTIVITY 9998  
#define MAPID_SCENE_HEROIC 9999
#define LADDER_SCREEN_MAPID 9997
#define MAPID_SCENE_CLANARMYBATTLE 9996
#define MAPID_SCENE_GREATBATTLE 9995

enum SCREEN_ID
{
	SCREEN_LOGO,
	SCREEN_MENU,              //0
	SCREEN_REDE,
	SCREEN_BATTLE,
	SCREEN_ACTOR_INFO,
	SCREEN_SELECT_ACTION,
	SCREEN_SELECT_SKILL,
	SCREEN_SELECT_GOOD,
	SCREEN_GOOD_INFO,
	SCREEN_SKILL_INFO,
	SCREEN_CONFORM,
	SCREEN_PROMPT,
	SCREEN_STORT_LOAD,
	SCREEN_SETTING,
	SCREEN_PK_MANUAL,  //手动PK界面
	SCREEN_PK,
	SCREEN_MENU_BAR,
	SCREEN_DISPATCH,
	SCREEN_ARMOR,
	SCREEN_BUY,
	SCREEN_SELL,
	SCREEN_TREASURE_INFO,
	SCREEN_LAND_INFO,
	SCREEN_STORE_INFO,
	SCREEN_ARMY_INFO,
	SCREEN_HELP,
	SCREEN_GUIDE,
	SCREEN_SELECT_PAY,
	SCREEN_ENDING,
	SCREEN_IOS_CONTINUE,
	SCREEN_MAX,
	SCREEN_COMMENT,
	SCREEN_NEW_SECOND_SELECT,
	SCREEN_WIN_CONDITION_PROMPT,
	SCREEN_LOGIN,
};

enum
{
	GAME_STATE_LOGO,
	GAME_STATE_MENU,
	GAME_STATE_REDE,
	GAME_STATE_BATTLE,
	GAME_STATE_BATTLE_END,
	GAME_STATE_END
};

enum
{
	BATTLE_NORMAL = 0, //无
	BATTLE_SIXWAR = 1, //灭六国
	BATTLE_HEROIC = 2, //英雄志
	BATTLE_ACTSCENE = 3, //活动副本
	BATTLE_ROMANCE = 4, //演义堂
	BATTLE_DAILY = 5, //日常副本
	BATTLE_LADDER = 6,//一骑当关
	BATTLE_WOLFCITY = 7,//决战高狼
	BATTLE_IMAGE = 8,//镜像战
	BATTLE_CLANARMYBATTLE = 9,//工会副本
	BATTLE_GREATBATTLE = 10,//大战役
	BATTLE_PVP = 11, //PVP对战
};

enum
{
	NORMAL_MODEL = 0,//普通难度
	DISSICULT_MODEL = 1,//精英难度
};

enum
{
	LAYER_BOTTOM = -128, //底层
	LAYER_SECOND = -138,
	LAYER_THIRD = -148,
	LAYER_POPUP = -158, //弹出层
	LAYER_FIFTH = -168,
	LAYER_TOP = -188 //顶层
};

enum
{
	MODEL_STRENG = 0, //装备强化
	MODEL_RECAST = 1, //装备重铸
	MODEL_ENCHANT = 2, //装备附魔
	MODEL_STRENG10 = 3, //装备十连强化
	MODEL_MAX = 3
};

// 2 麻痹 4禁咒 8混乱 16中毒
#define UNNORMAL_STATE_NONE 0 
#define UNNORMAL_STATE_CLEAR 128
#define UNNORMAL_STATE_PALSY 2
#define UNNORMAL_STATE_STUN 4
#define UNNORMAL_STATE_PUZZLE 8
#define UNNORMAL_STATE_POISON 16
#define UNNORMAL_STATE_MISS 32
#define UNNORMAL_STATE_BLIND 64
#define UNNORMAL_STATE_OBFUSCATION 256
#define UNNORMAL_STATE_WEAKED 512
#define UNNORMAL_STATE_REDUCE_SKILLHURT 1024
#define UNNORMAL_STATE_SKILLHURTANDREBOUND 2048
#define UNNORMAL_STATE_ADD_SKILLHURT 4096

// 0攻击力1防御力2精神力3爆发力4士气5移动力 6HP 7Mp
#define ACTOR_ABILITY_POWER 0
#define ACTOR_ABILITY_INTELLEGENCE 1
#define ACTOR_ABILITY_DEFENCE 2
#define ACTOR_ABILITY_EXPLOSION 3
#define ACTOR_ABILITY_FORTUNE 4
#define ACTOR_ABILITY_SPEED 5
#define ACTOR_ABILITY_HPUP 6
#define ACTOR_ABILITY_MPUP 7

// 0下降1正常2上升;
#define ACTOR_ABILITY_DOWN 0
#define ACTOR_ABILITY_NORMAL 1
#define ACTOR_ABILITY_UP 2

//过关斩将敌军actorid开始,（已减1）
#define LADDER_ACTOR_MIN_ID  479
//过关斩将敌军actorid结束（不包括）
#define LADDER_ACTOR_MAX_ID  499

//PVP敌军actorid开始
#define PVP_ACTOR_START_ID  470
//PVP敌军actorid结束
#define PVP_ACTOR_END_ID   478

#define INT_NUM_LEN 4
#define SHORT_NUM_LEN 2

#define GOODS_MAX_STORE 9999

enum 
{
	SCREEN_SIZE_MENU,
	SCREEN_SIZE_REDE,
	SCREEN_SIZE_BATTLE_NORMAL,
	SCREEN_SIZE_BATTLE_MAX
};

const char FILE_GAME_PAY[] = "game_pay.dat";
const char FILE_ACCOUNT_BUY[] = "account_buy.dat";
const char FILE_SETTING_FLAG[] = "setting_flag.dat";
const char FILE_PAY_RECORD[] = "pay_record.dat";
const char FILE_EXCHANGE_GIFT[] = "exchange_gift.dat";
const char FILE_GAME_CONFIG[] = "game_config.dat";

const char DIR_RESOURCE_GEN[] = "mini_res_gen";
const char DIR_SD_AUTO_HISTORY[] = "Autosave_LM";

#endif
