//#define _CRT_SECURE_NO_WARNINGS   
//#include "card.h"
//#include <stdio.h>
//#include <string.h>
//
//Card CardDatabase[CARD_TOTAL_COUNT];
//void initCard(CardID card) {
//	CardDatabase[card].cost = 0;
//	CardDatabase[card].damage = 0;
//	CardDatabase[card].block = 0;
//}
//
//void SetColorRarityType(CardID card, CardColor color, CardRarity rarity, CardType type) {
//	CardDatabase[card].color = color;
//	CardDatabase[card].rarity = rarity;
//	CardDatabase[card].type = type;
//}
//void SetUpgradedCardCDB(CardID card, int cost, int damage, int block) {
//	CardDatabase[card].cost_up = CardDatabase[card].cost + cost;
//	CardDatabase[card].damage_up = CardDatabase[card].damage + damage;
//	CardDatabase[card].block_up = CardDatabase[card].block + block;
//}
//void init_card_database() {
//
//	initCard(CARD_STRIKE);
//	SetColorRarityType(CARD_STRIKE, RED, COMMON, ATTACK);
//	CardDatabase[CARD_STRIKE].cost = 1;
//	CardDatabase[CARD_STRIKE].damage = 6;
//	SetUpgradedCardCDB(CARD_STRIKE, 0, 2, 0);
//	strcpy(&CardDatabase[CARD_STRIKE].name, "타격");
//	strcpy(&CardDatabase[CARD_STRIKE].description, "피해를 6 줍니다.");
//	strcpy(&CardDatabase[CARD_STRIKE].description_up, "피해를 8 줍니다.");
//
//	initCard(CARD_DEFEND);
//	SetColorRarityType(CARD_DEFEND, RED, COMMON, SKILL);
//	CardDatabase[CARD_DEFEND].cost = 1;
//	CardDatabase[CARD_DEFEND].block = 5;
//	SetUpgradedCardCDB(CARD_DEFEND, 0, 0, 3);
//	strcpy(&CardDatabase[CARD_DEFEND].name, "수비");
//	strcpy(&CardDatabase[CARD_DEFEND].description, "방어도를 5 얻습니다.");
//	strcpy(&CardDatabase[CARD_DEFEND].description_up, "방어도를 8 얻습니다.");
//
//	initCard(CARD_BASH);
//	SetColorRarityType(CARD_BASH, RED, COMMON, ATTACK);
//	CardDatabase[CARD_BASH].cost = 2;
//	CardDatabase[CARD_BASH].damage = 8;
//	SetUpgradedCardCDB(CARD_BASH, -1, 2, 0);
//	strcpy(&CardDatabase[CARD_BASH].name, "강타");
//	strcpy(&CardDatabase[CARD_BASH].description, "피해를 8 줍니다. 취약을 2 적용합니다.");
//	strcpy(&CardDatabase[CARD_BASH].description_up, "피해를 10 줍니다. 취약을 2 적용합니다.");
//
//	initCard(CARD_ANGER);
//	SetColorRarityType(CARD_ANGER, RED, COMMON, ATTACK);
//	CardDatabase[CARD_ANGER].cost = 0;
//	CardDatabase[CARD_ANGER].damage = 6;
//	SetUpgradedCardCDB(CARD_ANGER, 0, 2, 0);
//	strcpy(&CardDatabase[CARD_ANGER].name, "분노");
//	strcpy(&CardDatabase[CARD_ANGER].description, "피해를 6 줍니다. 버림더미에 분노 사본을 1장 추가합니다.");
//	strcpy(&CardDatabase[CARD_ANGER].description_up, "피해를 8 줍니다. 버림더미에 분노 사본을 1장 추가합니다.");
//
//	initCard(CARD_BODYSLAM);
//	SetColorRarityType(CARD_BODYSLAM, RED, COMMON, ATTACK);
//	CardDatabase[CARD_BODYSLAM].cost = 1;
//	SetUpgradedCardCDB(CARD_BODYSLAM, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_BODYSLAM].name, "몸통박치기");
//	strcpy(&CardDatabase[CARD_BODYSLAM].description, "현재 방어도만큼 피해를 줍니다.");
//	strcpy(&CardDatabase[CARD_BODYSLAM].description_up, "현재 방어도만큼 피해를 줍니다.");
//
//	initCard(CARD_CLASH);
//	SetColorRarityType(CARD_CLASH, RED, COMMON, ATTACK);
//	CardDatabase[CARD_CLASH].cost = 0;
//	CardDatabase[CARD_CLASH].damage = 14;
//	SetUpgradedCardCDB(CARD_CLASH, 0, 4, 0);
//	strcpy(&CardDatabase[CARD_CLASH].name, "격돌");
//	strcpy(&CardDatabase[CARD_CLASH].description, "손에 공격 카드만 있어야 플레이할 수 있습니다. 피해를 14 줍니다.");
//	strcpy(&CardDatabase[CARD_CLASH].description_up, "손에 공격 카드만 있어야 플레이할 수 있습니다. 피해를 18 줍니다.");
//
//	initCard(CARD_CLEAVE);
//	SetColorRarityType(CARD_CLEAVE, RED, COMMON, ATTACK);
//	CardDatabase[CARD_CLEAVE].cost = 1;
//	CardDatabase[CARD_CLEAVE].damage = 8;
//	SetUpgradedCardCDB(CARD_CLEAVE, 0, 3, 0);
//	strcpy(&CardDatabase[CARD_CLEAVE].name, "가르기");
//	strcpy(&CardDatabase[CARD_CLEAVE].description, "모든 적에게 피해를 8 줍니다.");
//	strcpy(&CardDatabase[CARD_CLEAVE].description_up, "모든 적에게 피해를 11 줍니다.");
//
//	initCard(CARD_CLOTHESLINE);
//	SetColorRarityType(CARD_CLOTHESLINE, RED, COMMON, ATTACK);
//	CardDatabase[CARD_CLOTHESLINE].cost = 2;
//	CardDatabase[CARD_CLOTHESLINE].damage = 12;
//	SetUpgradedCardCDB(CARD_CLOTHESLINE, 0, 3, 0);
//	strcpy(&CardDatabase[CARD_CLOTHESLINE].name, "빨랫줄");
//	strcpy(&CardDatabase[CARD_CLOTHESLINE].description, "피해를 12 줍니다. 약화를 2 적용합니다.");
//	strcpy(&CardDatabase[CARD_CLOTHESLINE].description_up, "피해를 15 줍니다. 약화를 2 적용합니다.");
//
//	initCard(CARD_HEADBUTT);
//	SetColorRarityType(CARD_HEADBUTT, RED, COMMON, ATTACK);
//	CardDatabase[CARD_HEADBUTT].cost = 1;
//	CardDatabase[CARD_HEADBUTT].damage = 9;
//	SetUpgradedCardCDB(CARD_HEADBUTT, 0, 3, 0);
//	strcpy(&CardDatabase[CARD_HEADBUTT].name, "박치기");
//	strcpy(&CardDatabase[CARD_HEADBUTT].description, "피해를 9 줍니다. 버림더미에서 카드를 1장 선택해 뽑기 더미 맨 위에 놓습니다.");
//	strcpy(&CardDatabase[CARD_HEADBUTT].description_up, "피해를 12 줍니다. 버림더미에서 카드를 1장 선택해 뽑기 더미 맨 위에 놓습니다.");
//
//	initCard(CARD_HEAVYBLADE);
//	SetColorRarityType(CARD_HEAVYBLADE, RED, COMMON, ATTACK);
//	CardDatabase[CARD_HEAVYBLADE].cost = 2;
//	CardDatabase[CARD_HEAVYBLADE].damage = 14;
//	SetUpgradedCardCDB(CARD_HEAVYBLADE, 0, 5, 0);
//	strcpy(&CardDatabase[CARD_HEAVYBLADE].name, "중검");
//	strcpy(&CardDatabase[CARD_HEAVYBLADE].description, "피해를 14 줍니다. 힘 1당 피해가 3 증가합니다.");
//	strcpy(&CardDatabase[CARD_HEAVYBLADE].description_up, "피해를 19 줍니다. 힘 1당 피해가 3 증가합니다.");
//
//	initCard(CARD_IRONWAVE);
//	SetColorRarityType(CARD_IRONWAVE, RED, COMMON, ATTACK);
//	CardDatabase[CARD_IRONWAVE].cost = 1;
//	CardDatabase[CARD_IRONWAVE].damage = 5;
//	CardDatabase[CARD_IRONWAVE].block = 5;
//	SetUpgradedCardCDB(CARD_IRONWAVE, 0, 2, 2);
//	strcpy(&CardDatabase[CARD_IRONWAVE].name, "강철파도");
//	strcpy(&CardDatabase[CARD_IRONWAVE].description, "방어도를 5 얻습니다. 피해를 5 줍니다.");
//	strcpy(&CardDatabase[CARD_IRONWAVE].description_up, "방어도를 7 얻습니다. 피해를 7 줍니다.");
//
//	initCard(CARD_PERFECTEDSTRIKE);
//	SetColorRarityType(CARD_PERFECTEDSTRIKE, RED, COMMON, ATTACK);
//	CardDatabase[CARD_PERFECTEDSTRIKE].cost = 2;
//	CardDatabase[CARD_PERFECTEDSTRIKE].damage = 6;
//	SetUpgradedCardCDB(CARD_PERFECTEDSTRIKE, 0, 2, 0);
//	strcpy(&CardDatabase[CARD_PERFECTEDSTRIKE].name, "완벽한타격");
//	strcpy(&CardDatabase[CARD_PERFECTEDSTRIKE].description, "피해를 6 줍니다. 덱에 있는 타격 카드 1장당 피해가 2 증가합니다.");
//	strcpy(&CardDatabase[CARD_PERFECTEDSTRIKE].description_up, "피해를 8 줍니다. 덱에 있는 타격 카드 1장당 피해가 2 증가합니다.");
//
//	initCard(CARD_POMMELSTRIKE);
//	SetColorRarityType(CARD_POMMELSTRIKE, RED, COMMON, ATTACK);
//	CardDatabase[CARD_POMMELSTRIKE].cost = 1;
//	CardDatabase[CARD_POMMELSTRIKE].damage = 9;
//	SetUpgradedCardCDB(CARD_POMMELSTRIKE, 0, 1, 0);
//	strcpy(&CardDatabase[CARD_POMMELSTRIKE].name, "검자루치기");
//	strcpy(&CardDatabase[CARD_POMMELSTRIKE].description, "피해를 9 줍니다. 카드를 1장 뽑습니다.");
//	strcpy(&CardDatabase[CARD_POMMELSTRIKE].description_up, "피해를 10 줍니다. 카드를 1장 뽑습니다.");
//
//	initCard(CARD_SWORDBOOMERANG);
//	SetColorRarityType(CARD_SWORDBOOMERANG, RED, COMMON, ATTACK);
//	CardDatabase[CARD_SWORDBOOMERANG].cost = 1;
//	CardDatabase[CARD_SWORDBOOMERANG].damage = 3;
//	SetUpgradedCardCDB(CARD_SWORDBOOMERANG, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_SWORDBOOMERANG].name, "검부메랑");
//	strcpy(&CardDatabase[CARD_SWORDBOOMERANG].description, "무작위 적에게 피해를 3씩 3번 줍니다.");
//	strcpy(&CardDatabase[CARD_SWORDBOOMERANG].description_up, "무작위 적에게 피해를 3씩 4번 줍니다.");
//
//	initCard(CARD_THUNDERCLAP);
//	SetColorRarityType(CARD_THUNDERCLAP, RED, COMMON, ATTACK);
//	CardDatabase[CARD_THUNDERCLAP].cost = 1;
//	CardDatabase[CARD_THUNDERCLAP].damage = 4;
//	SetUpgradedCardCDB(CARD_THUNDERCLAP, 0, 3, 0);
//	strcpy(&CardDatabase[CARD_THUNDERCLAP].name, "벼락");
//	strcpy(&CardDatabase[CARD_THUNDERCLAP].description, "모든 적에게 피해를 4 줍니다. 취약을 1 적용합니다.");
//	strcpy(&CardDatabase[CARD_THUNDERCLAP].description_up, "모든 적에게 피해를 7 줍니다. 취약을 1 적용합니다.");
//
//	initCard(CARD_TWINSTRIKE);
//	SetColorRarityType(CARD_TWINSTRIKE, RED, COMMON, ATTACK);
//	CardDatabase[CARD_TWINSTRIKE].cost = 1;
//	CardDatabase[CARD_TWINSTRIKE].damage = 5;
//	SetUpgradedCardCDB(CARD_TWINSTRIKE, 0, 2, 0);
//	strcpy(&CardDatabase[CARD_TWINSTRIKE].name, "쌍격");
//	strcpy(&CardDatabase[CARD_TWINSTRIKE].description, "피해를 7 줍니다.");
//	strcpy(&CardDatabase[CARD_TWINSTRIKE].description_up, "피해를 9 줍니다.");
//
//	initCard(CARD_WILDSTRIKE);
//	SetColorRarityType(CARD_WILDSTRIKE, RED, COMMON, ATTACK);
//	CardDatabase[CARD_WILDSTRIKE].cost = 1;
//	CardDatabase[CARD_WILDSTRIKE].damage = 12;
//	SetUpgradedCardCDB(CARD_WILDSTRIKE, 0, 5, 0);
//	strcpy(&CardDatabase[CARD_WILDSTRIKE].name, "야생의타격");
//	strcpy(&CardDatabase[CARD_WILDSTRIKE].description, "피해를 12 줍니다. 뽑기 더미에 상처를 1장 추가합니다.");
//	strcpy(&CardDatabase[CARD_WILDSTRIKE].description_up, "피해를 17 줍니다. 뽑기 더미에 상처를 1장 추가합니다.");
//
//	initCard(CARD_ARMAMENTS);
//	SetColorRarityType(CARD_ARMAMENTS, RED, COMMON, SKILL);
//	CardDatabase[CARD_ARMAMENTS].cost = 1;
//	CardDatabase[CARD_ARMAMENTS].block = 5;
//	SetUpgradedCardCDB(CARD_ARMAMENTS, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_ARMAMENTS].name, "무장");
//	strcpy(&CardDatabase[CARD_ARMAMENTS].description, "방어도를 5 얻습니다. 손에 있는 카드를 1장 업그레이드합니다.");
//	strcpy(&CardDatabase[CARD_ARMAMENTS].description_up, "방어도를 5 얻습니다. 손에 있는 모든 카드를 업그레이드합니다.");
//
//	initCard(CARD_FLEX);
//	SetColorRarityType(CARD_FLEX, RED, COMMON, SKILL);
//	CardDatabase[CARD_FLEX].cost = 0;
//	SetUpgradedCardCDB(CARD_FLEX, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_FLEX].name, "근육강화");
//	strcpy(&CardDatabase[CARD_FLEX].description, "힘을 2 얻습니다. 턴 종료 시, 힘을 2 잃습니다.");
//	strcpy(&CardDatabase[CARD_FLEX].description_up, "힘을 4 얻습니다. 턴 종료 시, 힘을 4 잃습니다.");
//
//	initCard(CARD_HAVOC);
//	SetColorRarityType(CARD_HAVOC, RED, COMMON, SKILL);
//	CardDatabase[CARD_HAVOC].cost = 1;
//	SetUpgradedCardCDB(CARD_HAVOC, -1, 0, 0);
//	strcpy(&CardDatabase[CARD_HAVOC].name, "대혼란");
//	strcpy(&CardDatabase[CARD_HAVOC].description, "뽑기 더미 맨 위 카드를 플레이합니다. 그 카드를 소모합니다.");
//	strcpy(&CardDatabase[CARD_HAVOC].description_up, "뽑기 더미 맨 위 카드를 플레이합니다. 그 카드를 소모합니다.");
//
//	initCard(CARD_INTIMIDATE);
//	SetColorRarityType(CARD_INTIMIDATE, RED, COMMON, SKILL);
//	CardDatabase[CARD_INTIMIDATE].cost = 0;
//	SetUpgradedCardCDB(CARD_INTIMIDATE, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_INTIMIDATE].name, "위협");
//	strcpy(&CardDatabase[CARD_INTIMIDATE].description, "모든 적에게 약화를 1 적용합니다.");
//	strcpy(&CardDatabase[CARD_INTIMIDATE].description_up, "모든 적에게 약화를 2 적용합니다.");
//
//	initCard(CARD_POWERTHROUGH);
//	SetColorRarityType(CARD_POWERTHROUGH, RED, COMMON, SKILL);
//	CardDatabase[CARD_POWERTHROUGH].cost = 1;
//	CardDatabase[CARD_POWERTHROUGH].block = 15;
//	SetUpgradedCardCDB(CARD_POWERTHROUGH, 0, 0, 5);
//	strcpy(&CardDatabase[CARD_POWERTHROUGH].name, "돌파");
//	strcpy(&CardDatabase[CARD_POWERTHROUGH].description, "방어도를 15 얻습니다. 손에 상처를 2장 추가합니다.");
//	strcpy(&CardDatabase[CARD_POWERTHROUGH].description_up, "방어도를 20 얻습니다. 손에 상처를 2장 추가합니다.");
//
//	initCard(CARD_SHRUGITOFF);
//	SetColorRarityType(CARD_SHRUGITOFF, RED, COMMON, SKILL);
//	CardDatabase[CARD_SHRUGITOFF].cost = 1;
//	CardDatabase[CARD_SHRUGITOFF].block = 8;
//	SetUpgradedCardCDB(CARD_SHRUGITOFF, 0, 0, 3);
//	strcpy(&CardDatabase[CARD_SHRUGITOFF].name, "어깨털기");
//	strcpy(&CardDatabase[CARD_SHRUGITOFF].description, "방어도를 8 얻습니다. 카드를 1장 뽑습니다.");
//	strcpy(&CardDatabase[CARD_SHRUGITOFF].description_up, "방어도를 11 얻습니다. 카드를 1장 뽑습니다.");
//
//	initCard(CARD_TRUEGRIT);
//	SetColorRarityType(CARD_TRUEGRIT, RED, COMMON, SKILL);
//	CardDatabase[CARD_TRUEGRIT].cost = 1;
//	CardDatabase[CARD_TRUEGRIT].block = 7;
//	SetUpgradedCardCDB(CARD_TRUEGRIT, 0, 0, 2);
//	strcpy(&CardDatabase[CARD_TRUEGRIT].name, "진정한기개");
//	strcpy(&CardDatabase[CARD_TRUEGRIT].description, "방어도를 7 얻습니다. 손에 있는 카드를 1장 소모합니다.");
//	strcpy(&CardDatabase[CARD_TRUEGRIT].description_up, "방어도를 9 얻습니다. 손에 있는 카드를 1장 선택해 소모합니다.");
//
//	initCard(CARD_WARCRY);
//	SetColorRarityType(CARD_WARCRY, RED, COMMON, SKILL);
//	CardDatabase[CARD_WARCRY].cost = 0;
//	SetUpgradedCardCDB(CARD_WARCRY, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_WARCRY].name, "함성");
//	strcpy(&CardDatabase[CARD_WARCRY].description, "카드를 1장 뽑습니다. 뽑기 더미에 카드를 1장 넣습니다.");
//	strcpy(&CardDatabase[CARD_WARCRY].description_up, "카드를 2장 뽑습니다. 뽑기 더미에 카드를 1장 넣습니다.");
//
//	initCard(CARD_BLOODFORBLOOD);
//	SetColorRarityType(CARD_BLOODFORBLOOD, RED, UNCOMMON, ATTACK);
//	CardDatabase[CARD_BLOODFORBLOOD].cost = 4;
//	CardDatabase[CARD_BLOODFORBLOOD].damage = 18;
//	SetUpgradedCardCDB(CARD_BLOODFORBLOOD, 0, 4, 0);
//	strcpy(&CardDatabase[CARD_BLOODFORBLOOD].name, "피에는피로");
//	strcpy(&CardDatabase[CARD_BLOODFORBLOOD].description, "피해를 18 줍니다. 이번 전투에서 체력을 잃을 때마다 비용이 1 감소합니다.");
//	strcpy(&CardDatabase[CARD_BLOODFORBLOOD].description_up, "피해를 22 줍니다. 이번 전투에서 체력을 잃을 때마다 비용이 1 감소합니다.");
//
//	initCard(CARD_CARNAGE);
//	SetColorRarityType(CARD_CARNAGE, RED, UNCOMMON, ATTACK);
//	CardDatabase[CARD_CARNAGE].cost = 2;
//	CardDatabase[CARD_CARNAGE].damage = 20;
//	SetUpgradedCardCDB(CARD_CARNAGE, 0, 8, 0);
//	strcpy(&CardDatabase[CARD_CARNAGE].name, "대학살");
//	strcpy(&CardDatabase[CARD_CARNAGE].description, "무형. 피해를 20 줍니다.");
//	strcpy(&CardDatabase[CARD_CARNAGE].description_up, "무형. 피해를 28 줍니다.");
//
//	initCard(CARD_DROPKICK);
//	SetColorRarityType(CARD_DROPKICK, RED, UNCOMMON, ATTACK);
//	CardDatabase[CARD_DROPKICK].cost = 1;
//	CardDatabase[CARD_DROPKICK].damage = 5;
//	SetUpgradedCardCDB(CARD_DROPKICK, 0, 3, 0);
//	strcpy(&CardDatabase[CARD_DROPKICK].name, "드롭킥");
//	strcpy(&CardDatabase[CARD_DROPKICK].description, "피해를 5 줍니다. 대상이 취약 상태라면 에너지를 1 얻고 카드를 1장 뽑습니다.");
//	strcpy(&CardDatabase[CARD_DROPKICK].description_up, "피해를 8 줍니다. 대상이 취약 상태라면 에너지를 1 얻고 카드를 1장 뽑습니다.");
//
//	initCard(CARD_HEMOKINESIS);
//	SetColorRarityType(CARD_HEMOKINESIS, RED, UNCOMMON, ATTACK);
//	CardDatabase[CARD_HEMOKINESIS].cost = 1;
//	CardDatabase[CARD_HEMOKINESIS].damage = 15;
//	SetUpgradedCardCDB(CARD_HEMOKINESIS, 0, 5, 0);
//	strcpy(&CardDatabase[CARD_HEMOKINESIS].name, "혈액조작");
//	strcpy(&CardDatabase[CARD_HEMOKINESIS].description, "체력을 2 잃습니다. 피해를 15 줍니다.");
//	strcpy(&CardDatabase[CARD_HEMOKINESIS].description_up, "체력을 2 잃습니다. 피해를 20 줍니다.");
//
//	initCard(CARD_PUMMEL);
//	SetColorRarityType(CARD_PUMMEL, RED, UNCOMMON, ATTACK);
//	CardDatabase[CARD_PUMMEL].cost = 1;
//	CardDatabase[CARD_PUMMEL].damage = 2;
//	SetUpgradedCardCDB(CARD_PUMMEL, 0, 1, 0);
//	strcpy(&CardDatabase[CARD_PUMMEL].name, "연타");
//	strcpy(&CardDatabase[CARD_PUMMEL].description, "피해를 2씩 4번 줍니다. 손에 공격 카드가 아닌 카드가 있으면 플레이할 수 없습니다.");
//	strcpy(&CardDatabase[CARD_PUMMEL].description_up, "피해를 3씩 4번 줍니다. 손에 공격 카드가 아닌 카드가 있으면 플레이할 수 없습니다.");
//
//	initCard(CARD_RAMPAGE);
//	SetColorRarityType(CARD_RAMPAGE, RED, UNCOMMON, ATTACK);
//	CardDatabase[CARD_RAMPAGE].cost = 1;
//	CardDatabase[CARD_RAMPAGE].damage = 8;
//	SetUpgradedCardCDB(CARD_RAMPAGE, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_RAMPAGE].name, "광란");
//	strcpy(&CardDatabase[CARD_RAMPAGE].description, "피해를 8 줍니다. 이 카드가 플레이될 때마다 이번 전투에서 피해가 5 증가합니다.");
//	strcpy(&CardDatabase[CARD_RAMPAGE].description_up, "피해를 8 줍니다. 이 카드가 플레이될 때마다 이번 전투에서 피해가 8 증가합니다.");
//
//	initCard(CARD_RECKLESSCHARGE);
//	SetColorRarityType(CARD_RECKLESSCHARGE, RED, UNCOMMON, ATTACK);
//	CardDatabase[CARD_RECKLESSCHARGE].cost = 0;
//	CardDatabase[CARD_RECKLESSCHARGE].damage = 7;
//	SetUpgradedCardCDB(CARD_RECKLESSCHARGE, 0, 3, 0);
//	strcpy(&CardDatabase[CARD_RECKLESSCHARGE].name, "무모한돌진");
//	strcpy(&CardDatabase[CARD_RECKLESSCHARGE].description, "피해를 7 줍니다. 손에 현혹을 1장 추가합니다.");
//	strcpy(&CardDatabase[CARD_RECKLESSCHARGE].description_up, "피해를 10 줍니다. 손에 현혹을 1장 추가합니다.");
//
//	initCard(CARD_SEARINGBLOW);
//	SetColorRarityType(CARD_SEARINGBLOW, RED, UNCOMMON, ATTACK);
//	CardDatabase[CARD_SEARINGBLOW].cost = 2;
//	CardDatabase[CARD_SEARINGBLOW].damage = 12;
//	SetUpgradedCardCDB(CARD_SEARINGBLOW, 0, 4, 0);
//	strcpy(&CardDatabase[CARD_SEARINGBLOW].name, "작열타격");
//	strcpy(&CardDatabase[CARD_SEARINGBLOW].description, "피해를 12 줍니다. 업그레이드할 수 있는 횟수에 제한이 없습니다.");
//	strcpy(&CardDatabase[CARD_SEARINGBLOW].description_up, "피해를 16 줍니다. 업그레이드할 수 있는 횟수에 제한이 없습니다.");
//
//	initCard(CARD_UPPERCUT);
//	SetColorRarityType(CARD_UPPERCUT, RED, UNCOMMON, ATTACK);
//	CardDatabase[CARD_UPPERCUT].cost = 2;
//	CardDatabase[CARD_UPPERCUT].damage = 13;
//	SetUpgradedCardCDB(CARD_UPPERCUT, 0, 4, 0);
//	strcpy(&CardDatabase[CARD_UPPERCUT].name, "어퍼컷");
//	strcpy(&CardDatabase[CARD_UPPERCUT].description, "피해를 13 줍니다. 약화를 1, 취약을 1 적용합니다.");
//	strcpy(&CardDatabase[CARD_UPPERCUT].description_up, "피해를 17 줍니다. 약화를 1, 취약을 1 적용합니다.");
//
//	initCard(CARD_WHIRLWIND);
//	SetColorRarityType(CARD_WHIRLWIND, RED, UNCOMMON, ATTACK);
//	CardDatabase[CARD_WHIRLWIND].cost = -1;
//	CardDatabase[CARD_WHIRLWIND].damage = 5;
//	SetUpgradedCardCDB(CARD_WHIRLWIND, 0, 3, 0);
//	strcpy(&CardDatabase[CARD_WHIRLWIND].name, "회오리바람");
//	strcpy(&CardDatabase[CARD_WHIRLWIND].description, "모든 적에게 현재 에너지만큼 피해를 5씩 줍니다.");
//	strcpy(&CardDatabase[CARD_WHIRLWIND].description_up, "모든 적에게 현재 에너지만큼 피해를 8씩 줍니다.");
//
//	initCard(CARD_BATTLETRANCE);
//	SetColorRarityType(CARD_BATTLETRANCE, RED, UNCOMMON, SKILL);
//	CardDatabase[CARD_BATTLETRANCE].cost = 0;
//	SetUpgradedCardCDB(CARD_BATTLETRANCE, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_BATTLETRANCE].name, "전투몰입");
//	strcpy(&CardDatabase[CARD_BATTLETRANCE].description, "카드를 3장 뽑습니다. 이번 턴에 카드를 뽑을 수 없습니다.");
//	strcpy(&CardDatabase[CARD_BATTLETRANCE].description_up, "카드를 4장 뽑습니다. 이번 턴에 카드를 뽑을 수 없습니다.");
//
//	initCard(CARD_BLOODLETTING);
//	SetColorRarityType(CARD_BLOODLETTING, RED, UNCOMMON, SKILL);
//	CardDatabase[CARD_BLOODLETTING].cost = 0;
//	SetUpgradedCardCDB(CARD_BLOODLETTING, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_BLOODLETTING].name, "방혈");
//	strcpy(&CardDatabase[CARD_BLOODLETTING].description, "체력을 3 잃습니다. 에너지를 2 얻습니다.");
//	strcpy(&CardDatabase[CARD_BLOODLETTING].description_up, "체력을 3 잃습니다. 에너지를 3 얻습니다.");
//
//	initCard(CARD_BURNINGPACT);
//	SetColorRarityType(CARD_BURNINGPACT, RED, UNCOMMON, SKILL);
//	CardDatabase[CARD_BURNINGPACT].cost = 1;
//	SetUpgradedCardCDB(CARD_BURNINGPACT, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_BURNINGPACT].name, "불타는서약");
//	strcpy(&CardDatabase[CARD_BURNINGPACT].description, "손에 있는 카드를 1장 소모합니다. 카드를 2장 뽑습니다.");
//	strcpy(&CardDatabase[CARD_BURNINGPACT].description_up, "손에 있는 카드를 1장 소모합니다. 카드를 3장 뽑습니다.");
//
//	initCard(CARD_DISARM);
//	SetColorRarityType(CARD_DISARM, RED, UNCOMMON, SKILL);
//	CardDatabase[CARD_DISARM].cost = 1;
//	SetUpgradedCardCDB(CARD_DISARM, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_DISARM].name, "무장해제");
//	strcpy(&CardDatabase[CARD_DISARM].description, "소모. 적의 힘을 2 감소시킵니다.");
//	strcpy(&CardDatabase[CARD_DISARM].description_up, "소모. 적의 힘을 3 감소시킵니다.");
//
//	initCard(CARD_DUALWIELD);
//	SetColorRarityType(CARD_DUALWIELD, RED, UNCOMMON, SKILL);
//	CardDatabase[CARD_DUALWIELD].cost = 1;
//	SetUpgradedCardCDB(CARD_DUALWIELD, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_DUALWIELD].name, "양손잡이");
//	strcpy(&CardDatabase[CARD_DUALWIELD].description, "손에 있는 공격 카드나 파워 카드를 1장 선택해 사본을 손에 1장 만듭니다.");
//	strcpy(&CardDatabase[CARD_DUALWIELD].description_up, "손에 있는 공격 카드나 파워 카드를 1장 선택해 사본을 손에 2장 만듭니다.");
//
//	initCard(CARD_ENTRENCH);
//	SetColorRarityType(CARD_ENTRENCH, RED, UNCOMMON, SKILL);
//	CardDatabase[CARD_ENTRENCH].cost = 2;
//	SetUpgradedCardCDB(CARD_ENTRENCH, -1, 0, 0);
//	strcpy(&CardDatabase[CARD_ENTRENCH].name, "참호구축");
//	strcpy(&CardDatabase[CARD_ENTRENCH].description, "현재 방어도만큼 방어도를 얻습니다.");
//	strcpy(&CardDatabase[CARD_ENTRENCH].description_up, "현재 방어도만큼 방어도를 얻습니다.");
//
//	initCard(CARD_FLAMEBARRIER);
//	SetColorRarityType(CARD_FLAMEBARRIER, RED, UNCOMMON, SKILL);
//	CardDatabase[CARD_FLAMEBARRIER].cost = 2;
//	CardDatabase[CARD_FLAMEBARRIER].block = 12;
//	SetUpgradedCardCDB(CARD_FLAMEBARRIER, 0, 0, 4);
//	strcpy(&CardDatabase[CARD_FLAMEBARRIER].name, "화염방벽");
//	strcpy(&CardDatabase[CARD_FLAMEBARRIER].description, "방어도를 12 얻습니다. 이번 턴에 공격받을 때마다 공격자에게 피해를 4 줍니다.");
//	strcpy(&CardDatabase[CARD_FLAMEBARRIER].description_up, "방어도를 16 얻습니다. 이번 턴에 공격받을 때마다 공격자에게 피해를 4 줍니다.");
//
//	initCard(CARD_GHOSTLYARMOR);
//	SetColorRarityType(CARD_GHOSTLYARMOR, RED, UNCOMMON, SKILL);
//	CardDatabase[CARD_GHOSTLYARMOR].cost = 1;
//	CardDatabase[CARD_GHOSTLYARMOR].block = 10;
//	SetUpgradedCardCDB(CARD_GHOSTLYARMOR, 0, 0, 3);
//	strcpy(&CardDatabase[CARD_GHOSTLYARMOR].name, "유령갑옷");
//	strcpy(&CardDatabase[CARD_GHOSTLYARMOR].description, "무형. 방어도를 10 얻습니다.");
//	strcpy(&CardDatabase[CARD_GHOSTLYARMOR].description_up, "무형. 방어도를 13 얻습니다.");
//
//	initCard(CARD_INFERNALBLADE);
//	SetColorRarityType(CARD_INFERNALBLADE, RED, UNCOMMON, SKILL);
//	CardDatabase[CARD_INFERNALBLADE].cost = 1;
//	SetUpgradedCardCDB(CARD_INFERNALBLADE, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_INFERNALBLADE].name, "지옥의검");
//	strcpy(&CardDatabase[CARD_INFERNALBLADE].description, "손에 무작위 공격 카드를 1장 추가합니다. 그 카드는 이번 턴에 비용이 0이 됩니다. 소모.");
//	strcpy(&CardDatabase[CARD_INFERNALBLADE].description_up, "손에 무작위 공격 카드를 1장 추가합니다. 그 카드는 업그레이드되며 이번 턴에 비용이 0이 됩니다. 소모.");
//
//	initCard(CARD_INTIMIDATE);
//	SetColorRarityType(CARD_INTIMIDATE, RED, UNCOMMON, SKILL);
//	CardDatabase[CARD_INTIMIDATE].cost = 0;
//	SetUpgradedCardCDB(CARD_INTIMIDATE, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_INTIMIDATE].name, "위협");
//	strcpy(&CardDatabase[CARD_INTIMIDATE].description, "모든 적에게 약화를 1 적용합니다.");
//	strcpy(&CardDatabase[CARD_INTIMIDATE].description_up, "모든 적에게 약화를 2 적용합니다.");
//
//	initCard(CARD_OFFERING);
//	SetColorRarityType(CARD_OFFERING, RED, UNCOMMON, SKILL);
//	CardDatabase[CARD_OFFERING].cost = 0;
//	SetUpgradedCardCDB(CARD_OFFERING, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_OFFERING].name, "제물");
//	strcpy(&CardDatabase[CARD_OFFERING].description, "소모. 체력을 6 잃습니다. 에너지를 2 얻고 카드를 3장 뽑습니다.");
//	strcpy(&CardDatabase[CARD_OFFERING].description_up, "소모. 체력을 6 잃습니다. 에너지를 2 얻고 카드를 5장 뽑습니다.");
//
//	initCard(CARD_RAGE);
//	SetColorRarityType(CARD_RAGE, RED, UNCOMMON, SKILL);
//	CardDatabase[CARD_RAGE].cost = 0;
//	SetUpgradedCardCDB(CARD_RAGE, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_RAGE].name, "격노");
//	strcpy(&CardDatabase[CARD_RAGE].description, "공격받을 때마다 방어도를 3 얻습니다.");
//	strcpy(&CardDatabase[CARD_RAGE].description_up, "공격받을 때마다 방어도를 5 얻습니다.");
//
//	initCard(CARD_SECONDWIND);
//	SetColorRarityType(CARD_SECONDWIND, RED, UNCOMMON, SKILL);
//	CardDatabase[CARD_SECONDWIND].cost = 1;
//	SetUpgradedCardCDB(CARD_SECONDWIND, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_SECONDWIND].name, "재기");
//	strcpy(&CardDatabase[CARD_SECONDWIND].description, "손에 있는 모든 공격 카드가 아닌 카드를 소모합니다. 소모한 카드 1장당 방어도를 5 얻습니다.");
//	strcpy(&CardDatabase[CARD_SECONDWIND].description_up, "손에 있는 모든 공격 카드가 아닌 카드를 소모합니다. 소모한 카드 1장당 방어도를 7 얻습니다.");
//
//	initCard(CARD_SEEINGRED);
//	SetColorRarityType(CARD_SEEINGRED, RED, UNCOMMON, SKILL);
//	CardDatabase[CARD_SEEINGRED].cost = 1;
//	SetUpgradedCardCDB(CARD_SEEINGRED, -1, 0, 0);
//	strcpy(&CardDatabase[CARD_SEEINGRED].name, "분노폭발");
//	strcpy(&CardDatabase[CARD_SEEINGRED].description, "소모. 에너지를 2 얻습니다. 이번 턴에 카드를 뽑을 수 없습니다.");
//	strcpy(&CardDatabase[CARD_SEEINGRED].description_up, "소모. 에너지를 2 얻습니다. 이번 턴에 카드를 뽑을 수 없습니다.");
//
//	initCard(CARD_SENTINEL);
//	SetColorRarityType(CARD_SENTINEL, RED, UNCOMMON, SKILL);
//	CardDatabase[CARD_SENTINEL].cost = 1;
//	CardDatabase[CARD_SENTINEL].block = 5;
//	SetUpgradedCardCDB(CARD_SENTINEL, 0, 0, 3);
//	strcpy(&CardDatabase[CARD_SENTINEL].name, "파수꾼");
//	strcpy(&CardDatabase[CARD_SENTINEL].description, "방어도를 5 얻습니다. 이번 턴에 다른 카드를 2장 이상 플레이했다면 에너지를 2 얻습니다.");
//	strcpy(&CardDatabase[CARD_SENTINEL].description_up, "방어도를 8 얻습니다. 이번 턴에 다른 카드를 2장 이상 플레이했다면 에너지를 2 얻습니다.");
//
//	initCard(CARD_SHOCKWAVE);
//	SetColorRarityType(CARD_SHOCKWAVE, RED, UNCOMMON, SKILL);
//	CardDatabase[CARD_SHOCKWAVE].cost = 2;
//	SetUpgradedCardCDB(CARD_SHOCKWAVE, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_SHOCKWAVE].name, "충격파");
//	strcpy(&CardDatabase[CARD_SHOCKWAVE].description, "모든 적에게 약화를 3, 취약를 3 적용합니다. 소모.");
//	strcpy(&CardDatabase[CARD_SHOCKWAVE].description_up, "모든 적에게 약화를 5, 취약를 5 적용합니다. 소모.");
//
//	initCard(CARD_SPOTWEAKNESS);
//	SetColorRarityType(CARD_SPOTWEAKNESS, RED, UNCOMMON, SKILL);
//	CardDatabase[CARD_SPOTWEAKNESS].cost = 1;
//	SetUpgradedCardCDB(CARD_SPOTWEAKNESS, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_SPOTWEAKNESS].name, "약점발견");
//	strcpy(&CardDatabase[CARD_SPOTWEAKNESS].description, "적이 공격 의지를 보이면 힘을 3 얻습니다.");
//	strcpy(&CardDatabase[CARD_SPOTWEAKNESS].description_up, "적이 공격 의지를 보이면 힘을 4 얻습니다.");
//
//	initCard(CARD_COMBUST);
//	SetColorRarityType(CARD_COMBUST, RED, UNCOMMON, POWER);
//	CardDatabase[CARD_COMBUST].cost = 1;
//	SetUpgradedCardCDB(CARD_COMBUST, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_COMBUST].name, "연소");
//	strcpy(&CardDatabase[CARD_COMBUST].description, "턴 종료 시, 체력을 1 잃고 모든 적에게 피해를 5 줍니다.");
//	strcpy(&CardDatabase[CARD_COMBUST].description_up, "턴 종료 시, 체력을 1 잃고 모든 적에게 피해를 7 줍니다.");
//
//	initCard(CARD_DARKEMBRACE);
//	SetColorRarityType(CARD_DARKEMBRACE, RED, UNCOMMON, POWER);
//	CardDatabase[CARD_DARKEMBRACE].cost = 2;
//	SetUpgradedCardCDB(CARD_DARKEMBRACE, -1, 0, 0);
//	strcpy(&CardDatabase[CARD_DARKEMBRACE].name, "어둠의포옹");
//	strcpy(&CardDatabase[CARD_DARKEMBRACE].description, "카드를 소모할 때마다 카드를 1장 뽑습니다.");
//	strcpy(&CardDatabase[CARD_DARKEMBRACE].description_up, "카드를 소모할 때마다 카드를 1장 뽑습니다.");
//
//	initCard(CARD_EVOLVE);
//	SetColorRarityType(CARD_EVOLVE, RED, UNCOMMON, POWER);
//	CardDatabase[CARD_EVOLVE].cost = 1;
//	SetUpgradedCardCDB(CARD_EVOLVE, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_EVOLVE].name, "진화");
//	strcpy(&CardDatabase[CARD_EVOLVE].description, "상태이상 카드를 뽑을 때마다 카드를 1장 뽑습니다.");
//	strcpy(&CardDatabase[CARD_EVOLVE].description_up, "상태이상 카드를 뽑을 때마다 카드를 2장 뽑습니다.");
//
//	initCard(CARD_FEELNOPAIN);
//	SetColorRarityType(CARD_FEELNOPAIN, RED, UNCOMMON, POWER);
//	CardDatabase[CARD_FEELNOPAIN].cost = 1;
//	SetUpgradedCardCDB(CARD_FEELNOPAIN, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_FEELNOPAIN].name, "고통무감각");
//	strcpy(&CardDatabase[CARD_FEELNOPAIN].description, "카드를 소모할 때마다 방어도를 3 얻습니다.");
//	strcpy(&CardDatabase[CARD_FEELNOPAIN].description_up, "카드를 소모할 때마다 방어도를 4 얻습니다.");
//
//	initCard(CARD_FIREBREATHING);
//	SetColorRarityType(CARD_FIREBREATHING, RED, UNCOMMON, POWER);
//	CardDatabase[CARD_FIREBREATHING].cost = 1;
//	SetUpgradedCardCDB(CARD_FIREBREATHING, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_FIREBREATHING].name, "화염호흡");
//	strcpy(&CardDatabase[CARD_FIREBREATHING].description, "공격 카드를 뽑거나 손에 추가할 때마다 모든 적에게 피해를 6 줍니다.");
//	strcpy(&CardDatabase[CARD_FIREBREATHING].description_up, "공격 카드를 뽑거나 손에 추가할 때마다 모든 적에게 피해를 10 줍니다.");
//
//	initCard(CARD_INFLAME);
//	SetColorRarityType(CARD_INFLAME, RED, UNCOMMON, POWER);
//	CardDatabase[CARD_INFLAME].cost = 1;
//	SetUpgradedCardCDB(CARD_INFLAME, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_INFLAME].name, "염상");
//	strcpy(&CardDatabase[CARD_INFLAME].description, "힘을 2 얻습니다.");
//	strcpy(&CardDatabase[CARD_INFLAME].description_up, "힘을 3 얻습니다.");
//
//	initCard(CARD_METALLICIZE);
//	SetColorRarityType(CARD_METALLICIZE, RED, UNCOMMON, POWER);
//	CardDatabase[CARD_METALLICIZE].cost = 1;
//	SetUpgradedCardCDB(CARD_METALLICIZE, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_METALLICIZE].name, "금속화");
//	strcpy(&CardDatabase[CARD_METALLICIZE].description, "턴 종료 시 방어도를 3 얻습니다.");
//	strcpy(&CardDatabase[CARD_METALLICIZE].description_up, "턴 종료 시 방어도를 4 얻습니다.");
//
//	initCard(CARD_RUPTURE);
//	SetColorRarityType(CARD_RUPTURE, RED, UNCOMMON, POWER);
//	CardDatabase[CARD_RUPTURE].cost = 1;
//	SetUpgradedCardCDB(CARD_RUPTURE, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_RUPTURE].name, "파열");
//	strcpy(&CardDatabase[CARD_RUPTURE].description, "체력을 잃을 때마다 힘을 1 얻습니다.");
//	strcpy(&CardDatabase[CARD_RUPTURE].description_up, "체력을 잃을 때마다 힘을 2 얻습니다.");
//
//	initCard(CARD_BLUDGEON);
//	SetColorRarityType(CARD_BLUDGEON, RED, RARE, ATTACK);
//	CardDatabase[CARD_BLUDGEON].cost = 3;
//	CardDatabase[CARD_BLUDGEON].damage = 32;
//	SetUpgradedCardCDB(CARD_BLUDGEON, 0, 10, 0);
//	strcpy(&CardDatabase[CARD_BLUDGEON].name, "중타");
//	strcpy(&CardDatabase[CARD_BLUDGEON].description, "피해를 32 줍니다.");
//	strcpy(&CardDatabase[CARD_BLUDGEON].description_up, "피해를 42 줍니다.");
//
//	initCard(CARD_FEED);
//	SetColorRarityType(CARD_FEED, RED, RARE, ATTACK);
//	CardDatabase[CARD_FEED].cost = 1;
//	CardDatabase[CARD_FEED].damage = 10;
//	SetUpgradedCardCDB(CARD_FEED, 0, 2, 0);
//	strcpy(&CardDatabase[CARD_FEED].name, "포식");
//	strcpy(&CardDatabase[CARD_FEED].description, "피해를 10 줍니다. 적이 치명상이 아닌 상태에서 죽으면 최대 체력이 3 증가합니다. 소모.");
//	strcpy(&CardDatabase[CARD_FEED].description_up, "피해를 12 줍니다. 적이 치명상이 아닌 상태에서 죽으면 최대 체력이 4 증가합니다. 소모.");
//
//	initCard(CARD_FIENDFIRE);
//	SetColorRarityType(CARD_FIENDFIRE, RED, RARE, ATTACK);
//	CardDatabase[CARD_FIENDFIRE].cost = 2;
//	CardDatabase[CARD_FIENDFIRE].damage = 7;
//	SetUpgradedCardCDB(CARD_FIENDFIRE, 0, 2, 0);
//	strcpy(&CardDatabase[CARD_FIENDFIRE].name, "마귀불");
//	strcpy(&CardDatabase[CARD_FIENDFIRE].description, "소모. 손에 있는 모든 카드를 소모합니다. 소모한 카드 1장당 피해를 7씩 줍니다.");
//	strcpy(&CardDatabase[CARD_FIENDFIRE].description_up, "소모. 손에 있는 모든 카드를 소모합니다. 소모한 카드 1장당 피해를 9씩 줍니다.");
//
//	initCard(CARD_IMMOLATE);
//	SetColorRarityType(CARD_IMMOLATE, RED, RARE, ATTACK);
//	CardDatabase[CARD_IMMOLATE].cost = 2;
//	CardDatabase[CARD_IMMOLATE].damage = 21;
//	SetUpgradedCardCDB(CARD_IMMOLATE, 0, 7, 0);
//	strcpy(&CardDatabase[CARD_IMMOLATE].name, "희생");
//	strcpy(&CardDatabase[CARD_IMMOLATE].description, "모든 적에게 피해를 21 줍니다. 손에 화상을 1장 추가합니다.");
//	strcpy(&CardDatabase[CARD_IMMOLATE].description_up, "모든 적에게 피해를 28 줍니다. 손에 화상을 1장 추가합니다.");
//
//	initCard(CARD_REAPER);
//	SetColorRarityType(CARD_REAPER, RED, RARE, ATTACK);
//	CardDatabase[CARD_REAPER].cost = 2;
//	CardDatabase[CARD_REAPER].damage = 4;
//	SetUpgradedCardCDB(CARD_REAPER, 0, 1, 0);
//	strcpy(&CardDatabase[CARD_REAPER].name, "사신");
//	strcpy(&CardDatabase[CARD_REAPER].description, "모든 적에게 피해를 4 줍니다. 치명상이 아닌 적에게 준 피해만큼 체력을 회복합니다. 소모.");
//	strcpy(&CardDatabase[CARD_REAPER].description_up, "모든 적에게 피해를 5 줍니다. 치명상이 아닌 적에게 준 피해만큼 체력을 회복합니다. 소모.");
//
//	initCard(CARD_DOUBLETAP);
//	SetColorRarityType(CARD_DOUBLETAP, RED, RARE, SKILL);
//	CardDatabase[CARD_DOUBLETAP].cost = 1;
//	SetUpgradedCardCDB(CARD_DOUBLETAP, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_DOUBLETAP].name, "연타");
//	strcpy(&CardDatabase[CARD_DOUBLETAP].description, "이번 턴에 다음에 플레이하는 공격 카드를 두 번 플레이합니다.");
//	strcpy(&CardDatabase[CARD_DOUBLETAP].description_up, "이번 턴에 다음에 플레이하는 공격 카드 2장을 두 번 플레이합니다.");
//
//	initCard(CARD_EXHUME);
//	SetColorRarityType(CARD_EXHUME, RED, RARE, SKILL);
//	CardDatabase[CARD_EXHUME].cost = 1;
//	SetUpgradedCardCDB(CARD_EXHUME, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_EXHUME].name, "발굴");
//	strcpy(&CardDatabase[CARD_EXHUME].description, "소모 더미에서 카드를 1장 선택해 손에 추가합니다. 소모.");
//	strcpy(&CardDatabase[CARD_EXHUME].description_up, "소모 더미에서 카드를 1장 선택해 손에 추가합니다.");
//
//	initCard(CARD_IMPERVIOUS);
//	SetColorRarityType(CARD_IMPERVIOUS, RED, RARE, SKILL);
//	CardDatabase[CARD_IMPERVIOUS].cost = 2;
//	CardDatabase[CARD_IMPERVIOUS].block = 30;
//	SetUpgradedCardCDB(CARD_IMPERVIOUS, 0, 0, 10);
//	strcpy(&CardDatabase[CARD_IMPERVIOUS].name, "불굴");
//	strcpy(&CardDatabase[CARD_IMPERVIOUS].description, "방어도를 30 얻습니다. 소모.");
//	strcpy(&CardDatabase[CARD_IMPERVIOUS].description_up, "방어도를 40 얻습니다. 소모.");
//
//	initCard(CARD_LIMITBREAK);
//	SetColorRarityType(CARD_LIMITBREAK, RED, RARE, SKILL);
//	CardDatabase[CARD_LIMITBREAK].cost = 1;
//	SetUpgradedCardCDB(CARD_LIMITBREAK, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_LIMITBREAK].name, "한계돌파");
//	strcpy(&CardDatabase[CARD_LIMITBREAK].description, "현재 힘만큼 힘을 얻습니다. 소모.");
//	strcpy(&CardDatabase[CARD_LIMITBREAK].description_up, "현재 힘만큼 힘을 얻습니다.");
//
//	initCard(CARD_BARRICADE);
//	SetColorRarityType(CARD_BARRICADE, RED, RARE, POWER);
//	CardDatabase[CARD_BARRICADE].cost = 3;
//	SetUpgradedCardCDB(CARD_BARRICADE, -1, 0, 0);
//	strcpy(&CardDatabase[CARD_BARRICADE].name, "방벽");
//	strcpy(&CardDatabase[CARD_BARRICADE].description, "방어도가 턴 종료 시 사라지지 않습니다.");
//	strcpy(&CardDatabase[CARD_BARRICADE].description_up, "방어도가 턴 종료 시 사라지지 않습니다.");
//
//	initCard(CARD_BERSERK);
//	SetColorRarityType(CARD_BERSERK, RED, RARE, POWER);
//	CardDatabase[CARD_BERSERK].cost = 0;
//	SetUpgradedCardCDB(CARD_BERSERK, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_BERSERK].name, "광전사");
//	strcpy(&CardDatabase[CARD_BERSERK].description, "턴 시작 시 에너지를 1 얻고 취약을 1 얻습니다.");
//	strcpy(&CardDatabase[CARD_BERSERK].description_up, "턴 시작 시 에너지를 1 얻습니다.");
//
//	initCard(CARD_BRUTALITY);
//	SetColorRarityType(CARD_BRUTALITY, RED, RARE, POWER);
//	CardDatabase[CARD_BRUTALITY].cost = 0;
//	SetUpgradedCardCDB(CARD_BRUTALITY, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_BRUTALITY].name, "야만성");
//	strcpy(&CardDatabase[CARD_BRUTALITY].description, "턴 시작 시 체력을 1 잃고 카드를 1장 뽑습니다.");
//	strcpy(&CardDatabase[CARD_BRUTALITY].description_up, "고유. 턴 시작 시 체력을 1 잃고 카드를 1장 뽑습니다.");
//
//	initCard(CARD_CORRUPTION);
//	SetColorRarityType(CARD_CORRUPTION, RED, RARE, POWER);
//	CardDatabase[CARD_CORRUPTION].cost = 3;
//	SetUpgradedCardCDB(CARD_CORRUPTION, -1, 0, 0);
//	strcpy(&CardDatabase[CARD_CORRUPTION].name, "타락");
//	strcpy(&CardDatabase[CARD_CORRUPTION].description, "스킬 카드의 비용이 0이 됩니다. 스킬 카드를 플레이하면 소모됩니다.");
//	strcpy(&CardDatabase[CARD_CORRUPTION].description_up, "스킬 카드의 비용이 0이 됩니다. 스킬 카드를 플레이하면 소모됩니다.");
//
//	initCard(CARD_DEMONFORM);
//	SetColorRarityType(CARD_DEMONFORM, RED, RARE, POWER);
//	CardDatabase[CARD_DEMONFORM].cost = 3;
//	SetUpgradedCardCDB(CARD_DEMONFORM, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_DEMONFORM].name, "악마화");
//	strcpy(&CardDatabase[CARD_DEMONFORM].description, "턴 종료 시 힘을 2 얻습니다.");
//	strcpy(&CardDatabase[CARD_DEMONFORM].description_up, "턴 종료 시 힘을 3 얻습니다.");
//
//	initCard(CARD_JUGGERNAUT);
//	SetColorRarityType(CARD_JUGGERNAUT, RED, RARE, POWER);
//	CardDatabase[CARD_JUGGERNAUT].cost = 2;
//	SetUpgradedCardCDB(CARD_JUGGERNAUT, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_JUGGERNAUT].name, "거대전차");
//	strcpy(&CardDatabase[CARD_JUGGERNAUT].description, "방어도를 얻을 때마다 무작위 적에게 피해를 5 줍니다.");
//	strcpy(&CardDatabase[CARD_JUGGERNAUT].description_up, "방어도를 얻을 때마다 무작위 적에게 피해를 7 줍니다.");
//
//	initCard(CARD_STRIKE2);
//	SetColorRarityType(CARD_STRIKE2, GREEN, COMMON, ATTACK);
//	CardDatabase[CARD_STRIKE2].cost = 1;
//	CardDatabase[CARD_STRIKE2].damage = 6;
//	SetUpgradedCardCDB(CARD_STRIKE2, 0, 3, 0);
//	strcpy(&CardDatabase[CARD_STRIKE2].name, "타격");
//	strcpy(&CardDatabase[CARD_STRIKE2].description, "피해를 6 줍니다.");
//	strcpy(&CardDatabase[CARD_STRIKE2].description_up, "피해를 9 줍니다.");
//
//	initCard(CARD_DEFEND2);
//	SetColorRarityType(CARD_DEFEND2, GREEN, COMMON, SKILL);
//	CardDatabase[CARD_DEFEND2].cost = 1;
//	CardDatabase[CARD_DEFEND2].block = 5;
//	SetUpgradedCardCDB(CARD_DEFEND2, 0, 0, 3);
//	strcpy(&CardDatabase[CARD_DEFEND2].name, "수비");
//	strcpy(&CardDatabase[CARD_DEFEND2].description, "블록을 5 얻습니다.");
//	strcpy(&CardDatabase[CARD_DEFEND2].description_up, "블록을 8 얻습니다.");
//
//	initCard(CARD_NEUTRALIZE);
//	SetColorRarityType(CARD_NEUTRALIZE, GREEN, COMMON, ATTACK);
//	CardDatabase[CARD_NEUTRALIZE].cost = 0;
//	CardDatabase[CARD_NEUTRALIZE].damage = 3;
//	SetUpgradedCardCDB(CARD_NEUTRALIZE, 0, 1, 0);
//	strcpy(&CardDatabase[CARD_NEUTRALIZE].name, "무력화");
//	strcpy(&CardDatabase[CARD_NEUTRALIZE].description, "피해를 3 줍니다. 약화를 1 적용합니다.");
//	strcpy(&CardDatabase[CARD_NEUTRALIZE].description_up, "피해를 4 줍니다. 약화를 1 적용합니다.");
//
//	initCard(CARD_SURVIVOR);
//	SetColorRarityType(CARD_SURVIVOR, GREEN, COMMON, SKILL);
//	CardDatabase[CARD_SURVIVOR].cost = 1;
//	CardDatabase[CARD_SURVIVOR].block = 8;
//	SetUpgradedCardCDB(CARD_SURVIVOR, 0, 0, 3);
//	strcpy(&CardDatabase[CARD_SURVIVOR].name, "생존자");
//	strcpy(&CardDatabase[CARD_SURVIVOR].description, "블록을 8 얻습니다. 카드를 1장 뽑습니다.");
//	strcpy(&CardDatabase[CARD_SURVIVOR].description_up, "블록을 11 얻습니다. 카드를 1장 뽑습니다.");
//
//	initCard(CARD_ACROBATICS);
//	SetColorRarityType(CARD_ACROBATICS, GREEN, COMMON, SKILL);
//	CardDatabase[CARD_ACROBATICS].cost = 1;
//	SetUpgradedCardCDB(CARD_ACROBATICS, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_ACROBATICS].name, "곡예");
//	strcpy(&CardDatabase[CARD_ACROBATICS].description, "카드를 3장 뽑습니다. 카드를 1장 버립니다.");
//	strcpy(&CardDatabase[CARD_ACROBATICS].description_up, "카드를 4장 뽑습니다. 카드를 1장 버립니다.");
//
//	initCard(CARD_BACKFLIP);
//	SetColorRarityType(CARD_BACKFLIP, GREEN, COMMON, SKILL);
//	CardDatabase[CARD_BACKFLIP].cost = 1;
//	CardDatabase[CARD_BACKFLIP].block = 5;
//	SetUpgradedCardCDB(CARD_BACKFLIP, 0, 0, 3);
//	strcpy(&CardDatabase[CARD_BACKFLIP].name, "백플립");
//	strcpy(&CardDatabase[CARD_BACKFLIP].description, "블록을 5 얻습니다. 카드를 2장 뽑습니다.");
//	strcpy(&CardDatabase[CARD_BACKFLIP].description_up, "블록을 8 얻습니다. 카드를 2장 뽑습니다.");
//
//	initCard(CARD_BANE);
//	SetColorRarityType(CARD_BANE, GREEN, COMMON, ATTACK);
//	CardDatabase[CARD_BANE].cost = 1;
//	CardDatabase[CARD_BANE].damage = 7;
//	SetUpgradedCardCDB(CARD_BANE, 0, 3, 0);
//	strcpy(&CardDatabase[CARD_BANE].name, "맹독");
//	strcpy(&CardDatabase[CARD_BANE].description, "피해를 7 줍니다. 적이 독에 걸려있다면 피해를 2배로 줍니다.");
//	strcpy(&CardDatabase[CARD_BANE].description_up, "피해를 10 줍니다. 적이 독에 걸려있다면 피해를 2배로 줍니다.");
//
//	initCard(CARD_BLADEDANCE);
//	SetColorRarityType(CARD_BLADEDANCE, GREEN, COMMON, SKILL);
//	CardDatabase[CARD_BLADEDANCE].cost = 1;
//	SetUpgradedCardCDB(CARD_BLADEDANCE, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_BLADEDANCE].name, "칼춤");
//	strcpy(&CardDatabase[CARD_BLADEDANCE].description, "수리검을 3장 손에 추가합니다.");
//	strcpy(&CardDatabase[CARD_BLADEDANCE].description_up, "수리검을 4장 손에 추가합니다.");
//
//	initCard(CARD_CLOAKANDDAGGER);
//	SetColorRarityType(CARD_CLOAKANDDAGGER, GREEN, COMMON, SKILL);
//	CardDatabase[CARD_CLOAKANDDAGGER].cost = 1;
//	CardDatabase[CARD_CLOAKANDDAGGER].block = 6;
//	SetUpgradedCardCDB(CARD_CLOAKANDDAGGER, 0, 0, 2);
//	strcpy(&CardDatabase[CARD_CLOAKANDDAGGER].name, "망토와 단검");
//	strcpy(&CardDatabase[CARD_CLOAKANDDAGGER].description, "블록을 6 얻습니다. 수리검을 1장 손에 추가합니다.");
//	strcpy(&CardDatabase[CARD_CLOAKANDDAGGER].description_up, "블록을 8 얻습니다. 수리검을 1장 손에 추가합니다.");
//
//	initCard(CARD_DEADLYPOISON);
//	SetColorRarityType(CARD_DEADLYPOISON, GREEN, COMMON, SKILL);
//	CardDatabase[CARD_DEADLYPOISON].cost = 1;
//	SetUpgradedCardCDB(CARD_DEADLYPOISON, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_DEADLYPOISON].name, "맹독");
//	strcpy(&CardDatabase[CARD_DEADLYPOISON].description, "독을 5 적용합니다.");
//	strcpy(&CardDatabase[CARD_DEADLYPOISON].description_up, "독을 7 적용합니다.");
//
//	initCard(CARD_DEFLECT);
//	SetColorRarityType(CARD_DEFLECT, GREEN, COMMON, SKILL);
//	CardDatabase[CARD_DEFLECT].cost = 0;
//	CardDatabase[CARD_DEFLECT].block = 4;
//	SetUpgradedCardCDB(CARD_DEFLECT, 0, 0, 3);
//	strcpy(&CardDatabase[CARD_DEFLECT].name, "편향");
//	strcpy(&CardDatabase[CARD_DEFLECT].description, "블록을 4 얻습니다.");
//	strcpy(&CardDatabase[CARD_DEFLECT].description_up, "블록을 7 얻습니다.");
//
//	initCard(CARD_DODGEANDROLL);
//	SetColorRarityType(CARD_DODGEANDROLL, GREEN, COMMON, SKILL);
//	CardDatabase[CARD_DODGEANDROLL].cost = 1;
//	CardDatabase[CARD_DODGEANDROLL].block = 4;
//	SetUpgradedCardCDB(CARD_DODGEANDROLL, 0, 0, 2);
//	strcpy(&CardDatabase[CARD_DODGEANDROLL].name, "회피와 구르기");
//	strcpy(&CardDatabase[CARD_DODGEANDROLL].description, "블록을 4 얻습니다. 다음 턴에 민첩을 2 얻습니다.");
//	strcpy(&CardDatabase[CARD_DODGEANDROLL].description_up, "블록을 6 얻습니다. 다음 턴에 민첩을 2 얻습니다.");
//
//	initCard(CARD_FLYINGKNEE);
//	SetColorRarityType(CARD_FLYINGKNEE, GREEN, COMMON, ATTACK);
//	CardDatabase[CARD_FLYINGKNEE].cost = 1;
//	CardDatabase[CARD_FLYINGKNEE].damage = 8;
//	SetUpgradedCardCDB(CARD_FLYINGKNEE, 0, 3, 0);
//	strcpy(&CardDatabase[CARD_FLYINGKNEE].name, "플라잉 니");
//	strcpy(&CardDatabase[CARD_FLYINGKNEE].description, "피해를 8 줍니다. 카드를 1장 뽑습니다.");
//	strcpy(&CardDatabase[CARD_FLYINGKNEE].description_up, "피해를 11 줍니다. 카드를 1장 뽑습니다.");
//
//	initCard(CARD_OUTMANEUVER);
//	SetColorRarityType(CARD_OUTMANEUVER, GREEN, COMMON, SKILL);
//	CardDatabase[CARD_OUTMANEUVER].cost = 1;
//	SetUpgradedCardCDB(CARD_OUTMANEUVER, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_OUTMANEUVER].name, "기동전술");
//	strcpy(&CardDatabase[CARD_OUTMANEUVER].description, "다음 턴에 에너지를 2 얻습니다.");
//	strcpy(&CardDatabase[CARD_OUTMANEUVER].description_up, "다음 턴에 에너지를 3 얻습니다.");
//
//	initCard(CARD_PIERCINGWAIL);
//	SetColorRarityType(CARD_PIERCINGWAIL, GREEN, COMMON, SKILL);
//	CardDatabase[CARD_PIERCINGWAIL].cost = 1;
//	SetUpgradedCardCDB(CARD_PIERCINGWAIL, -1, 0, 0);
//	strcpy(&CardDatabase[CARD_PIERCINGWAIL].name, "꿰뚫는 비명");
//	strcpy(&CardDatabase[CARD_PIERCINGWAIL].description, "모든 적에게 약화를 6 적용합니다.");
//	strcpy(&CardDatabase[CARD_PIERCINGWAIL].description_up, "모든 적에게 약화를 6 적용합니다.");
//
//	initCard(CARD_POISONEDSTAB);
//	SetColorRarityType(CARD_POISONEDSTAB, GREEN, COMMON, ATTACK);
//	CardDatabase[CARD_POISONEDSTAB].cost = 1;
//	CardDatabase[CARD_POISONEDSTAB].damage = 6;
//	SetUpgradedCardCDB(CARD_POISONEDSTAB, 0, 2, 0);
//	strcpy(&CardDatabase[CARD_POISONEDSTAB].name, "독침");
//	strcpy(&CardDatabase[CARD_POISONEDSTAB].description, "피해를 6 줍니다. 독을 3 적용합니다.");
//	strcpy(&CardDatabase[CARD_POISONEDSTAB].description_up, "피해를 8 줍니다. 독을 4 적용합니다.");
//
//	initCard(CARD_PREPARED);
//	SetColorRarityType(CARD_PREPARED, GREEN, COMMON, SKILL);
//	CardDatabase[CARD_PREPARED].cost = 0;
//	SetUpgradedCardCDB(CARD_PREPARED, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_PREPARED].name, "준비");
//	strcpy(&CardDatabase[CARD_PREPARED].description, "카드를 1장 뽑습니다. 카드를 1장 버립니다.");
//	strcpy(&CardDatabase[CARD_PREPARED].description_up, "카드를 2장 뽑습니다. 카드를 1장 버립니다.");
//
//	initCard(CARD_QUICKSLASH);
//	SetColorRarityType(CARD_QUICKSLASH, GREEN, COMMON, ATTACK);
//	CardDatabase[CARD_QUICKSLASH].cost = 1;
//	CardDatabase[CARD_QUICKSLASH].damage = 8;
//	SetUpgradedCardCDB(CARD_QUICKSLASH, 0, 4, 0);
//	strcpy(&CardDatabase[CARD_QUICKSLASH].name, "빠른 베기");
//	strcpy(&CardDatabase[CARD_QUICKSLASH].description, "피해를 8 줍니다. 카드를 1장 뽑습니다.");
//	strcpy(&CardDatabase[CARD_QUICKSLASH].description_up, "피해를 12 줍니다. 카드를 1장 뽑습니다.");
//
//	initCard(CARD_SLICE);
//	SetColorRarityType(CARD_SLICE, GREEN, COMMON, ATTACK);
//	CardDatabase[CARD_SLICE].cost = 0;
//	CardDatabase[CARD_SLICE].damage = 6;
//	SetUpgradedCardCDB(CARD_SLICE, 0, 3, 0);
//	strcpy(&CardDatabase[CARD_SLICE].name, "베기");
//	strcpy(&CardDatabase[CARD_SLICE].description, "피해를 6 줍니다.");
//	strcpy(&CardDatabase[CARD_SLICE].description_up, "피해를 9 줍니다.");
//
//	initCard(CARD_SNEAKYSTRIKE);
//	SetColorRarityType(CARD_SNEAKYSTRIKE, GREEN, COMMON, ATTACK);
//	CardDatabase[CARD_SNEAKYSTRIKE].cost = 2;
//	CardDatabase[CARD_SNEAKYSTRIKE].damage = 12;
//	SetUpgradedCardCDB(CARD_SNEAKYSTRIKE, 0, 4, 0);
//	strcpy(&CardDatabase[CARD_SNEAKYSTRIKE].name, "몰래 공격");
//	strcpy(&CardDatabase[CARD_SNEAKYSTRIKE].description, "피해를 12 줍니다. 단독으로 플레이하면 에너지 비용이 0이 됩니다.");
//	strcpy(&CardDatabase[CARD_SNEAKYSTRIKE].description_up, "피해를 16 줍니다. 단독으로 플레이하면 에너지 비용이 0이 됩니다.");
//
//	initCard(CARD_SUCKERPUNCH);
//	SetColorRarityType(CARD_SUCKERPUNCH, GREEN, COMMON, ATTACK);
//	CardDatabase[CARD_SUCKERPUNCH].cost = 1;
//	CardDatabase[CARD_SUCKERPUNCH].damage = 7;
//	SetUpgradedCardCDB(CARD_SUCKERPUNCH, 0, 3, 0);
//	strcpy(&CardDatabase[CARD_SUCKERPUNCH].name, "기습");
//	strcpy(&CardDatabase[CARD_SUCKERPUNCH].description, "피해를 7 줍니다. 약화를 1 적용합니다.");
//	strcpy(&CardDatabase[CARD_SUCKERPUNCH].description_up, "피해를 10 줍니다. 약화를 1 적용합니다.");
//
//	// 언커먼 카드들 (UNCOMMON)
//	initCard(CARD_ACCURACY);
//	SetColorRarityType(CARD_ACCURACY, GREEN, UNCOMMON, POWER);
//	CardDatabase[CARD_ACCURACY].cost = 1;
//	SetUpgradedCardCDB(CARD_ACCURACY, -1, 0, 0);
//	strcpy(&CardDatabase[CARD_ACCURACY].name, "정확성");
//	strcpy(&CardDatabase[CARD_ACCURACY].description, "수리검과 단검투척의 피해가 4 증가합니다.");
//	strcpy(&CardDatabase[CARD_ACCURACY].description_up, "수리검과 단검투척의 피해가 4 증가합니다.");
//
//	initCard(CARD_ALLOUTATTACK);
//	SetColorRarityType(CARD_ALLOUTATTACK, GREEN, UNCOMMON, ATTACK);
//	CardDatabase[CARD_ALLOUTATTACK].cost = 1;
//	CardDatabase[CARD_ALLOUTATTACK].damage = 10;
//	SetUpgradedCardCDB(CARD_ALLOUTATTACK, 0, 4, 0);
//	strcpy(&CardDatabase[CARD_ALLOUTATTACK].name, "전력 공격");
//	strcpy(&CardDatabase[CARD_ALLOUTATTACK].description, "피해를 10 줍니다. 카드를 모두 버립니다.");
//	strcpy(&CardDatabase[CARD_ALLOUTATTACK].description_up, "피해를 14 줍니다. 카드를 모두 버립니다.");
//
//	initCard(CARD_BACKSTAB);
//	SetColorRarityType(CARD_BACKSTAB, GREEN, UNCOMMON, ATTACK);
//	CardDatabase[CARD_BACKSTAB].cost = 0;
//	CardDatabase[CARD_BACKSTAB].damage = 11;
//	SetUpgradedCardCDB(CARD_BACKSTAB, 0, 4, 0);
//	strcpy(&CardDatabase[CARD_BACKSTAB].name, "백스탭");
//	strcpy(&CardDatabase[CARD_BACKSTAB].description, "피해를 11 줍니다. 소모. 이 카드는 손에서만 플레이할 수 있습니다.");
//	strcpy(&CardDatabase[CARD_BACKSTAB].description_up, "피해를 15 줍니다. 소모. 이 카드는 손에서만 플레이할 수 있습니다.");
//
//	initCard(CARD_BLUR);
//	SetColorRarityType(CARD_BLUR, GREEN, UNCOMMON, SKILL);
//	CardDatabase[CARD_BLUR].cost = 1;
//	CardDatabase[CARD_BLUR].block = 5;
//	SetUpgradedCardCDB(CARD_BLUR, 0, 0, 3);
//	strcpy(&CardDatabase[CARD_BLUR].name, "흐림");
//	strcpy(&CardDatabase[CARD_BLUR].description, "블록을 5 얻습니다. 블록이 턴 종료 시 소실되지 않습니다.");
//	strcpy(&CardDatabase[CARD_BLUR].description_up, "블록을 8 얻습니다. 블록이 턴 종료 시 소실되지 않습니다.");
//
//	initCard(CARD_BOUNCINGFLASK);
//	SetColorRarityType(CARD_BOUNCINGFLASK, GREEN, UNCOMMON, SKILL);
//	CardDatabase[CARD_BOUNCINGFLASK].cost = 2;
//	SetUpgradedCardCDB(CARD_BOUNCINGFLASK, -1, 0, 0);
//	strcpy(&CardDatabase[CARD_BOUNCINGFLASK].name, "바운싱 플라스크");
//	strcpy(&CardDatabase[CARD_BOUNCINGFLASK].description, "독을 3 적용합니다. 3번 반복합니다.");
//	strcpy(&CardDatabase[CARD_BOUNCINGFLASK].description_up, "독을 3 적용합니다. 3번 반복합니다.");
//
//	initCard(CARD_CALCULATEDGAMBLE);
//	SetColorRarityType(CARD_CALCULATEDGAMBLE, GREEN, UNCOMMON, SKILL);
//	CardDatabase[CARD_CALCULATEDGAMBLE].cost = 0;
//	SetUpgradedCardCDB(CARD_CALCULATEDGAMBLE, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_CALCULATEDGAMBLE].name, "계산된 도박");
//	strcpy(&CardDatabase[CARD_CALCULATEDGAMBLE].description, "손의 카드를 모두 버리고 그만큼 뽑습니다.");
//	strcpy(&CardDatabase[CARD_CALCULATEDGAMBLE].description_up, "손의 카드를 모두 버리고 그만큼 뽑습니다. 소모하지 않습니다.");
//
//	initCard(CARD_CALTROPS);
//	SetColorRarityType(CARD_CALTROPS, GREEN, UNCOMMON, POWER);
//	CardDatabase[CARD_CALTROPS].cost = 1;
//	SetUpgradedCardCDB(CARD_CALTROPS, -1, 0, 0);
//	strcpy(&CardDatabase[CARD_CALTROPS].name, "쇠못");
//	strcpy(&CardDatabase[CARD_CALTROPS].description, "적이 공격할 때마다 가시 피해를 3 받습니다.");
//	strcpy(&CardDatabase[CARD_CALTROPS].description_up, "적이 공격할 때마다 가시 피해를 3 받습니다.");
//
//	initCard(CARD_CATALYST);
//	SetColorRarityType(CARD_CATALYST, GREEN, UNCOMMON, SKILL);
//	CardDatabase[CARD_CATALYST].cost = 1;
//	SetUpgradedCardCDB(CARD_CATALYST, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_CATALYST].name, "촉매");
//	strcpy(&CardDatabase[CARD_CATALYST].description, "적의 독을 2배로 만듭니다. 소모.");
//	strcpy(&CardDatabase[CARD_CATALYST].description_up, "적의 독을 3배로 만듭니다. 소모.");
//
//	initCard(CARD_CHOKE);
//	SetColorRarityType(CARD_CHOKE, GREEN, UNCOMMON, ATTACK);
//	CardDatabase[CARD_CHOKE].cost = 2;
//	CardDatabase[CARD_CHOKE].damage = 12;
//	SetUpgradedCardCDB(CARD_CHOKE, 0, 4, 0);
//	strcpy(&CardDatabase[CARD_CHOKE].name, "목조르기");
//	strcpy(&CardDatabase[CARD_CHOKE].description, "피해를 12 줍니다. 적이 이번 턴에 카드를 플레이할 때마다 피해가 3씩 증가합니다.");
//	strcpy(&CardDatabase[CARD_CHOKE].description_up, "피해를 16 줍니다. 적이 이번 턴에 카드를 플레이할 때마다 피해가 3씩 증가합니다.");
//
//	initCard(CARD_CONCENTRATE);
//	SetColorRarityType(CARD_CONCENTRATE, GREEN, UNCOMMON, SKILL);
//	CardDatabase[CARD_CONCENTRATE].cost = 0;
//	SetUpgradedCardCDB(CARD_CONCENTRATE, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_CONCENTRATE].name, "집중");
//	strcpy(&CardDatabase[CARD_CONCENTRATE].description, "카드를 2장 버리고 에너지를 2 얻습니다.");
//	strcpy(&CardDatabase[CARD_CONCENTRATE].description_up, "카드를 1장 버리고 에너지를 2 얻습니다.");
//
//	initCard(CARD_CRIPPLINGCLOUD);
//	SetColorRarityType(CARD_CRIPPLINGCLOUD, GREEN, UNCOMMON, SKILL);
//	CardDatabase[CARD_CRIPPLINGCLOUD].cost = 2;
//	SetUpgradedCardCDB(CARD_CRIPPLINGCLOUD, -1, 0, 0);
//	strcpy(&CardDatabase[CARD_CRIPPLINGCLOUD].name, "무력화 구름");
//	strcpy(&CardDatabase[CARD_CRIPPLINGCLOUD].description, "모든 적에게 독을 4, 약화를 2 적용합니다.");
//	strcpy(&CardDatabase[CARD_CRIPPLINGCLOUD].description_up, "모든 적에게 독을 4, 약화를 2 적용합니다.");
//
//	initCard(CARD_DASH);
//	SetColorRarityType(CARD_DASH, GREEN, UNCOMMON, ATTACK);
//	CardDatabase[CARD_DASH].cost = 2;
//	CardDatabase[CARD_DASH].damage = 10;
//	SetUpgradedCardCDB(CARD_DASH, 0, 4, 0);
//	strcpy(&CardDatabase[CARD_DASH].name, "돌진");
//	strcpy(&CardDatabase[CARD_DASH].description, "피해를 10 줍니다. 블록을 10 얻습니다.");
//	strcpy(&CardDatabase[CARD_DASH].description_up, "피해를 14 줍니다. 블록을 10 얻습니다.");
//
//	initCard(CARD_DISTRACTION);
//	SetColorRarityType(CARD_DISTRACTION, GREEN, UNCOMMON, SKILL);
//	CardDatabase[CARD_DISTRACTION].cost = 1;
//	SetUpgradedCardCDB(CARD_DISTRACTION, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_DISTRACTION].name, "방해");
//	strcpy(&CardDatabase[CARD_DISTRACTION].description, "랜덤한 적에게 약화를 1 적용합니다. 덱에서 카드를 1장 뽑습니다. 소모.");
//	strcpy(&CardDatabase[CARD_DISTRACTION].description_up, "랜덤한 적에게 약화를 2 적용합니다. 덱에서 카드를 1장 뽑습니다. 소모.");
//
//	initCard(CARD_ENDLESSAGONY);
//	SetColorRarityType(CARD_ENDLESSAGONY, GREEN, UNCOMMON, ATTACK);
//	CardDatabase[CARD_ENDLESSAGONY].cost = 0;
//	CardDatabase[CARD_ENDLESSAGONY].damage = 4;
//	SetUpgradedCardCDB(CARD_ENDLESSAGONY, 0, 3, 0);
//	strcpy(&CardDatabase[CARD_ENDLESSAGONY].name, "끝없는 고통");
//	strcpy(&CardDatabase[CARD_ENDLESSAGONY].description, "피해를 4 줍니다. 버릴 더미에 이 카드의 복사본을 하나 셔플합니다.");
//	strcpy(&CardDatabase[CARD_ENDLESSAGONY].description_up, "피해를 7 줍니다. 버릴 더미에 이 카드의 복사본을 하나 셔플합니다.");
//
//	initCard(CARD_ESCAPEPLAN);
//	SetColorRarityType(CARD_ESCAPEPLAN, GREEN, UNCOMMON, SKILL);
//	CardDatabase[CARD_ESCAPEPLAN].cost = 0;
//	CardDatabase[CARD_ESCAPEPLAN].block = 3;
//	SetUpgradedCardCDB(CARD_ESCAPEPLAN, 0, 0, 2);
//	strcpy(&CardDatabase[CARD_ESCAPEPLAN].name, "탈출 계획");
//	strcpy(&CardDatabase[CARD_ESCAPEPLAN].description, "블록을 3 얻습니다. 카드를 1장 뽑습니다.");
//	strcpy(&CardDatabase[CARD_ESCAPEPLAN].description_up, "블록을 5 얻습니다. 카드를 1장 뽑습니다.");
//
//	initCard(CARD_EVISCERATE);
//	SetColorRarityType(CARD_EVISCERATE, GREEN, UNCOMMON, ATTACK);
//	CardDatabase[CARD_EVISCERATE].cost = 3;
//	CardDatabase[CARD_EVISCERATE].damage = 18;
//	SetUpgradedCardCDB(CARD_EVISCERATE, 0, 6, 0);
//	strcpy(&CardDatabase[CARD_EVISCERATE].name, "절단");
//	strcpy(&CardDatabase[CARD_EVISCERATE].description, "피해를 18 줍니다. 카드를 1장 버릴 때마다 비용이 1 감소합니다.");
//	strcpy(&CardDatabase[CARD_EVISCERATE].description_up, "피해를 24 줍니다. 카드를 1장 버릴 때마다 비용이 1 감소합니다.");
//
//	initCard(CARD_EXPERTISE);
//	SetColorRarityType(CARD_EXPERTISE, GREEN, UNCOMMON, SKILL);
//	CardDatabase[CARD_EXPERTISE].cost = 1;
//	SetUpgradedCardCDB(CARD_EXPERTISE, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_EXPERTISE].name, "전문지식");
//	strcpy(&CardDatabase[CARD_EXPERTISE].description, "카드를 7장 뽑습니다. 이번 턴에 스킬 카드의 비용이 0이 됩니다.");
//	strcpy(&CardDatabase[CARD_EXPERTISE].description_up, "카드를 9장 뽑습니다. 이번 턴에 스킬 카드의 비용이 0이 됩니다.");
//
//	initCard(CARD_FLECHETTES);
//	SetColorRarityType(CARD_FLECHETTES, GREEN, UNCOMMON, ATTACK);
//	CardDatabase[CARD_FLECHETTES].cost = 1;
//	CardDatabase[CARD_FLECHETTES].damage = 4;
//	SetUpgradedCardCDB(CARD_FLECHETTES, 0, 2, 0);
//	strcpy(&CardDatabase[CARD_FLECHETTES].name, "투척침");
//	strcpy(&CardDatabase[CARD_FLECHETTES].description, "피해를 4 줍니다. 스킬 카드를 플레이할 때마다 피해가 1씩 증가합니다.");
//	strcpy(&CardDatabase[CARD_FLECHETTES].description_up, "피해를 6 줍니다. 스킬 카드를 플레이할 때마다 피해가 1씩 증가합니다.");
//
//	initCard(CARD_FOOTWORK);
//	SetColorRarityType(CARD_FOOTWORK, GREEN, UNCOMMON, POWER);
//	CardDatabase[CARD_FOOTWORK].cost = 1;
//	SetUpgradedCardCDB(CARD_FOOTWORK, -1, 0, 0);
//	strcpy(&CardDatabase[CARD_FOOTWORK].name, "발놀림");
//	strcpy(&CardDatabase[CARD_FOOTWORK].description, "민첩을 2 얻습니다.");
//	strcpy(&CardDatabase[CARD_FOOTWORK].description_up, "민첩을 3 얻습니다.");
//
//	initCard(CARD_HEELHOOK);
//	SetColorRarityType(CARD_HEELHOOK, GREEN, UNCOMMON, ATTACK);
//	CardDatabase[CARD_HEELHOOK].cost = 1;
//	CardDatabase[CARD_HEELHOOK].damage = 5;
//	SetUpgradedCardCDB(CARD_HEELHOOK, 0, 3, 0);
//	strcpy(&CardDatabase[CARD_HEELHOOK].name, "뒤꿈치 훅");
//	strcpy(&CardDatabase[CARD_HEELHOOK].description, "피해를 5 줍니다. 적이 약화에 걸려있다면 카드를 1장 뽑고 에너지를 1 얻습니다.");
//	strcpy(&CardDatabase[CARD_HEELHOOK].description_up, "피해를 8 줍니다. 적이 약화에 걸려있다면 카드를 1장 뽑고 에너지를 1 얻습니다.");
//
//	initCard(CARD_INFINITEBLADES);
//	SetColorRarityType(CARD_INFINITEBLADES, GREEN, UNCOMMON, POWER);
//	CardDatabase[CARD_INFINITEBLADES].cost = 1;
//	SetUpgradedCardCDB(CARD_INFINITEBLADES, -1, 0, 0);
//	strcpy(&CardDatabase[CARD_INFINITEBLADES].name, "무한 검날");
//	strcpy(&CardDatabase[CARD_INFINITEBLADES].description, "매 턴 시작 시 수리검을 1장 손에 추가합니다.");
//	strcpy(&CardDatabase[CARD_INFINITEBLADES].description_up, "매 턴 시작 시 수리검을 1장 손에 추가합니다.");
//
//	initCard(CARD_LEGSWEEP);
//	SetColorRarityType(CARD_LEGSWEEP, GREEN, UNCOMMON, SKILL);
//	CardDatabase[CARD_LEGSWEEP].cost = 2;
//	CardDatabase[CARD_LEGSWEEP].block = 11;
//	SetUpgradedCardCDB(CARD_LEGSWEEP, 0, 0, 3);
//	strcpy(&CardDatabase[CARD_LEGSWEEP].name, "다리걸기");
//	strcpy(&CardDatabase[CARD_LEGSWEEP].description, "블록을 11 얻습니다. 약화를 2 적용합니다.");
//	strcpy(&CardDatabase[CARD_LEGSWEEP].description_up, "블록을 14 얻습니다. 약화를 2 적용합니다.");
//
//	initCard(CARD_MASTERFULSTAB);
//	SetColorRarityType(CARD_MASTERFULSTAB, GREEN, UNCOMMON, ATTACK);
//	CardDatabase[CARD_MASTERFULSTAB].cost = 0;
//	CardDatabase[CARD_MASTERFULSTAB].damage = 12;
//	SetUpgradedCardCDB(CARD_MASTERFULSTAB, 0, 4, 0);
//	strcpy(&CardDatabase[CARD_MASTERFULSTAB].name, "숙련된 찌르기");
//	strcpy(&CardDatabase[CARD_MASTERFULSTAB].description, "피해를 12 줍니다. 단일 대상이 아니라면 비용이 1 증가합니다.");
//	strcpy(&CardDatabase[CARD_MASTERFULSTAB].description_up, "피해를 16 줍니다. 단일 대상이 아니라면 비용이 1 증가합니다.");
//
//	initCard(CARD_NOXIOUSFUMES);
//	SetColorRarityType(CARD_NOXIOUSFUMES, GREEN, UNCOMMON, POWER);
//	CardDatabase[CARD_NOXIOUSFUMES].cost = 1;
//	SetUpgradedCardCDB(CARD_NOXIOUSFUMES, -1, 0, 0);
//	strcpy(&CardDatabase[CARD_NOXIOUSFUMES].name, "독성 연기");
//	strcpy(&CardDatabase[CARD_NOXIOUSFUMES].description, "매 턴 시작 시 모든 적에게 독을 2 적용합니다.");
//	strcpy(&CardDatabase[CARD_NOXIOUSFUMES].description_up, "매 턴 시작 시 모든 적에게 독을 3 적용합니다.");
//
//	initCard(CARD_PREDATOR);
//	SetColorRarityType(CARD_PREDATOR, GREEN, UNCOMMON, ATTACK);
//	CardDatabase[CARD_PREDATOR].cost = 2;
//	CardDatabase[CARD_PREDATOR].damage = 15;
//	SetUpgradedCardCDB(CARD_PREDATOR, 0, 5, 0);
//	strcpy(&CardDatabase[CARD_PREDATOR].name, "포식자");
//	strcpy(&CardDatabase[CARD_PREDATOR].description, "피해를 15 줍니다. 카드를 1장 뽑습니다. 매번 뽑을 때마다 비용이 1 감소합니다.");
//	strcpy(&CardDatabase[CARD_PREDATOR].description_up, "피해를 20 줍니다. 카드를 1장 뽑습니다. 매번 뽑을 때마다 비용이 1 감소합니다.");
//
//	initCard(CARD_REFLEX);
//	SetColorRarityType(CARD_REFLEX, GREEN, UNCOMMON, SKILL);
//	CardDatabase[CARD_REFLEX].cost = -2;  // Unplayable
//	SetUpgradedCardCDB(CARD_REFLEX, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_REFLEX].name, "반사신경");
//	strcpy(&CardDatabase[CARD_REFLEX].description, "플레이 불가. 버릴 때 카드를 1장 뽑습니다.");
//	strcpy(&CardDatabase[CARD_REFLEX].description_up, "플레이 불가. 버릴 때 카드를 2장 뽑습니다.");
//
//	initCard(CARD_RIDDLEWITHHOLES);
//	SetColorRarityType(CARD_RIDDLEWITHHOLES, GREEN, UNCOMMON, ATTACK);
//	CardDatabase[CARD_RIDDLEWITHHOLES].cost = 2;
//	CardDatabase[CARD_RIDDLEWITHHOLES].damage = 3;
//	SetUpgradedCardCDB(CARD_RIDDLEWITHHOLES, 0, 2, 0);
//	strcpy(&CardDatabase[CARD_RIDDLEWITHHOLES].name, "구멍투성이");
//	strcpy(&CardDatabase[CARD_RIDDLEWITHHOLES].description, "피해를 3 줍니다. 5번 적용합니다.");
//	strcpy(&CardDatabase[CARD_RIDDLEWITHHOLES].description_up, "피해를 5 줍니다. 5번 적용합니다.");
//
//	initCard(CARD_SETUP);
//	SetColorRarityType(CARD_SETUP, GREEN, UNCOMMON, SKILL);
//	CardDatabase[CARD_SETUP].cost = 1;
//	SetUpgradedCardCDB(CARD_SETUP, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_SETUP].name, "준비");
//	strcpy(&CardDatabase[CARD_SETUP].description, "다음 턴에 카드를 5장 더 뽑습니다.");
//	strcpy(&CardDatabase[CARD_SETUP].description_up, "다음 턴에 카드를 7장 더 뽑습니다.");
//
//	initCard(CARD_SKEWER);
//	SetColorRarityType(CARD_SKEWER, GREEN, UNCOMMON, ATTACK);
//	CardDatabase[CARD_SKEWER].cost = 1;
//	CardDatabase[CARD_SKEWER].damage = 7;
//	SetUpgradedCardCDB(CARD_SKEWER, 0, 3, 0);
//	strcpy(&CardDatabase[CARD_SKEWER].name, "꼬챙이");
//	strcpy(&CardDatabase[CARD_SKEWER].description, "피해를 7 줍니다. 적에게 X의 독을 적용합니다. X는 적용된 디버프의 개수입니다.");
//	strcpy(&CardDatabase[CARD_SKEWER].description_up, "피해를 10 줍니다. 적에게 X의 독을 적용합니다. X는 적용된 디버프의 개수입니다.");
//
//	initCard(CARD_TACTICIAN);
//	SetColorRarityType(CARD_TACTICIAN, GREEN, UNCOMMON, SKILL);
//	CardDatabase[CARD_TACTICIAN].cost = -2;  // Unplayable
//	SetUpgradedCardCDB(CARD_TACTICIAN, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_TACTICIAN].name, "전술가");
//	strcpy(&CardDatabase[CARD_TACTICIAN].description, "플레이 불가. 버릴 때 에너지를 1 얻습니다.");
//	strcpy(&CardDatabase[CARD_TACTICIAN].description_up, "플레이 불가. 버릴 때 에너지를 2 얻습니다.");
//
//	initCard(CARD_TERROR);
//	SetColorRarityType(CARD_TERROR, GREEN, UNCOMMON, SKILL);
//	CardDatabase[CARD_TERROR].cost = 1;
//	SetUpgradedCardCDB(CARD_TERROR, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_TERROR].name, "공포");
//	strcpy(&CardDatabase[CARD_TERROR].description, "취약을 99 적용합니다. 소모.");
//	strcpy(&CardDatabase[CARD_TERROR].description_up, "적 하나에게 취약 99를 부여합니다. 소멸");
//
//	initCard(CARD_WELLLAIDPLANS);
//	SetColorRarityType(CARD_WELLLAIDPLANS, GREEN, UNCOMMON, POWER);
//	CardDatabase[CARD_WELLLAIDPLANS].cost = 1;
//	SetUpgradedCardCDB(CARD_WELLLAIDPLANS, -1, 0, 0);
//	strcpy(&CardDatabase[CARD_WELLLAIDPLANS].name, "치밀한 계획");
//	strcpy(&CardDatabase[CARD_WELLLAIDPLANS].description, "매 턴 종료 시 카드를 1장 유지할 수 있습니다.");
//	strcpy(&CardDatabase[CARD_WELLLAIDPLANS].description_up, "매 턴 종료 시 카드를 2장 유지할 수 있습니다.");
//
//
//	initCard(CARD_ATHOUSANDCUTS);
//	SetColorRarityType(CARD_ATHOUSANDCUTS, GREEN, RARE, POWER);
//	CardDatabase[CARD_ATHOUSANDCUTS].cost = 2;
//	SetUpgradedCardCDB(CARD_ATHOUSANDCUTS, -1, 0, 0);
//	strcpy(&CardDatabase[CARD_ATHOUSANDCUTS].name, "천 번의 상처");
//	strcpy(&CardDatabase[CARD_ATHOUSANDCUTS].description, "카드를 플레이할 때마다 모든 적에게 피해를 1 줍니다.");
//	strcpy(&CardDatabase[CARD_ATHOUSANDCUTS].description_up, "카드를 플레이할 때마다 모든 적에게 피해를 1 줍니다.");
//
//	initCard(CARD_ADRENALINE);
//	SetColorRarityType(CARD_ADRENALINE, GREEN, RARE, SKILL);
//	CardDatabase[CARD_ADRENALINE].cost = 0;
//	SetUpgradedCardCDB(CARD_ADRENALINE, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_ADRENALINE].name, "아드레날린");
//	strcpy(&CardDatabase[CARD_ADRENALINE].description, "에너지를 1 얻습니다. 카드를 2장 뽑습니다. 덱에 허탈을 1장 셔플합니다.");
//	strcpy(&CardDatabase[CARD_ADRENALINE].description_up, "에너지를 2 얻습니다. 카드를 2장 뽑습니다. 덱에 허탈을 1장 셔플합니다.");
//
//	initCard(CARD_AFTERIAMAGE);
//	SetColorRarityType(CARD_AFTERIAMAGE, GREEN, RARE, POWER);
//	CardDatabase[CARD_AFTERIAMAGE].cost = 1;
//	SetUpgradedCardCDB(CARD_AFTERIAMAGE, -1, 0, 0);
//	strcpy(&CardDatabase[CARD_AFTERIAMAGE].name, "잔상");
//	strcpy(&CardDatabase[CARD_AFTERIAMAGE].description, "카드를 플레이할 때마다 블록을 1 얻습니다.");
//	strcpy(&CardDatabase[CARD_AFTERIAMAGE].description_up, "카드를 플레이할 때마다 블록을 1 얻습니다.");
//
//	initCard(CARD_BULLETTIME);
//	SetColorRarityType(CARD_BULLETTIME, GREEN, RARE, SKILL);
//	CardDatabase[CARD_BULLETTIME].cost = 3;
//	SetUpgradedCardCDB(CARD_BULLETTIME, -1, 0, 0);
//	strcpy(&CardDatabase[CARD_BULLETTIME].name, "총알 시간");
//	strcpy(&CardDatabase[CARD_BULLETTIME].description, "이번 턴에 플레이하지 않은 카드의 비용이 0이 됩니다.");
//	strcpy(&CardDatabase[CARD_BULLETTIME].description_up, "이번 턴에 플레이하지 않은 카드의 비용이 0이 됩니다.");
//
//	initCard(CARD_BURST);
//	SetColorRarityType(CARD_BURST, GREEN, RARE, SKILL);
//	CardDatabase[CARD_BURST].cost = 1;
//	SetUpgradedCardCDB(CARD_BURST, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_BURST].name, "폭발");
//	strcpy(&CardDatabase[CARD_BURST].description, "다음에 플레이하는 스킬 카드를 2번 플레이합니다.");
//	strcpy(&CardDatabase[CARD_BURST].description_up, "다음에 플레이하는 스킬 카드를 3번 플레이합니다.");
//
//	initCard(CARD_CORPSEEXPLOSION);
//	SetColorRarityType(CARD_CORPSEEXPLOSION, GREEN, RARE, SKILL);
//	CardDatabase[CARD_CORPSEEXPLOSION].cost = 2;
//	SetUpgradedCardCDB(CARD_CORPSEEXPLOSION, -1, 0, 0);
//	strcpy(&CardDatabase[CARD_CORPSEEXPLOSION].name, "시체 폭발");
//	strcpy(&CardDatabase[CARD_CORPSEEXPLOSION].description, "모든 적에게 독을 6 적용합니다. 적이 죽으면 모든 적에게 해당 적의 최대 체력만큼 피해를 줍니다.");
//	strcpy(&CardDatabase[CARD_CORPSEEXPLOSION].description_up, "모든 적에게 독을 6 적용합니다. 적이 죽으면 모든 적에게 해당 적의 최대 체력만큼 피해를 줍니다.");
//
//	initCard(CARD_DAGGERSPRAY);
//	SetColorRarityType(CARD_DAGGERSPRAY, GREEN, RARE, ATTACK);
//	CardDatabase[CARD_DAGGERSPRAY].cost = 1;
//	CardDatabase[CARD_DAGGERSPRAY].damage = 4;
//	SetUpgradedCardCDB(CARD_DAGGERSPRAY, 0, 2, 0);
//	strcpy(&CardDatabase[CARD_DAGGERSPRAY].name, "단검 난사");
//	strcpy(&CardDatabase[CARD_DAGGERSPRAY].description, "모든 적에게 피해를 4 줍니다. 2번 적용합니다.");
//	strcpy(&CardDatabase[CARD_DAGGERSPRAY].description_up, "모든 적에게 피해를 6 줍니다. 2번 적용합니다.");
//
//	initCard(CARD_DAGGERTHROW);
//	SetColorRarityType(CARD_DAGGERTHROW, GREEN, RARE, ATTACK);
//	CardDatabase[CARD_DAGGERTHROW].cost = 1;
//	CardDatabase[CARD_DAGGERTHROW].damage = 9;
//	SetUpgradedCardCDB(CARD_DAGGERTHROW, 0, 3, 0);
//	strcpy(&CardDatabase[CARD_DAGGERTHROW].name, "단검 투척");
//	strcpy(&CardDatabase[CARD_DAGGERTHROW].description, "피해를 9 줍니다. 카드를 1장 뽑습니다. 카드를 1장 버립니다.");
//	strcpy(&CardDatabase[CARD_DAGGERTHROW].description_up, "피해를 12 줍니다. 카드를 1장 뽑습니다. 카드를 1장 버립니다.");
//
//	initCard(CARD_DIEDIEDIE);
//	SetColorRarityType(CARD_DIEDIEDIE, GREEN, RARE, ATTACK);
//	CardDatabase[CARD_DIEDIEDIE].cost = 1;
//	CardDatabase[CARD_DIEDIEDIE].damage = 13;
//	SetUpgradedCardCDB(CARD_DIEDIEDIE, 0, 4, 0);
//	strcpy(&CardDatabase[CARD_DIEDIEDIE].name, "죽어죽어죽어");
//	strcpy(&CardDatabase[CARD_DIEDIEDIE].description, "피해를 13 줍니다. 소모. 덱에서 이 카드의 복사본이 뽑힐 때마다 손에 추가합니다.");
//	strcpy(&CardDatabase[CARD_DIEDIEDIE].description_up, "피해를 17 줍니다. 소모. 덱에서 이 카드의 복사본이 뽑힐 때마다 손에 추가합니다.");
//
//	initCard(CARD_ENVENOM);
//	SetColorRarityType(CARD_ENVENOM, GREEN, RARE, POWER);
//	CardDatabase[CARD_ENVENOM].cost = 2;
//	SetUpgradedCardCDB(CARD_ENVENOM, -1, 0, 0);
//	strcpy(&CardDatabase[CARD_ENVENOM].name, "독입히기");
//	strcpy(&CardDatabase[CARD_ENVENOM].description, "공격 카드로 미차단 피해를 줄 때마다 독을 1 적용합니다.");
//	strcpy(&CardDatabase[CARD_ENVENOM].description_up, "공격 카드로 미차단 피해를 줄 때마다 독을 1 적용합니다.");
//
//	initCard(CARD_FINISHER);
//	SetColorRarityType(CARD_FINISHER, GREEN, RARE, ATTACK);
//	CardDatabase[CARD_FINISHER].cost = 1;
//	CardDatabase[CARD_FINISHER].damage = 6;
//	SetUpgradedCardCDB(CARD_FINISHER, 0, 2, 0);
//	strcpy(&CardDatabase[CARD_FINISHER].name, "마무리");
//	strcpy(&CardDatabase[CARD_FINISHER].description, "피해를 6 줍니다. 이번 턴에 공격을 플레이할 때마다 피해가 6씩 증가합니다.");
//	strcpy(&CardDatabase[CARD_FINISHER].description_up, "피해를 8 줍니다. 이번 턴에 공격을 플레이할 때마다 피해가 8씩 증가합니다.");
//
//	initCard(CARD_GLASSKNIFE);
//	SetColorRarityType(CARD_GLASSKNIFE, GREEN, RARE, ATTACK);
//	CardDatabase[CARD_GLASSKNIFE].cost = 1;
//	CardDatabase[CARD_GLASSKNIFE].damage = 8;
//	SetUpgradedCardCDB(CARD_GLASSKNIFE, 0, 4, 0);
//	strcpy(&CardDatabase[CARD_GLASSKNIFE].name, "유리칼");
//	strcpy(&CardDatabase[CARD_GLASSKNIFE].description, "피해를 8 줍니다. 플레이할 때마다 피해가 2 감소합니다.");
//	strcpy(&CardDatabase[CARD_GLASSKNIFE].description_up, "피해를 12 줍니다. 플레이할 때마다 피해가 2 감소합니다.");
//
//	initCard(CARD_GRANDFINALE);
//	SetColorRarityType(CARD_GRANDFINALE, GREEN, RARE, ATTACK);
//	CardDatabase[CARD_GRANDFINALE].cost = 0;
//	CardDatabase[CARD_GRANDFINALE].damage = 50;
//	SetUpgradedCardCDB(CARD_GRANDFINALE, 0, 10, 0);
//	strcpy(&CardDatabase[CARD_GRANDFINALE].name, "대단원");
//	strcpy(&CardDatabase[CARD_GRANDFINALE].description, "손에 카드가 이것 뿐일 때만 플레이할 수 있습니다. 모든 적에게 피해를 50 줍니다.");
//	strcpy(&CardDatabase[CARD_GRANDFINALE].description_up, "손에 카드가 이것 뿐일 때만 플레이할 수 있습니다. 모든 적에게 피해를 60 줍니다.");
//
//	initCard(CARD_MALAISE);
//	SetColorRarityType(CARD_MALAISE, GREEN, RARE, SKILL);
//	CardDatabase[CARD_MALAISE].cost = -1;  // X cost
//	SetUpgradedCardCDB(CARD_MALAISE, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_MALAISE].name, "권태");
//	strcpy(&CardDatabase[CARD_MALAISE].description, "적에게 약화를 X, 힘 감소를 X 적용합니다. 소모.");
//	strcpy(&CardDatabase[CARD_MALAISE].description_up, "적에게 약화를 X, 힘 감소를 X 적용합니다.");
//
//	initCard(CARD_NIGHTMARE);
//	SetColorRarityType(CARD_NIGHTMARE, GREEN, RARE, SKILL);
//	CardDatabase[CARD_NIGHTMARE].cost = 3;
//	SetUpgradedCardCDB(CARD_NIGHTMARE, -1, 0, 0);
//	strcpy(&CardDatabase[CARD_NIGHTMARE].name, "악몽");
//	strcpy(&CardDatabase[CARD_NIGHTMARE].description, "선택한 카드를 3장 손에 추가합니다. 이 턴에 해당 카드들의 비용이 0이 됩니다. 소모.");
//	strcpy(&CardDatabase[CARD_NIGHTMARE].description_up, "선택한 카드를 3장 손에 추가합니다. 이 턴에 해당 카드들의 비용이 0이 됩니다. 소모.");
//
//	initCard(CARD_PHANTSMALKILLER);
//	SetColorRarityType(CARD_PHANTSMALKILLER, GREEN, RARE, SKILL);
//	CardDatabase[CARD_PHANTSMALKILLER].cost = 1;
//	SetUpgradedCardCDB(CARD_PHANTSMALKILLER, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_PHANTSMALKILLER].name, "환상 살인자");
//	strcpy(&CardDatabase[CARD_PHANTSMALKILLER].description, "다음에 받는 공격 피해가 HP의 반 이하일 때 회피합니다. 소모.");
//	strcpy(&CardDatabase[CARD_PHANTSMALKILLER].description_up, "다음 2번에 받는 공격 피해가 HP의 반 이하일 때 회피합니다. 소모.");
//
//	initCard(CARD_POISONEDSTAB);
//	SetColorRarityType(CARD_POISONEDSTAB, GREEN, RARE, SKILL);
//	CardDatabase[CARD_POISONEDSTAB].cost = 1;
//	SetUpgradedCardCDB(CARD_POISONEDSTAB, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_POISONEDSTAB].name, "독약");
//	strcpy(&CardDatabase[CARD_POISONEDSTAB].description, "모든 적에게 독을 3 적용합니다. 독이 적용된 적 1마리당 에너지를 1 얻습니다.");
//	strcpy(&CardDatabase[CARD_POISONEDSTAB].description_up, "모든 적에게 독을 4 적용합니다. 독이 적용된 적 1마리당 에너지를 1 얻습니다.");
//
//	initCard(CARD_STORMOFSTEEL);
//	SetColorRarityType(CARD_STORMOFSTEEL, GREEN, RARE, SKILL);
//	CardDatabase[CARD_STORMOFSTEEL].cost = 1;
//	SetUpgradedCardCDB(CARD_STORMOFSTEEL, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_STORMOFSTEEL].name, "강철 폭풍");
//	strcpy(&CardDatabase[CARD_STORMOFSTEEL].description, "카드를 모두 버리고 그만큼 수리검을 손에 추가합니다.");
//	strcpy(&CardDatabase[CARD_STORMOFSTEEL].description_up, "카드를 모두 버리고 그 수의 +1만큼 수리검을 손에 추가합니다.");
//
//	initCard(CARD_TOOLSOFTHETRADE);
//	SetColorRarityType(CARD_TOOLSOFTHETRADE, GREEN, RARE, POWER);
//	CardDatabase[CARD_TOOLSOFTHETRADE].cost = 1;
//	SetUpgradedCardCDB(CARD_TOOLSOFTHETRADE, -1, 0, 0);
//	strcpy(&CardDatabase[CARD_TOOLSOFTHETRADE].name, "도구들");
//	strcpy(&CardDatabase[CARD_TOOLSOFTHETRADE].description, "매 턴 시작 시 카드를 1장 뽑고 카드를 1장 버립니다.");
//	strcpy(&CardDatabase[CARD_TOOLSOFTHETRADE].description_up, "매 턴 시작 시 카드를 1장 뽑고 카드를 1장 버립니다.");
//
//	initCard(CARD_UNLOAD);
//	SetColorRarityType(CARD_UNLOAD, GREEN, RARE, ATTACK);
//	CardDatabase[CARD_UNLOAD].cost = 1;
//	CardDatabase[CARD_UNLOAD].damage = 14;
//	SetUpgradedCardCDB(CARD_UNLOAD, 0, 4, 0);
//	strcpy(&CardDatabase[CARD_UNLOAD].name, "일소");
//	strcpy(&CardDatabase[CARD_UNLOAD].description, "피해를 14 줍니다. 카드를 모두 버립니다.");
//	strcpy(&CardDatabase[CARD_UNLOAD].description_up, "피해를 18 줍니다. 카드를 모두 버립니다.");
//
//	initCard(CARD_WRAITHFORM);
//	SetColorRarityType(CARD_WRAITHFORM, GREEN, RARE, POWER);
//	CardDatabase[CARD_WRAITHFORM].cost = 3;
//	SetUpgradedCardCDB(CARD_WRAITHFORM, -1, 0, 0);
//	strcpy(&CardDatabase[CARD_WRAITHFORM].name, "망령 형태");
//	strcpy(&CardDatabase[CARD_WRAITHFORM].description, "무형을 2 얻습니다. 매 턴 종료 시 민첩을 1 잃습니다.");
//	strcpy(&CardDatabase[CARD_WRAITHFORM].description_up, "무형을 3 얻습니다.");
//
//	initCard(CARD_ZAP);
//	SetColorRarityType(CARD_ZAP, BLUE, COMMON, ATTACK);
//	CardDatabase[CARD_ZAP].cost = 1;
//	SetUpgradedCardCDB(CARD_ZAP, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_ZAP].name, "방전");
//	strcpy(&CardDatabase[CARD_ZAP].description, "8의 피해를 줍니다. 1개의 번개 구체를 생성합니다.");
//	strcpy(&CardDatabase[CARD_ZAP].description_up, "10의 피해를 줍니다. 1개의 번개 구체를 생성합니다.");
//
//	initCard(CARD_DUALCAST);
//	SetColorRarityType(CARD_DUALCAST, BLUE, COMMON, SKILL);
//	CardDatabase[CARD_DUALCAST].cost = 1;
//	SetUpgradedCardCDB(CARD_DUALCAST, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_DUALCAST].name, "이중 발사");
//	strcpy(&CardDatabase[CARD_DUALCAST].description, "오브를 2번 발동시킵니다.");
//	strcpy(&CardDatabase[CARD_DUALCAST].description_up, "오브를 3번 발동시킵니다.");
//
//	initCard(CARD_DEFEND3);
//	SetColorRarityType(CARD_DEFEND3, BLUE, COMMON, SKILL);
//	CardDatabase[CARD_DEFEND3].cost = 1;
//	SetUpgradedCardCDB(CARD_DEFEND3, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_DEFEND3].name, "수비");
//	strcpy(&CardDatabase[CARD_DEFEND3].description, "5의 방어도를 얻습니다.");
//	strcpy(&CardDatabase[CARD_DEFEND3].description_up, "8의 방어도를 얻습니다.");
//
//	initCard(CARD_STRIKE3);
//	SetColorRarityType(CARD_STRIKE3, BLUE, COMMON, ATTACK);
//	CardDatabase[CARD_STRIKE3].cost = 1;
//	SetUpgradedCardCDB(CARD_STRIKE3, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_STRIKE3].name, "타격");
//	strcpy(&CardDatabase[CARD_STRIKE3].description, "6의 피해를 줍니다.");
//	strcpy(&CardDatabase[CARD_STRIKE3].description_up, "9의 피해를 줍니다.");
//
//	// 디펙트 일반 카드 (COMMON)
//	initCard(CARD_BALLLIGHTNING);
//	SetColorRarityType(CARD_BALLLIGHTNING, BLUE, COMMON, ATTACK);
//	CardDatabase[CARD_BALLLIGHTNING].cost = 1;
//	SetUpgradedCardCDB(CARD_BALLLIGHTNING, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_BALLLIGHTNING].name, "번개 구슬");
//	strcpy(&CardDatabase[CARD_BALLLIGHTNING].description, "7의 피해를 줍니다. 1개의 번개 구체를 생성합니다.");
//	strcpy(&CardDatabase[CARD_BALLLIGHTNING].description_up, "10의 피해를 줍니다. 1개의 번개 구체를 생성합니다.");
//
//	initCard(CARD_BARRAGE);
//	SetColorRarityType(CARD_BARRAGE, BLUE, COMMON, ATTACK);
//	CardDatabase[CARD_BARRAGE].cost = 1;
//	SetUpgradedCardCDB(CARD_BARRAGE, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_BARRAGE].name, "연발");
//	strcpy(&CardDatabase[CARD_BARRAGE].description, "4의 피해를 줍니다. 오브 슬롯 1개당 피해가 4씩 증가합니다.");
//	strcpy(&CardDatabase[CARD_BARRAGE].description_up, "6의 피해를 줍니다. 오브 슬롯 1개당 피해가 4씩 증가합니다.");
//
//	initCard(CARD_BEAMCELL);
//	SetColorRarityType(CARD_BEAMCELL, BLUE, COMMON, ATTACK);
//	CardDatabase[CARD_BEAMCELL].cost = 0;
//	SetUpgradedCardCDB(CARD_BEAMCELL, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_BEAMCELL].name, "광선 세포");
//	strcpy(&CardDatabase[CARD_BEAMCELL].description, "3의 피해를 줍니다. 이번 턴에 소모된 에너지 1당 피해가 2씩 증가합니다.");
//	strcpy(&CardDatabase[CARD_BEAMCELL].description_up, "3의 피해를 줍니다. 이번 턴에 소모된 에너지 1당 피해가 3씩 증가합니다.");
//
//	initCard(CARD_COLDSNAP);
//	SetColorRarityType(CARD_COLDSNAP, BLUE, COMMON, ATTACK);
//	CardDatabase[CARD_COLDSNAP].cost = 1;
//	SetUpgradedCardCDB(CARD_COLDSNAP, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_COLDSNAP].name, "혹한");
//	strcpy(&CardDatabase[CARD_COLDSNAP].description, "6의 피해를 줍니다. 1개의 서리 구체를 생성합니다.");
//	strcpy(&CardDatabase[CARD_COLDSNAP].description_up, "9의 피해를 줍니다. 1개의 서리 구체를 생성합니다.");
//
//	initCard(CARD_COMPILEDRIVER);
//	SetColorRarityType(CARD_COMPILEDRIVER, BLUE, COMMON, ATTACK);
//	CardDatabase[CARD_COMPILEDRIVER].cost = 1;
//	SetUpgradedCardCDB(CARD_COMPILEDRIVER, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_COMPILEDRIVER].name, "컴파일 드라이버");
//	strcpy(&CardDatabase[CARD_COMPILEDRIVER].description, "7의 피해를 줍니다. 손에 있는 카드 1장을 뽑을 더미 밑으로 보냅니다.");
//	strcpy(&CardDatabase[CARD_COMPILEDRIVER].description_up, "10의 피해를 줍니다. 손에 있는 카드 1장을 뽑을 더미 밑으로 보냅니다.");
//
//	initCard(CARD_COOLHEADED);
//	SetColorRarityType(CARD_COOLHEADED, BLUE, COMMON, SKILL);
//	CardDatabase[CARD_COOLHEADED].cost = 1;
//	SetUpgradedCardCDB(CARD_COOLHEADED, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_COOLHEADED].name, "냉정함");
//	strcpy(&CardDatabase[CARD_COOLHEADED].description, "카드를 1장 뽑습니다. 1개의 서리 구체를 생성합니다.");
//	strcpy(&CardDatabase[CARD_COOLHEADED].description_up, "카드를 2장 뽑습니다. 1개의 서리 구체를 생성합니다.");
//
//	initCard(CARD_GOFORTHEEYES);
//	SetColorRarityType(CARD_GOFORTHEEYES, BLUE, COMMON, ATTACK);
//	CardDatabase[CARD_GOFORTHEEYES].cost = 0;
//	SetUpgradedCardCDB(CARD_GOFORTHEEYES, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_GOFORTHEEYES].name, "급소 공격");
//	strcpy(&CardDatabase[CARD_GOFORTHEEYES].description, "3의 피해를 줍니다. 적에게 약화를 1 적용합니다.");
//	strcpy(&CardDatabase[CARD_GOFORTHEEYES].description_up, "4의 피해를 줍니다. 적에게 약화를 2 적용합니다.");
//
//	initCard(CARD_HOLOGRAM);
//	SetColorRarityType(CARD_HOLOGRAM, BLUE, COMMON, SKILL);
//	CardDatabase[CARD_HOLOGRAM].cost = 1;
//	SetUpgradedCardCDB(CARD_HOLOGRAM, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_HOLOGRAM].name, "홀로그램");
//	strcpy(&CardDatabase[CARD_HOLOGRAM].description, "손으로 가져올 버린 카드를 1장 선택합니다.");
//	strcpy(&CardDatabase[CARD_HOLOGRAM].description_up, "손으로 가져올 버린 카드를 1장 선택합니다. 그 카드의 비용이 0이 됩니다.");
//
//	initCard(CARD_LEAP);
//	SetColorRarityType(CARD_LEAP, BLUE, COMMON, SKILL);
//	CardDatabase[CARD_LEAP].cost = 1;
//	SetUpgradedCardCDB(CARD_LEAP, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_LEAP].name, "도약");
//	strcpy(&CardDatabase[CARD_LEAP].description, "9의 방어도를 얻습니다.");
//	strcpy(&CardDatabase[CARD_LEAP].description_up, "12의 방어도를 얻습니다.");
//
//	initCard(CARD_RECURSION);
//	SetColorRarityType(CARD_RECURSION, BLUE, COMMON, SKILL);
//	CardDatabase[CARD_RECURSION].cost = 1;
//	SetUpgradedCardCDB(CARD_RECURSION, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_RECURSION].name, "재귀");
//	strcpy(&CardDatabase[CARD_RECURSION].description, "모든 오브를 잃습니다. 잃은 오브 1개당 집중을 1 얻습니다.");
//	strcpy(&CardDatabase[CARD_RECURSION].description_up, "모든 오브를 잃습니다. 잃은 오브 1개당 집중을 2 얻습니다.");
//
//	initCard(CARD_STACK);
//	SetColorRarityType(CARD_STACK, BLUE, COMMON, SKILL);
//	CardDatabase[CARD_STACK].cost = 1;
//	SetUpgradedCardCDB(CARD_STACK, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_STACK].name, "스택");
//	strcpy(&CardDatabase[CARD_STACK].description, "5의 방어도를 얻습니다. 카드를 1장 뽑습니다.");
//	strcpy(&CardDatabase[CARD_STACK].description_up, "7의 방어도를 얻습니다. 카드를 1장 뽑습니다.");
//
//	initCard(CARD_STEAMBARRIER);
//	SetColorRarityType(CARD_STEAMBARRIER, BLUE, COMMON, SKILL);
//	CardDatabase[CARD_STEAMBARRIER].cost = 0;
//	SetUpgradedCardCDB(CARD_STEAMBARRIER, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_STEAMBARRIER].name, "증기 방벽");
//	strcpy(&CardDatabase[CARD_STEAMBARRIER].description, "6의 방어도를 얻습니다.");
//	strcpy(&CardDatabase[CARD_STEAMBARRIER].description_up, "8의 방어도를 얻습니다.");
//
//	initCard(CARD_STREAMLINE);
//	SetColorRarityType(CARD_STREAMLINE, BLUE, COMMON, ATTACK);
//	CardDatabase[CARD_STREAMLINE].cost = 2;
//	SetUpgradedCardCDB(CARD_STREAMLINE, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_STREAMLINE].name, "간소화");
//	strcpy(&CardDatabase[CARD_STREAMLINE].description, "15의 피해를 줍니다. 이 카드의 비용이 영구적으로 1 감소합니다.");
//	strcpy(&CardDatabase[CARD_STREAMLINE].description_up, "20의 피해를 줍니다. 이 카드의 비용이 영구적으로 1 감소합니다.");
//
//	initCard(CARD_SWEEPINGBEAM);
//	SetColorRarityType(CARD_SWEEPINGBEAM, BLUE, COMMON, ATTACK);
//	CardDatabase[CARD_SWEEPINGBEAM].cost = 1;
//	SetUpgradedCardCDB(CARD_SWEEPINGBEAM, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_SWEEPINGBEAM].name, "전방위 광선");
//	strcpy(&CardDatabase[CARD_SWEEPINGBEAM].description, "모든 적에게 6의 피해를 줍니다.");
//	strcpy(&CardDatabase[CARD_SWEEPINGBEAM].description_up, "모든 적에게 9의 피해를 줍니다.");
//
//	// 디펙트 언커먼 카드 (UNCOMMON)
//	initCard(CARD_AGGREGATE);
//	SetColorRarityType(CARD_AGGREGATE, BLUE, UNCOMMON, SKILL);
//	CardDatabase[CARD_AGGREGATE].cost = 1;
//	SetUpgradedCardCDB(CARD_AGGREGATE, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_AGGREGATE].name, "집합");
//	strcpy(&CardDatabase[CARD_AGGREGATE].description, "에너지를 1 얻습니다. 다음 번 오브를 발동시킬 때, 그 오브를 소모하지 않습니다.");
//	strcpy(&CardDatabase[CARD_AGGREGATE].description_up, "에너지를 1 얻습니다. 다음 번 오브를 2번 발동시킬 때, 그 오브를 소모하지 않습니다.");
//
//	initCard(CARD_AUTOSHIELDS);
//	SetColorRarityType(CARD_AUTOSHIELDS, BLUE, UNCOMMON, SKILL);
//	CardDatabase[CARD_AUTOSHIELDS].cost = 1;
//	SetUpgradedCardCDB(CARD_AUTOSHIELDS, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_AUTOSHIELDS].name, "자동 보호막");
//	strcpy(&CardDatabase[CARD_AUTOSHIELDS].description, "손에 있는 카드 1장당 방어도를 4씩 얻습니다.");
//	strcpy(&CardDatabase[CARD_AUTOSHIELDS].description_up, "손에 있는 카드 1장당 방어도를 5씩 얻습니다.");
//
//	initCard(CARD_BLIZZARD);
//	SetColorRarityType(CARD_BLIZZARD, BLUE, UNCOMMON, ATTACK);
//	CardDatabase[CARD_BLIZZARD].cost = 1;
//	SetUpgradedCardCDB(CARD_BLIZZARD, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_BLIZZARD].name, "눈보라");
//	strcpy(&CardDatabase[CARD_BLIZZARD].description, "서리 구체 1개당 모든 적에게 2의 피해를 줍니다.");
//	strcpy(&CardDatabase[CARD_BLIZZARD].description_up, "서리 구체 1개당 모든 적에게 3의 피해를 줍니다.");
//
//	initCard(CARD_BOOTSEQUENCE);
//	SetColorRarityType(CARD_BOOTSEQUENCE, BLUE, UNCOMMON, SKILL);
//	CardDatabase[CARD_BOOTSEQUENCE].cost = 0;
//	SetUpgradedCardCDB(CARD_BOOTSEQUENCE, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_BOOTSEQUENCE].name, "부팅 시퀀스");
//	strcpy(&CardDatabase[CARD_BOOTSEQUENCE].description, "10의 방어도를 얻습니다. 소멸.");
//	strcpy(&CardDatabase[CARD_BOOTSEQUENCE].description_up, "13의 방어도를 얻습니다. 소멸.");
//
//	initCard(CARD_CHAOS);
//	SetColorRarityType(CARD_CHAOS, BLUE, UNCOMMON, SKILL);
//	CardDatabase[CARD_CHAOS].cost = 1;
//	SetUpgradedCardCDB(CARD_CHAOS, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_CHAOS].name, "혼돈");
//	strcpy(&CardDatabase[CARD_CHAOS].description, "무작위 오브를 1개 생성합니다.");
//	strcpy(&CardDatabase[CARD_CHAOS].description_up, "무작위 오브를 2개 생성합니다.");
//
//	initCard(CARD_CHILL);
//	SetColorRarityType(CARD_CHILL, BLUE, UNCOMMON, SKILL);
//	CardDatabase[CARD_CHILL].cost = 0;
//	SetUpgradedCardCDB(CARD_CHILL, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_CHILL].name, "냉기");
//	strcpy(&CardDatabase[CARD_CHILL].description, "무형을 1 얻고 1개의 서리 구체를 생성합니다.");
//	strcpy(&CardDatabase[CARD_CHILL].description_up, "무형을 1 얻고 2개의 서리 구체를 생성합니다.");
//
//	initCard(CARD_CLAW);
//	SetColorRarityType(CARD_CLAW, BLUE, UNCOMMON, ATTACK);
//	CardDatabase[CARD_CLAW].cost = 0;
//	SetUpgradedCardCDB(CARD_CLAW, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_CLAW].name, "발톱");
//	strcpy(&CardDatabase[CARD_CLAW].description, "3의 피해를 줍니다. 발톱의 피해가 영구적으로 2 증가합니다.");
//	strcpy(&CardDatabase[CARD_CLAW].description_up, "5의 피해를 줍니다. 발톱의 피해가 영구적으로 2 증가합니다.");
//
//	initCard(CARD_DARKNESS);
//	SetColorRarityType(CARD_DARKNESS, BLUE, UNCOMMON, SKILL);
//	CardDatabase[CARD_DARKNESS].cost = 1;
//	SetUpgradedCardCDB(CARD_DARKNESS, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_DARKNESS].name, "어둠");
//	strcpy(&CardDatabase[CARD_DARKNESS].description, "1개의 암흑 구체를 생성합니다.");
//	strcpy(&CardDatabase[CARD_DARKNESS].description_up, "2개의 암흑 구체를 생성합니다.");
//
//	initCard(CARD_DOOMANDGLOOM);
//	SetColorRarityType(CARD_DOOMANDGLOOM, BLUE, UNCOMMON, ATTACK);
//	CardDatabase[CARD_DOOMANDGLOOM].cost = 2;
//	SetUpgradedCardCDB(CARD_DOOMANDGLOOM, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_DOOMANDGLOOM].name, "절망과 우울");
//	strcpy(&CardDatabase[CARD_DOOMANDGLOOM].description, "모든 적에게 10의 피해를 줍니다. 1개의 암흑 구체를 생성합니다.");
//	strcpy(&CardDatabase[CARD_DOOMANDGLOOM].description_up, "모든 적에게 14의 피해를 줍니다. 1개의 암흑 구체를 생성합니다.");
//
//	initCard(CARD_DOUBLEENERGY);
//	SetColorRarityType(CARD_DOUBLEENERGY, BLUE, UNCOMMON, SKILL);
//	CardDatabase[CARD_DOUBLEENERGY].cost = 1;
//	SetUpgradedCardCDB(CARD_DOUBLEENERGY, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_DOUBLEENERGY].name, "에너지 배증");
//	strcpy(&CardDatabase[CARD_DOUBLEENERGY].description, "현재 에너지를 두 배로 늘립니다.");
//	strcpy(&CardDatabase[CARD_DOUBLEENERGY].description_up, "현재 에너지를 두 배로 늘립니다. 카드를 1장 뽑습니다.");
//
//	initCard(CARD_EQUILIBRIUM);
//	SetColorRarityType(CARD_EQUILIBRIUM, BLUE, UNCOMMON, SKILL);
//	CardDatabase[CARD_EQUILIBRIUM].cost = 1;
//	SetUpgradedCardCDB(CARD_EQUILIBRIUM, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_EQUILIBRIUM].name, "균형");
//	strcpy(&CardDatabase[CARD_EQUILIBRIUM].description, "유지되는 카드들의 비용이 0이 됩니다. 소멸.");
//	strcpy(&CardDatabase[CARD_EQUILIBRIUM].description_up, "유지되는 카드들의 비용이 0이 됩니다. 카드를 1장 뽑습니다. 소멸.");
//
//	initCard(CARD_FTL);
//	SetColorRarityType(CARD_FTL, BLUE, UNCOMMON, ATTACK);
//	CardDatabase[CARD_FTL].cost = 0;
//	SetUpgradedCardCDB(CARD_FTL, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_FTL].name, "초광속");
//	strcpy(&CardDatabase[CARD_FTL].description, "5의 피해를 줍니다. 이 카드는 손에서 뽑을 더미로 가지 않습니다.");
//	strcpy(&CardDatabase[CARD_FTL].description_up, "8의 피해를 줍니다. 이 카드는 손에서 뽑을 더미로 가지 않습니다.");
//
//	initCard(CARD_GENETICALGORITHM);
//	SetColorRarityType(CARD_GENETICALGORITHM, BLUE, UNCOMMON, SKILL);
//	CardDatabase[CARD_GENETICALGORITHM].cost = 1;
//	SetUpgradedCardCDB(CARD_GENETICALGORITHM, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_GENETICALGORITHM].name, "유전 알고리즘");
//	strcpy(&CardDatabase[CARD_GENETICALGORITHM].description, "5의 방어도를 얻습니다. 유지. 매 턴 시작 시 이 카드의 방어도가 2씩 증가합니다.");
//	strcpy(&CardDatabase[CARD_GENETICALGORITHM].description_up, "7의 방어도를 얻습니다. 유지. 매 턴 시작 시 이 카드의 방어도가 2씩 증가합니다.");
//
//	initCard(CARD_GLACIER);
//	SetColorRarityType(CARD_GLACIER, BLUE, UNCOMMON, SKILL);
//	CardDatabase[CARD_GLACIER].cost = 2;
//	SetUpgradedCardCDB(CARD_GLACIER, -1, 0, 0);
//	strcpy(&CardDatabase[CARD_GLACIER].name, "빙하");
//	strcpy(&CardDatabase[CARD_GLACIER].description, "7의 방어도를 얻습니다. 2개의 서리 구체를 생성합니다.");
//	strcpy(&CardDatabase[CARD_GLACIER].description_up, "7의 방어도를 얻습니다. 2개의 서리 구체를 생성합니다.");
//
//	initCard(CARD_CLAW);
//	SetColorRarityType(CARD_CLAW, BLUE, UNCOMMON, ATTACK);
//	CardDatabase[CARD_CLAW].cost = 2;
//	SetUpgradedCardCDB(CARD_CLAW, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_CLAW].name, "베기");
//	strcpy(&CardDatabase[CARD_CLAW].description, "16의 피해를 줍니다. 손에 상처 2장을 추가합니다.");
//	strcpy(&CardDatabase[CARD_CLAW].description_up, "20의 피해를 줍니다. 손에 상처 2장을 추가합니다.");
//
//	initCard(CARD_HELLOWORLD);
//	SetColorRarityType(CARD_HELLOWORLD, BLUE, UNCOMMON, POWER);
//	CardDatabase[CARD_HELLOWORLD].cost = 1;
//	SetUpgradedCardCDB(CARD_HELLOWORLD, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_HELLOWORLD].name, "헬로 월드");
//	strcpy(&CardDatabase[CARD_HELLOWORLD].description, "매 턴 시작 시 손에 무작위 일반 카드를 1장 추가합니다.");
//	strcpy(&CardDatabase[CARD_HELLOWORLD].description_up, "매 턴 시작 시 손에 무작위 일반 카드를 1장 추가합니다. 그 카드의 비용이 0이 됩니다.");
//
//	initCard(CARD_LOOP);
//	SetColorRarityType(CARD_LOOP, BLUE, UNCOMMON, POWER);
//	CardDatabase[CARD_LOOP].cost = 1;
//	SetUpgradedCardCDB(CARD_LOOP, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_LOOP].name, "루프");
//	strcpy(&CardDatabase[CARD_LOOP].description, "매 턴 시작 시 손에 있는 카드 1장을 뽑을 더미 맨 위로 올립니다.");
//	strcpy(&CardDatabase[CARD_LOOP].description_up, "매 턴 시작 시 손에 있는 카드 2장을 뽑을 더미 맨 위로 올립니다.");
//
//	initCard(CARD_MELTER);
//	SetColorRarityType(CARD_MELTER, BLUE, UNCOMMON, ATTACK);
//	CardDatabase[CARD_MELTER].cost = 1;
//	SetUpgradedCardCDB(CARD_MELTER, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_MELTER].name, "용해기");
//	strcpy(&CardDatabase[CARD_MELTER].description, "10의 피해를 줍니다. 적이 방어도가 있다면 소멸시킵니다.");
//	strcpy(&CardDatabase[CARD_MELTER].description_up, "14의 피해를 줍니다. 적이 방어도가 있다면 소멸시킵니다.");
//
//	initCard(CARD_OVERCLOCK);
//	SetColorRarityType(CARD_OVERCLOCK, BLUE, UNCOMMON, SKILL);
//	CardDatabase[CARD_OVERCLOCK].cost = 0;
//	SetUpgradedCardCDB(CARD_OVERCLOCK, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_OVERCLOCK].name, "오버클록");
//	strcpy(&CardDatabase[CARD_OVERCLOCK].description, "카드를 2장 뽑습니다. 손에 번아웃 1장을 추가합니다.");
//	strcpy(&CardDatabase[CARD_OVERCLOCK].description_up, "카드를 3장 뽑습니다. 손에 번아웃 1장을 추가합니다.");
//
//	initCard(CARD_RECYCLE);
//	SetColorRarityType(CARD_RECYCLE, BLUE, UNCOMMON, SKILL);
//	CardDatabase[CARD_RECYCLE].cost = 1;
//	SetUpgradedCardCDB(CARD_RECYCLE, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_RECYCLE].name, "재활용");
//	strcpy(&CardDatabase[CARD_RECYCLE].description, "손에 있는 카드를 소멸시킵니다. 소멸된 카드의 비용만큼 에너지를 얻습니다.");
//	strcpy(&CardDatabase[CARD_RECYCLE].description_up, "손에 있는 카드를 소멸시킵니다. 소멸된 카드의 비용만큼 에너지를 얻고 카드를 그만큼 뽑습니다.");
//
//	initCard(CARD_REBOOT);
//	SetColorRarityType(CARD_REBOOT, BLUE, UNCOMMON, SKILL);
//	CardDatabase[CARD_REBOOT].cost = 0;
//	SetUpgradedCardCDB(CARD_REBOOT, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_REBOOT].name, "재부팅");
//	strcpy(&CardDatabase[CARD_REBOOT].description, "손의 모든 카드를 버립니다. 카드를 4장 뽑습니다.");
//	strcpy(&CardDatabase[CARD_REBOOT].description_up, "손의 모든 카드를 버립니다. 카드를 6장 뽑습니다.");
//
//	initCard(CARD_REINFORCEDBODY);
//	SetColorRarityType(CARD_REINFORCEDBODY, BLUE, UNCOMMON, SKILL);
//	CardDatabase[CARD_REINFORCEDBODY].cost = 1;
//	SetUpgradedCardCDB(CARD_REINFORCEDBODY, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_REINFORCEDBODY].name, "강화된 몸");
//	strcpy(&CardDatabase[CARD_REINFORCEDBODY].description, "방어도를 7 얻습니다. 이번 턴 소모한 에너지 1당 방어도가 7씩 추가됩니다.");
//	strcpy(&CardDatabase[CARD_REINFORCEDBODY].description_up, "방어도를 9 얻습니다. 이번 턴 소모한 에너지 1당 방어도가 9씩 추가됩니다.");
//
//	initCard(CARD_RIPANDTEAR);
//	SetColorRarityType(CARD_RIPANDTEAR, BLUE, UNCOMMON, ATTACK);
//	CardDatabase[CARD_RIPANDTEAR].cost = 1;
//	SetUpgradedCardCDB(CARD_RIPANDTEAR, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_RIPANDTEAR].name, "찢고 갈기기");
//	strcpy(&CardDatabase[CARD_RIPANDTEAR].description, "무작위 적에게 7의 피해를 2번 줍니다.");
//	strcpy(&CardDatabase[CARD_RIPANDTEAR].description_up, "무작위 적에게 9의 피해를 2번 줍니다.");
//
//	initCard(CARD_SCRAPE);
//	SetColorRarityType(CARD_SCRAPE, BLUE, UNCOMMON, ATTACK);
//	CardDatabase[CARD_SCRAPE].cost = 1;
//	SetUpgradedCardCDB(CARD_SCRAPE, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_SCRAPE].name, "긁기");
//	strcpy(&CardDatabase[CARD_SCRAPE].description, "3의 피해를 3번 줍니다. 카드를 3장 뽑고, 비용이 0이 아닌 카드는 버립니다.");
//	strcpy(&CardDatabase[CARD_SCRAPE].description_up, "4의 피해를 3번 줍니다. 카드를 4장 뽑고, 비용이 0이 아닌 카드는 버립니다.");
//
//	initCard(CARD_TURBO);
//	SetColorRarityType(CARD_TURBO, BLUE, UNCOMMON, SKILL);
//	CardDatabase[CARD_TURBO].cost = 0;
//	SetUpgradedCardCDB(CARD_TURBO, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_TURBO].name, "터보");
//	strcpy(&CardDatabase[CARD_TURBO].description, "에너지를 2 얻습니다. 손에 번아웃 1장을 추가합니다.");
//	strcpy(&CardDatabase[CARD_TURBO].description_up, "에너지를 3 얻습니다. 손에 번아웃 1장을 추가합니다.");
//
//	initCard(CARD_WHITENOISE);
//	SetColorRarityType(CARD_WHITENOISE, BLUE, UNCOMMON, SKILL);
//	CardDatabase[CARD_WHITENOISE].cost = 1;
//	SetUpgradedCardCDB(CARD_WHITENOISE, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_WHITENOISE].name, "백색 소음");
//	strcpy(&CardDatabase[CARD_WHITENOISE].description, "무작위 파워 카드를 손에 추가합니다. 그 카드는 이번 턴 비용이 0이 됩니다.");
//	strcpy(&CardDatabase[CARD_WHITENOISE].description_up, "무작위 파워 카드를 손에 2장 추가합니다. 그 카드들은 이번 턴 비용이 0이 됩니다.");
//
//	// 디펙트 레어 카드 (RARE)
//	initCard(CARD_ALLFORONE);
//	SetColorRarityType(CARD_ALLFORONE, BLUE, RARE, ATTACK);
//	CardDatabase[CARD_ALLFORONE].cost = 2;
//	SetUpgradedCardCDB(CARD_ALLFORONE, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_ALLFORONE].name, "올 포 원");
//	strcpy(&CardDatabase[CARD_ALLFORONE].description, "10의 피해를 줍니다. 이번 전투에서 사용했던 비용 0짜리 카드를 모두 손으로 가져옵니다.");
//	strcpy(&CardDatabase[CARD_ALLFORONE].description_up, "14의 피해를 줍니다. 이번 전투에서 사용했던 비용 0짜리 카드를 모두 손으로 가져옵니다.");
//
//	initCard(CARD_BIASEDCOGNITION);
//	SetColorRarityType(CARD_BIASEDCOGNITION, BLUE, RARE, POWER);
//	CardDatabase[CARD_BIASEDCOGNITION].cost = 1;
//	SetUpgradedCardCDB(CARD_BIASEDCOGNITION, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_BIASEDCOGNITION].name, "편향된 사고");
//	strcpy(&CardDatabase[CARD_BIASEDCOGNITION].description, "집중을 4 얻습니다. 매 턴 집중을 1 잃습니다.");
//	strcpy(&CardDatabase[CARD_BIASEDCOGNITION].description_up, "집중을 4 얻습니다.");
//
//	initCard(CARD_BUFFER);
//	SetColorRarityType(CARD_BUFFER, BLUE, RARE, POWER);
//	CardDatabase[CARD_BUFFER].cost = 2;
//	SetUpgradedCardCDB(CARD_BUFFER, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_BUFFER].name, "버퍼");
//	strcpy(&CardDatabase[CARD_BUFFER].description, "피해를 1번 무효화합니다.");
//	strcpy(&CardDatabase[CARD_BUFFER].description_up, "피해를 2번 무효화합니다.");
//
//	initCard(CARD_CAPACITOR);
//	SetColorRarityType(CARD_CAPACITOR, BLUE, RARE, POWER);
//	CardDatabase[CARD_CAPACITOR].cost = 1;
//	SetUpgradedCardCDB(CARD_CAPACITOR, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_CAPACITOR].name, "커패시터");
//	strcpy(&CardDatabase[CARD_CAPACITOR].description, "오브 슬롯을 2개 추가합니다.");
//	strcpy(&CardDatabase[CARD_CAPACITOR].description_up, "오브 슬롯을 3개 추가합니다.");
//
//	initCard(CARD_CORESURGE);
//	SetColorRarityType(CARD_CORESURGE, BLUE, RARE, ATTACK);
//	CardDatabase[CARD_CORESURGE].cost = 1;
//	SetUpgradedCardCDB(CARD_CORESURGE, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_CORESURGE].name, "코어 서지");
//	strcpy(&CardDatabase[CARD_CORESURGE].description, "11의 피해를 줍니다. 디버프를 모두 제거하고, 집중을 2 얻습니다.");
//	strcpy(&CardDatabase[CARD_CORESURGE].description_up, "16의 피해를 줍니다. 디버프를 모두 제거하고, 집중을 2 얻습니다.");
//
//	initCard(CARD_CREATIVEAI);
//	SetColorRarityType(CARD_CREATIVEAI, BLUE, RARE, POWER);
//	CardDatabase[CARD_CREATIVEAI].cost = 3;
//	SetUpgradedCardCDB(CARD_CREATIVEAI, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_CREATIVEAI].name, "창의적인 인공지능");
//	strcpy(&CardDatabase[CARD_CREATIVEAI].description, "매 턴 시작 시 무작위 파워 카드를 손에 추가합니다.");
//	strcpy(&CardDatabase[CARD_CREATIVEAI].description_up, "매 턴 시작 시 무작위 파워 카드를 손에 2장 추가합니다.");
//
//	initCard(CARD_ECHOFORM);
//	SetColorRarityType(CARD_ECHOFORM, BLUE, RARE, POWER);
//	CardDatabase[CARD_ECHOFORM].cost = 3;
//	SetUpgradedCardCDB(CARD_ECHOFORM, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_ECHOFORM].name, "에코 폼");
//	strcpy(&CardDatabase[CARD_ECHOFORM].description, "매 턴 처음 사용하는 카드를 두 번 사용합니다.");
//	strcpy(&CardDatabase[CARD_ECHOFORM].description_up, "매 턴 처음 사용하는 카드를 두 번 사용합니다.");
//
//	initCard(CARD_ELECTRODYNAMICS);
//	SetColorRarityType(CARD_ELECTRODYNAMICS, BLUE, RARE, POWER);
//	CardDatabase[CARD_ELECTRODYNAMICS].cost = 3;
//	SetUpgradedCardCDB(CARD_ELECTRODYNAMICS, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_ELECTRODYNAMICS].name, "전자기역학");
//	strcpy(&CardDatabase[CARD_ELECTRODYNAMICS].description, "번개 오브의 피해가 모든 적에게 적용됩니다. 2개의 번개 구체를 생성합니다.");
//	strcpy(&CardDatabase[CARD_ELECTRODYNAMICS].description_up, "번개 오브의 피해가 모든 적에게 적용됩니다. 3개의 번개 구체를 생성합니다.");
//
//	initCard(CARD_HYPERBEAM);
//	SetColorRarityType(CARD_HYPERBEAM, BLUE, RARE, ATTACK);
//	CardDatabase[CARD_HYPERBEAM].cost = 2;
//	SetUpgradedCardCDB(CARD_HYPERBEAM, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_HYPERBEAM].name, "하이퍼 빔");
//	strcpy(&CardDatabase[CARD_HYPERBEAM].description, "모든 적에게 26의 피해를 줍니다. 집중을 3 잃습니다.");
//	strcpy(&CardDatabase[CARD_HYPERBEAM].description_up, "모든 적에게 34의 피해를 줍니다. 집중을 3 잃습니다.");
//
//	initCard(CARD_MACHINELEARNING);
//	SetColorRarityType(CARD_MACHINELEARNING, BLUE, RARE, POWER);
//	CardDatabase[CARD_MACHINELEARNING].cost = 1;
//	SetUpgradedCardCDB(CARD_MACHINELEARNING, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_MACHINELEARNING].name, "머신 러닝");
//	strcpy(&CardDatabase[CARD_MACHINELEARNING].description, "매 턴 카드 1장을 추가로 뽑습니다.");
//	strcpy(&CardDatabase[CARD_MACHINELEARNING].description_up, "매 턴 카드 2장을 추가로 뽑습니다.");
//
//	initCard(CARD_MULTICAST);
//	SetColorRarityType(CARD_MULTICAST, BLUE, RARE, SKILL);
//	CardDatabase[CARD_MULTICAST].cost = 2;
//	SetUpgradedCardCDB(CARD_MULTICAST, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_MULTICAST].name, "멀티캐스트");
//	strcpy(&CardDatabase[CARD_MULTICAST].description, "첫 번째 오브를 X번 발동시킵니다.");
//	strcpy(&CardDatabase[CARD_MULTICAST].description_up, "첫 번째 오브를 X+1번 발동시킵니다.");
//
//	initCard(CARD_STRIKE4);
//	SetColorRarityType(CARD_STRIKE4, PURPLE, BASIC, ATTACK);
//	CardDatabase[CARD_STRIKE4].cost = 1;
//	CardDatabase[CARD_STRIKE4].damage = 6;
//	SetUpgradedCardCDB(CARD_STRIKE4, 0, 0, 3);
//	strcpy(&CardDatabase[CARD_STRIKE4].name, "타격");
//	strcpy(&CardDatabase[CARD_STRIKE4].description, "피해를 6 줍니다.");
//	strcpy(&CardDatabase[CARD_STRIKE4].description_up, "피해를 9 줍니다.");
//
//	// 2
//	initCard(CARD_DEFEND4);
//	SetColorRarityType(CARD_DEFEND4, PURPLE, BASIC, SKILL);
//	CardDatabase[CARD_DEFEND4].cost = 1;
//	CardDatabase[CARD_DEFEND4].block = 5;
//	SetUpgradedCardCDB(CARD_DEFEND4, 0, 3, 0);
//	strcpy(&CardDatabase[CARD_DEFEND4].name, "방어");
//	strcpy(&CardDatabase[CARD_DEFEND4].description, "5의 방어도를 얻습니다.");
//	strcpy(&CardDatabase[CARD_DEFEND4].description_up, "8의 방어도를 얻습니다.");
//
//	// 3
//	initCard(CARD_ERUPTION);
//	SetColorRarityType(CARD_ERUPTION, PURPLE, BASIC, ATTACK);
//	CardDatabase[CARD_ERUPTION].cost = 2;
//	CardDatabase[CARD_ERUPTION].damage = 9;
//	SetUpgradedCardCDB(CARD_ERUPTION, 0, 0, 3);
//	strcpy(&CardDatabase[CARD_ERUPTION].name, "분출");
//	strcpy(&CardDatabase[CARD_ERUPTION].description, "피해를 9 줍니다. 격노 상태에 진입합니다.");
//	strcpy(&CardDatabase[CARD_ERUPTION].description_up, "피해를 12 줍니다. 격노 상태에 진입합니다.");
//
//	// 4
//	initCard(CARD_VIGILANCE);
//	SetColorRarityType(CARD_VIGILANCE, PURPLE, BASIC, SKILL);
//	CardDatabase[CARD_VIGILANCE].cost = 2;
//	CardDatabase[CARD_VIGILANCE].block = 8;
//	SetUpgradedCardCDB(CARD_VIGILANCE, 0, 4, 0);
//	strcpy(&CardDatabase[CARD_VIGILANCE].name, "경계");
//	strcpy(&CardDatabase[CARD_VIGILANCE].description, "8의 방어도를 얻습니다. 평정 상태에 진입합니다.");
//	strcpy(&CardDatabase[CARD_VIGILANCE].description_up, "12의 방어도를 얻습니다. 평정 상태에 진입합니다.");
//
//	// 5
//	initCard(CARD_BOWLINGBASH);
//	SetColorRarityType(CARD_BOWLINGBASH, PURPLE, COMMON, ATTACK);
//	CardDatabase[CARD_BOWLINGBASH].cost = 1;
//	CardDatabase[CARD_BOWLINGBASH].damage = 7;
//	SetUpgradedCardCDB(CARD_BOWLINGBASH, 0, 0, 3);
//	strcpy(&CardDatabase[CARD_BOWLINGBASH].name, "볼링 베쉬");
//	strcpy(&CardDatabase[CARD_BOWLINGBASH].description, "한 적에게 피해를 7 줍니다. 적 하나당 피해가 추가됩니다.");
//	strcpy(&CardDatabase[CARD_BOWLINGBASH].description_up, "한 적에게 피해를 10 줍니다. 적 하나당 피해가 추가됩니다.");
//
//	// 6
//	initCard(CARD_CONSECRATE);
//	SetColorRarityType(CARD_CONSECRATE, PURPLE, COMMON, ATTACK);
//	CardDatabase[CARD_CONSECRATE].cost = 0;
//	CardDatabase[CARD_CONSECRATE].damage = 5;
//	SetUpgradedCardCDB(CARD_CONSECRATE, 0, 0, 2);
//	strcpy(&CardDatabase[CARD_CONSECRATE].name, "신성화");
//	strcpy(&CardDatabase[CARD_CONSECRATE].description, "모든 적에게 피해를 5 줍니다.");
//	strcpy(&CardDatabase[CARD_CONSECRATE].description_up, "모든 적에게 피해를 7 줍니다.");
//
//	// 7
//	initCard(CARD_CRUSHJOINTS);
//	SetColorRarityType(CARD_CRUSHJOINTS, PURPLE, COMMON, SKILL);
//	CardDatabase[CARD_CRUSHJOINTS].cost = 1;
//	CardDatabase[CARD_CRUSHJOINTS].block = 6;
//	SetUpgradedCardCDB(CARD_CRUSHJOINTS, 0, 3, 0);
//	strcpy(&CardDatabase[CARD_CRUSHJOINTS].name, "관절 부수기");
//	strcpy(&CardDatabase[CARD_CRUSHJOINTS].description, "6의 방어도를 얻습니다.");
//	strcpy(&CardDatabase[CARD_CRUSHJOINTS].description_up, "9의 방어도를 얻습니다.");
//
//	// 8
//	initCard(CARD_CUTTHROUGHFATE);
//	SetColorRarityType(CARD_CUTTHROUGHFATE, PURPLE, COMMON, ATTACK);
//	CardDatabase[CARD_CUTTHROUGHFATE].cost = 1;
//	CardDatabase[CARD_CUTTHROUGHFATE].damage = 7;
//	SetUpgradedCardCDB(CARD_CUTTHROUGHFATE, 0, 0, 3);
//	strcpy(&CardDatabase[CARD_CUTTHROUGHFATE].name, "운명 절단");
//	strcpy(&CardDatabase[CARD_CUTTHROUGHFATE].description, "피해를 7 줍니다.");
//	strcpy(&CardDatabase[CARD_CUTTHROUGHFATE].description_up, "피해를 10 줍니다.");
//
//	// 9
//	initCard(CARD_EMPTYFIST);
//	SetColorRarityType(CARD_EMPTYFIST, PURPLE, COMMON, ATTACK);
//	CardDatabase[CARD_EMPTYFIST].cost = 0;
//	CardDatabase[CARD_EMPTYFIST].damage = 5;
//	SetUpgradedCardCDB(CARD_EMPTYFIST, 0, 0, 2);
//	strcpy(&CardDatabase[CARD_EMPTYFIST].name, "빈 주먹");
//	strcpy(&CardDatabase[CARD_EMPTYFIST].description, "피해를 5 줍니다.");
//	strcpy(&CardDatabase[CARD_EMPTYFIST].description_up, "피해를 7 줍니다.");
//
//	// 10
//	initCard(CARD_FLURRYOFBLOWS);
//	SetColorRarityType(CARD_FLURRYOFBLOWS, PURPLE, COMMON, ATTACK);
//	CardDatabase[CARD_FLURRYOFBLOWS].cost = 1;
//	CardDatabase[CARD_FLURRYOFBLOWS].damage = 8;
//	SetUpgradedCardCDB(CARD_FLURRYOFBLOWS, 0, 0, 3);
//	strcpy(&CardDatabase[CARD_FLURRYOFBLOWS].name, "연속 타격");
//	strcpy(&CardDatabase[CARD_FLURRYOFBLOWS].description, "피해를 8 줍니다.");
//	strcpy(&CardDatabase[CARD_FLURRYOFBLOWS].description_up, "피해를 11 줍니다.");
//
//	// 11
//	initCard(CARD_FLYINGSLEEVES);
//	SetColorRarityType(CARD_FLYINGSLEEVES, PURPLE, COMMON, ATTACK);
//	CardDatabase[CARD_FLYINGSLEEVES].cost = 0;
//	CardDatabase[CARD_FLYINGSLEEVES].damage = 4;
//	SetUpgradedCardCDB(CARD_FLYINGSLEEVES, 0, 0, 2);
//	strcpy(&CardDatabase[CARD_FLYINGSLEEVES].name, "날아가는 소매");
//	strcpy(&CardDatabase[CARD_FLYINGSLEEVES].description, "피해를 4 줍니다.");
//	strcpy(&CardDatabase[CARD_FLYINGSLEEVES].description_up, "피해를 6 줍니다.");
//
//	// 12
//	initCard(CARD_FOLLOWUP);
//	SetColorRarityType(CARD_FOLLOWUP, PURPLE, COMMON, ATTACK);
//	CardDatabase[CARD_FOLLOWUP].cost = 1;
//	CardDatabase[CARD_FOLLOWUP].damage = 6;
//	SetUpgradedCardCDB(CARD_FOLLOWUP, 0, 0, 3);
//	strcpy(&CardDatabase[CARD_FOLLOWUP].name, "후속타");
//	strcpy(&CardDatabase[CARD_FOLLOWUP].description, "피해를 6 줍니다.");
//	strcpy(&CardDatabase[CARD_FOLLOWUP].description_up, "피해를 9 줍니다.");
//
//	// 13
//	initCard(CARD_JUSTLUCKY);
//	SetColorRarityType(CARD_JUSTLUCKY, PURPLE, COMMON, SKILL);
//	CardDatabase[CARD_JUSTLUCKY].cost = 0;
//	CardDatabase[CARD_JUSTLUCKY].block = 3;
//	SetUpgradedCardCDB(CARD_JUSTLUCKY, 0, 2, 0);
//	strcpy(&CardDatabase[CARD_JUSTLUCKY].name, "운 좋은 한 방");
//	strcpy(&CardDatabase[CARD_JUSTLUCKY].description, "3의 방어도를 얻습니다.");
//	strcpy(&CardDatabase[CARD_JUSTLUCKY].description_up, "5의 방어도를 얻습니다.");
//
//	// 14
//	initCard(CARD_SASHWHIP);
//	SetColorRarityType(CARD_SASHWHIP, PURPLE, COMMON, ATTACK);
//	CardDatabase[CARD_SASHWHIP].cost = 1;
//	CardDatabase[CARD_SASHWHIP].damage = 7;
//	SetUpgradedCardCDB(CARD_SASHWHIP, 0, 0, 3);
//	strcpy(&CardDatabase[CARD_SASHWHIP].name, "채찍질");
//	strcpy(&CardDatabase[CARD_SASHWHIP].description, "피해를 7 줍니다.");
//	strcpy(&CardDatabase[CARD_SASHWHIP].description_up, "피해를 10 줍니다.");
//
//	// 15
//	initCard(CARD_CARVEREALITY);
//	SetColorRarityType(CARD_CARVEREALITY, PURPLE, COMMON, SKILL);
//	CardDatabase[CARD_CARVEREALITY].cost = 1;
//	CardDatabase[CARD_CARVEREALITY].block = 6;
//	SetUpgradedCardCDB(CARD_CARVEREALITY, 0, 3, 0);
//	strcpy(&CardDatabase[CARD_CARVEREALITY].name, "현실 조각");
//	strcpy(&CardDatabase[CARD_CARVEREALITY].description, "6의 방어도를 얻습니다.");
//	strcpy(&CardDatabase[CARD_CARVEREALITY].description_up, "9의 방어도를 얻습니다.");
//
//	// 16
//	initCard(CARD_CONCLUDE);
//	SetColorRarityType(CARD_CONCLUDE, PURPLE, COMMON, SKILL);
//	CardDatabase[CARD_CONCLUDE].cost = 2;
//	CardDatabase[CARD_CONCLUDE].block = 10;
//	SetUpgradedCardCDB(CARD_CONCLUDE, 0, 4, 0);
//	strcpy(&CardDatabase[CARD_CONCLUDE].name, "결말");
//	strcpy(&CardDatabase[CARD_CONCLUDE].description, "10의 방어도를 얻습니다.");
//	strcpy(&CardDatabase[CARD_CONCLUDE].description_up, "14의 방어도를 얻습니다.");
//
//	// 17
//	initCard(CARD_FEARNOEVIL);
//	SetColorRarityType(CARD_FEARNOEVIL, PURPLE, COMMON, ATTACK);
//	CardDatabase[CARD_FEARNOEVIL].cost = 1;
//	CardDatabase[CARD_FEARNOEVIL].damage = 9;
//	SetUpgradedCardCDB(CARD_FEARNOEVIL, 0, 0, 3);
//	strcpy(&CardDatabase[CARD_FEARNOEVIL].name, "악마를 두려워 말라");
//	strcpy(&CardDatabase[CARD_FEARNOEVIL].description, "피해를 9 줍니다.");
//	strcpy(&CardDatabase[CARD_FEARNOEVIL].description_up, "피해를 12 줍니다.");
//
//	// 18
//	initCard(CARD_REACHHEAVEN);
//	SetColorRarityType(CARD_REACHHEAVEN, PURPLE, COMMON, SKILL);
//	CardDatabase[CARD_REACHHEAVEN].cost = 1;
//	CardDatabase[CARD_REACHHEAVEN].block = 7;
//	SetUpgradedCardCDB(CARD_REACHHEAVEN, 0, 3, 0);
//	strcpy(&CardDatabase[CARD_REACHHEAVEN].name, "천상에 닿다");
//	strcpy(&CardDatabase[CARD_REACHHEAVEN].description, "7의 방어도를 얻습니다.");
//	strcpy(&CardDatabase[CARD_REACHHEAVEN].description_up, "10의 방어도를 얻습니다.");
//
//	// 19
//	initCard(CARD_SANDSOFTIME);
//	SetColorRarityType(CARD_SANDSOFTIME, PURPLE, COMMON, SKILL);
//	CardDatabase[CARD_SANDSOFTIME].cost = 2;
//	CardDatabase[CARD_SANDSOFTIME].block = 9;
//	SetUpgradedCardCDB(CARD_SANDSOFTIME, 0, 4, 0);
//	strcpy(&CardDatabase[CARD_SANDSOFTIME].name, "시간의 모래");
//	strcpy(&CardDatabase[CARD_SANDSOFTIME].description, "9의 방어도를 얻습니다.");
//	strcpy(&CardDatabase[CARD_SANDSOFTIME].description_up, "13의 방어도를 얻습니다.");
//
//	// 20
//	initCard(CARD_SIGNATUREMOVE);
//	SetColorRarityType(CARD_SIGNATUREMOVE, PURPLE, COMMON, ATTACK);
//	CardDatabase[CARD_SIGNATUREMOVE].cost = 1;
//	CardDatabase[CARD_SIGNATUREMOVE].damage = 10;
//	SetUpgradedCardCDB(CARD_SIGNATUREMOVE, 0, 0, 4);
//	strcpy(&CardDatabase[CARD_SIGNATUREMOVE].name, "시그니처 무브");
//	strcpy(&CardDatabase[CARD_SIGNATUREMOVE].description, "피해를 10 줍니다.");
//	strcpy(&CardDatabase[CARD_SIGNATUREMOVE].description_up, "피해를 14 줍니다.");
//
//	// 21
//	initCard(CARD_TALKTOTHEHAND);
//	SetColorRarityType(CARD_TALKTOTHEHAND, PURPLE, COMMON, SKILL);
//	CardDatabase[CARD_TALKTOTHEHAND].cost = 1;
//	CardDatabase[CARD_TALKTOTHEHAND].block = 8;
//	SetUpgradedCardCDB(CARD_TALKTOTHEHAND, 0, 4, 0);
//	strcpy(&CardDatabase[CARD_TALKTOTHEHAND].name, "손과 대화하기");
//	strcpy(&CardDatabase[CARD_TALKTOTHEHAND].description, "8의 방어도를 얻습니다.");
//	strcpy(&CardDatabase[CARD_TALKTOTHEHAND].description_up, "12의 방어도를 얻습니다.");
//
//	// 22
//	initCard(CARD_TANTRUM);
//	SetColorRarityType(CARD_TANTRUM, PURPLE, COMMON, ATTACK);
//	CardDatabase[CARD_TANTRUM].cost = 1;
//	CardDatabase[CARD_TANTRUM].damage = 7;
//	SetUpgradedCardCDB(CARD_TANTRUM, 0, 0, 3);
//	strcpy(&CardDatabase[CARD_TANTRUM].name, "성냄");
//	strcpy(&CardDatabase[CARD_TANTRUM].description, "피해를 7 줍니다.");
//	strcpy(&CardDatabase[CARD_TANTRUM].description_up, "피해를 10 줍니다.");
//
//	// 23
//	initCard(CARD_WALLOP);
//	SetColorRarityType(CARD_WALLOP, PURPLE, COMMON, ATTACK);
//	CardDatabase[CARD_WALLOP].cost = 1;
//	CardDatabase[CARD_WALLOP].damage = 6;
//	SetUpgradedCardCDB(CARD_WALLOP, 0, 0, 3);
//	strcpy(&CardDatabase[CARD_WALLOP].name, "강타");
//	strcpy(&CardDatabase[CARD_WALLOP].description, "피해를 6 줍니다.");
//	strcpy(&CardDatabase[CARD_WALLOP].description_up, "피해를 9 줍니다.");
//
//	// 24
//	initCard(CARD_WEAVE);
//	SetColorRarityType(CARD_WEAVE, PURPLE, COMMON, SKILL);
//	CardDatabase[CARD_WEAVE].cost = 1;
//	CardDatabase[CARD_WEAVE].block = 7;
//	SetUpgradedCardCDB(CARD_WEAVE, 0, 3, 0);
//	strcpy(&CardDatabase[CARD_WEAVE].name, "짜기");
//	strcpy(&CardDatabase[CARD_WEAVE].description, "7의 방어도를 얻습니다.");
//	strcpy(&CardDatabase[CARD_WEAVE].description_up, "10의 방어도를 얻습니다.");
//
//	// 25
//	initCard(CARD_WHEELKICK);
//	SetColorRarityType(CARD_WHEELKICK, PURPLE, COMMON, ATTACK);
//	CardDatabase[CARD_WHEELKICK].cost = 1;
//	CardDatabase[CARD_WHEELKICK].damage = 8;
//	SetUpgradedCardCDB(CARD_WHEELKICK, 0, 0, 3);
//	strcpy(&CardDatabase[CARD_WHEELKICK].name, "휠 킥");
//	strcpy(&CardDatabase[CARD_WHEELKICK].description, "피해를 8 줍니다.");
//	strcpy(&CardDatabase[CARD_WHEELKICK].description_up, "피해를 11 줍니다.");
//
//	// 26
//	initCard(CARD_WINDMILLSTRIKE);
//	SetColorRarityType(CARD_WINDMILLSTRIKE, PURPLE, COMMON, ATTACK);
//	CardDatabase[CARD_WINDMILLSTRIKE].cost = 1;
//	CardDatabase[CARD_WINDMILLSTRIKE].damage = 9;
//	SetUpgradedCardCDB(CARD_WINDMILLSTRIKE, 0, 0, 3);
//	strcpy(&CardDatabase[CARD_WINDMILLSTRIKE].name, "풍차 공격");
//	strcpy(&CardDatabase[CARD_WINDMILLSTRIKE].description, "피해를 9 줍니다.");
//	strcpy(&CardDatabase[CARD_WINDMILLSTRIKE].description_up, "피해를 12 줍니다.");
//
//	// 27
//	initCard(CARD_BRILLIANCE);
//	SetColorRarityType(CARD_BRILLIANCE, PURPLE, UNCOMMON, SKILL);
//	CardDatabase[CARD_BRILLIANCE].cost = 1;
//	CardDatabase[CARD_BRILLIANCE].block = 5;
//	SetUpgradedCardCDB(CARD_BRILLIANCE, 0, 3, 0);
//	strcpy(&CardDatabase[CARD_BRILLIANCE].name, "명석함");
//	strcpy(&CardDatabase[CARD_BRILLIANCE].description, "5의 방어도를 얻고 다음 턴에 카드 1장을 추가로 뽑습니다.");
//	strcpy(&CardDatabase[CARD_BRILLIANCE].description_up, "8의 방어도를 얻고 다음 턴에 카드 1장을 추가로 뽑습니다.");
//
//	// 28
//	initCard(CARD_LESSONLEARNED);
//	SetColorRarityType(CARD_LESSONLEARNED, PURPLE, UNCOMMON, SKILL);
//	CardDatabase[CARD_LESSONLEARNED].cost = 1;
//	CardDatabase[CARD_LESSONLEARNED].block = 7;
//	SetUpgradedCardCDB(CARD_LESSONLEARNED, 0, 3, 0);
//	strcpy(&CardDatabase[CARD_LESSONLEARNED].name, "교훈");
//	strcpy(&CardDatabase[CARD_LESSONLEARNED].description, "7의 방어도를 얻고 다음 턴에 카드 1장을 추가로 뽑습니다.");
//	strcpy(&CardDatabase[CARD_LESSONLEARNED].description_up, "10의 방어도를 얻고 다음 턴에 카드 1장을 추가로 뽑습니다.");
//
//	// 29
//	initCard(CARD_RAGNAROK);
//	SetColorRarityType(CARD_RAGNAROK, PURPLE, UNCOMMON, ATTACK);
//	CardDatabase[CARD_RAGNAROK].cost = 2;
//	CardDatabase[CARD_RAGNAROK].damage = 21;
//	SetUpgradedCardCDB(CARD_RAGNAROK, 0, 0, 6);
//	strcpy(&CardDatabase[CARD_RAGNAROK].name, "라그나로크");
//	strcpy(&CardDatabase[CARD_RAGNAROK].description, "피해를 21 줍니다. 방어도를 잃습니다.");
//	strcpy(&CardDatabase[CARD_RAGNAROK].description_up, "피해를 27 줍니다. 방어도를 잃습니다.");
//
//	// 30
//	initCard(CARD_CRESCENDO);
//	SetColorRarityType(CARD_CRESCENDO, PURPLE, UNCOMMON, ATTACK);
//	CardDatabase[CARD_CRESCENDO].cost = 2;
//	CardDatabase[CARD_CRESCENDO].damage = 7;
//	SetUpgradedCardCDB(CARD_CRESCENDO, 0, 0, 3);
//	strcpy(&CardDatabase[CARD_CRESCENDO].name, "크레셴도");
//	strcpy(&CardDatabase[CARD_CRESCENDO].description, "피해를 7 줍니다. 공격 횟수가 증가합니다.");
//	strcpy(&CardDatabase[CARD_CRESCENDO].description_up, "피해를 10 줍니다. 공격 횟수가 증가합니다.");
//
//	// 31
//	initCard(CARD_EMPTYBODY);
//	SetColorRarityType(CARD_EMPTYBODY, PURPLE, UNCOMMON, SKILL);
//	CardDatabase[CARD_EMPTYBODY].cost = 1;
//	CardDatabase[CARD_EMPTYBODY].block = 8;
//	SetUpgradedCardCDB(CARD_EMPTYBODY, 0, 3, 0);
//	strcpy(&CardDatabase[CARD_EMPTYBODY].name, "빈 몸");
//	strcpy(&CardDatabase[CARD_EMPTYBODY].description, "8의 방어도를 얻습니다. 집중 상태에 진입합니다.");
//	strcpy(&CardDatabase[CARD_EMPTYBODY].description_up, "11의 방어도를 얻습니다. 집중 상태에 진입합니다.");
//
//	// 32
//	initCard(CARD_EVALUATE);
//	SetColorRarityType(CARD_EVALUATE, PURPLE, UNCOMMON, SKILL);
//	CardDatabase[CARD_EVALUATE].cost = 0;
//	SetUpgradedCardCDB(CARD_EVALUATE, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_EVALUATE].name, "평가");
//	strcpy(&CardDatabase[CARD_EVALUATE].description, "다음 카드의 비용을 0으로 만듭니다.");
//	strcpy(&CardDatabase[CARD_EVALUATE].description_up, "다음 카드의 비용을 0으로 만듭니다.");
//
//	// 33
//	initCard(CARD_HALT);
//	SetColorRarityType(CARD_HALT, PURPLE, UNCOMMON, SKILL);
//	CardDatabase[CARD_HALT].cost = 1;
//	CardDatabase[CARD_HALT].block = 5;
//	SetUpgradedCardCDB(CARD_HALT, 0, 3, 0);
//	strcpy(&CardDatabase[CARD_HALT].name, "멈춤");
//	strcpy(&CardDatabase[CARD_HALT].description, "5의 방어도를 얻습니다.");
//	strcpy(&CardDatabase[CARD_HALT].description_up, "8의 방어도를 얻습니다.");
//
//	// 34
//	initCard(CARD_PRESSUREPOINTS);
//	SetColorRarityType(CARD_PRESSUREPOINTS, PURPLE, UNCOMMON, SKILL);
//	CardDatabase[CARD_PRESSUREPOINTS].cost = 1;
//	CardDatabase[CARD_PRESSUREPOINTS].block = 6;
//	SetUpgradedCardCDB(CARD_PRESSUREPOINTS, 0, 3, 0);
//	strcpy(&CardDatabase[CARD_PRESSUREPOINTS].name, "압력점");
//	strcpy(&CardDatabase[CARD_PRESSUREPOINTS].description, "6의 방어도를 얻습니다.");
//	strcpy(&CardDatabase[CARD_PRESSUREPOINTS].description_up, "9의 방어도를 얻습니다.");
//
//	// 35
//	initCard(CARD_PROSTRATE);
//	SetColorRarityType(CARD_PROSTRATE, PURPLE, UNCOMMON, SKILL);
//	CardDatabase[CARD_PROSTRATE].cost = 2;
//	CardDatabase[CARD_PROSTRATE].block = 11;
//	SetUpgradedCardCDB(CARD_PROSTRATE, 0, 5, 0);
//	strcpy(&CardDatabase[CARD_PROSTRATE].name, "엎드리기");
//	strcpy(&CardDatabase[CARD_PROSTRATE].description, "11의 방어도를 얻습니다.");
//	strcpy(&CardDatabase[CARD_PROSTRATE].description_up, "16의 방어도를 얻습니다.");
//
//	// 36
//	initCard(CARD_PROTECT);
//	SetColorRarityType(CARD_PROTECT, PURPLE, UNCOMMON, SKILL);
//	CardDatabase[CARD_PROTECT].cost = 1;
//	CardDatabase[CARD_PROTECT].block = 7;
//	SetUpgradedCardCDB(CARD_PROTECT, 0, 3, 0);
//	strcpy(&CardDatabase[CARD_PROTECT].name, "보호");
//	strcpy(&CardDatabase[CARD_PROTECT].description, "7의 방어도를 얻습니다.");
//	strcpy(&CardDatabase[CARD_PROTECT].description_up, "10의 방어도를 얻습니다.");
//
//	// 37
//	initCard(CARD_THIRDEYE);
//	SetColorRarityType(CARD_THIRDEYE, PURPLE, UNCOMMON, SKILL);
//	CardDatabase[CARD_THIRDEYE].cost = 1;
//	CardDatabase[CARD_THIRDEYE].block = 7;
//	SetUpgradedCardCDB(CARD_THIRDEYE, 0, 3, 0);
//	strcpy(&CardDatabase[CARD_THIRDEYE].name, "제3의 눈");
//	strcpy(&CardDatabase[CARD_THIRDEYE].description, "7의 방어도를 얻고 카드 1장을 뽑습니다.");
//	strcpy(&CardDatabase[CARD_THIRDEYE].description_up, "10의 방어도를 얻고 카드 1장을 뽑습니다.");
//
//	// 38
//	initCard(CARD_TRANQUILITY);
//	SetColorRarityType(CARD_TRANQUILITY, PURPLE, UNCOMMON, SKILL);
//	CardDatabase[CARD_TRANQUILITY].cost = 1;
//	CardDatabase[CARD_TRANQUILITY].block = 8;
//	SetUpgradedCardCDB(CARD_TRANQUILITY, 0, 3, 0);
//	strcpy(&CardDatabase[CARD_TRANQUILITY].name, "평온");
//	strcpy(&CardDatabase[CARD_TRANQUILITY].description, "8의 방어도를 얻습니다.");
//	strcpy(&CardDatabase[CARD_TRANQUILITY].description_up, "11의 방어도를 얻습니다.");
//
//	// 39
//	initCard(CARD_COLLECT);
//	SetColorRarityType(CARD_COLLECT, PURPLE, UNCOMMON, SKILL);
//	CardDatabase[CARD_COLLECT].cost = 1;
//	SetUpgradedCardCDB(CARD_COLLECT, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_COLLECT].name, "수집");
//	strcpy(&CardDatabase[CARD_COLLECT].description, "에너지를 1 얻습니다.");
//	strcpy(&CardDatabase[CARD_COLLECT].description_up, "에너지를 1 얻습니다.");
//
//	// 40
//	initCard(CARD_DECEIVEREALITY);
//	SetColorRarityType(CARD_DECEIVEREALITY, PURPLE, RARE, SKILL);
//	CardDatabase[CARD_DECEIVEREALITY].cost = 2;
//	CardDatabase[CARD_DECEIVEREALITY].block = 13;
//	SetUpgradedCardCDB(CARD_DECEIVEREALITY, 0, 4, 0);
//	strcpy(&CardDatabase[CARD_DECEIVEREALITY].name, "현실 속임수");
//	strcpy(&CardDatabase[CARD_DECEIVEREALITY].description, "13의 방어도를 얻습니다.");
//	strcpy(&CardDatabase[CARD_DECEIVEREALITY].description_up, "17의 방어도를 얻습니다.");
//
//	// 41
//	initCard(CARD_EMPTYMIND);
//	SetColorRarityType(CARD_EMPTYMIND, PURPLE, RARE, SKILL);
//	CardDatabase[CARD_EMPTYMIND].cost = 0;
//	SetUpgradedCardCDB(CARD_EMPTYMIND, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_EMPTYMIND].name, "빈 마음");
//	strcpy(&CardDatabase[CARD_EMPTYMIND].description, "다음 공격 카드의 피해를 3 배로 만듭니다.");
//	strcpy(&CardDatabase[CARD_EMPTYMIND].description_up, "다음 공격 카드의 피해를 3 배로 만듭니다.");
//
//	// 42
//	initCard(CARD_FOREIGNINFLUENCE);
//	SetColorRarityType(CARD_FOREIGNINFLUENCE, PURPLE, RARE, SKILL);
//	CardDatabase[CARD_FOREIGNINFLUENCE].cost = 2;
//	CardDatabase[CARD_FOREIGNINFLUENCE].block = 10;
//	SetUpgradedCardCDB(CARD_FOREIGNINFLUENCE, 0, 4, 0);
//	strcpy(&CardDatabase[CARD_FOREIGNINFLUENCE].name, "외부 영향");
//	strcpy(&CardDatabase[CARD_FOREIGNINFLUENCE].description, "10의 방어도를 얻습니다.");
//	strcpy(&CardDatabase[CARD_FOREIGNINFLUENCE].description_up, "14의 방어도를 얻습니다.");
//
//	// 43
//	initCard(CARD_INDIGNATION);
//	SetColorRarityType(CARD_INDIGNATION, PURPLE, RARE, ATTACK);
//	CardDatabase[CARD_INDIGNATION].cost = 1;
//	CardDatabase[CARD_INDIGNATION].damage = 14;
//	SetUpgradedCardCDB(CARD_INDIGNATION, 0, 0, 5);
//	strcpy(&CardDatabase[CARD_INDIGNATION].name, "분노");
//	strcpy(&CardDatabase[CARD_INDIGNATION].description, "피해를 14 줍니다.");
//	strcpy(&CardDatabase[CARD_INDIGNATION].description_up, "피해를 19 줍니다.");
//
//	// 44
//	initCard(CARD_INNERPEACE);
//	SetColorRarityType(CARD_INNERPEACE, PURPLE, RARE, SKILL);
//	CardDatabase[CARD_INNERPEACE].cost = 1;
//	CardDatabase[CARD_INNERPEACE].block = 11;
//	SetUpgradedCardCDB(CARD_INNERPEACE, 0, 5, 0);
//	strcpy(&CardDatabase[CARD_INNERPEACE].name, "내면의 평화");
//	strcpy(&CardDatabase[CARD_INNERPEACE].description, "11의 방어도를 얻습니다.");
//	strcpy(&CardDatabase[CARD_INNERPEACE].description_up, "16의 방어도를 얻습니다.");
//
//	// 45
//	initCard(CARD_MEDITATE);
//	SetColorRarityType(CARD_MEDITATE, PURPLE, RARE, SKILL);
//	CardDatabase[CARD_MEDITATE].cost = 1;
//	CardDatabase[CARD_MEDITATE].block = 5;
//	SetUpgradedCardCDB(CARD_MEDITATE, 0, 3, 0);
//	strcpy(&CardDatabase[CARD_MEDITATE].name, "명상");
//	strcpy(&CardDatabase[CARD_MEDITATE].description, "5의 방어도를 얻고 카드를 한 장 버립니다.");
//	strcpy(&CardDatabase[CARD_MEDITATE].description_up, "8의 방어도를 얻고 카드를 한 장 버립니다.");
//
//	// 46
//	initCard(CARD_PERSEVERANCE);
//	SetColorRarityType(CARD_PERSEVERANCE, PURPLE, RARE, SKILL);
//	CardDatabase[CARD_PERSEVERANCE].cost = 2;
//	CardDatabase[CARD_PERSEVERANCE].block = 14;
//	SetUpgradedCardCDB(CARD_PERSEVERANCE, 0, 5, 0);
//	strcpy(&CardDatabase[CARD_PERSEVERANCE].name, "인내");
//	strcpy(&CardDatabase[CARD_PERSEVERANCE].description, "14의 방어도를 얻습니다.");
//	strcpy(&CardDatabase[CARD_PERSEVERANCE].description_up, "19의 방어도를 얻습니다.");
//
//	// 47
//	initCard(CARD_PRAY);
//	SetColorRarityType(CARD_PRAY, PURPLE, RARE, SKILL);
//	CardDatabase[CARD_PRAY].cost = 1;
//	CardDatabase[CARD_PRAY].block = 6;
//	SetUpgradedCardCDB(CARD_PRAY, 0, 3, 0);
//	strcpy(&CardDatabase[CARD_PRAY].name, "기도");
//	strcpy(&CardDatabase[CARD_PRAY].description, "6의 방어도를 얻고 에너지를 1 얻습니다.");
//	strcpy(&CardDatabase[CARD_PRAY].description_up, "9의 방어도를 얻고 에너지를 1 얻습니다.");
//
//	// 48
//	initCard(CARD_SANCTITY);
//	SetColorRarityType(CARD_SANCTITY, PURPLE, RARE, SKILL);
//	CardDatabase[CARD_SANCTITY].cost = 2;
//	CardDatabase[CARD_SANCTITY].block = 10;
//	SetUpgradedCardCDB(CARD_SANCTITY, 0, 4, 0);
//	strcpy(&CardDatabase[CARD_SANCTITY].name, "성스러움");
//	strcpy(&CardDatabase[CARD_SANCTITY].description, "10의 방어도를 얻고 카드 1장을 뽑습니다.");
//	strcpy(&CardDatabase[CARD_SANCTITY].description_up, "14의 방어도를 얻고 카드 1장을 뽑습니다.");
//
//	// 49
//	initCard(CARD_SIMMERINGFURY);
//	SetColorRarityType(CARD_SIMMERINGFURY, PURPLE, RARE, ATTACK);
//	CardDatabase[CARD_SIMMERINGFURY].cost = 2;
//	CardDatabase[CARD_SIMMERINGFURY].damage = 18;
//	SetUpgradedCardCDB(CARD_SIMMERINGFURY, 0, 0, 5);
//	strcpy(&CardDatabase[CARD_SIMMERINGFURY].name, "끓어오르는 분노");
//	strcpy(&CardDatabase[CARD_SIMMERINGFURY].description, "피해를 18 줍니다.");
//	strcpy(&CardDatabase[CARD_SIMMERINGFURY].description_up, "피해를 23 줍니다.");
//
//	// 50
//	initCard(CARD_SWIVEL);
//	SetColorRarityType(CARD_SWIVEL, PURPLE, RARE, SKILL);
//	CardDatabase[CARD_SWIVEL].cost = 1;
//	CardDatabase[CARD_SWIVEL].block = 7;
//	SetUpgradedCardCDB(CARD_SWIVEL, 0, 3, 0);
//	strcpy(&CardDatabase[CARD_SWIVEL].name, "회전");
//	strcpy(&CardDatabase[CARD_SWIVEL].description, "7의 방어도를 얻습니다.");
//	strcpy(&CardDatabase[CARD_SWIVEL].description_up, "10의 방어도를 얻습니다.");
//
//	// 51
//	initCard(CARD_WAVEOFTHEHAND);
//	SetColorRarityType(CARD_WAVEOFTHEHAND, PURPLE, RARE, SKILL);
//	CardDatabase[CARD_WAVEOFTHEHAND].cost = 1;
//	CardDatabase[CARD_WAVEOFTHEHAND].block = 6;
//	SetUpgradedCardCDB(CARD_WAVEOFTHEHAND, 0, 3, 0);
//	strcpy(&CardDatabase[CARD_WAVEOFTHEHAND].name, "손의 파동");
//	strcpy(&CardDatabase[CARD_WAVEOFTHEHAND].description, "6의 방어도를 얻습니다.");
//	strcpy(&CardDatabase[CARD_WAVEOFTHEHAND].description_up, "9의 방어도를 얻습니다.");
//
//	// 52
//	initCard(CARD_WORSHIP);
//	SetColorRarityType(CARD_WORSHIP, PURPLE, RARE, SKILL);
//	CardDatabase[CARD_WORSHIP].cost = 1;
//	CardDatabase[CARD_WORSHIP].block = 8;
//	SetUpgradedCardCDB(CARD_WORSHIP, 0, 3, 0);
//	strcpy(&CardDatabase[CARD_WORSHIP].name, "예배");
//	strcpy(&CardDatabase[CARD_WORSHIP].description, "8의 방어도를 얻습니다.");
//	strcpy(&CardDatabase[CARD_WORSHIP].description_up, "11의 방어도를 얻습니다.");
//
//	// 53
//	initCard(CARD_WREATHOFFLAME);
//	SetColorRarityType(CARD_WREATHOFFLAME, PURPLE, RARE, SKILL);
//	CardDatabase[CARD_WREATHOFFLAME].cost = 2;
//	CardDatabase[CARD_WREATHOFFLAME].block = 12;
//	SetUpgradedCardCDB(CARD_WREATHOFFLAME, 0, 5, 0);
//	strcpy(&CardDatabase[CARD_WREATHOFFLAME].name, "불꽃의 화환");
//	strcpy(&CardDatabase[CARD_WREATHOFFLAME].description, "12의 방어도를 얻습니다.");
//	strcpy(&CardDatabase[CARD_WREATHOFFLAME].description_up, "17의 방어도를 얻습니다.");
//
//	// 54
//	initCard(CARD_WREATHOFWATER);
//	SetColorRarityType(CARD_WREATHOFWATER, PURPLE, RARE, SKILL);
//	CardDatabase[CARD_WREATHOFWATER].cost = 2;
//	CardDatabase[CARD_WREATHOFWATER].block = 11;
//	SetUpgradedCardCDB(CARD_WREATHOFWATER, 0, 5, 0);
//	strcpy(&CardDatabase[CARD_WREATHOFWATER].name, "물의 화환");
//	strcpy(&CardDatabase[CARD_WREATHOFWATER].description, "11의 방어도를 얻습니다.");
//	strcpy(&CardDatabase[CARD_WREATHOFWATER].description_up, "16의 방어도를 얻습니다.");
//
//	// 55
//	initCard(CARD_WREATHOFAIR);
//	SetColorRarityType(CARD_WREATHOFAIR, PURPLE, RARE, SKILL);
//	CardDatabase[CARD_WREATHOFAIR].cost = 2;
//	CardDatabase[CARD_WREATHOFAIR].block = 11;
//	SetUpgradedCardCDB(CARD_WREATHOFAIR, 0, 5, 0);
//	strcpy(&CardDatabase[CARD_WREATHOFAIR].name, "바람의 화환");
//	strcpy(&CardDatabase[CARD_WREATHOFAIR].description, "11의 방어도를 얻습니다.");
//	strcpy(&CardDatabase[CARD_WREATHOFAIR].description_up, "16의 방어도를 얻습니다.");
//
//	// 56
//	initCard(CARD_WINDMILLSTRIKE);
//	SetColorRarityType(CARD_WINDMILLSTRIKE, PURPLE, RARE, ATTACK);
//	CardDatabase[CARD_WINDMILLSTRIKE].cost = 1;
//	CardDatabase[CARD_WINDMILLSTRIKE].damage = 9;
//	SetUpgradedCardCDB(CARD_WINDMILLSTRIKE, 0, 0, 3);
//	strcpy(&CardDatabase[CARD_WINDMILLSTRIKE].name, "풍차 공격");
//	strcpy(&CardDatabase[CARD_WINDMILLSTRIKE].description, "피해를 9 줍니다.");
//	strcpy(&CardDatabase[CARD_WINDMILLSTRIKE].description_up, "피해를 12 줍니다.");
//
//	// 57
//	initCard(CARD_WITHER);
//	SetColorRarityType(CARD_WITHER, PURPLE, RARE, ATTACK);
//	CardDatabase[CARD_WITHER].cost = 1;
//	CardDatabase[CARD_WITHER].damage = 11;
//	SetUpgradedCardCDB(CARD_WITHER, 0, 0, 4);
//	strcpy(&CardDatabase[CARD_WITHER].name, "시들기");
//	strcpy(&CardDatabase[CARD_WITHER].description, "피해를 11 줍니다. 적의 공격력을 감소시킵니다.");
//	strcpy(&CardDatabase[CARD_WITHER].description_up, "피해를 15 줍니다. 적의 공격력을 감소시킵니다.");
//
//	// 58
//	initCard(CARD_WILLOFWISP);
//	SetColorRarityType(CARD_WILLOFWISP, PURPLE, RARE, SKILL);
//	CardDatabase[CARD_WILLOFWISP].cost = 2;
//	CardDatabase[CARD_WILLOFWISP].block = 12;
//	SetUpgradedCardCDB(CARD_WILLOFWISP, 0, 5, 0);
//	strcpy(&CardDatabase[CARD_WILLOFWISP].name, "위습의 의지");
//	strcpy(&CardDatabase[CARD_WILLOFWISP].description, "12의 방어도를 얻습니다.");
//	strcpy(&CardDatabase[CARD_WILLOFWISP].description_up, "17의 방어도를 얻습니다.");
//
//	// 59
//	initCard(CARD_YOGASLEEP);
//	SetColorRarityType(CARD_YOGASLEEP, PURPLE, RARE, SKILL);
//	CardDatabase[CARD_YOGASLEEP].cost = 3;
//	CardDatabase[CARD_YOGASLEEP].block = 15;
//	SetUpgradedCardCDB(CARD_YOGASLEEP, 0, 6, 0);
//	strcpy(&CardDatabase[CARD_YOGASLEEP].name, "요가 수면");
//	strcpy(&CardDatabase[CARD_YOGASLEEP].description, "15의 방어도를 얻고 다음 턴 평정 상태에 진입합니다.");
//	strcpy(&CardDatabase[CARD_YOGASLEEP].description_up, "21의 방어도를 얻고 다음 턴 평정 상태에 진입합니다.");
//
//	// 60
//	initCard(CARD_BERSERKERSPIRIT);
//	SetColorRarityType(CARD_BERSERKERSPIRIT, PURPLE, RARE, SKILL);
//	CardDatabase[CARD_BERSERKERSPIRIT].cost = 2;
//	CardDatabase[CARD_BERSERKERSPIRIT].block = 9;
//	SetUpgradedCardCDB(CARD_BERSERKERSPIRIT, 0, 4, 0);
//	strcpy(&CardDatabase[CARD_BERSERKERSPIRIT].name, "광전사의 정신");
//	strcpy(&CardDatabase[CARD_BERSERKERSPIRIT].description, "9의 방어도를 얻고 공격력이 증가합니다.");
//	strcpy(&CardDatabase[CARD_BERSERKERSPIRIT].description_up, "13의 방어도를 얻고 공격력이 증가합니다.");
//
//	// 61
//	initCard(CARD_HOLYINSPIRATION);
//	SetColorRarityType(CARD_HOLYINSPIRATION, PURPLE, RARE, SKILL);
//	CardDatabase[CARD_HOLYINSPIRATION].cost = 2;
//	CardDatabase[CARD_HOLYINSPIRATION].block = 10;
//	SetUpgradedCardCDB(CARD_HOLYINSPIRATION, 0, 4, 0);
//	strcpy(&CardDatabase[CARD_HOLYINSPIRATION].name, "신성한 영감");
//	strcpy(&CardDatabase[CARD_HOLYINSPIRATION].description, "10의 방어도를 얻고 카드 2장을 뽑습니다.");
//	strcpy(&CardDatabase[CARD_HOLYINSPIRATION].description_up, "14의 방어도를 얻고 카드 2장을 뽑습니다.");
//
//	// 62
//	initCard(CARD_PRIMECOMMAND);
//	SetColorRarityType(CARD_PRIMECOMMAND, PURPLE, RARE, SKILL);
//	CardDatabase[CARD_PRIMECOMMAND].cost = 3;
//	CardDatabase[CARD_PRIMECOMMAND].block = 14;
//	SetUpgradedCardCDB(CARD_PRIMECOMMAND, 0, 5, 0);
//	strcpy(&CardDatabase[CARD_PRIMECOMMAND].name, "최고 명령");
//	strcpy(&CardDatabase[CARD_PRIMECOMMAND].description, "14의 방어도를 얻고 다음 공격 카드의 피해가 증가합니다.");
//	strcpy(&CardDatabase[CARD_PRIMECOMMAND].description_up, "19의 방어도를 얻고 다음 공격 카드의 피해가 증가합니다.");
//
//	// 63
//	initCard(CARD_MAELSTROM);
//	SetColorRarityType(CARD_MAELSTROM, PURPLE, RARE, ATTACK);
//	CardDatabase[CARD_MAELSTROM].cost = 2;
//	CardDatabase[CARD_MAELSTROM].damage = 20;
//	SetUpgradedCardCDB(CARD_MAELSTROM, 0, 0, 6);
//	strcpy(&CardDatabase[CARD_MAELSTROM].name, "소용돌이");
//	strcpy(&CardDatabase[CARD_MAELSTROM].description, "피해를 20 줍니다.");
//	strcpy(&CardDatabase[CARD_MAELSTROM].description_up, "피해를 26 줍니다.");
//
//	// 64
//	initCard(CARD_BLINK);
//	SetColorRarityType(CARD_BLINK, PURPLE, RARE, SKILL);
//	CardDatabase[CARD_BLINK].cost = 1;
//	SetUpgradedCardCDB(CARD_BLINK, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_BLINK].name, "순간이동");
//	strcpy(&CardDatabase[CARD_BLINK].description, "다음 공격 카드의 피해를 두 배로 만듭니다.");
//	strcpy(&CardDatabase[CARD_BLINK].description_up, "다음 공격 카드의 피해를 두 배로 만듭니다.");
//
//	// 65
//	initCard(CARD_EYEFORAN_EYE);
//	SetColorRarityType(CARD_EYEFORAN_EYE, PURPLE, RARE, ATTACK);
//	CardDatabase[CARD_EYEFORAN_EYE].cost = 1;
//	CardDatabase[CARD_EYEFORAN_EYE].damage = 10;
//	SetUpgradedCardCDB(CARD_EYEFORAN_EYE, 0, 0, 5);
//	strcpy(&CardDatabase[CARD_EYEFORAN_EYE].name, "눈에는 눈");
//	strcpy(&CardDatabase[CARD_EYEFORAN_EYE].description, "피해를 10 줍니다.");
//	strcpy(&CardDatabase[CARD_EYEFORAN_EYE].description_up, "피해를 15 줍니다.");
//
//	// 66
//	initCard(CARD_FANGS_OF_THE_IDOL);
//	SetColorRarityType(CARD_FANGS_OF_THE_IDOL, PURPLE, RARE, ATTACK);
//	CardDatabase[CARD_FANGS_OF_THE_IDOL].cost = 2;
//	CardDatabase[CARD_FANGS_OF_THE_IDOL].damage = 16;
//	SetUpgradedCardCDB(CARD_FANGS_OF_THE_IDOL, 0, 0, 5);
//	strcpy(&CardDatabase[CARD_FANGS_OF_THE_IDOL].name, "우상 이빨");
//	strcpy(&CardDatabase[CARD_FANGS_OF_THE_IDOL].description, "피해를 16 줍니다.");
//	strcpy(&CardDatabase[CARD_FANGS_OF_THE_IDOL].description_up, "피해를 21 줍니다.");
//
//	// 67
//	initCard(CARD_JUDGMENT);
//	SetColorRarityType(CARD_JUDGMENT, PURPLE, RARE, ATTACK);
//	CardDatabase[CARD_JUDGMENT].cost = 1;
//	CardDatabase[CARD_JUDGMENT].damage = 15;
//	SetUpgradedCardCDB(CARD_JUDGMENT, 0, 0, 6);
//	strcpy(&CardDatabase[CARD_JUDGMENT].name, "심판");
//	strcpy(&CardDatabase[CARD_JUDGMENT].description, "피해를 15 줍니다.");
//	strcpy(&CardDatabase[CARD_JUDGMENT].description_up, "피해를 21 줍니다.");
//
//	// 68
//	initCard(CARD_RADIANCE);
//	SetColorRarityType(CARD_RADIANCE, PURPLE, RARE, SKILL);
//	CardDatabase[CARD_RADIANCE].cost = 2;
//	CardDatabase[CARD_RADIANCE].block = 13;
//	SetUpgradedCardCDB(CARD_RADIANCE, 0, 4, 0);
//	strcpy(&CardDatabase[CARD_RADIANCE].name, "광휘");
//	strcpy(&CardDatabase[CARD_RADIANCE].description, "13의 방어도를 얻습니다.");
//	strcpy(&CardDatabase[CARD_RADIANCE].description_up, "17의 방어도를 얻습니다.");
//
//	// 69
//	initCard(CARD_RAVENSGIFT);
//	SetColorRarityType(CARD_RAVENSGIFT, PURPLE, RARE, SKILL);
//	CardDatabase[CARD_RAVENSGIFT].cost = 1;
//	CardDatabase[CARD_RAVENSGIFT].block = 8;
//	SetUpgradedCardCDB(CARD_RAVENSGIFT, 0, 3, 0);
//	strcpy(&CardDatabase[CARD_RAVENSGIFT].name, "까마귀의 선물");
//	strcpy(&CardDatabase[CARD_RAVENSGIFT].description, "8의 방어도를 얻습니다.");
//	strcpy(&CardDatabase[CARD_RAVENSGIFT].description_up, "11의 방어도를 얻습니다.");
//
//	// 70
//	initCard(CARD_WEAVESOFTHEHAND);
//	SetColorRarityType(CARD_WEAVESOFTHEHAND, PURPLE, RARE, SKILL);
//	CardDatabase[CARD_WEAVESOFTHEHAND].cost = 1;
//	CardDatabase[CARD_WEAVESOFTHEHAND].block = 9;
//	SetUpgradedCardCDB(CARD_WEAVESOFTHEHAND, 0, 4, 0);
//	strcpy(&CardDatabase[CARD_WEAVESOFTHEHAND].name, "손의 짜임새");
//	strcpy(&CardDatabase[CARD_WEAVESOFTHEHAND].description, "9의 방어도를 얻습니다.");
//	strcpy(&CardDatabase[CARD_WEAVESOFTHEHAND].description_up, "13의 방어도를 얻습니다.");
//
//	// 71
//	initCard(CARD_WITHER);
//	SetColorRarityType(CARD_WITHER, PURPLE, RARE, ATTACK);
//	CardDatabase[CARD_WITHER].cost = 1;
//	CardDatabase[CARD_WITHER].damage = 11;
//	SetUpgradedCardCDB(CARD_WITHER, 0, 0, 4);
//	strcpy(&CardDatabase[CARD_WITHER].name, "시들기");
//	strcpy(&CardDatabase[CARD_WITHER].description, "피해를 11 줍니다. 적의 공격력을 감소시킵니다.");
//	strcpy(&CardDatabase[CARD_WITHER].description_up, "피해를 15 줍니다. 적의 공격력을 감소시킵니다.");
//
//	// 72
//	initCard(CARD_WILLOFWISP);
//	SetColorRarityType(CARD_WILLOFWISP, PURPLE, RARE, SKILL);
//	CardDatabase[CARD_WILLOFWISP].cost = 2;
//	CardDatabase[CARD_WILLOFWISP].block = 12;
//	SetUpgradedCardCDB(CARD_WILLOFWISP, 0, 5, 0);
//	strcpy(&CardDatabase[CARD_WILLOFWISP].name, "위습의 의지");
//	strcpy(&CardDatabase[CARD_WILLOFWISP].description, "12의 방어도를 얻습니다.");
//	strcpy(&CardDatabase[CARD_WILLOFWISP].description_up, "17의 방어도를 얻습니다.");
//
//	// 73
//	initCard(CARD_YOGASLEEP);
//	SetColorRarityType(CARD_YOGASLEEP, PURPLE, RARE, SKILL);
//	CardDatabase[CARD_YOGASLEEP].cost = 3;
//	CardDatabase[CARD_YOGASLEEP].block = 15;
//	SetUpgradedCardCDB(CARD_YOGASLEEP, 0, 6, 0);
//	strcpy(&CardDatabase[CARD_YOGASLEEP].name, "요가 수면");
//	strcpy(&CardDatabase[CARD_YOGASLEEP].description, "15의 방어도를 얻고 다음 턴 평정 상태에 진입합니다.");
//	strcpy(&CardDatabase[CARD_YOGASLEEP].description_up, "21의 방어도를 얻고 다음 턴 평정 상태에 진입합니다.");
//
//	// 74
//	initCard(CARD_ZEN);
//	SetColorRarityType(CARD_ZEN, PURPLE, RARE, SKILL);
//	CardDatabase[CARD_ZEN].cost = 2;
//	CardDatabase[CARD_ZEN].block = 12;
//	SetUpgradedCardCDB(CARD_ZEN, 0, 5, 0);
//	strcpy(&CardDatabase[CARD_ZEN].name, "선");
//	strcpy(&CardDatabase[CARD_ZEN].description, "12의 방어도를 얻습니다.");
//	strcpy(&CardDatabase[CARD_ZEN].description_up, "17의 방어도를 얻습니다.");
//
//	initCard(CARD_BITE);
//	SetColorRarityType(CARD_BITE, COLORLESS, COMMON, ATTACK);
//	CardDatabase[CARD_BITE].cost = 1;
//	SetUpgradedCardCDB(CARD_BITE, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_BITE].name, "물어뜯기");
//	strcpy(&CardDatabase[CARD_BITE].description, "적에게 피해를 7 줍니다. 치유를 2 합니다.");
//	strcpy(&CardDatabase[CARD_BITE].description_up, "적에게 피해를 8 줍니다. 치유를 3 합니다.");
//
//	initCard(CARD_DAZED);
//	SetColorRarityType(CARD_DAZED, COLORLESS, COMMON, STATUS);
//	CardDatabase[CARD_DAZED].cost = -2;
//	SetUpgradedCardCDB(CARD_DAZED, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_DAZED].name, "혼란");
//	strcpy(&CardDatabase[CARD_DAZED].description, "허상. 카드를 낼 수 없습니다.");
//	strcpy(&CardDatabase[CARD_DAZED].description_up, "허상. 카드를 낼 수 없습니다.");
//
//	initCard(CARD_SLIMED);
//	SetColorRarityType(CARD_SLIMED, COLORLESS, COMMON, STATUS);
//	CardDatabase[CARD_SLIMED].cost = 1;
//	SetUpgradedCardCDB(CARD_SLIMED, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_SLIMED].name, "점액");
//	strcpy(&CardDatabase[CARD_SLIMED].description, "종료. 카드 뽑기를 1 합니다.");
//	strcpy(&CardDatabase[CARD_SLIMED].description_up, "종료. 카드 뽑기를 1 합니다.");
//
//	initCard(CARD_VOID);
//	SetColorRarityType(CARD_VOID, COLORLESS, COMMON, STATUS);
//	CardDatabase[CARD_VOID].cost = -2;
//	SetUpgradedCardCDB(CARD_VOID, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_VOID].name, "공허");
//	strcpy(&CardDatabase[CARD_VOID].description, "허상. 손에서 다른 카드가 재생될 때 에너지를 1 잃습니다.");
//	strcpy(&CardDatabase[CARD_VOID].description_up, "허상. 손에서 다른 카드가 재생될 때 에너지를 1 잃습니다.");
//
//	initCard(CARD_WOUND);
//	SetColorRarityType(CARD_WOUND, COLORLESS, COMMON, STATUS);
//	CardDatabase[CARD_WOUND].cost = -2;
//	SetUpgradedCardCDB(CARD_WOUND, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_WOUND].name, "상처");
//	strcpy(&CardDatabase[CARD_WOUND].description, "허상. 카드를 낼 수 없습니다.");
//	strcpy(&CardDatabase[CARD_WOUND].description_up, "허상. 카드를 낼 수 없습니다.");
//
//	initCard(CARD_BURN);
//	SetColorRarityType(CARD_BURN, COLORLESS, COMMON, STATUS);
//	CardDatabase[CARD_BURN].cost = -2;
//	SetUpgradedCardCDB(CARD_BURN, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_BURN].name, "화상");
//	strcpy(&CardDatabase[CARD_BURN].description, "허상. 턴 종료 시 피해를 2 받습니다.");
//	strcpy(&CardDatabase[CARD_BURN].description_up, "허상. 턴 종료 시 피해를 4 받습니다.");
//
//	// 무색 카드 - 언커먼
//	initCard(CARD_BLIND);
//	SetColorRarityType(CARD_BLIND, COLORLESS, UNCOMMON, CURSE);
//	CardDatabase[CARD_BLIND].cost = -2;
//	SetUpgradedCardCDB(CARD_BLIND, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_BLIND].name, "실명");
//	strcpy(&CardDatabase[CARD_BLIND].description, "저주. 카드를 낼 수 없습니다.");
//	strcpy(&CardDatabase[CARD_BLIND].description_up, "저주. 카드를 낼 수 없습니다.");
//
//	initCard(CARD_DECAY);
//	SetColorRarityType(CARD_DECAY, COLORLESS, UNCOMMON, CURSE);
//	CardDatabase[CARD_DECAY].cost = -2;
//	SetUpgradedCardCDB(CARD_DECAY, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_DECAY].name, "부패");
//	strcpy(&CardDatabase[CARD_DECAY].description, "저주. 턴 종료 시 민첩을 2 잃습니다.");
//	strcpy(&CardDatabase[CARD_DECAY].description_up, "저주. 턴 종료 시 민첩을 3 잃습니다.");
//
//	initCard(CARD_DOUBT);
//	SetColorRarityType(CARD_DOUBT, COLORLESS, UNCOMMON, CURSE);
//	CardDatabase[CARD_DOUBT].cost = -2;
//	SetUpgradedCardCDB(CARD_DOUBT, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_DOUBT].name, "의심");
//	strcpy(&CardDatabase[CARD_DOUBT].description, "저주. 약화를 1 얻습니다.");
//	strcpy(&CardDatabase[CARD_DOUBT].description_up, "저주. 약화를 2 얻습니다.");
//
//	initCard(CARD_INJURY);
//	SetColorRarityType(CARD_INJURY, COLORLESS, UNCOMMON, CURSE);
//	CardDatabase[CARD_INJURY].cost = -2;
//	SetUpgradedCardCDB(CARD_INJURY, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_INJURY].name, "부상");
//	strcpy(&CardDatabase[CARD_INJURY].description, "저주. 카드를 낼 수 없습니다.");
//	strcpy(&CardDatabase[CARD_INJURY].description_up, "저주. 카드를 낼 수 없습니다.");
//
//	initCard(CARD_NORMALITY);
//	SetColorRarityType(CARD_NORMALITY, COLORLESS, UNCOMMON, CURSE);
//	CardDatabase[CARD_NORMALITY].cost = -2;
//	SetUpgradedCardCDB(CARD_NORMALITY, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_NORMALITY].name, "평범함");
//	strcpy(&CardDatabase[CARD_NORMALITY].description, "저주. 턴마다 3장을 초과하여 카드를 낼 수 없습니다.");
//	strcpy(&CardDatabase[CARD_NORMALITY].description_up, "저주. 턴마다 2장을 초과하여 카드를 낼 수 없습니다.");
//
//	initCard(CARD_PAIN);
//	SetColorRarityType(CARD_PAIN, COLORLESS, UNCOMMON, CURSE);
//	CardDatabase[CARD_PAIN].cost = -2;
//	SetUpgradedCardCDB(CARD_PAIN, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_PAIN].name, "고통");
//	strcpy(&CardDatabase[CARD_PAIN].description, "저주. 카드를 낼 때마다 체력을 1 잃습니다.");
//	strcpy(&CardDatabase[CARD_PAIN].description_up, "저주. 카드를 낼 때마다 체력을 2 잃습니다.");
//
//	initCard(CARD_PARASITE);
//	SetColorRarityType(CARD_PARASITE, COLORLESS, UNCOMMON, CURSE);
//	CardDatabase[CARD_PARASITE].cost = -2;
//	SetUpgradedCardCDB(CARD_PARASITE, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_PARASITE].name, "기생충");
//	strcpy(&CardDatabase[CARD_PARASITE].description, "저주. 전투 시작 시 체력을 잃습니다.");
//	strcpy(&CardDatabase[CARD_PARASITE].description_up, "저주. 전투 시작 시 체력을 잃습니다.");
//
//	initCard(CARD_REGRET);
//	SetColorRarityType(CARD_REGRET, COLORLESS, UNCOMMON, CURSE);
//	CardDatabase[CARD_REGRET].cost = -2;
//	SetUpgradedCardCDB(CARD_REGRET, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_REGRET].name, "후회");
//	strcpy(&CardDatabase[CARD_REGRET].description, "저주. 손에 있는 허상이 아닌 카드마다 턴 종료 시 체력을 1 잃습니다.");
//	strcpy(&CardDatabase[CARD_REGRET].description_up, "저주. 손에 있는 허상이 아닌 카드마다 턴 종료 시 체력을 2 잃습니다.");
//
//	initCard(CARD_SHAME);
//	SetColorRarityType(CARD_SHAME, COLORLESS, UNCOMMON, CURSE);
//	CardDatabase[CARD_SHAME].cost = -2;
//	SetUpgradedCardCDB(CARD_SHAME, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_SHAME].name, "수치");
//	strcpy(&CardDatabase[CARD_SHAME].description, "저주. 허약을 1 얻습니다.");
//	strcpy(&CardDatabase[CARD_SHAME].description_up, "저주. 허약을 2 얻습니다.");
//
//	initCard(CARD_WRITHE);
//	SetColorRarityType(CARD_WRITHE, COLORLESS, UNCOMMON, CURSE);
//	CardDatabase[CARD_WRITHE].cost = -2;
//	SetUpgradedCardCDB(CARD_WRITHE, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_WRITHE].name, "몸부림");
//	strcpy(&CardDatabase[CARD_WRITHE].description, "저주. 허상. 카드를 낼 수 없습니다.");
//	strcpy(&CardDatabase[CARD_WRITHE].description_up, "저주. 허상. 카드를 낼 수 없습니다.");
//
//	initCard(CARD_APPARITION);
//	SetColorRarityType(CARD_APPARITION, COLORLESS, UNCOMMON, SKILL);
//	CardDatabase[CARD_APPARITION].cost = 1;
//	SetUpgradedCardCDB(CARD_APPARITION, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_APPARITION].name, "유령");
//	strcpy(&CardDatabase[CARD_APPARITION].description, "허상. 무형을 1 얻습니다.");
//	strcpy(&CardDatabase[CARD_APPARITION].description_up, "허상. 무형을 1 얻습니다.");
//
//	initCard(CARD_BETA);
//	SetColorRarityType(CARD_BETA, COLORLESS, UNCOMMON, SKILL);
//	CardDatabase[CARD_BETA].cost = 2;
//	SetUpgradedCardCDB(CARD_BETA, -1, 0, 0);
//	strcpy(&CardDatabase[CARD_BETA].name, "베타");
//	strcpy(&CardDatabase[CARD_BETA].description, "셔플을 1 합니다. 덱에서 카드를 뽑을 때까지 카드를 뽑습니다.");
//	strcpy(&CardDatabase[CARD_BETA].description_up, "셔플을 1 합니다. 덱에서 카드를 뽑을 때까지 카드를 뽑습니다.");
//
//	initCard(CARD_DEEPBREATH);
//	SetColorRarityType(CARD_DEEPBREATH, COLORLESS, UNCOMMON, SKILL);
//	CardDatabase[CARD_DEEPBREATH].cost = 0;
//	SetUpgradedCardCDB(CARD_DEEPBREATH, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_DEEPBREATH].name, "심호흡");
//	strcpy(&CardDatabase[CARD_DEEPBREATH].description, "셔플을 1 합니다. 카드 뽑기를 1 합니다.");
//	strcpy(&CardDatabase[CARD_DEEPBREATH].description_up, "셔플을 1 합니다. 카드를 2장 뽑습니다.");
//
//	initCard(CARD_DISCOVERY);
//	SetColorRarityType(CARD_DISCOVERY, COLORLESS, UNCOMMON, SKILL);
//	CardDatabase[CARD_DISCOVERY].cost = 1;
//	SetUpgradedCardCDB(CARD_DISCOVERY, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_DISCOVERY].name, "발견");
//	strcpy(&CardDatabase[CARD_DISCOVERY].description, "무색 카드를 3장 발견하여 1장을 선택합니다. 선택한 카드의 코스트가 0이 됩니다.");
//	strcpy(&CardDatabase[CARD_DISCOVERY].description_up, "무색 카드를 3장 발견하여 1장을 선택합니다. 선택한 카드의 코스트가 0이 됩니다.");
//
//	initCard(CARD_DRAMATICENTRANCE);
//	SetColorRarityType(CARD_DRAMATICENTRANCE, COLORLESS, UNCOMMON, ATTACK);
//	CardDatabase[CARD_DRAMATICENTRANCE].cost = 0;
//	SetUpgradedCardCDB(CARD_DRAMATICENTRANCE, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_DRAMATICENTRANCE].name, "극적등장");
//	strcpy(&CardDatabase[CARD_DRAMATICENTRANCE].description, "모든 적에게 피해를 8 줍니다. 수동적으로만 얻을 수 있습니다.");
//	strcpy(&CardDatabase[CARD_DRAMATICENTRANCE].description_up, "모든 적에게 피해를 12 줍니다. 수동적으로만 얻을 수 있습니다.");
//
//	initCard(CARD_ENLIGHTENMENT);
//	SetColorRarityType(CARD_ENLIGHTENMENT, COLORLESS, UNCOMMON, SKILL);
//	CardDatabase[CARD_ENLIGHTENMENT].cost = 0;
//	SetUpgradedCardCDB(CARD_ENLIGHTENMENT, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_ENLIGHTENMENT].name, "깨달음");
//	strcpy(&CardDatabase[CARD_ENLIGHTENMENT].description, "이번 턴 동안 손에 있는 모든 카드의 코스트가 1이 됩니다.");
//	strcpy(&CardDatabase[CARD_ENLIGHTENMENT].description_up, "이번 턴 동안 손에 있는 모든 카드의 코스트가 0이 됩니다.");
//
//	initCard(CARD_FINESSE);
//	SetColorRarityType(CARD_FINESSE, COLORLESS, UNCOMMON, SKILL);
//	CardDatabase[CARD_FINESSE].cost = 0;
//	SetUpgradedCardCDB(CARD_FINESSE, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_FINESSE].name, "기교");
//	strcpy(&CardDatabase[CARD_FINESSE].description, "방어도를 2 얻습니다. 카드 뽑기를 1 합니다.");
//	strcpy(&CardDatabase[CARD_FINESSE].description_up, "방어도를 4 얻습니다. 카드 뽑기를 1 합니다.");
//
//	initCard(CARD_FLASHOFSTEEL);
//	SetColorRarityType(CARD_FLASHOFSTEEL, COLORLESS, UNCOMMON, ATTACK);
//	CardDatabase[CARD_FLASHOFSTEEL].cost = 0;
//	SetUpgradedCardCDB(CARD_FLASHOFSTEEL, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_FLASHOFSTEEL].name, "번개강철");
//	strcpy(&CardDatabase[CARD_FLASHOFSTEEL].description, "모든 적에게 피해를 3 줍니다. 카드 뽑기를 1 합니다.");
//	strcpy(&CardDatabase[CARD_FLASHOFSTEEL].description_up, "모든 적에게 피해를 4 줍니다. 카드 뽑기를 1 합니다.");
//
//	initCard(CARD_FORETHOUGHT);
//	SetColorRarityType(CARD_FORETHOUGHT, COLORLESS, UNCOMMON, SKILL);
//	CardDatabase[CARD_FORETHOUGHT].cost = 0;
//	SetUpgradedCardCDB(CARD_FORETHOUGHT, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_FORETHOUGHT].name, "선견지명");
//	strcpy(&CardDatabase[CARD_FORETHOUGHT].description, "손의 카드 1장을 덱 맨 아래로 보냅니다. 그 카드의 코스트가 0이 됩니다.");
//	strcpy(&CardDatabase[CARD_FORETHOUGHT].description_up, "손의 카드 1장을 덱 맨 아래로 보냅니다. 그 카드의 코스트가 0이 됩니다.");
//
//	initCard(CARD_GOODINSTINCTS);
//	SetColorRarityType(CARD_GOODINSTINCTS, COLORLESS, UNCOMMON, SKILL);
//	CardDatabase[CARD_GOODINSTINCTS].cost = 0;
//	SetUpgradedCardCDB(CARD_GOODINSTINCTS, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_GOODINSTINCTS].name, "좋은직감");
//	strcpy(&CardDatabase[CARD_GOODINSTINCTS].description, "방어도를 6 얻습니다.");
//	strcpy(&CardDatabase[CARD_GOODINSTINCTS].description_up, "방어도를 9 얻습니다.");
//
//	initCard(CARD_IMPATIENCE);
//	SetColorRarityType(CARD_IMPATIENCE, COLORLESS, UNCOMMON, SKILL);
//	CardDatabase[CARD_IMPATIENCE].cost = 0;
//	SetUpgradedCardCDB(CARD_IMPATIENCE, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_IMPATIENCE].name, "조급함");
//	strcpy(&CardDatabase[CARD_IMPATIENCE].description, "카드를 2장 뽑습니다. 손의 카드가 10장이면 피해를 2 받습니다.");
//	strcpy(&CardDatabase[CARD_IMPATIENCE].description_up, "카드를 3장 뽑습니다. 손의 카드가 10장이면 피해를 2 받습니다.");
//
//	initCard(CARD_JACKOFALLTRADES);
//	SetColorRarityType(CARD_JACKOFALLTRADES, COLORLESS, UNCOMMON, SKILL);
//	CardDatabase[CARD_JACKOFALLTRADES].cost = 0;
//	SetUpgradedCardCDB(CARD_JACKOFALLTRADES, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_JACKOFALLTRADES].name, "만능재주꾼");
//	strcpy(&CardDatabase[CARD_JACKOFALLTRADES].description, "이번 덱에 없는 색깔의 카드를 5장 중에서 1장 선택하여 손에 넣습니다.");
//	strcpy(&CardDatabase[CARD_JACKOFALLTRADES].description_up, "이번 덱에 없는 색깔의 카드를 5장 중에서 1장 선택하여 손에 넣습니다.");
//
//	initCard(CARD_MASTEROFSTRATEGY);
//	SetColorRarityType(CARD_MASTEROFSTRATEGY, COLORLESS, UNCOMMON, SKILL);
//	CardDatabase[CARD_MASTEROFSTRATEGY].cost = 0;
//	SetUpgradedCardCDB(CARD_MASTEROFSTRATEGY, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_MASTEROFSTRATEGY].name, "전략의달인");
//	strcpy(&CardDatabase[CARD_MASTEROFSTRATEGY].description, "카드를 3장 뽑습니다. 다음 턴 카드를 1장 적게 뽑습니다.");
//	strcpy(&CardDatabase[CARD_MASTEROFSTRATEGY].description_up, "카드를 4장 뽑습니다. 다음 턴 카드를 1장 적게 뽑습니다.");
//
//	initCard(CARD_PANACEA);
//	SetColorRarityType(CARD_PANACEA, COLORLESS, UNCOMMON, SKILL);
//	CardDatabase[CARD_PANACEA].cost = 0;
//	SetUpgradedCardCDB(CARD_PANACEA, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_PANACEA].name, "만병통치약");
//	strcpy(&CardDatabase[CARD_PANACEA].description, "모든 디버프를 제거합니다.");
//	strcpy(&CardDatabase[CARD_PANACEA].description_up, "모든 디버프를 제거합니다.");
//
//	initCard(CARD_PURITY);
//	SetColorRarityType(CARD_PURITY, COLORLESS, UNCOMMON, SKILL);
//	CardDatabase[CARD_PURITY].cost = 0;
//	SetUpgradedCardCDB(CARD_PURITY, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_PURITY].name, "순수");
//	strcpy(&CardDatabase[CARD_PURITY].description, "덱에서 카드를 3장 선택하여 이번 전투에서 제거합니다.");
//	strcpy(&CardDatabase[CARD_PURITY].description_up, "덱에서 카드를 5장 선택하여 이번 전투에서 제거합니다.");
//
//	initCard(CARD_SWIFTSTRIKE);
//	SetColorRarityType(CARD_SWIFTSTRIKE, COLORLESS, UNCOMMON, ATTACK);
//	CardDatabase[CARD_SWIFTSTRIKE].cost = 0;
//	SetUpgradedCardCDB(CARD_SWIFTSTRIKE, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_SWIFTSTRIKE].name, "신속한일격");
//	strcpy(&CardDatabase[CARD_SWIFTSTRIKE].description, "적에게 피해를 7 줍니다.");
//	strcpy(&CardDatabase[CARD_SWIFTSTRIKE].description_up, "적에게 피해를 10 줍니다.");
//
//	initCard(CARD_TRIP);
//	SetColorRarityType(CARD_TRIP, COLORLESS, UNCOMMON, SKILL);
//	CardDatabase[CARD_TRIP].cost = 0;
//	SetUpgradedCardCDB(CARD_TRIP, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_TRIP].name, "걸어넘어뜨리기");
//	strcpy(&CardDatabase[CARD_TRIP].description, "취약을 2 적용합니다.");
//	strcpy(&CardDatabase[CARD_TRIP].description_up, "취약을 4 적용합니다.");
//
//	// 무색 카드 - 레어
//	initCard(CARD_APOTHEOSIS);
//	SetColorRarityType(CARD_APOTHEOSIS, COLORLESS, RARE, SKILL);
//	CardDatabase[CARD_APOTHEOSIS].cost = 2;
//	SetUpgradedCardCDB(CARD_APOTHEOSIS, -1, 0, 0);
//	strcpy(&CardDatabase[CARD_APOTHEOSIS].name, "신격화");
//	strcpy(&CardDatabase[CARD_APOTHEOSIS].description, "손에 있는 모든 카드를 영구적으로 업그레이드합니다. 소멸.");
//	strcpy(&CardDatabase[CARD_APOTHEOSIS].description_up, "손에 있는 모든 카드를 영구적으로 업그레이드합니다. 소멸.");
//
//	initCard(CARD_CHRYSALIS);
//	SetColorRarityType(CARD_CHRYSALIS, COLORLESS, RARE, SKILL);
//	CardDatabase[CARD_CHRYSALIS].cost = 2;
//	SetUpgradedCardCDB(CARD_CHRYSALIS, -1, 0, 0);
//	strcpy(&CardDatabase[CARD_CHRYSALIS].name, "번데기");
//	strcpy(&CardDatabase[CARD_CHRYSALIS].description, "랜덤 스킬 카드 3장을 얻습니다. 소멸.");
//	strcpy(&CardDatabase[CARD_CHRYSALIS].description_up, "랜덤 스킬 카드 5장을 얻습니다. 소멸.");
//
//	initCard(CARD_HANDOFGREED);
//	SetColorRarityType(CARD_HANDOFGREED, COLORLESS, RARE, ATTACK);
//	CardDatabase[CARD_HANDOFGREED].cost = 2;
//	SetUpgradedCardCDB(CARD_HANDOFGREED, -1, 0, 0);
//	strcpy(&CardDatabase[CARD_HANDOFGREED].name, "탐욕의손");
//	strcpy(&CardDatabase[CARD_HANDOFGREED].description, "적에게 피해를 20 줍니다. 적이 치명적이지 않으면 골드를 20 얻고 이 카드를 소멸시킵니다.");
//	strcpy(&CardDatabase[CARD_HANDOFGREED].description_up, "적에게 피해를 25 줍니다. 적이 치명적이지 않으면 골드를 25 얻고 이 카드를 소멸시킵니다.");
//
//	initCard(CARD_MAGNETISM);
//	SetColorRarityType(CARD_MAGNETISM, COLORLESS, RARE, POWER);
//	CardDatabase[CARD_MAGNETISM].cost = 2;
//	SetUpgradedCardCDB(CARD_MAGNETISM, -1, 0, 0);
//	strcpy(&CardDatabase[CARD_MAGNETISM].name, "자력");
//	strcpy(&CardDatabase[CARD_MAGNETISM].description, "턴 시작 시 덱에서 금속 카드 1장을 손에 넣습니다.");
//	strcpy(&CardDatabase[CARD_MAGNETISM].description_up, "턴 시작 시 덱에서 금속 카드 1장을 손에 넣습니다.");
//
//	initCard(CARD_MAYHEM);
//	SetColorRarityType(CARD_MAYHEM, COLORLESS, RARE, POWER);
//	CardDatabase[CARD_MAYHEM].cost = 2;
//	SetUpgradedCardCDB(CARD_MAYHEM, -1, 0, 0);
//	strcpy(&CardDatabase[CARD_MAYHEM].name, "대혼란");
//	strcpy(&CardDatabase[CARD_MAYHEM].description, "턴 시작 시 손에서 랜덤 카드 1장을 재생합니다.");
//	strcpy(&CardDatabase[CARD_MAYHEM].description_up, "턴 시작 시 손에서 랜덤 카드 1장을 재생합니다.");
//
//	initCard(CARD_METAMORPHOSIS);
//	SetColorRarityType(CARD_METAMORPHOSIS, COLORLESS, RARE, SKILL);
//	CardDatabase[CARD_METAMORPHOSIS].cost = 2;
//	SetUpgradedCardCDB(CARD_METAMORPHOSIS, -1, 0, 0);
//	strcpy(&CardDatabase[CARD_METAMORPHOSIS].name, "변태");
//	strcpy(&CardDatabase[CARD_METAMORPHOSIS].description, "랜덤 공격 카드 3장을 얻습니다. 소멸.");
//	strcpy(&CardDatabase[CARD_METAMORPHOSIS].description_up, "랜덤 공격 카드 5장을 얻습니다. 소멸.");
//
//	initCard(CARD_MINDBLAST);
//	SetColorRarityType(CARD_MINDBLAST, COLORLESS, RARE, ATTACK);
//	CardDatabase[CARD_MINDBLAST].cost = 2;
//	SetUpgradedCardCDB(CARD_MINDBLAST, -1, 0, 0);
//	strcpy(&CardDatabase[CARD_MINDBLAST].name, "정신폭발");
//	strcpy(&CardDatabase[CARD_MINDBLAST].description, "손에 있는 카드 1장당 모든 적에게 피해를 3 줍니다.");
//	strcpy(&CardDatabase[CARD_MINDBLAST].description_up, "손에 있는 카드 1장당 모든 적에게 피해를 4 줍니다.");
//
//	initCard(CARD_PANACHE);
//	SetColorRarityType(CARD_PANACHE, COLORLESS, RARE, POWER);
//	CardDatabase[CARD_PANACHE].cost = 0;
//	SetUpgradedCardCDB(CARD_PANACHE, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_PANACHE].name, "화려함");
//	strcpy(&CardDatabase[CARD_PANACHE].description, "턴마다 5장의 카드를 재생하면 모든 적에게 피해를 10 줍니다.");
//	strcpy(&CardDatabase[CARD_PANACHE].description_up, "턴마다 4장의 카드를 재생하면 모든 적에게 피해를 10 줍니다.");
//
//	initCard(CARD_SECRETTECHNIQUE);
//	SetColorRarityType(CARD_SECRETTECHNIQUE, COLORLESS, RARE, SKILL);
//	CardDatabase[CARD_SECRETTECHNIQUE].cost = 0;
//	SetUpgradedCardCDB(CARD_SECRETTECHNIQUE, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_SECRETTECHNIQUE].name, "비밀기술");
//	strcpy(&CardDatabase[CARD_SECRETTECHNIQUE].description, "덱에서 스킬 카드 1장을 선택하여 손에 넣습니다. 소멸.");
//	strcpy(&CardDatabase[CARD_SECRETTECHNIQUE].description_up, "덱에서 스킬 카드 1장을 선택하여 손에 넣습니다.");
//
//	initCard(CARD_SECRETWEAPON);
//	SetColorRarityType(CARD_SECRETWEAPON, COLORLESS, RARE, SKILL);
//	CardDatabase[CARD_SECRETWEAPON].cost = 0;
//	SetUpgradedCardCDB(CARD_SECRETWEAPON, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_SECRETWEAPON].name, "비밀무기");
//	strcpy(&CardDatabase[CARD_SECRETWEAPON].description, "덱에서 공격 카드 1장을 선택하여 손에 넣습니다. 소멸.");
//	strcpy(&CardDatabase[CARD_SECRETWEAPON].description_up, "덱에서 공격 카드 1장을 선택하여 손에 넣습니다.");
//
//	initCard(CARD_BOMB);
//	SetColorRarityType(CARD_BOMB, COLORLESS, RARE, POWER);
//	CardDatabase[CARD_BOMB].cost = 2;
//	SetUpgradedCardCDB(CARD_BOMB, -1, 0, 0);
//	strcpy(&CardDatabase[CARD_BOMB].name, "폭탄");
//	strcpy(&CardDatabase[CARD_BOMB].description, "3턴 후 모든 적에게 피해를 40 줍니다.");
//	strcpy(&CardDatabase[CARD_BOMB].description_up, "3턴 후 모든 적에게 피해를 50 줍니다.");
//
//	initCard(CARD_TRANSMUTATION);
//	SetColorRarityType(CARD_TRANSMUTATION, COLORLESS, RARE, SKILL);
//	CardDatabase[CARD_TRANSMUTATION].cost = 1;
//	SetUpgradedCardCDB(CARD_TRANSMUTATION, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_TRANSMUTATION].name, "변환");
//	strcpy(&CardDatabase[CARD_TRANSMUTATION].description, "무작위 무색 카드를 X장 얻습니다. 코스트가 0이 됩니다.");
//	strcpy(&CardDatabase[CARD_TRANSMUTATION].description_up, "무작위 무색 카드를 X+1장 얻습니다. 코스트가 0이 됩니다.");
//
//	initCard(CARD_VAULT);
//	SetColorRarityType(CARD_VAULT, COLORLESS, RARE, SKILL);
//	CardDatabase[CARD_VAULT].cost = 3;
//	SetUpgradedCardCDB(CARD_VAULT, -1, 0, 0);
//	strcpy(&CardDatabase[CARD_VAULT].name, "금고");
//	strcpy(&CardDatabase[CARD_VAULT].description, "턴을 종료하고 다음 턴을 즉시 시작합니다.");
//	strcpy(&CardDatabase[CARD_VAULT].description_up, "턴을 종료하고 다음 턴을 즉시 시작합니다.");
//}
//void print_card(Card* card) {
//	printf("%s : %s\n업그레이드 -> %s\n\n", card->name, card->description, card->description_up);
//}