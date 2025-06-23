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
//	strcpy(&CardDatabase[CARD_STRIKE].name, "Ÿ��");
//	strcpy(&CardDatabase[CARD_STRIKE].description, "���ظ� 6 �ݴϴ�.");
//	strcpy(&CardDatabase[CARD_STRIKE].description_up, "���ظ� 8 �ݴϴ�.");
//
//	initCard(CARD_DEFEND);
//	SetColorRarityType(CARD_DEFEND, RED, COMMON, SKILL);
//	CardDatabase[CARD_DEFEND].cost = 1;
//	CardDatabase[CARD_DEFEND].block = 5;
//	SetUpgradedCardCDB(CARD_DEFEND, 0, 0, 3);
//	strcpy(&CardDatabase[CARD_DEFEND].name, "����");
//	strcpy(&CardDatabase[CARD_DEFEND].description, "���� 5 ����ϴ�.");
//	strcpy(&CardDatabase[CARD_DEFEND].description_up, "���� 8 ����ϴ�.");
//
//	initCard(CARD_BASH);
//	SetColorRarityType(CARD_BASH, RED, COMMON, ATTACK);
//	CardDatabase[CARD_BASH].cost = 2;
//	CardDatabase[CARD_BASH].damage = 8;
//	SetUpgradedCardCDB(CARD_BASH, -1, 2, 0);
//	strcpy(&CardDatabase[CARD_BASH].name, "��Ÿ");
//	strcpy(&CardDatabase[CARD_BASH].description, "���ظ� 8 �ݴϴ�. ����� 2 �����մϴ�.");
//	strcpy(&CardDatabase[CARD_BASH].description_up, "���ظ� 10 �ݴϴ�. ����� 2 �����մϴ�.");
//
//	initCard(CARD_ANGER);
//	SetColorRarityType(CARD_ANGER, RED, COMMON, ATTACK);
//	CardDatabase[CARD_ANGER].cost = 0;
//	CardDatabase[CARD_ANGER].damage = 6;
//	SetUpgradedCardCDB(CARD_ANGER, 0, 2, 0);
//	strcpy(&CardDatabase[CARD_ANGER].name, "�г�");
//	strcpy(&CardDatabase[CARD_ANGER].description, "���ظ� 6 �ݴϴ�. �������̿� �г� �纻�� 1�� �߰��մϴ�.");
//	strcpy(&CardDatabase[CARD_ANGER].description_up, "���ظ� 8 �ݴϴ�. �������̿� �г� �纻�� 1�� �߰��մϴ�.");
//
//	initCard(CARD_BODYSLAM);
//	SetColorRarityType(CARD_BODYSLAM, RED, COMMON, ATTACK);
//	CardDatabase[CARD_BODYSLAM].cost = 1;
//	SetUpgradedCardCDB(CARD_BODYSLAM, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_BODYSLAM].name, "�����ġ��");
//	strcpy(&CardDatabase[CARD_BODYSLAM].description, "���� ����ŭ ���ظ� �ݴϴ�.");
//	strcpy(&CardDatabase[CARD_BODYSLAM].description_up, "���� ����ŭ ���ظ� �ݴϴ�.");
//
//	initCard(CARD_CLASH);
//	SetColorRarityType(CARD_CLASH, RED, COMMON, ATTACK);
//	CardDatabase[CARD_CLASH].cost = 0;
//	CardDatabase[CARD_CLASH].damage = 14;
//	SetUpgradedCardCDB(CARD_CLASH, 0, 4, 0);
//	strcpy(&CardDatabase[CARD_CLASH].name, "�ݵ�");
//	strcpy(&CardDatabase[CARD_CLASH].description, "�տ� ���� ī�常 �־�� �÷����� �� �ֽ��ϴ�. ���ظ� 14 �ݴϴ�.");
//	strcpy(&CardDatabase[CARD_CLASH].description_up, "�տ� ���� ī�常 �־�� �÷����� �� �ֽ��ϴ�. ���ظ� 18 �ݴϴ�.");
//
//	initCard(CARD_CLEAVE);
//	SetColorRarityType(CARD_CLEAVE, RED, COMMON, ATTACK);
//	CardDatabase[CARD_CLEAVE].cost = 1;
//	CardDatabase[CARD_CLEAVE].damage = 8;
//	SetUpgradedCardCDB(CARD_CLEAVE, 0, 3, 0);
//	strcpy(&CardDatabase[CARD_CLEAVE].name, "������");
//	strcpy(&CardDatabase[CARD_CLEAVE].description, "��� ������ ���ظ� 8 �ݴϴ�.");
//	strcpy(&CardDatabase[CARD_CLEAVE].description_up, "��� ������ ���ظ� 11 �ݴϴ�.");
//
//	initCard(CARD_CLOTHESLINE);
//	SetColorRarityType(CARD_CLOTHESLINE, RED, COMMON, ATTACK);
//	CardDatabase[CARD_CLOTHESLINE].cost = 2;
//	CardDatabase[CARD_CLOTHESLINE].damage = 12;
//	SetUpgradedCardCDB(CARD_CLOTHESLINE, 0, 3, 0);
//	strcpy(&CardDatabase[CARD_CLOTHESLINE].name, "������");
//	strcpy(&CardDatabase[CARD_CLOTHESLINE].description, "���ظ� 12 �ݴϴ�. ��ȭ�� 2 �����մϴ�.");
//	strcpy(&CardDatabase[CARD_CLOTHESLINE].description_up, "���ظ� 15 �ݴϴ�. ��ȭ�� 2 �����մϴ�.");
//
//	initCard(CARD_HEADBUTT);
//	SetColorRarityType(CARD_HEADBUTT, RED, COMMON, ATTACK);
//	CardDatabase[CARD_HEADBUTT].cost = 1;
//	CardDatabase[CARD_HEADBUTT].damage = 9;
//	SetUpgradedCardCDB(CARD_HEADBUTT, 0, 3, 0);
//	strcpy(&CardDatabase[CARD_HEADBUTT].name, "��ġ��");
//	strcpy(&CardDatabase[CARD_HEADBUTT].description, "���ظ� 9 �ݴϴ�. �������̿��� ī�带 1�� ������ �̱� ���� �� ���� �����ϴ�.");
//	strcpy(&CardDatabase[CARD_HEADBUTT].description_up, "���ظ� 12 �ݴϴ�. �������̿��� ī�带 1�� ������ �̱� ���� �� ���� �����ϴ�.");
//
//	initCard(CARD_HEAVYBLADE);
//	SetColorRarityType(CARD_HEAVYBLADE, RED, COMMON, ATTACK);
//	CardDatabase[CARD_HEAVYBLADE].cost = 2;
//	CardDatabase[CARD_HEAVYBLADE].damage = 14;
//	SetUpgradedCardCDB(CARD_HEAVYBLADE, 0, 5, 0);
//	strcpy(&CardDatabase[CARD_HEAVYBLADE].name, "�߰�");
//	strcpy(&CardDatabase[CARD_HEAVYBLADE].description, "���ظ� 14 �ݴϴ�. �� 1�� ���ذ� 3 �����մϴ�.");
//	strcpy(&CardDatabase[CARD_HEAVYBLADE].description_up, "���ظ� 19 �ݴϴ�. �� 1�� ���ذ� 3 �����մϴ�.");
//
//	initCard(CARD_IRONWAVE);
//	SetColorRarityType(CARD_IRONWAVE, RED, COMMON, ATTACK);
//	CardDatabase[CARD_IRONWAVE].cost = 1;
//	CardDatabase[CARD_IRONWAVE].damage = 5;
//	CardDatabase[CARD_IRONWAVE].block = 5;
//	SetUpgradedCardCDB(CARD_IRONWAVE, 0, 2, 2);
//	strcpy(&CardDatabase[CARD_IRONWAVE].name, "��ö�ĵ�");
//	strcpy(&CardDatabase[CARD_IRONWAVE].description, "���� 5 ����ϴ�. ���ظ� 5 �ݴϴ�.");
//	strcpy(&CardDatabase[CARD_IRONWAVE].description_up, "���� 7 ����ϴ�. ���ظ� 7 �ݴϴ�.");
//
//	initCard(CARD_PERFECTEDSTRIKE);
//	SetColorRarityType(CARD_PERFECTEDSTRIKE, RED, COMMON, ATTACK);
//	CardDatabase[CARD_PERFECTEDSTRIKE].cost = 2;
//	CardDatabase[CARD_PERFECTEDSTRIKE].damage = 6;
//	SetUpgradedCardCDB(CARD_PERFECTEDSTRIKE, 0, 2, 0);
//	strcpy(&CardDatabase[CARD_PERFECTEDSTRIKE].name, "�Ϻ���Ÿ��");
//	strcpy(&CardDatabase[CARD_PERFECTEDSTRIKE].description, "���ظ� 6 �ݴϴ�. ���� �ִ� Ÿ�� ī�� 1��� ���ذ� 2 �����մϴ�.");
//	strcpy(&CardDatabase[CARD_PERFECTEDSTRIKE].description_up, "���ظ� 8 �ݴϴ�. ���� �ִ� Ÿ�� ī�� 1��� ���ذ� 2 �����մϴ�.");
//
//	initCard(CARD_POMMELSTRIKE);
//	SetColorRarityType(CARD_POMMELSTRIKE, RED, COMMON, ATTACK);
//	CardDatabase[CARD_POMMELSTRIKE].cost = 1;
//	CardDatabase[CARD_POMMELSTRIKE].damage = 9;
//	SetUpgradedCardCDB(CARD_POMMELSTRIKE, 0, 1, 0);
//	strcpy(&CardDatabase[CARD_POMMELSTRIKE].name, "���ڷ�ġ��");
//	strcpy(&CardDatabase[CARD_POMMELSTRIKE].description, "���ظ� 9 �ݴϴ�. ī�带 1�� �̽��ϴ�.");
//	strcpy(&CardDatabase[CARD_POMMELSTRIKE].description_up, "���ظ� 10 �ݴϴ�. ī�带 1�� �̽��ϴ�.");
//
//	initCard(CARD_SWORDBOOMERANG);
//	SetColorRarityType(CARD_SWORDBOOMERANG, RED, COMMON, ATTACK);
//	CardDatabase[CARD_SWORDBOOMERANG].cost = 1;
//	CardDatabase[CARD_SWORDBOOMERANG].damage = 3;
//	SetUpgradedCardCDB(CARD_SWORDBOOMERANG, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_SWORDBOOMERANG].name, "�˺θ޶�");
//	strcpy(&CardDatabase[CARD_SWORDBOOMERANG].description, "������ ������ ���ظ� 3�� 3�� �ݴϴ�.");
//	strcpy(&CardDatabase[CARD_SWORDBOOMERANG].description_up, "������ ������ ���ظ� 3�� 4�� �ݴϴ�.");
//
//	initCard(CARD_THUNDERCLAP);
//	SetColorRarityType(CARD_THUNDERCLAP, RED, COMMON, ATTACK);
//	CardDatabase[CARD_THUNDERCLAP].cost = 1;
//	CardDatabase[CARD_THUNDERCLAP].damage = 4;
//	SetUpgradedCardCDB(CARD_THUNDERCLAP, 0, 3, 0);
//	strcpy(&CardDatabase[CARD_THUNDERCLAP].name, "����");
//	strcpy(&CardDatabase[CARD_THUNDERCLAP].description, "��� ������ ���ظ� 4 �ݴϴ�. ����� 1 �����մϴ�.");
//	strcpy(&CardDatabase[CARD_THUNDERCLAP].description_up, "��� ������ ���ظ� 7 �ݴϴ�. ����� 1 �����մϴ�.");
//
//	initCard(CARD_TWINSTRIKE);
//	SetColorRarityType(CARD_TWINSTRIKE, RED, COMMON, ATTACK);
//	CardDatabase[CARD_TWINSTRIKE].cost = 1;
//	CardDatabase[CARD_TWINSTRIKE].damage = 5;
//	SetUpgradedCardCDB(CARD_TWINSTRIKE, 0, 2, 0);
//	strcpy(&CardDatabase[CARD_TWINSTRIKE].name, "�ְ�");
//	strcpy(&CardDatabase[CARD_TWINSTRIKE].description, "���ظ� 7 �ݴϴ�.");
//	strcpy(&CardDatabase[CARD_TWINSTRIKE].description_up, "���ظ� 9 �ݴϴ�.");
//
//	initCard(CARD_WILDSTRIKE);
//	SetColorRarityType(CARD_WILDSTRIKE, RED, COMMON, ATTACK);
//	CardDatabase[CARD_WILDSTRIKE].cost = 1;
//	CardDatabase[CARD_WILDSTRIKE].damage = 12;
//	SetUpgradedCardCDB(CARD_WILDSTRIKE, 0, 5, 0);
//	strcpy(&CardDatabase[CARD_WILDSTRIKE].name, "�߻���Ÿ��");
//	strcpy(&CardDatabase[CARD_WILDSTRIKE].description, "���ظ� 12 �ݴϴ�. �̱� ���̿� ��ó�� 1�� �߰��մϴ�.");
//	strcpy(&CardDatabase[CARD_WILDSTRIKE].description_up, "���ظ� 17 �ݴϴ�. �̱� ���̿� ��ó�� 1�� �߰��մϴ�.");
//
//	initCard(CARD_ARMAMENTS);
//	SetColorRarityType(CARD_ARMAMENTS, RED, COMMON, SKILL);
//	CardDatabase[CARD_ARMAMENTS].cost = 1;
//	CardDatabase[CARD_ARMAMENTS].block = 5;
//	SetUpgradedCardCDB(CARD_ARMAMENTS, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_ARMAMENTS].name, "����");
//	strcpy(&CardDatabase[CARD_ARMAMENTS].description, "���� 5 ����ϴ�. �տ� �ִ� ī�带 1�� ���׷��̵��մϴ�.");
//	strcpy(&CardDatabase[CARD_ARMAMENTS].description_up, "���� 5 ����ϴ�. �տ� �ִ� ��� ī�带 ���׷��̵��մϴ�.");
//
//	initCard(CARD_FLEX);
//	SetColorRarityType(CARD_FLEX, RED, COMMON, SKILL);
//	CardDatabase[CARD_FLEX].cost = 0;
//	SetUpgradedCardCDB(CARD_FLEX, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_FLEX].name, "������ȭ");
//	strcpy(&CardDatabase[CARD_FLEX].description, "���� 2 ����ϴ�. �� ���� ��, ���� 2 �ҽ��ϴ�.");
//	strcpy(&CardDatabase[CARD_FLEX].description_up, "���� 4 ����ϴ�. �� ���� ��, ���� 4 �ҽ��ϴ�.");
//
//	initCard(CARD_HAVOC);
//	SetColorRarityType(CARD_HAVOC, RED, COMMON, SKILL);
//	CardDatabase[CARD_HAVOC].cost = 1;
//	SetUpgradedCardCDB(CARD_HAVOC, -1, 0, 0);
//	strcpy(&CardDatabase[CARD_HAVOC].name, "��ȥ��");
//	strcpy(&CardDatabase[CARD_HAVOC].description, "�̱� ���� �� �� ī�带 �÷����մϴ�. �� ī�带 �Ҹ��մϴ�.");
//	strcpy(&CardDatabase[CARD_HAVOC].description_up, "�̱� ���� �� �� ī�带 �÷����մϴ�. �� ī�带 �Ҹ��մϴ�.");
//
//	initCard(CARD_INTIMIDATE);
//	SetColorRarityType(CARD_INTIMIDATE, RED, COMMON, SKILL);
//	CardDatabase[CARD_INTIMIDATE].cost = 0;
//	SetUpgradedCardCDB(CARD_INTIMIDATE, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_INTIMIDATE].name, "����");
//	strcpy(&CardDatabase[CARD_INTIMIDATE].description, "��� ������ ��ȭ�� 1 �����մϴ�.");
//	strcpy(&CardDatabase[CARD_INTIMIDATE].description_up, "��� ������ ��ȭ�� 2 �����մϴ�.");
//
//	initCard(CARD_POWERTHROUGH);
//	SetColorRarityType(CARD_POWERTHROUGH, RED, COMMON, SKILL);
//	CardDatabase[CARD_POWERTHROUGH].cost = 1;
//	CardDatabase[CARD_POWERTHROUGH].block = 15;
//	SetUpgradedCardCDB(CARD_POWERTHROUGH, 0, 0, 5);
//	strcpy(&CardDatabase[CARD_POWERTHROUGH].name, "����");
//	strcpy(&CardDatabase[CARD_POWERTHROUGH].description, "���� 15 ����ϴ�. �տ� ��ó�� 2�� �߰��մϴ�.");
//	strcpy(&CardDatabase[CARD_POWERTHROUGH].description_up, "���� 20 ����ϴ�. �տ� ��ó�� 2�� �߰��մϴ�.");
//
//	initCard(CARD_SHRUGITOFF);
//	SetColorRarityType(CARD_SHRUGITOFF, RED, COMMON, SKILL);
//	CardDatabase[CARD_SHRUGITOFF].cost = 1;
//	CardDatabase[CARD_SHRUGITOFF].block = 8;
//	SetUpgradedCardCDB(CARD_SHRUGITOFF, 0, 0, 3);
//	strcpy(&CardDatabase[CARD_SHRUGITOFF].name, "����б�");
//	strcpy(&CardDatabase[CARD_SHRUGITOFF].description, "���� 8 ����ϴ�. ī�带 1�� �̽��ϴ�.");
//	strcpy(&CardDatabase[CARD_SHRUGITOFF].description_up, "���� 11 ����ϴ�. ī�带 1�� �̽��ϴ�.");
//
//	initCard(CARD_TRUEGRIT);
//	SetColorRarityType(CARD_TRUEGRIT, RED, COMMON, SKILL);
//	CardDatabase[CARD_TRUEGRIT].cost = 1;
//	CardDatabase[CARD_TRUEGRIT].block = 7;
//	SetUpgradedCardCDB(CARD_TRUEGRIT, 0, 0, 2);
//	strcpy(&CardDatabase[CARD_TRUEGRIT].name, "�����ѱⰳ");
//	strcpy(&CardDatabase[CARD_TRUEGRIT].description, "���� 7 ����ϴ�. �տ� �ִ� ī�带 1�� �Ҹ��մϴ�.");
//	strcpy(&CardDatabase[CARD_TRUEGRIT].description_up, "���� 9 ����ϴ�. �տ� �ִ� ī�带 1�� ������ �Ҹ��մϴ�.");
//
//	initCard(CARD_WARCRY);
//	SetColorRarityType(CARD_WARCRY, RED, COMMON, SKILL);
//	CardDatabase[CARD_WARCRY].cost = 0;
//	SetUpgradedCardCDB(CARD_WARCRY, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_WARCRY].name, "�Լ�");
//	strcpy(&CardDatabase[CARD_WARCRY].description, "ī�带 1�� �̽��ϴ�. �̱� ���̿� ī�带 1�� �ֽ��ϴ�.");
//	strcpy(&CardDatabase[CARD_WARCRY].description_up, "ī�带 2�� �̽��ϴ�. �̱� ���̿� ī�带 1�� �ֽ��ϴ�.");
//
//	initCard(CARD_BLOODFORBLOOD);
//	SetColorRarityType(CARD_BLOODFORBLOOD, RED, UNCOMMON, ATTACK);
//	CardDatabase[CARD_BLOODFORBLOOD].cost = 4;
//	CardDatabase[CARD_BLOODFORBLOOD].damage = 18;
//	SetUpgradedCardCDB(CARD_BLOODFORBLOOD, 0, 4, 0);
//	strcpy(&CardDatabase[CARD_BLOODFORBLOOD].name, "�ǿ����Ƿ�");
//	strcpy(&CardDatabase[CARD_BLOODFORBLOOD].description, "���ظ� 18 �ݴϴ�. �̹� �������� ü���� ���� ������ ����� 1 �����մϴ�.");
//	strcpy(&CardDatabase[CARD_BLOODFORBLOOD].description_up, "���ظ� 22 �ݴϴ�. �̹� �������� ü���� ���� ������ ����� 1 �����մϴ�.");
//
//	initCard(CARD_CARNAGE);
//	SetColorRarityType(CARD_CARNAGE, RED, UNCOMMON, ATTACK);
//	CardDatabase[CARD_CARNAGE].cost = 2;
//	CardDatabase[CARD_CARNAGE].damage = 20;
//	SetUpgradedCardCDB(CARD_CARNAGE, 0, 8, 0);
//	strcpy(&CardDatabase[CARD_CARNAGE].name, "���л�");
//	strcpy(&CardDatabase[CARD_CARNAGE].description, "����. ���ظ� 20 �ݴϴ�.");
//	strcpy(&CardDatabase[CARD_CARNAGE].description_up, "����. ���ظ� 28 �ݴϴ�.");
//
//	initCard(CARD_DROPKICK);
//	SetColorRarityType(CARD_DROPKICK, RED, UNCOMMON, ATTACK);
//	CardDatabase[CARD_DROPKICK].cost = 1;
//	CardDatabase[CARD_DROPKICK].damage = 5;
//	SetUpgradedCardCDB(CARD_DROPKICK, 0, 3, 0);
//	strcpy(&CardDatabase[CARD_DROPKICK].name, "���ű");
//	strcpy(&CardDatabase[CARD_DROPKICK].description, "���ظ� 5 �ݴϴ�. ����� ��� ���¶�� �������� 1 ��� ī�带 1�� �̽��ϴ�.");
//	strcpy(&CardDatabase[CARD_DROPKICK].description_up, "���ظ� 8 �ݴϴ�. ����� ��� ���¶�� �������� 1 ��� ī�带 1�� �̽��ϴ�.");
//
//	initCard(CARD_HEMOKINESIS);
//	SetColorRarityType(CARD_HEMOKINESIS, RED, UNCOMMON, ATTACK);
//	CardDatabase[CARD_HEMOKINESIS].cost = 1;
//	CardDatabase[CARD_HEMOKINESIS].damage = 15;
//	SetUpgradedCardCDB(CARD_HEMOKINESIS, 0, 5, 0);
//	strcpy(&CardDatabase[CARD_HEMOKINESIS].name, "��������");
//	strcpy(&CardDatabase[CARD_HEMOKINESIS].description, "ü���� 2 �ҽ��ϴ�. ���ظ� 15 �ݴϴ�.");
//	strcpy(&CardDatabase[CARD_HEMOKINESIS].description_up, "ü���� 2 �ҽ��ϴ�. ���ظ� 20 �ݴϴ�.");
//
//	initCard(CARD_PUMMEL);
//	SetColorRarityType(CARD_PUMMEL, RED, UNCOMMON, ATTACK);
//	CardDatabase[CARD_PUMMEL].cost = 1;
//	CardDatabase[CARD_PUMMEL].damage = 2;
//	SetUpgradedCardCDB(CARD_PUMMEL, 0, 1, 0);
//	strcpy(&CardDatabase[CARD_PUMMEL].name, "��Ÿ");
//	strcpy(&CardDatabase[CARD_PUMMEL].description, "���ظ� 2�� 4�� �ݴϴ�. �տ� ���� ī�尡 �ƴ� ī�尡 ������ �÷����� �� �����ϴ�.");
//	strcpy(&CardDatabase[CARD_PUMMEL].description_up, "���ظ� 3�� 4�� �ݴϴ�. �տ� ���� ī�尡 �ƴ� ī�尡 ������ �÷����� �� �����ϴ�.");
//
//	initCard(CARD_RAMPAGE);
//	SetColorRarityType(CARD_RAMPAGE, RED, UNCOMMON, ATTACK);
//	CardDatabase[CARD_RAMPAGE].cost = 1;
//	CardDatabase[CARD_RAMPAGE].damage = 8;
//	SetUpgradedCardCDB(CARD_RAMPAGE, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_RAMPAGE].name, "����");
//	strcpy(&CardDatabase[CARD_RAMPAGE].description, "���ظ� 8 �ݴϴ�. �� ī�尡 �÷��̵� ������ �̹� �������� ���ذ� 5 �����մϴ�.");
//	strcpy(&CardDatabase[CARD_RAMPAGE].description_up, "���ظ� 8 �ݴϴ�. �� ī�尡 �÷��̵� ������ �̹� �������� ���ذ� 8 �����մϴ�.");
//
//	initCard(CARD_RECKLESSCHARGE);
//	SetColorRarityType(CARD_RECKLESSCHARGE, RED, UNCOMMON, ATTACK);
//	CardDatabase[CARD_RECKLESSCHARGE].cost = 0;
//	CardDatabase[CARD_RECKLESSCHARGE].damage = 7;
//	SetUpgradedCardCDB(CARD_RECKLESSCHARGE, 0, 3, 0);
//	strcpy(&CardDatabase[CARD_RECKLESSCHARGE].name, "�����ѵ���");
//	strcpy(&CardDatabase[CARD_RECKLESSCHARGE].description, "���ظ� 7 �ݴϴ�. �տ� ��Ȥ�� 1�� �߰��մϴ�.");
//	strcpy(&CardDatabase[CARD_RECKLESSCHARGE].description_up, "���ظ� 10 �ݴϴ�. �տ� ��Ȥ�� 1�� �߰��մϴ�.");
//
//	initCard(CARD_SEARINGBLOW);
//	SetColorRarityType(CARD_SEARINGBLOW, RED, UNCOMMON, ATTACK);
//	CardDatabase[CARD_SEARINGBLOW].cost = 2;
//	CardDatabase[CARD_SEARINGBLOW].damage = 12;
//	SetUpgradedCardCDB(CARD_SEARINGBLOW, 0, 4, 0);
//	strcpy(&CardDatabase[CARD_SEARINGBLOW].name, "�ۿ�Ÿ��");
//	strcpy(&CardDatabase[CARD_SEARINGBLOW].description, "���ظ� 12 �ݴϴ�. ���׷��̵��� �� �ִ� Ƚ���� ������ �����ϴ�.");
//	strcpy(&CardDatabase[CARD_SEARINGBLOW].description_up, "���ظ� 16 �ݴϴ�. ���׷��̵��� �� �ִ� Ƚ���� ������ �����ϴ�.");
//
//	initCard(CARD_UPPERCUT);
//	SetColorRarityType(CARD_UPPERCUT, RED, UNCOMMON, ATTACK);
//	CardDatabase[CARD_UPPERCUT].cost = 2;
//	CardDatabase[CARD_UPPERCUT].damage = 13;
//	SetUpgradedCardCDB(CARD_UPPERCUT, 0, 4, 0);
//	strcpy(&CardDatabase[CARD_UPPERCUT].name, "������");
//	strcpy(&CardDatabase[CARD_UPPERCUT].description, "���ظ� 13 �ݴϴ�. ��ȭ�� 1, ����� 1 �����մϴ�.");
//	strcpy(&CardDatabase[CARD_UPPERCUT].description_up, "���ظ� 17 �ݴϴ�. ��ȭ�� 1, ����� 1 �����մϴ�.");
//
//	initCard(CARD_WHIRLWIND);
//	SetColorRarityType(CARD_WHIRLWIND, RED, UNCOMMON, ATTACK);
//	CardDatabase[CARD_WHIRLWIND].cost = -1;
//	CardDatabase[CARD_WHIRLWIND].damage = 5;
//	SetUpgradedCardCDB(CARD_WHIRLWIND, 0, 3, 0);
//	strcpy(&CardDatabase[CARD_WHIRLWIND].name, "ȸ�����ٶ�");
//	strcpy(&CardDatabase[CARD_WHIRLWIND].description, "��� ������ ���� ��������ŭ ���ظ� 5�� �ݴϴ�.");
//	strcpy(&CardDatabase[CARD_WHIRLWIND].description_up, "��� ������ ���� ��������ŭ ���ظ� 8�� �ݴϴ�.");
//
//	initCard(CARD_BATTLETRANCE);
//	SetColorRarityType(CARD_BATTLETRANCE, RED, UNCOMMON, SKILL);
//	CardDatabase[CARD_BATTLETRANCE].cost = 0;
//	SetUpgradedCardCDB(CARD_BATTLETRANCE, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_BATTLETRANCE].name, "��������");
//	strcpy(&CardDatabase[CARD_BATTLETRANCE].description, "ī�带 3�� �̽��ϴ�. �̹� �Ͽ� ī�带 ���� �� �����ϴ�.");
//	strcpy(&CardDatabase[CARD_BATTLETRANCE].description_up, "ī�带 4�� �̽��ϴ�. �̹� �Ͽ� ī�带 ���� �� �����ϴ�.");
//
//	initCard(CARD_BLOODLETTING);
//	SetColorRarityType(CARD_BLOODLETTING, RED, UNCOMMON, SKILL);
//	CardDatabase[CARD_BLOODLETTING].cost = 0;
//	SetUpgradedCardCDB(CARD_BLOODLETTING, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_BLOODLETTING].name, "����");
//	strcpy(&CardDatabase[CARD_BLOODLETTING].description, "ü���� 3 �ҽ��ϴ�. �������� 2 ����ϴ�.");
//	strcpy(&CardDatabase[CARD_BLOODLETTING].description_up, "ü���� 3 �ҽ��ϴ�. �������� 3 ����ϴ�.");
//
//	initCard(CARD_BURNINGPACT);
//	SetColorRarityType(CARD_BURNINGPACT, RED, UNCOMMON, SKILL);
//	CardDatabase[CARD_BURNINGPACT].cost = 1;
//	SetUpgradedCardCDB(CARD_BURNINGPACT, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_BURNINGPACT].name, "��Ÿ�¼���");
//	strcpy(&CardDatabase[CARD_BURNINGPACT].description, "�տ� �ִ� ī�带 1�� �Ҹ��մϴ�. ī�带 2�� �̽��ϴ�.");
//	strcpy(&CardDatabase[CARD_BURNINGPACT].description_up, "�տ� �ִ� ī�带 1�� �Ҹ��մϴ�. ī�带 3�� �̽��ϴ�.");
//
//	initCard(CARD_DISARM);
//	SetColorRarityType(CARD_DISARM, RED, UNCOMMON, SKILL);
//	CardDatabase[CARD_DISARM].cost = 1;
//	SetUpgradedCardCDB(CARD_DISARM, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_DISARM].name, "��������");
//	strcpy(&CardDatabase[CARD_DISARM].description, "�Ҹ�. ���� ���� 2 ���ҽ�ŵ�ϴ�.");
//	strcpy(&CardDatabase[CARD_DISARM].description_up, "�Ҹ�. ���� ���� 3 ���ҽ�ŵ�ϴ�.");
//
//	initCard(CARD_DUALWIELD);
//	SetColorRarityType(CARD_DUALWIELD, RED, UNCOMMON, SKILL);
//	CardDatabase[CARD_DUALWIELD].cost = 1;
//	SetUpgradedCardCDB(CARD_DUALWIELD, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_DUALWIELD].name, "�������");
//	strcpy(&CardDatabase[CARD_DUALWIELD].description, "�տ� �ִ� ���� ī�峪 �Ŀ� ī�带 1�� ������ �纻�� �տ� 1�� ����ϴ�.");
//	strcpy(&CardDatabase[CARD_DUALWIELD].description_up, "�տ� �ִ� ���� ī�峪 �Ŀ� ī�带 1�� ������ �纻�� �տ� 2�� ����ϴ�.");
//
//	initCard(CARD_ENTRENCH);
//	SetColorRarityType(CARD_ENTRENCH, RED, UNCOMMON, SKILL);
//	CardDatabase[CARD_ENTRENCH].cost = 2;
//	SetUpgradedCardCDB(CARD_ENTRENCH, -1, 0, 0);
//	strcpy(&CardDatabase[CARD_ENTRENCH].name, "��ȣ����");
//	strcpy(&CardDatabase[CARD_ENTRENCH].description, "���� ����ŭ ���� ����ϴ�.");
//	strcpy(&CardDatabase[CARD_ENTRENCH].description_up, "���� ����ŭ ���� ����ϴ�.");
//
//	initCard(CARD_FLAMEBARRIER);
//	SetColorRarityType(CARD_FLAMEBARRIER, RED, UNCOMMON, SKILL);
//	CardDatabase[CARD_FLAMEBARRIER].cost = 2;
//	CardDatabase[CARD_FLAMEBARRIER].block = 12;
//	SetUpgradedCardCDB(CARD_FLAMEBARRIER, 0, 0, 4);
//	strcpy(&CardDatabase[CARD_FLAMEBARRIER].name, "ȭ���溮");
//	strcpy(&CardDatabase[CARD_FLAMEBARRIER].description, "���� 12 ����ϴ�. �̹� �Ͽ� ���ݹ��� ������ �����ڿ��� ���ظ� 4 �ݴϴ�.");
//	strcpy(&CardDatabase[CARD_FLAMEBARRIER].description_up, "���� 16 ����ϴ�. �̹� �Ͽ� ���ݹ��� ������ �����ڿ��� ���ظ� 4 �ݴϴ�.");
//
//	initCard(CARD_GHOSTLYARMOR);
//	SetColorRarityType(CARD_GHOSTLYARMOR, RED, UNCOMMON, SKILL);
//	CardDatabase[CARD_GHOSTLYARMOR].cost = 1;
//	CardDatabase[CARD_GHOSTLYARMOR].block = 10;
//	SetUpgradedCardCDB(CARD_GHOSTLYARMOR, 0, 0, 3);
//	strcpy(&CardDatabase[CARD_GHOSTLYARMOR].name, "���ɰ���");
//	strcpy(&CardDatabase[CARD_GHOSTLYARMOR].description, "����. ���� 10 ����ϴ�.");
//	strcpy(&CardDatabase[CARD_GHOSTLYARMOR].description_up, "����. ���� 13 ����ϴ�.");
//
//	initCard(CARD_INFERNALBLADE);
//	SetColorRarityType(CARD_INFERNALBLADE, RED, UNCOMMON, SKILL);
//	CardDatabase[CARD_INFERNALBLADE].cost = 1;
//	SetUpgradedCardCDB(CARD_INFERNALBLADE, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_INFERNALBLADE].name, "�����ǰ�");
//	strcpy(&CardDatabase[CARD_INFERNALBLADE].description, "�տ� ������ ���� ī�带 1�� �߰��մϴ�. �� ī��� �̹� �Ͽ� ����� 0�� �˴ϴ�. �Ҹ�.");
//	strcpy(&CardDatabase[CARD_INFERNALBLADE].description_up, "�տ� ������ ���� ī�带 1�� �߰��մϴ�. �� ī��� ���׷��̵�Ǹ� �̹� �Ͽ� ����� 0�� �˴ϴ�. �Ҹ�.");
//
//	initCard(CARD_INTIMIDATE);
//	SetColorRarityType(CARD_INTIMIDATE, RED, UNCOMMON, SKILL);
//	CardDatabase[CARD_INTIMIDATE].cost = 0;
//	SetUpgradedCardCDB(CARD_INTIMIDATE, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_INTIMIDATE].name, "����");
//	strcpy(&CardDatabase[CARD_INTIMIDATE].description, "��� ������ ��ȭ�� 1 �����մϴ�.");
//	strcpy(&CardDatabase[CARD_INTIMIDATE].description_up, "��� ������ ��ȭ�� 2 �����մϴ�.");
//
//	initCard(CARD_OFFERING);
//	SetColorRarityType(CARD_OFFERING, RED, UNCOMMON, SKILL);
//	CardDatabase[CARD_OFFERING].cost = 0;
//	SetUpgradedCardCDB(CARD_OFFERING, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_OFFERING].name, "����");
//	strcpy(&CardDatabase[CARD_OFFERING].description, "�Ҹ�. ü���� 6 �ҽ��ϴ�. �������� 2 ��� ī�带 3�� �̽��ϴ�.");
//	strcpy(&CardDatabase[CARD_OFFERING].description_up, "�Ҹ�. ü���� 6 �ҽ��ϴ�. �������� 2 ��� ī�带 5�� �̽��ϴ�.");
//
//	initCard(CARD_RAGE);
//	SetColorRarityType(CARD_RAGE, RED, UNCOMMON, SKILL);
//	CardDatabase[CARD_RAGE].cost = 0;
//	SetUpgradedCardCDB(CARD_RAGE, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_RAGE].name, "�ݳ�");
//	strcpy(&CardDatabase[CARD_RAGE].description, "���ݹ��� ������ ���� 3 ����ϴ�.");
//	strcpy(&CardDatabase[CARD_RAGE].description_up, "���ݹ��� ������ ���� 5 ����ϴ�.");
//
//	initCard(CARD_SECONDWIND);
//	SetColorRarityType(CARD_SECONDWIND, RED, UNCOMMON, SKILL);
//	CardDatabase[CARD_SECONDWIND].cost = 1;
//	SetUpgradedCardCDB(CARD_SECONDWIND, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_SECONDWIND].name, "���");
//	strcpy(&CardDatabase[CARD_SECONDWIND].description, "�տ� �ִ� ��� ���� ī�尡 �ƴ� ī�带 �Ҹ��մϴ�. �Ҹ��� ī�� 1��� ���� 5 ����ϴ�.");
//	strcpy(&CardDatabase[CARD_SECONDWIND].description_up, "�տ� �ִ� ��� ���� ī�尡 �ƴ� ī�带 �Ҹ��մϴ�. �Ҹ��� ī�� 1��� ���� 7 ����ϴ�.");
//
//	initCard(CARD_SEEINGRED);
//	SetColorRarityType(CARD_SEEINGRED, RED, UNCOMMON, SKILL);
//	CardDatabase[CARD_SEEINGRED].cost = 1;
//	SetUpgradedCardCDB(CARD_SEEINGRED, -1, 0, 0);
//	strcpy(&CardDatabase[CARD_SEEINGRED].name, "�г�����");
//	strcpy(&CardDatabase[CARD_SEEINGRED].description, "�Ҹ�. �������� 2 ����ϴ�. �̹� �Ͽ� ī�带 ���� �� �����ϴ�.");
//	strcpy(&CardDatabase[CARD_SEEINGRED].description_up, "�Ҹ�. �������� 2 ����ϴ�. �̹� �Ͽ� ī�带 ���� �� �����ϴ�.");
//
//	initCard(CARD_SENTINEL);
//	SetColorRarityType(CARD_SENTINEL, RED, UNCOMMON, SKILL);
//	CardDatabase[CARD_SENTINEL].cost = 1;
//	CardDatabase[CARD_SENTINEL].block = 5;
//	SetUpgradedCardCDB(CARD_SENTINEL, 0, 0, 3);
//	strcpy(&CardDatabase[CARD_SENTINEL].name, "�ļ���");
//	strcpy(&CardDatabase[CARD_SENTINEL].description, "���� 5 ����ϴ�. �̹� �Ͽ� �ٸ� ī�带 2�� �̻� �÷����ߴٸ� �������� 2 ����ϴ�.");
//	strcpy(&CardDatabase[CARD_SENTINEL].description_up, "���� 8 ����ϴ�. �̹� �Ͽ� �ٸ� ī�带 2�� �̻� �÷����ߴٸ� �������� 2 ����ϴ�.");
//
//	initCard(CARD_SHOCKWAVE);
//	SetColorRarityType(CARD_SHOCKWAVE, RED, UNCOMMON, SKILL);
//	CardDatabase[CARD_SHOCKWAVE].cost = 2;
//	SetUpgradedCardCDB(CARD_SHOCKWAVE, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_SHOCKWAVE].name, "�����");
//	strcpy(&CardDatabase[CARD_SHOCKWAVE].description, "��� ������ ��ȭ�� 3, ��ฦ 3 �����մϴ�. �Ҹ�.");
//	strcpy(&CardDatabase[CARD_SHOCKWAVE].description_up, "��� ������ ��ȭ�� 5, ��ฦ 5 �����մϴ�. �Ҹ�.");
//
//	initCard(CARD_SPOTWEAKNESS);
//	SetColorRarityType(CARD_SPOTWEAKNESS, RED, UNCOMMON, SKILL);
//	CardDatabase[CARD_SPOTWEAKNESS].cost = 1;
//	SetUpgradedCardCDB(CARD_SPOTWEAKNESS, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_SPOTWEAKNESS].name, "�����߰�");
//	strcpy(&CardDatabase[CARD_SPOTWEAKNESS].description, "���� ���� ������ ���̸� ���� 3 ����ϴ�.");
//	strcpy(&CardDatabase[CARD_SPOTWEAKNESS].description_up, "���� ���� ������ ���̸� ���� 4 ����ϴ�.");
//
//	initCard(CARD_COMBUST);
//	SetColorRarityType(CARD_COMBUST, RED, UNCOMMON, POWER);
//	CardDatabase[CARD_COMBUST].cost = 1;
//	SetUpgradedCardCDB(CARD_COMBUST, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_COMBUST].name, "����");
//	strcpy(&CardDatabase[CARD_COMBUST].description, "�� ���� ��, ü���� 1 �Ұ� ��� ������ ���ظ� 5 �ݴϴ�.");
//	strcpy(&CardDatabase[CARD_COMBUST].description_up, "�� ���� ��, ü���� 1 �Ұ� ��� ������ ���ظ� 7 �ݴϴ�.");
//
//	initCard(CARD_DARKEMBRACE);
//	SetColorRarityType(CARD_DARKEMBRACE, RED, UNCOMMON, POWER);
//	CardDatabase[CARD_DARKEMBRACE].cost = 2;
//	SetUpgradedCardCDB(CARD_DARKEMBRACE, -1, 0, 0);
//	strcpy(&CardDatabase[CARD_DARKEMBRACE].name, "���������");
//	strcpy(&CardDatabase[CARD_DARKEMBRACE].description, "ī�带 �Ҹ��� ������ ī�带 1�� �̽��ϴ�.");
//	strcpy(&CardDatabase[CARD_DARKEMBRACE].description_up, "ī�带 �Ҹ��� ������ ī�带 1�� �̽��ϴ�.");
//
//	initCard(CARD_EVOLVE);
//	SetColorRarityType(CARD_EVOLVE, RED, UNCOMMON, POWER);
//	CardDatabase[CARD_EVOLVE].cost = 1;
//	SetUpgradedCardCDB(CARD_EVOLVE, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_EVOLVE].name, "��ȭ");
//	strcpy(&CardDatabase[CARD_EVOLVE].description, "�����̻� ī�带 ���� ������ ī�带 1�� �̽��ϴ�.");
//	strcpy(&CardDatabase[CARD_EVOLVE].description_up, "�����̻� ī�带 ���� ������ ī�带 2�� �̽��ϴ�.");
//
//	initCard(CARD_FEELNOPAIN);
//	SetColorRarityType(CARD_FEELNOPAIN, RED, UNCOMMON, POWER);
//	CardDatabase[CARD_FEELNOPAIN].cost = 1;
//	SetUpgradedCardCDB(CARD_FEELNOPAIN, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_FEELNOPAIN].name, "���빫����");
//	strcpy(&CardDatabase[CARD_FEELNOPAIN].description, "ī�带 �Ҹ��� ������ ���� 3 ����ϴ�.");
//	strcpy(&CardDatabase[CARD_FEELNOPAIN].description_up, "ī�带 �Ҹ��� ������ ���� 4 ����ϴ�.");
//
//	initCard(CARD_FIREBREATHING);
//	SetColorRarityType(CARD_FIREBREATHING, RED, UNCOMMON, POWER);
//	CardDatabase[CARD_FIREBREATHING].cost = 1;
//	SetUpgradedCardCDB(CARD_FIREBREATHING, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_FIREBREATHING].name, "ȭ��ȣ��");
//	strcpy(&CardDatabase[CARD_FIREBREATHING].description, "���� ī�带 �̰ų� �տ� �߰��� ������ ��� ������ ���ظ� 6 �ݴϴ�.");
//	strcpy(&CardDatabase[CARD_FIREBREATHING].description_up, "���� ī�带 �̰ų� �տ� �߰��� ������ ��� ������ ���ظ� 10 �ݴϴ�.");
//
//	initCard(CARD_INFLAME);
//	SetColorRarityType(CARD_INFLAME, RED, UNCOMMON, POWER);
//	CardDatabase[CARD_INFLAME].cost = 1;
//	SetUpgradedCardCDB(CARD_INFLAME, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_INFLAME].name, "����");
//	strcpy(&CardDatabase[CARD_INFLAME].description, "���� 2 ����ϴ�.");
//	strcpy(&CardDatabase[CARD_INFLAME].description_up, "���� 3 ����ϴ�.");
//
//	initCard(CARD_METALLICIZE);
//	SetColorRarityType(CARD_METALLICIZE, RED, UNCOMMON, POWER);
//	CardDatabase[CARD_METALLICIZE].cost = 1;
//	SetUpgradedCardCDB(CARD_METALLICIZE, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_METALLICIZE].name, "�ݼ�ȭ");
//	strcpy(&CardDatabase[CARD_METALLICIZE].description, "�� ���� �� ���� 3 ����ϴ�.");
//	strcpy(&CardDatabase[CARD_METALLICIZE].description_up, "�� ���� �� ���� 4 ����ϴ�.");
//
//	initCard(CARD_RUPTURE);
//	SetColorRarityType(CARD_RUPTURE, RED, UNCOMMON, POWER);
//	CardDatabase[CARD_RUPTURE].cost = 1;
//	SetUpgradedCardCDB(CARD_RUPTURE, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_RUPTURE].name, "�Ŀ�");
//	strcpy(&CardDatabase[CARD_RUPTURE].description, "ü���� ���� ������ ���� 1 ����ϴ�.");
//	strcpy(&CardDatabase[CARD_RUPTURE].description_up, "ü���� ���� ������ ���� 2 ����ϴ�.");
//
//	initCard(CARD_BLUDGEON);
//	SetColorRarityType(CARD_BLUDGEON, RED, RARE, ATTACK);
//	CardDatabase[CARD_BLUDGEON].cost = 3;
//	CardDatabase[CARD_BLUDGEON].damage = 32;
//	SetUpgradedCardCDB(CARD_BLUDGEON, 0, 10, 0);
//	strcpy(&CardDatabase[CARD_BLUDGEON].name, "��Ÿ");
//	strcpy(&CardDatabase[CARD_BLUDGEON].description, "���ظ� 32 �ݴϴ�.");
//	strcpy(&CardDatabase[CARD_BLUDGEON].description_up, "���ظ� 42 �ݴϴ�.");
//
//	initCard(CARD_FEED);
//	SetColorRarityType(CARD_FEED, RED, RARE, ATTACK);
//	CardDatabase[CARD_FEED].cost = 1;
//	CardDatabase[CARD_FEED].damage = 10;
//	SetUpgradedCardCDB(CARD_FEED, 0, 2, 0);
//	strcpy(&CardDatabase[CARD_FEED].name, "����");
//	strcpy(&CardDatabase[CARD_FEED].description, "���ظ� 10 �ݴϴ�. ���� ġ����� �ƴ� ���¿��� ������ �ִ� ü���� 3 �����մϴ�. �Ҹ�.");
//	strcpy(&CardDatabase[CARD_FEED].description_up, "���ظ� 12 �ݴϴ�. ���� ġ����� �ƴ� ���¿��� ������ �ִ� ü���� 4 �����մϴ�. �Ҹ�.");
//
//	initCard(CARD_FIENDFIRE);
//	SetColorRarityType(CARD_FIENDFIRE, RED, RARE, ATTACK);
//	CardDatabase[CARD_FIENDFIRE].cost = 2;
//	CardDatabase[CARD_FIENDFIRE].damage = 7;
//	SetUpgradedCardCDB(CARD_FIENDFIRE, 0, 2, 0);
//	strcpy(&CardDatabase[CARD_FIENDFIRE].name, "���ͺ�");
//	strcpy(&CardDatabase[CARD_FIENDFIRE].description, "�Ҹ�. �տ� �ִ� ��� ī�带 �Ҹ��մϴ�. �Ҹ��� ī�� 1��� ���ظ� 7�� �ݴϴ�.");
//	strcpy(&CardDatabase[CARD_FIENDFIRE].description_up, "�Ҹ�. �տ� �ִ� ��� ī�带 �Ҹ��մϴ�. �Ҹ��� ī�� 1��� ���ظ� 9�� �ݴϴ�.");
//
//	initCard(CARD_IMMOLATE);
//	SetColorRarityType(CARD_IMMOLATE, RED, RARE, ATTACK);
//	CardDatabase[CARD_IMMOLATE].cost = 2;
//	CardDatabase[CARD_IMMOLATE].damage = 21;
//	SetUpgradedCardCDB(CARD_IMMOLATE, 0, 7, 0);
//	strcpy(&CardDatabase[CARD_IMMOLATE].name, "���");
//	strcpy(&CardDatabase[CARD_IMMOLATE].description, "��� ������ ���ظ� 21 �ݴϴ�. �տ� ȭ���� 1�� �߰��մϴ�.");
//	strcpy(&CardDatabase[CARD_IMMOLATE].description_up, "��� ������ ���ظ� 28 �ݴϴ�. �տ� ȭ���� 1�� �߰��մϴ�.");
//
//	initCard(CARD_REAPER);
//	SetColorRarityType(CARD_REAPER, RED, RARE, ATTACK);
//	CardDatabase[CARD_REAPER].cost = 2;
//	CardDatabase[CARD_REAPER].damage = 4;
//	SetUpgradedCardCDB(CARD_REAPER, 0, 1, 0);
//	strcpy(&CardDatabase[CARD_REAPER].name, "���");
//	strcpy(&CardDatabase[CARD_REAPER].description, "��� ������ ���ظ� 4 �ݴϴ�. ġ����� �ƴ� ������ �� ���ظ�ŭ ü���� ȸ���մϴ�. �Ҹ�.");
//	strcpy(&CardDatabase[CARD_REAPER].description_up, "��� ������ ���ظ� 5 �ݴϴ�. ġ����� �ƴ� ������ �� ���ظ�ŭ ü���� ȸ���մϴ�. �Ҹ�.");
//
//	initCard(CARD_DOUBLETAP);
//	SetColorRarityType(CARD_DOUBLETAP, RED, RARE, SKILL);
//	CardDatabase[CARD_DOUBLETAP].cost = 1;
//	SetUpgradedCardCDB(CARD_DOUBLETAP, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_DOUBLETAP].name, "��Ÿ");
//	strcpy(&CardDatabase[CARD_DOUBLETAP].description, "�̹� �Ͽ� ������ �÷����ϴ� ���� ī�带 �� �� �÷����մϴ�.");
//	strcpy(&CardDatabase[CARD_DOUBLETAP].description_up, "�̹� �Ͽ� ������ �÷����ϴ� ���� ī�� 2���� �� �� �÷����մϴ�.");
//
//	initCard(CARD_EXHUME);
//	SetColorRarityType(CARD_EXHUME, RED, RARE, SKILL);
//	CardDatabase[CARD_EXHUME].cost = 1;
//	SetUpgradedCardCDB(CARD_EXHUME, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_EXHUME].name, "�߱�");
//	strcpy(&CardDatabase[CARD_EXHUME].description, "�Ҹ� ���̿��� ī�带 1�� ������ �տ� �߰��մϴ�. �Ҹ�.");
//	strcpy(&CardDatabase[CARD_EXHUME].description_up, "�Ҹ� ���̿��� ī�带 1�� ������ �տ� �߰��մϴ�.");
//
//	initCard(CARD_IMPERVIOUS);
//	SetColorRarityType(CARD_IMPERVIOUS, RED, RARE, SKILL);
//	CardDatabase[CARD_IMPERVIOUS].cost = 2;
//	CardDatabase[CARD_IMPERVIOUS].block = 30;
//	SetUpgradedCardCDB(CARD_IMPERVIOUS, 0, 0, 10);
//	strcpy(&CardDatabase[CARD_IMPERVIOUS].name, "�ұ�");
//	strcpy(&CardDatabase[CARD_IMPERVIOUS].description, "���� 30 ����ϴ�. �Ҹ�.");
//	strcpy(&CardDatabase[CARD_IMPERVIOUS].description_up, "���� 40 ����ϴ�. �Ҹ�.");
//
//	initCard(CARD_LIMITBREAK);
//	SetColorRarityType(CARD_LIMITBREAK, RED, RARE, SKILL);
//	CardDatabase[CARD_LIMITBREAK].cost = 1;
//	SetUpgradedCardCDB(CARD_LIMITBREAK, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_LIMITBREAK].name, "�Ѱ赹��");
//	strcpy(&CardDatabase[CARD_LIMITBREAK].description, "���� ����ŭ ���� ����ϴ�. �Ҹ�.");
//	strcpy(&CardDatabase[CARD_LIMITBREAK].description_up, "���� ����ŭ ���� ����ϴ�.");
//
//	initCard(CARD_BARRICADE);
//	SetColorRarityType(CARD_BARRICADE, RED, RARE, POWER);
//	CardDatabase[CARD_BARRICADE].cost = 3;
//	SetUpgradedCardCDB(CARD_BARRICADE, -1, 0, 0);
//	strcpy(&CardDatabase[CARD_BARRICADE].name, "�溮");
//	strcpy(&CardDatabase[CARD_BARRICADE].description, "���� �� ���� �� ������� �ʽ��ϴ�.");
//	strcpy(&CardDatabase[CARD_BARRICADE].description_up, "���� �� ���� �� ������� �ʽ��ϴ�.");
//
//	initCard(CARD_BERSERK);
//	SetColorRarityType(CARD_BERSERK, RED, RARE, POWER);
//	CardDatabase[CARD_BERSERK].cost = 0;
//	SetUpgradedCardCDB(CARD_BERSERK, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_BERSERK].name, "������");
//	strcpy(&CardDatabase[CARD_BERSERK].description, "�� ���� �� �������� 1 ��� ����� 1 ����ϴ�.");
//	strcpy(&CardDatabase[CARD_BERSERK].description_up, "�� ���� �� �������� 1 ����ϴ�.");
//
//	initCard(CARD_BRUTALITY);
//	SetColorRarityType(CARD_BRUTALITY, RED, RARE, POWER);
//	CardDatabase[CARD_BRUTALITY].cost = 0;
//	SetUpgradedCardCDB(CARD_BRUTALITY, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_BRUTALITY].name, "�߸���");
//	strcpy(&CardDatabase[CARD_BRUTALITY].description, "�� ���� �� ü���� 1 �Ұ� ī�带 1�� �̽��ϴ�.");
//	strcpy(&CardDatabase[CARD_BRUTALITY].description_up, "����. �� ���� �� ü���� 1 �Ұ� ī�带 1�� �̽��ϴ�.");
//
//	initCard(CARD_CORRUPTION);
//	SetColorRarityType(CARD_CORRUPTION, RED, RARE, POWER);
//	CardDatabase[CARD_CORRUPTION].cost = 3;
//	SetUpgradedCardCDB(CARD_CORRUPTION, -1, 0, 0);
//	strcpy(&CardDatabase[CARD_CORRUPTION].name, "Ÿ��");
//	strcpy(&CardDatabase[CARD_CORRUPTION].description, "��ų ī���� ����� 0�� �˴ϴ�. ��ų ī�带 �÷����ϸ� �Ҹ�˴ϴ�.");
//	strcpy(&CardDatabase[CARD_CORRUPTION].description_up, "��ų ī���� ����� 0�� �˴ϴ�. ��ų ī�带 �÷����ϸ� �Ҹ�˴ϴ�.");
//
//	initCard(CARD_DEMONFORM);
//	SetColorRarityType(CARD_DEMONFORM, RED, RARE, POWER);
//	CardDatabase[CARD_DEMONFORM].cost = 3;
//	SetUpgradedCardCDB(CARD_DEMONFORM, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_DEMONFORM].name, "�Ǹ�ȭ");
//	strcpy(&CardDatabase[CARD_DEMONFORM].description, "�� ���� �� ���� 2 ����ϴ�.");
//	strcpy(&CardDatabase[CARD_DEMONFORM].description_up, "�� ���� �� ���� 3 ����ϴ�.");
//
//	initCard(CARD_JUGGERNAUT);
//	SetColorRarityType(CARD_JUGGERNAUT, RED, RARE, POWER);
//	CardDatabase[CARD_JUGGERNAUT].cost = 2;
//	SetUpgradedCardCDB(CARD_JUGGERNAUT, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_JUGGERNAUT].name, "�Ŵ�����");
//	strcpy(&CardDatabase[CARD_JUGGERNAUT].description, "���� ���� ������ ������ ������ ���ظ� 5 �ݴϴ�.");
//	strcpy(&CardDatabase[CARD_JUGGERNAUT].description_up, "���� ���� ������ ������ ������ ���ظ� 7 �ݴϴ�.");
//
//	initCard(CARD_STRIKE2);
//	SetColorRarityType(CARD_STRIKE2, GREEN, COMMON, ATTACK);
//	CardDatabase[CARD_STRIKE2].cost = 1;
//	CardDatabase[CARD_STRIKE2].damage = 6;
//	SetUpgradedCardCDB(CARD_STRIKE2, 0, 3, 0);
//	strcpy(&CardDatabase[CARD_STRIKE2].name, "Ÿ��");
//	strcpy(&CardDatabase[CARD_STRIKE2].description, "���ظ� 6 �ݴϴ�.");
//	strcpy(&CardDatabase[CARD_STRIKE2].description_up, "���ظ� 9 �ݴϴ�.");
//
//	initCard(CARD_DEFEND2);
//	SetColorRarityType(CARD_DEFEND2, GREEN, COMMON, SKILL);
//	CardDatabase[CARD_DEFEND2].cost = 1;
//	CardDatabase[CARD_DEFEND2].block = 5;
//	SetUpgradedCardCDB(CARD_DEFEND2, 0, 0, 3);
//	strcpy(&CardDatabase[CARD_DEFEND2].name, "����");
//	strcpy(&CardDatabase[CARD_DEFEND2].description, "����� 5 ����ϴ�.");
//	strcpy(&CardDatabase[CARD_DEFEND2].description_up, "����� 8 ����ϴ�.");
//
//	initCard(CARD_NEUTRALIZE);
//	SetColorRarityType(CARD_NEUTRALIZE, GREEN, COMMON, ATTACK);
//	CardDatabase[CARD_NEUTRALIZE].cost = 0;
//	CardDatabase[CARD_NEUTRALIZE].damage = 3;
//	SetUpgradedCardCDB(CARD_NEUTRALIZE, 0, 1, 0);
//	strcpy(&CardDatabase[CARD_NEUTRALIZE].name, "����ȭ");
//	strcpy(&CardDatabase[CARD_NEUTRALIZE].description, "���ظ� 3 �ݴϴ�. ��ȭ�� 1 �����մϴ�.");
//	strcpy(&CardDatabase[CARD_NEUTRALIZE].description_up, "���ظ� 4 �ݴϴ�. ��ȭ�� 1 �����մϴ�.");
//
//	initCard(CARD_SURVIVOR);
//	SetColorRarityType(CARD_SURVIVOR, GREEN, COMMON, SKILL);
//	CardDatabase[CARD_SURVIVOR].cost = 1;
//	CardDatabase[CARD_SURVIVOR].block = 8;
//	SetUpgradedCardCDB(CARD_SURVIVOR, 0, 0, 3);
//	strcpy(&CardDatabase[CARD_SURVIVOR].name, "������");
//	strcpy(&CardDatabase[CARD_SURVIVOR].description, "����� 8 ����ϴ�. ī�带 1�� �̽��ϴ�.");
//	strcpy(&CardDatabase[CARD_SURVIVOR].description_up, "����� 11 ����ϴ�. ī�带 1�� �̽��ϴ�.");
//
//	initCard(CARD_ACROBATICS);
//	SetColorRarityType(CARD_ACROBATICS, GREEN, COMMON, SKILL);
//	CardDatabase[CARD_ACROBATICS].cost = 1;
//	SetUpgradedCardCDB(CARD_ACROBATICS, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_ACROBATICS].name, "�");
//	strcpy(&CardDatabase[CARD_ACROBATICS].description, "ī�带 3�� �̽��ϴ�. ī�带 1�� �����ϴ�.");
//	strcpy(&CardDatabase[CARD_ACROBATICS].description_up, "ī�带 4�� �̽��ϴ�. ī�带 1�� �����ϴ�.");
//
//	initCard(CARD_BACKFLIP);
//	SetColorRarityType(CARD_BACKFLIP, GREEN, COMMON, SKILL);
//	CardDatabase[CARD_BACKFLIP].cost = 1;
//	CardDatabase[CARD_BACKFLIP].block = 5;
//	SetUpgradedCardCDB(CARD_BACKFLIP, 0, 0, 3);
//	strcpy(&CardDatabase[CARD_BACKFLIP].name, "���ø�");
//	strcpy(&CardDatabase[CARD_BACKFLIP].description, "����� 5 ����ϴ�. ī�带 2�� �̽��ϴ�.");
//	strcpy(&CardDatabase[CARD_BACKFLIP].description_up, "����� 8 ����ϴ�. ī�带 2�� �̽��ϴ�.");
//
//	initCard(CARD_BANE);
//	SetColorRarityType(CARD_BANE, GREEN, COMMON, ATTACK);
//	CardDatabase[CARD_BANE].cost = 1;
//	CardDatabase[CARD_BANE].damage = 7;
//	SetUpgradedCardCDB(CARD_BANE, 0, 3, 0);
//	strcpy(&CardDatabase[CARD_BANE].name, "�͵�");
//	strcpy(&CardDatabase[CARD_BANE].description, "���ظ� 7 �ݴϴ�. ���� ���� �ɷ��ִٸ� ���ظ� 2��� �ݴϴ�.");
//	strcpy(&CardDatabase[CARD_BANE].description_up, "���ظ� 10 �ݴϴ�. ���� ���� �ɷ��ִٸ� ���ظ� 2��� �ݴϴ�.");
//
//	initCard(CARD_BLADEDANCE);
//	SetColorRarityType(CARD_BLADEDANCE, GREEN, COMMON, SKILL);
//	CardDatabase[CARD_BLADEDANCE].cost = 1;
//	SetUpgradedCardCDB(CARD_BLADEDANCE, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_BLADEDANCE].name, "Į��");
//	strcpy(&CardDatabase[CARD_BLADEDANCE].description, "�������� 3�� �տ� �߰��մϴ�.");
//	strcpy(&CardDatabase[CARD_BLADEDANCE].description_up, "�������� 4�� �տ� �߰��մϴ�.");
//
//	initCard(CARD_CLOAKANDDAGGER);
//	SetColorRarityType(CARD_CLOAKANDDAGGER, GREEN, COMMON, SKILL);
//	CardDatabase[CARD_CLOAKANDDAGGER].cost = 1;
//	CardDatabase[CARD_CLOAKANDDAGGER].block = 6;
//	SetUpgradedCardCDB(CARD_CLOAKANDDAGGER, 0, 0, 2);
//	strcpy(&CardDatabase[CARD_CLOAKANDDAGGER].name, "����� �ܰ�");
//	strcpy(&CardDatabase[CARD_CLOAKANDDAGGER].description, "����� 6 ����ϴ�. �������� 1�� �տ� �߰��մϴ�.");
//	strcpy(&CardDatabase[CARD_CLOAKANDDAGGER].description_up, "����� 8 ����ϴ�. �������� 1�� �տ� �߰��մϴ�.");
//
//	initCard(CARD_DEADLYPOISON);
//	SetColorRarityType(CARD_DEADLYPOISON, GREEN, COMMON, SKILL);
//	CardDatabase[CARD_DEADLYPOISON].cost = 1;
//	SetUpgradedCardCDB(CARD_DEADLYPOISON, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_DEADLYPOISON].name, "�͵�");
//	strcpy(&CardDatabase[CARD_DEADLYPOISON].description, "���� 5 �����մϴ�.");
//	strcpy(&CardDatabase[CARD_DEADLYPOISON].description_up, "���� 7 �����մϴ�.");
//
//	initCard(CARD_DEFLECT);
//	SetColorRarityType(CARD_DEFLECT, GREEN, COMMON, SKILL);
//	CardDatabase[CARD_DEFLECT].cost = 0;
//	CardDatabase[CARD_DEFLECT].block = 4;
//	SetUpgradedCardCDB(CARD_DEFLECT, 0, 0, 3);
//	strcpy(&CardDatabase[CARD_DEFLECT].name, "����");
//	strcpy(&CardDatabase[CARD_DEFLECT].description, "����� 4 ����ϴ�.");
//	strcpy(&CardDatabase[CARD_DEFLECT].description_up, "����� 7 ����ϴ�.");
//
//	initCard(CARD_DODGEANDROLL);
//	SetColorRarityType(CARD_DODGEANDROLL, GREEN, COMMON, SKILL);
//	CardDatabase[CARD_DODGEANDROLL].cost = 1;
//	CardDatabase[CARD_DODGEANDROLL].block = 4;
//	SetUpgradedCardCDB(CARD_DODGEANDROLL, 0, 0, 2);
//	strcpy(&CardDatabase[CARD_DODGEANDROLL].name, "ȸ�ǿ� ������");
//	strcpy(&CardDatabase[CARD_DODGEANDROLL].description, "����� 4 ����ϴ�. ���� �Ͽ� ��ø�� 2 ����ϴ�.");
//	strcpy(&CardDatabase[CARD_DODGEANDROLL].description_up, "����� 6 ����ϴ�. ���� �Ͽ� ��ø�� 2 ����ϴ�.");
//
//	initCard(CARD_FLYINGKNEE);
//	SetColorRarityType(CARD_FLYINGKNEE, GREEN, COMMON, ATTACK);
//	CardDatabase[CARD_FLYINGKNEE].cost = 1;
//	CardDatabase[CARD_FLYINGKNEE].damage = 8;
//	SetUpgradedCardCDB(CARD_FLYINGKNEE, 0, 3, 0);
//	strcpy(&CardDatabase[CARD_FLYINGKNEE].name, "�ö��� ��");
//	strcpy(&CardDatabase[CARD_FLYINGKNEE].description, "���ظ� 8 �ݴϴ�. ī�带 1�� �̽��ϴ�.");
//	strcpy(&CardDatabase[CARD_FLYINGKNEE].description_up, "���ظ� 11 �ݴϴ�. ī�带 1�� �̽��ϴ�.");
//
//	initCard(CARD_OUTMANEUVER);
//	SetColorRarityType(CARD_OUTMANEUVER, GREEN, COMMON, SKILL);
//	CardDatabase[CARD_OUTMANEUVER].cost = 1;
//	SetUpgradedCardCDB(CARD_OUTMANEUVER, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_OUTMANEUVER].name, "�⵿����");
//	strcpy(&CardDatabase[CARD_OUTMANEUVER].description, "���� �Ͽ� �������� 2 ����ϴ�.");
//	strcpy(&CardDatabase[CARD_OUTMANEUVER].description_up, "���� �Ͽ� �������� 3 ����ϴ�.");
//
//	initCard(CARD_PIERCINGWAIL);
//	SetColorRarityType(CARD_PIERCINGWAIL, GREEN, COMMON, SKILL);
//	CardDatabase[CARD_PIERCINGWAIL].cost = 1;
//	SetUpgradedCardCDB(CARD_PIERCINGWAIL, -1, 0, 0);
//	strcpy(&CardDatabase[CARD_PIERCINGWAIL].name, "��մ� ���");
//	strcpy(&CardDatabase[CARD_PIERCINGWAIL].description, "��� ������ ��ȭ�� 6 �����մϴ�.");
//	strcpy(&CardDatabase[CARD_PIERCINGWAIL].description_up, "��� ������ ��ȭ�� 6 �����մϴ�.");
//
//	initCard(CARD_POISONEDSTAB);
//	SetColorRarityType(CARD_POISONEDSTAB, GREEN, COMMON, ATTACK);
//	CardDatabase[CARD_POISONEDSTAB].cost = 1;
//	CardDatabase[CARD_POISONEDSTAB].damage = 6;
//	SetUpgradedCardCDB(CARD_POISONEDSTAB, 0, 2, 0);
//	strcpy(&CardDatabase[CARD_POISONEDSTAB].name, "��ħ");
//	strcpy(&CardDatabase[CARD_POISONEDSTAB].description, "���ظ� 6 �ݴϴ�. ���� 3 �����մϴ�.");
//	strcpy(&CardDatabase[CARD_POISONEDSTAB].description_up, "���ظ� 8 �ݴϴ�. ���� 4 �����մϴ�.");
//
//	initCard(CARD_PREPARED);
//	SetColorRarityType(CARD_PREPARED, GREEN, COMMON, SKILL);
//	CardDatabase[CARD_PREPARED].cost = 0;
//	SetUpgradedCardCDB(CARD_PREPARED, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_PREPARED].name, "�غ�");
//	strcpy(&CardDatabase[CARD_PREPARED].description, "ī�带 1�� �̽��ϴ�. ī�带 1�� �����ϴ�.");
//	strcpy(&CardDatabase[CARD_PREPARED].description_up, "ī�带 2�� �̽��ϴ�. ī�带 1�� �����ϴ�.");
//
//	initCard(CARD_QUICKSLASH);
//	SetColorRarityType(CARD_QUICKSLASH, GREEN, COMMON, ATTACK);
//	CardDatabase[CARD_QUICKSLASH].cost = 1;
//	CardDatabase[CARD_QUICKSLASH].damage = 8;
//	SetUpgradedCardCDB(CARD_QUICKSLASH, 0, 4, 0);
//	strcpy(&CardDatabase[CARD_QUICKSLASH].name, "���� ����");
//	strcpy(&CardDatabase[CARD_QUICKSLASH].description, "���ظ� 8 �ݴϴ�. ī�带 1�� �̽��ϴ�.");
//	strcpy(&CardDatabase[CARD_QUICKSLASH].description_up, "���ظ� 12 �ݴϴ�. ī�带 1�� �̽��ϴ�.");
//
//	initCard(CARD_SLICE);
//	SetColorRarityType(CARD_SLICE, GREEN, COMMON, ATTACK);
//	CardDatabase[CARD_SLICE].cost = 0;
//	CardDatabase[CARD_SLICE].damage = 6;
//	SetUpgradedCardCDB(CARD_SLICE, 0, 3, 0);
//	strcpy(&CardDatabase[CARD_SLICE].name, "����");
//	strcpy(&CardDatabase[CARD_SLICE].description, "���ظ� 6 �ݴϴ�.");
//	strcpy(&CardDatabase[CARD_SLICE].description_up, "���ظ� 9 �ݴϴ�.");
//
//	initCard(CARD_SNEAKYSTRIKE);
//	SetColorRarityType(CARD_SNEAKYSTRIKE, GREEN, COMMON, ATTACK);
//	CardDatabase[CARD_SNEAKYSTRIKE].cost = 2;
//	CardDatabase[CARD_SNEAKYSTRIKE].damage = 12;
//	SetUpgradedCardCDB(CARD_SNEAKYSTRIKE, 0, 4, 0);
//	strcpy(&CardDatabase[CARD_SNEAKYSTRIKE].name, "���� ����");
//	strcpy(&CardDatabase[CARD_SNEAKYSTRIKE].description, "���ظ� 12 �ݴϴ�. �ܵ����� �÷����ϸ� ������ ����� 0�� �˴ϴ�.");
//	strcpy(&CardDatabase[CARD_SNEAKYSTRIKE].description_up, "���ظ� 16 �ݴϴ�. �ܵ����� �÷����ϸ� ������ ����� 0�� �˴ϴ�.");
//
//	initCard(CARD_SUCKERPUNCH);
//	SetColorRarityType(CARD_SUCKERPUNCH, GREEN, COMMON, ATTACK);
//	CardDatabase[CARD_SUCKERPUNCH].cost = 1;
//	CardDatabase[CARD_SUCKERPUNCH].damage = 7;
//	SetUpgradedCardCDB(CARD_SUCKERPUNCH, 0, 3, 0);
//	strcpy(&CardDatabase[CARD_SUCKERPUNCH].name, "���");
//	strcpy(&CardDatabase[CARD_SUCKERPUNCH].description, "���ظ� 7 �ݴϴ�. ��ȭ�� 1 �����մϴ�.");
//	strcpy(&CardDatabase[CARD_SUCKERPUNCH].description_up, "���ظ� 10 �ݴϴ�. ��ȭ�� 1 �����մϴ�.");
//
//	// ��Ŀ�� ī��� (UNCOMMON)
//	initCard(CARD_ACCURACY);
//	SetColorRarityType(CARD_ACCURACY, GREEN, UNCOMMON, POWER);
//	CardDatabase[CARD_ACCURACY].cost = 1;
//	SetUpgradedCardCDB(CARD_ACCURACY, -1, 0, 0);
//	strcpy(&CardDatabase[CARD_ACCURACY].name, "��Ȯ��");
//	strcpy(&CardDatabase[CARD_ACCURACY].description, "�����˰� �ܰ���ô�� ���ذ� 4 �����մϴ�.");
//	strcpy(&CardDatabase[CARD_ACCURACY].description_up, "�����˰� �ܰ���ô�� ���ذ� 4 �����մϴ�.");
//
//	initCard(CARD_ALLOUTATTACK);
//	SetColorRarityType(CARD_ALLOUTATTACK, GREEN, UNCOMMON, ATTACK);
//	CardDatabase[CARD_ALLOUTATTACK].cost = 1;
//	CardDatabase[CARD_ALLOUTATTACK].damage = 10;
//	SetUpgradedCardCDB(CARD_ALLOUTATTACK, 0, 4, 0);
//	strcpy(&CardDatabase[CARD_ALLOUTATTACK].name, "���� ����");
//	strcpy(&CardDatabase[CARD_ALLOUTATTACK].description, "���ظ� 10 �ݴϴ�. ī�带 ��� �����ϴ�.");
//	strcpy(&CardDatabase[CARD_ALLOUTATTACK].description_up, "���ظ� 14 �ݴϴ�. ī�带 ��� �����ϴ�.");
//
//	initCard(CARD_BACKSTAB);
//	SetColorRarityType(CARD_BACKSTAB, GREEN, UNCOMMON, ATTACK);
//	CardDatabase[CARD_BACKSTAB].cost = 0;
//	CardDatabase[CARD_BACKSTAB].damage = 11;
//	SetUpgradedCardCDB(CARD_BACKSTAB, 0, 4, 0);
//	strcpy(&CardDatabase[CARD_BACKSTAB].name, "�齺��");
//	strcpy(&CardDatabase[CARD_BACKSTAB].description, "���ظ� 11 �ݴϴ�. �Ҹ�. �� ī��� �տ����� �÷����� �� �ֽ��ϴ�.");
//	strcpy(&CardDatabase[CARD_BACKSTAB].description_up, "���ظ� 15 �ݴϴ�. �Ҹ�. �� ī��� �տ����� �÷����� �� �ֽ��ϴ�.");
//
//	initCard(CARD_BLUR);
//	SetColorRarityType(CARD_BLUR, GREEN, UNCOMMON, SKILL);
//	CardDatabase[CARD_BLUR].cost = 1;
//	CardDatabase[CARD_BLUR].block = 5;
//	SetUpgradedCardCDB(CARD_BLUR, 0, 0, 3);
//	strcpy(&CardDatabase[CARD_BLUR].name, "�帲");
//	strcpy(&CardDatabase[CARD_BLUR].description, "����� 5 ����ϴ�. ����� �� ���� �� �ҽǵ��� �ʽ��ϴ�.");
//	strcpy(&CardDatabase[CARD_BLUR].description_up, "����� 8 ����ϴ�. ����� �� ���� �� �ҽǵ��� �ʽ��ϴ�.");
//
//	initCard(CARD_BOUNCINGFLASK);
//	SetColorRarityType(CARD_BOUNCINGFLASK, GREEN, UNCOMMON, SKILL);
//	CardDatabase[CARD_BOUNCINGFLASK].cost = 2;
//	SetUpgradedCardCDB(CARD_BOUNCINGFLASK, -1, 0, 0);
//	strcpy(&CardDatabase[CARD_BOUNCINGFLASK].name, "�ٿ�� �ö�ũ");
//	strcpy(&CardDatabase[CARD_BOUNCINGFLASK].description, "���� 3 �����մϴ�. 3�� �ݺ��մϴ�.");
//	strcpy(&CardDatabase[CARD_BOUNCINGFLASK].description_up, "���� 3 �����մϴ�. 3�� �ݺ��մϴ�.");
//
//	initCard(CARD_CALCULATEDGAMBLE);
//	SetColorRarityType(CARD_CALCULATEDGAMBLE, GREEN, UNCOMMON, SKILL);
//	CardDatabase[CARD_CALCULATEDGAMBLE].cost = 0;
//	SetUpgradedCardCDB(CARD_CALCULATEDGAMBLE, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_CALCULATEDGAMBLE].name, "���� ����");
//	strcpy(&CardDatabase[CARD_CALCULATEDGAMBLE].description, "���� ī�带 ��� ������ �׸�ŭ �̽��ϴ�.");
//	strcpy(&CardDatabase[CARD_CALCULATEDGAMBLE].description_up, "���� ī�带 ��� ������ �׸�ŭ �̽��ϴ�. �Ҹ����� �ʽ��ϴ�.");
//
//	initCard(CARD_CALTROPS);
//	SetColorRarityType(CARD_CALTROPS, GREEN, UNCOMMON, POWER);
//	CardDatabase[CARD_CALTROPS].cost = 1;
//	SetUpgradedCardCDB(CARD_CALTROPS, -1, 0, 0);
//	strcpy(&CardDatabase[CARD_CALTROPS].name, "���");
//	strcpy(&CardDatabase[CARD_CALTROPS].description, "���� ������ ������ ���� ���ظ� 3 �޽��ϴ�.");
//	strcpy(&CardDatabase[CARD_CALTROPS].description_up, "���� ������ ������ ���� ���ظ� 3 �޽��ϴ�.");
//
//	initCard(CARD_CATALYST);
//	SetColorRarityType(CARD_CATALYST, GREEN, UNCOMMON, SKILL);
//	CardDatabase[CARD_CATALYST].cost = 1;
//	SetUpgradedCardCDB(CARD_CATALYST, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_CATALYST].name, "�˸�");
//	strcpy(&CardDatabase[CARD_CATALYST].description, "���� ���� 2��� ����ϴ�. �Ҹ�.");
//	strcpy(&CardDatabase[CARD_CATALYST].description_up, "���� ���� 3��� ����ϴ�. �Ҹ�.");
//
//	initCard(CARD_CHOKE);
//	SetColorRarityType(CARD_CHOKE, GREEN, UNCOMMON, ATTACK);
//	CardDatabase[CARD_CHOKE].cost = 2;
//	CardDatabase[CARD_CHOKE].damage = 12;
//	SetUpgradedCardCDB(CARD_CHOKE, 0, 4, 0);
//	strcpy(&CardDatabase[CARD_CHOKE].name, "��������");
//	strcpy(&CardDatabase[CARD_CHOKE].description, "���ظ� 12 �ݴϴ�. ���� �̹� �Ͽ� ī�带 �÷����� ������ ���ذ� 3�� �����մϴ�.");
//	strcpy(&CardDatabase[CARD_CHOKE].description_up, "���ظ� 16 �ݴϴ�. ���� �̹� �Ͽ� ī�带 �÷����� ������ ���ذ� 3�� �����մϴ�.");
//
//	initCard(CARD_CONCENTRATE);
//	SetColorRarityType(CARD_CONCENTRATE, GREEN, UNCOMMON, SKILL);
//	CardDatabase[CARD_CONCENTRATE].cost = 0;
//	SetUpgradedCardCDB(CARD_CONCENTRATE, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_CONCENTRATE].name, "����");
//	strcpy(&CardDatabase[CARD_CONCENTRATE].description, "ī�带 2�� ������ �������� 2 ����ϴ�.");
//	strcpy(&CardDatabase[CARD_CONCENTRATE].description_up, "ī�带 1�� ������ �������� 2 ����ϴ�.");
//
//	initCard(CARD_CRIPPLINGCLOUD);
//	SetColorRarityType(CARD_CRIPPLINGCLOUD, GREEN, UNCOMMON, SKILL);
//	CardDatabase[CARD_CRIPPLINGCLOUD].cost = 2;
//	SetUpgradedCardCDB(CARD_CRIPPLINGCLOUD, -1, 0, 0);
//	strcpy(&CardDatabase[CARD_CRIPPLINGCLOUD].name, "����ȭ ����");
//	strcpy(&CardDatabase[CARD_CRIPPLINGCLOUD].description, "��� ������ ���� 4, ��ȭ�� 2 �����մϴ�.");
//	strcpy(&CardDatabase[CARD_CRIPPLINGCLOUD].description_up, "��� ������ ���� 4, ��ȭ�� 2 �����մϴ�.");
//
//	initCard(CARD_DASH);
//	SetColorRarityType(CARD_DASH, GREEN, UNCOMMON, ATTACK);
//	CardDatabase[CARD_DASH].cost = 2;
//	CardDatabase[CARD_DASH].damage = 10;
//	SetUpgradedCardCDB(CARD_DASH, 0, 4, 0);
//	strcpy(&CardDatabase[CARD_DASH].name, "����");
//	strcpy(&CardDatabase[CARD_DASH].description, "���ظ� 10 �ݴϴ�. ����� 10 ����ϴ�.");
//	strcpy(&CardDatabase[CARD_DASH].description_up, "���ظ� 14 �ݴϴ�. ����� 10 ����ϴ�.");
//
//	initCard(CARD_DISTRACTION);
//	SetColorRarityType(CARD_DISTRACTION, GREEN, UNCOMMON, SKILL);
//	CardDatabase[CARD_DISTRACTION].cost = 1;
//	SetUpgradedCardCDB(CARD_DISTRACTION, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_DISTRACTION].name, "����");
//	strcpy(&CardDatabase[CARD_DISTRACTION].description, "������ ������ ��ȭ�� 1 �����մϴ�. ������ ī�带 1�� �̽��ϴ�. �Ҹ�.");
//	strcpy(&CardDatabase[CARD_DISTRACTION].description_up, "������ ������ ��ȭ�� 2 �����մϴ�. ������ ī�带 1�� �̽��ϴ�. �Ҹ�.");
//
//	initCard(CARD_ENDLESSAGONY);
//	SetColorRarityType(CARD_ENDLESSAGONY, GREEN, UNCOMMON, ATTACK);
//	CardDatabase[CARD_ENDLESSAGONY].cost = 0;
//	CardDatabase[CARD_ENDLESSAGONY].damage = 4;
//	SetUpgradedCardCDB(CARD_ENDLESSAGONY, 0, 3, 0);
//	strcpy(&CardDatabase[CARD_ENDLESSAGONY].name, "������ ����");
//	strcpy(&CardDatabase[CARD_ENDLESSAGONY].description, "���ظ� 4 �ݴϴ�. ���� ���̿� �� ī���� ���纻�� �ϳ� �����մϴ�.");
//	strcpy(&CardDatabase[CARD_ENDLESSAGONY].description_up, "���ظ� 7 �ݴϴ�. ���� ���̿� �� ī���� ���纻�� �ϳ� �����մϴ�.");
//
//	initCard(CARD_ESCAPEPLAN);
//	SetColorRarityType(CARD_ESCAPEPLAN, GREEN, UNCOMMON, SKILL);
//	CardDatabase[CARD_ESCAPEPLAN].cost = 0;
//	CardDatabase[CARD_ESCAPEPLAN].block = 3;
//	SetUpgradedCardCDB(CARD_ESCAPEPLAN, 0, 0, 2);
//	strcpy(&CardDatabase[CARD_ESCAPEPLAN].name, "Ż�� ��ȹ");
//	strcpy(&CardDatabase[CARD_ESCAPEPLAN].description, "����� 3 ����ϴ�. ī�带 1�� �̽��ϴ�.");
//	strcpy(&CardDatabase[CARD_ESCAPEPLAN].description_up, "����� 5 ����ϴ�. ī�带 1�� �̽��ϴ�.");
//
//	initCard(CARD_EVISCERATE);
//	SetColorRarityType(CARD_EVISCERATE, GREEN, UNCOMMON, ATTACK);
//	CardDatabase[CARD_EVISCERATE].cost = 3;
//	CardDatabase[CARD_EVISCERATE].damage = 18;
//	SetUpgradedCardCDB(CARD_EVISCERATE, 0, 6, 0);
//	strcpy(&CardDatabase[CARD_EVISCERATE].name, "����");
//	strcpy(&CardDatabase[CARD_EVISCERATE].description, "���ظ� 18 �ݴϴ�. ī�带 1�� ���� ������ ����� 1 �����մϴ�.");
//	strcpy(&CardDatabase[CARD_EVISCERATE].description_up, "���ظ� 24 �ݴϴ�. ī�带 1�� ���� ������ ����� 1 �����մϴ�.");
//
//	initCard(CARD_EXPERTISE);
//	SetColorRarityType(CARD_EXPERTISE, GREEN, UNCOMMON, SKILL);
//	CardDatabase[CARD_EXPERTISE].cost = 1;
//	SetUpgradedCardCDB(CARD_EXPERTISE, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_EXPERTISE].name, "��������");
//	strcpy(&CardDatabase[CARD_EXPERTISE].description, "ī�带 7�� �̽��ϴ�. �̹� �Ͽ� ��ų ī���� ����� 0�� �˴ϴ�.");
//	strcpy(&CardDatabase[CARD_EXPERTISE].description_up, "ī�带 9�� �̽��ϴ�. �̹� �Ͽ� ��ų ī���� ����� 0�� �˴ϴ�.");
//
//	initCard(CARD_FLECHETTES);
//	SetColorRarityType(CARD_FLECHETTES, GREEN, UNCOMMON, ATTACK);
//	CardDatabase[CARD_FLECHETTES].cost = 1;
//	CardDatabase[CARD_FLECHETTES].damage = 4;
//	SetUpgradedCardCDB(CARD_FLECHETTES, 0, 2, 0);
//	strcpy(&CardDatabase[CARD_FLECHETTES].name, "��ôħ");
//	strcpy(&CardDatabase[CARD_FLECHETTES].description, "���ظ� 4 �ݴϴ�. ��ų ī�带 �÷����� ������ ���ذ� 1�� �����մϴ�.");
//	strcpy(&CardDatabase[CARD_FLECHETTES].description_up, "���ظ� 6 �ݴϴ�. ��ų ī�带 �÷����� ������ ���ذ� 1�� �����մϴ�.");
//
//	initCard(CARD_FOOTWORK);
//	SetColorRarityType(CARD_FOOTWORK, GREEN, UNCOMMON, POWER);
//	CardDatabase[CARD_FOOTWORK].cost = 1;
//	SetUpgradedCardCDB(CARD_FOOTWORK, -1, 0, 0);
//	strcpy(&CardDatabase[CARD_FOOTWORK].name, "�߳");
//	strcpy(&CardDatabase[CARD_FOOTWORK].description, "��ø�� 2 ����ϴ�.");
//	strcpy(&CardDatabase[CARD_FOOTWORK].description_up, "��ø�� 3 ����ϴ�.");
//
//	initCard(CARD_HEELHOOK);
//	SetColorRarityType(CARD_HEELHOOK, GREEN, UNCOMMON, ATTACK);
//	CardDatabase[CARD_HEELHOOK].cost = 1;
//	CardDatabase[CARD_HEELHOOK].damage = 5;
//	SetUpgradedCardCDB(CARD_HEELHOOK, 0, 3, 0);
//	strcpy(&CardDatabase[CARD_HEELHOOK].name, "�ڲ�ġ ��");
//	strcpy(&CardDatabase[CARD_HEELHOOK].description, "���ظ� 5 �ݴϴ�. ���� ��ȭ�� �ɷ��ִٸ� ī�带 1�� �̰� �������� 1 ����ϴ�.");
//	strcpy(&CardDatabase[CARD_HEELHOOK].description_up, "���ظ� 8 �ݴϴ�. ���� ��ȭ�� �ɷ��ִٸ� ī�带 1�� �̰� �������� 1 ����ϴ�.");
//
//	initCard(CARD_INFINITEBLADES);
//	SetColorRarityType(CARD_INFINITEBLADES, GREEN, UNCOMMON, POWER);
//	CardDatabase[CARD_INFINITEBLADES].cost = 1;
//	SetUpgradedCardCDB(CARD_INFINITEBLADES, -1, 0, 0);
//	strcpy(&CardDatabase[CARD_INFINITEBLADES].name, "���� �˳�");
//	strcpy(&CardDatabase[CARD_INFINITEBLADES].description, "�� �� ���� �� �������� 1�� �տ� �߰��մϴ�.");
//	strcpy(&CardDatabase[CARD_INFINITEBLADES].description_up, "�� �� ���� �� �������� 1�� �տ� �߰��մϴ�.");
//
//	initCard(CARD_LEGSWEEP);
//	SetColorRarityType(CARD_LEGSWEEP, GREEN, UNCOMMON, SKILL);
//	CardDatabase[CARD_LEGSWEEP].cost = 2;
//	CardDatabase[CARD_LEGSWEEP].block = 11;
//	SetUpgradedCardCDB(CARD_LEGSWEEP, 0, 0, 3);
//	strcpy(&CardDatabase[CARD_LEGSWEEP].name, "�ٸ��ɱ�");
//	strcpy(&CardDatabase[CARD_LEGSWEEP].description, "����� 11 ����ϴ�. ��ȭ�� 2 �����մϴ�.");
//	strcpy(&CardDatabase[CARD_LEGSWEEP].description_up, "����� 14 ����ϴ�. ��ȭ�� 2 �����մϴ�.");
//
//	initCard(CARD_MASTERFULSTAB);
//	SetColorRarityType(CARD_MASTERFULSTAB, GREEN, UNCOMMON, ATTACK);
//	CardDatabase[CARD_MASTERFULSTAB].cost = 0;
//	CardDatabase[CARD_MASTERFULSTAB].damage = 12;
//	SetUpgradedCardCDB(CARD_MASTERFULSTAB, 0, 4, 0);
//	strcpy(&CardDatabase[CARD_MASTERFULSTAB].name, "���õ� ���");
//	strcpy(&CardDatabase[CARD_MASTERFULSTAB].description, "���ظ� 12 �ݴϴ�. ���� ����� �ƴ϶�� ����� 1 �����մϴ�.");
//	strcpy(&CardDatabase[CARD_MASTERFULSTAB].description_up, "���ظ� 16 �ݴϴ�. ���� ����� �ƴ϶�� ����� 1 �����մϴ�.");
//
//	initCard(CARD_NOXIOUSFUMES);
//	SetColorRarityType(CARD_NOXIOUSFUMES, GREEN, UNCOMMON, POWER);
//	CardDatabase[CARD_NOXIOUSFUMES].cost = 1;
//	SetUpgradedCardCDB(CARD_NOXIOUSFUMES, -1, 0, 0);
//	strcpy(&CardDatabase[CARD_NOXIOUSFUMES].name, "���� ����");
//	strcpy(&CardDatabase[CARD_NOXIOUSFUMES].description, "�� �� ���� �� ��� ������ ���� 2 �����մϴ�.");
//	strcpy(&CardDatabase[CARD_NOXIOUSFUMES].description_up, "�� �� ���� �� ��� ������ ���� 3 �����մϴ�.");
//
//	initCard(CARD_PREDATOR);
//	SetColorRarityType(CARD_PREDATOR, GREEN, UNCOMMON, ATTACK);
//	CardDatabase[CARD_PREDATOR].cost = 2;
//	CardDatabase[CARD_PREDATOR].damage = 15;
//	SetUpgradedCardCDB(CARD_PREDATOR, 0, 5, 0);
//	strcpy(&CardDatabase[CARD_PREDATOR].name, "������");
//	strcpy(&CardDatabase[CARD_PREDATOR].description, "���ظ� 15 �ݴϴ�. ī�带 1�� �̽��ϴ�. �Ź� ���� ������ ����� 1 �����մϴ�.");
//	strcpy(&CardDatabase[CARD_PREDATOR].description_up, "���ظ� 20 �ݴϴ�. ī�带 1�� �̽��ϴ�. �Ź� ���� ������ ����� 1 �����մϴ�.");
//
//	initCard(CARD_REFLEX);
//	SetColorRarityType(CARD_REFLEX, GREEN, UNCOMMON, SKILL);
//	CardDatabase[CARD_REFLEX].cost = -2;  // Unplayable
//	SetUpgradedCardCDB(CARD_REFLEX, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_REFLEX].name, "�ݻ�Ű�");
//	strcpy(&CardDatabase[CARD_REFLEX].description, "�÷��� �Ұ�. ���� �� ī�带 1�� �̽��ϴ�.");
//	strcpy(&CardDatabase[CARD_REFLEX].description_up, "�÷��� �Ұ�. ���� �� ī�带 2�� �̽��ϴ�.");
//
//	initCard(CARD_RIDDLEWITHHOLES);
//	SetColorRarityType(CARD_RIDDLEWITHHOLES, GREEN, UNCOMMON, ATTACK);
//	CardDatabase[CARD_RIDDLEWITHHOLES].cost = 2;
//	CardDatabase[CARD_RIDDLEWITHHOLES].damage = 3;
//	SetUpgradedCardCDB(CARD_RIDDLEWITHHOLES, 0, 2, 0);
//	strcpy(&CardDatabase[CARD_RIDDLEWITHHOLES].name, "����������");
//	strcpy(&CardDatabase[CARD_RIDDLEWITHHOLES].description, "���ظ� 3 �ݴϴ�. 5�� �����մϴ�.");
//	strcpy(&CardDatabase[CARD_RIDDLEWITHHOLES].description_up, "���ظ� 5 �ݴϴ�. 5�� �����մϴ�.");
//
//	initCard(CARD_SETUP);
//	SetColorRarityType(CARD_SETUP, GREEN, UNCOMMON, SKILL);
//	CardDatabase[CARD_SETUP].cost = 1;
//	SetUpgradedCardCDB(CARD_SETUP, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_SETUP].name, "�غ�");
//	strcpy(&CardDatabase[CARD_SETUP].description, "���� �Ͽ� ī�带 5�� �� �̽��ϴ�.");
//	strcpy(&CardDatabase[CARD_SETUP].description_up, "���� �Ͽ� ī�带 7�� �� �̽��ϴ�.");
//
//	initCard(CARD_SKEWER);
//	SetColorRarityType(CARD_SKEWER, GREEN, UNCOMMON, ATTACK);
//	CardDatabase[CARD_SKEWER].cost = 1;
//	CardDatabase[CARD_SKEWER].damage = 7;
//	SetUpgradedCardCDB(CARD_SKEWER, 0, 3, 0);
//	strcpy(&CardDatabase[CARD_SKEWER].name, "��ì��");
//	strcpy(&CardDatabase[CARD_SKEWER].description, "���ظ� 7 �ݴϴ�. ������ X�� ���� �����մϴ�. X�� ����� ������� �����Դϴ�.");
//	strcpy(&CardDatabase[CARD_SKEWER].description_up, "���ظ� 10 �ݴϴ�. ������ X�� ���� �����մϴ�. X�� ����� ������� �����Դϴ�.");
//
//	initCard(CARD_TACTICIAN);
//	SetColorRarityType(CARD_TACTICIAN, GREEN, UNCOMMON, SKILL);
//	CardDatabase[CARD_TACTICIAN].cost = -2;  // Unplayable
//	SetUpgradedCardCDB(CARD_TACTICIAN, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_TACTICIAN].name, "������");
//	strcpy(&CardDatabase[CARD_TACTICIAN].description, "�÷��� �Ұ�. ���� �� �������� 1 ����ϴ�.");
//	strcpy(&CardDatabase[CARD_TACTICIAN].description_up, "�÷��� �Ұ�. ���� �� �������� 2 ����ϴ�.");
//
//	initCard(CARD_TERROR);
//	SetColorRarityType(CARD_TERROR, GREEN, UNCOMMON, SKILL);
//	CardDatabase[CARD_TERROR].cost = 1;
//	SetUpgradedCardCDB(CARD_TERROR, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_TERROR].name, "����");
//	strcpy(&CardDatabase[CARD_TERROR].description, "����� 99 �����մϴ�. �Ҹ�.");
//	strcpy(&CardDatabase[CARD_TERROR].description_up, "�� �ϳ����� ��� 99�� �ο��մϴ�. �Ҹ�");
//
//	initCard(CARD_WELLLAIDPLANS);
//	SetColorRarityType(CARD_WELLLAIDPLANS, GREEN, UNCOMMON, POWER);
//	CardDatabase[CARD_WELLLAIDPLANS].cost = 1;
//	SetUpgradedCardCDB(CARD_WELLLAIDPLANS, -1, 0, 0);
//	strcpy(&CardDatabase[CARD_WELLLAIDPLANS].name, "ġ���� ��ȹ");
//	strcpy(&CardDatabase[CARD_WELLLAIDPLANS].description, "�� �� ���� �� ī�带 1�� ������ �� �ֽ��ϴ�.");
//	strcpy(&CardDatabase[CARD_WELLLAIDPLANS].description_up, "�� �� ���� �� ī�带 2�� ������ �� �ֽ��ϴ�.");
//
//
//	initCard(CARD_ATHOUSANDCUTS);
//	SetColorRarityType(CARD_ATHOUSANDCUTS, GREEN, RARE, POWER);
//	CardDatabase[CARD_ATHOUSANDCUTS].cost = 2;
//	SetUpgradedCardCDB(CARD_ATHOUSANDCUTS, -1, 0, 0);
//	strcpy(&CardDatabase[CARD_ATHOUSANDCUTS].name, "õ ���� ��ó");
//	strcpy(&CardDatabase[CARD_ATHOUSANDCUTS].description, "ī�带 �÷����� ������ ��� ������ ���ظ� 1 �ݴϴ�.");
//	strcpy(&CardDatabase[CARD_ATHOUSANDCUTS].description_up, "ī�带 �÷����� ������ ��� ������ ���ظ� 1 �ݴϴ�.");
//
//	initCard(CARD_ADRENALINE);
//	SetColorRarityType(CARD_ADRENALINE, GREEN, RARE, SKILL);
//	CardDatabase[CARD_ADRENALINE].cost = 0;
//	SetUpgradedCardCDB(CARD_ADRENALINE, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_ADRENALINE].name, "�Ƶ巹����");
//	strcpy(&CardDatabase[CARD_ADRENALINE].description, "�������� 1 ����ϴ�. ī�带 2�� �̽��ϴ�. ���� ��Ż�� 1�� �����մϴ�.");
//	strcpy(&CardDatabase[CARD_ADRENALINE].description_up, "�������� 2 ����ϴ�. ī�带 2�� �̽��ϴ�. ���� ��Ż�� 1�� �����մϴ�.");
//
//	initCard(CARD_AFTERIAMAGE);
//	SetColorRarityType(CARD_AFTERIAMAGE, GREEN, RARE, POWER);
//	CardDatabase[CARD_AFTERIAMAGE].cost = 1;
//	SetUpgradedCardCDB(CARD_AFTERIAMAGE, -1, 0, 0);
//	strcpy(&CardDatabase[CARD_AFTERIAMAGE].name, "�ܻ�");
//	strcpy(&CardDatabase[CARD_AFTERIAMAGE].description, "ī�带 �÷����� ������ ����� 1 ����ϴ�.");
//	strcpy(&CardDatabase[CARD_AFTERIAMAGE].description_up, "ī�带 �÷����� ������ ����� 1 ����ϴ�.");
//
//	initCard(CARD_BULLETTIME);
//	SetColorRarityType(CARD_BULLETTIME, GREEN, RARE, SKILL);
//	CardDatabase[CARD_BULLETTIME].cost = 3;
//	SetUpgradedCardCDB(CARD_BULLETTIME, -1, 0, 0);
//	strcpy(&CardDatabase[CARD_BULLETTIME].name, "�Ѿ� �ð�");
//	strcpy(&CardDatabase[CARD_BULLETTIME].description, "�̹� �Ͽ� �÷������� ���� ī���� ����� 0�� �˴ϴ�.");
//	strcpy(&CardDatabase[CARD_BULLETTIME].description_up, "�̹� �Ͽ� �÷������� ���� ī���� ����� 0�� �˴ϴ�.");
//
//	initCard(CARD_BURST);
//	SetColorRarityType(CARD_BURST, GREEN, RARE, SKILL);
//	CardDatabase[CARD_BURST].cost = 1;
//	SetUpgradedCardCDB(CARD_BURST, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_BURST].name, "����");
//	strcpy(&CardDatabase[CARD_BURST].description, "������ �÷����ϴ� ��ų ī�带 2�� �÷����մϴ�.");
//	strcpy(&CardDatabase[CARD_BURST].description_up, "������ �÷����ϴ� ��ų ī�带 3�� �÷����մϴ�.");
//
//	initCard(CARD_CORPSEEXPLOSION);
//	SetColorRarityType(CARD_CORPSEEXPLOSION, GREEN, RARE, SKILL);
//	CardDatabase[CARD_CORPSEEXPLOSION].cost = 2;
//	SetUpgradedCardCDB(CARD_CORPSEEXPLOSION, -1, 0, 0);
//	strcpy(&CardDatabase[CARD_CORPSEEXPLOSION].name, "��ü ����");
//	strcpy(&CardDatabase[CARD_CORPSEEXPLOSION].description, "��� ������ ���� 6 �����մϴ�. ���� ������ ��� ������ �ش� ���� �ִ� ü�¸�ŭ ���ظ� �ݴϴ�.");
//	strcpy(&CardDatabase[CARD_CORPSEEXPLOSION].description_up, "��� ������ ���� 6 �����մϴ�. ���� ������ ��� ������ �ش� ���� �ִ� ü�¸�ŭ ���ظ� �ݴϴ�.");
//
//	initCard(CARD_DAGGERSPRAY);
//	SetColorRarityType(CARD_DAGGERSPRAY, GREEN, RARE, ATTACK);
//	CardDatabase[CARD_DAGGERSPRAY].cost = 1;
//	CardDatabase[CARD_DAGGERSPRAY].damage = 4;
//	SetUpgradedCardCDB(CARD_DAGGERSPRAY, 0, 2, 0);
//	strcpy(&CardDatabase[CARD_DAGGERSPRAY].name, "�ܰ� ����");
//	strcpy(&CardDatabase[CARD_DAGGERSPRAY].description, "��� ������ ���ظ� 4 �ݴϴ�. 2�� �����մϴ�.");
//	strcpy(&CardDatabase[CARD_DAGGERSPRAY].description_up, "��� ������ ���ظ� 6 �ݴϴ�. 2�� �����մϴ�.");
//
//	initCard(CARD_DAGGERTHROW);
//	SetColorRarityType(CARD_DAGGERTHROW, GREEN, RARE, ATTACK);
//	CardDatabase[CARD_DAGGERTHROW].cost = 1;
//	CardDatabase[CARD_DAGGERTHROW].damage = 9;
//	SetUpgradedCardCDB(CARD_DAGGERTHROW, 0, 3, 0);
//	strcpy(&CardDatabase[CARD_DAGGERTHROW].name, "�ܰ� ��ô");
//	strcpy(&CardDatabase[CARD_DAGGERTHROW].description, "���ظ� 9 �ݴϴ�. ī�带 1�� �̽��ϴ�. ī�带 1�� �����ϴ�.");
//	strcpy(&CardDatabase[CARD_DAGGERTHROW].description_up, "���ظ� 12 �ݴϴ�. ī�带 1�� �̽��ϴ�. ī�带 1�� �����ϴ�.");
//
//	initCard(CARD_DIEDIEDIE);
//	SetColorRarityType(CARD_DIEDIEDIE, GREEN, RARE, ATTACK);
//	CardDatabase[CARD_DIEDIEDIE].cost = 1;
//	CardDatabase[CARD_DIEDIEDIE].damage = 13;
//	SetUpgradedCardCDB(CARD_DIEDIEDIE, 0, 4, 0);
//	strcpy(&CardDatabase[CARD_DIEDIEDIE].name, "�׾��׾��׾�");
//	strcpy(&CardDatabase[CARD_DIEDIEDIE].description, "���ظ� 13 �ݴϴ�. �Ҹ�. ������ �� ī���� ���纻�� ���� ������ �տ� �߰��մϴ�.");
//	strcpy(&CardDatabase[CARD_DIEDIEDIE].description_up, "���ظ� 17 �ݴϴ�. �Ҹ�. ������ �� ī���� ���纻�� ���� ������ �տ� �߰��մϴ�.");
//
//	initCard(CARD_ENVENOM);
//	SetColorRarityType(CARD_ENVENOM, GREEN, RARE, POWER);
//	CardDatabase[CARD_ENVENOM].cost = 2;
//	SetUpgradedCardCDB(CARD_ENVENOM, -1, 0, 0);
//	strcpy(&CardDatabase[CARD_ENVENOM].name, "��������");
//	strcpy(&CardDatabase[CARD_ENVENOM].description, "���� ī��� ������ ���ظ� �� ������ ���� 1 �����մϴ�.");
//	strcpy(&CardDatabase[CARD_ENVENOM].description_up, "���� ī��� ������ ���ظ� �� ������ ���� 1 �����մϴ�.");
//
//	initCard(CARD_FINISHER);
//	SetColorRarityType(CARD_FINISHER, GREEN, RARE, ATTACK);
//	CardDatabase[CARD_FINISHER].cost = 1;
//	CardDatabase[CARD_FINISHER].damage = 6;
//	SetUpgradedCardCDB(CARD_FINISHER, 0, 2, 0);
//	strcpy(&CardDatabase[CARD_FINISHER].name, "������");
//	strcpy(&CardDatabase[CARD_FINISHER].description, "���ظ� 6 �ݴϴ�. �̹� �Ͽ� ������ �÷����� ������ ���ذ� 6�� �����մϴ�.");
//	strcpy(&CardDatabase[CARD_FINISHER].description_up, "���ظ� 8 �ݴϴ�. �̹� �Ͽ� ������ �÷����� ������ ���ذ� 8�� �����մϴ�.");
//
//	initCard(CARD_GLASSKNIFE);
//	SetColorRarityType(CARD_GLASSKNIFE, GREEN, RARE, ATTACK);
//	CardDatabase[CARD_GLASSKNIFE].cost = 1;
//	CardDatabase[CARD_GLASSKNIFE].damage = 8;
//	SetUpgradedCardCDB(CARD_GLASSKNIFE, 0, 4, 0);
//	strcpy(&CardDatabase[CARD_GLASSKNIFE].name, "����Į");
//	strcpy(&CardDatabase[CARD_GLASSKNIFE].description, "���ظ� 8 �ݴϴ�. �÷����� ������ ���ذ� 2 �����մϴ�.");
//	strcpy(&CardDatabase[CARD_GLASSKNIFE].description_up, "���ظ� 12 �ݴϴ�. �÷����� ������ ���ذ� 2 �����մϴ�.");
//
//	initCard(CARD_GRANDFINALE);
//	SetColorRarityType(CARD_GRANDFINALE, GREEN, RARE, ATTACK);
//	CardDatabase[CARD_GRANDFINALE].cost = 0;
//	CardDatabase[CARD_GRANDFINALE].damage = 50;
//	SetUpgradedCardCDB(CARD_GRANDFINALE, 0, 10, 0);
//	strcpy(&CardDatabase[CARD_GRANDFINALE].name, "��ܿ�");
//	strcpy(&CardDatabase[CARD_GRANDFINALE].description, "�տ� ī�尡 �̰� ���� ���� �÷����� �� �ֽ��ϴ�. ��� ������ ���ظ� 50 �ݴϴ�.");
//	strcpy(&CardDatabase[CARD_GRANDFINALE].description_up, "�տ� ī�尡 �̰� ���� ���� �÷����� �� �ֽ��ϴ�. ��� ������ ���ظ� 60 �ݴϴ�.");
//
//	initCard(CARD_MALAISE);
//	SetColorRarityType(CARD_MALAISE, GREEN, RARE, SKILL);
//	CardDatabase[CARD_MALAISE].cost = -1;  // X cost
//	SetUpgradedCardCDB(CARD_MALAISE, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_MALAISE].name, "����");
//	strcpy(&CardDatabase[CARD_MALAISE].description, "������ ��ȭ�� X, �� ���Ҹ� X �����մϴ�. �Ҹ�.");
//	strcpy(&CardDatabase[CARD_MALAISE].description_up, "������ ��ȭ�� X, �� ���Ҹ� X �����մϴ�.");
//
//	initCard(CARD_NIGHTMARE);
//	SetColorRarityType(CARD_NIGHTMARE, GREEN, RARE, SKILL);
//	CardDatabase[CARD_NIGHTMARE].cost = 3;
//	SetUpgradedCardCDB(CARD_NIGHTMARE, -1, 0, 0);
//	strcpy(&CardDatabase[CARD_NIGHTMARE].name, "�Ǹ�");
//	strcpy(&CardDatabase[CARD_NIGHTMARE].description, "������ ī�带 3�� �տ� �߰��մϴ�. �� �Ͽ� �ش� ī����� ����� 0�� �˴ϴ�. �Ҹ�.");
//	strcpy(&CardDatabase[CARD_NIGHTMARE].description_up, "������ ī�带 3�� �տ� �߰��մϴ�. �� �Ͽ� �ش� ī����� ����� 0�� �˴ϴ�. �Ҹ�.");
//
//	initCard(CARD_PHANTSMALKILLER);
//	SetColorRarityType(CARD_PHANTSMALKILLER, GREEN, RARE, SKILL);
//	CardDatabase[CARD_PHANTSMALKILLER].cost = 1;
//	SetUpgradedCardCDB(CARD_PHANTSMALKILLER, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_PHANTSMALKILLER].name, "ȯ�� ������");
//	strcpy(&CardDatabase[CARD_PHANTSMALKILLER].description, "������ �޴� ���� ���ذ� HP�� �� ������ �� ȸ���մϴ�. �Ҹ�.");
//	strcpy(&CardDatabase[CARD_PHANTSMALKILLER].description_up, "���� 2���� �޴� ���� ���ذ� HP�� �� ������ �� ȸ���մϴ�. �Ҹ�.");
//
//	initCard(CARD_POISONEDSTAB);
//	SetColorRarityType(CARD_POISONEDSTAB, GREEN, RARE, SKILL);
//	CardDatabase[CARD_POISONEDSTAB].cost = 1;
//	SetUpgradedCardCDB(CARD_POISONEDSTAB, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_POISONEDSTAB].name, "����");
//	strcpy(&CardDatabase[CARD_POISONEDSTAB].description, "��� ������ ���� 3 �����մϴ�. ���� ����� �� 1������ �������� 1 ����ϴ�.");
//	strcpy(&CardDatabase[CARD_POISONEDSTAB].description_up, "��� ������ ���� 4 �����մϴ�. ���� ����� �� 1������ �������� 1 ����ϴ�.");
//
//	initCard(CARD_STORMOFSTEEL);
//	SetColorRarityType(CARD_STORMOFSTEEL, GREEN, RARE, SKILL);
//	CardDatabase[CARD_STORMOFSTEEL].cost = 1;
//	SetUpgradedCardCDB(CARD_STORMOFSTEEL, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_STORMOFSTEEL].name, "��ö ��ǳ");
//	strcpy(&CardDatabase[CARD_STORMOFSTEEL].description, "ī�带 ��� ������ �׸�ŭ �������� �տ� �߰��մϴ�.");
//	strcpy(&CardDatabase[CARD_STORMOFSTEEL].description_up, "ī�带 ��� ������ �� ���� +1��ŭ �������� �տ� �߰��մϴ�.");
//
//	initCard(CARD_TOOLSOFTHETRADE);
//	SetColorRarityType(CARD_TOOLSOFTHETRADE, GREEN, RARE, POWER);
//	CardDatabase[CARD_TOOLSOFTHETRADE].cost = 1;
//	SetUpgradedCardCDB(CARD_TOOLSOFTHETRADE, -1, 0, 0);
//	strcpy(&CardDatabase[CARD_TOOLSOFTHETRADE].name, "������");
//	strcpy(&CardDatabase[CARD_TOOLSOFTHETRADE].description, "�� �� ���� �� ī�带 1�� �̰� ī�带 1�� �����ϴ�.");
//	strcpy(&CardDatabase[CARD_TOOLSOFTHETRADE].description_up, "�� �� ���� �� ī�带 1�� �̰� ī�带 1�� �����ϴ�.");
//
//	initCard(CARD_UNLOAD);
//	SetColorRarityType(CARD_UNLOAD, GREEN, RARE, ATTACK);
//	CardDatabase[CARD_UNLOAD].cost = 1;
//	CardDatabase[CARD_UNLOAD].damage = 14;
//	SetUpgradedCardCDB(CARD_UNLOAD, 0, 4, 0);
//	strcpy(&CardDatabase[CARD_UNLOAD].name, "�ϼ�");
//	strcpy(&CardDatabase[CARD_UNLOAD].description, "���ظ� 14 �ݴϴ�. ī�带 ��� �����ϴ�.");
//	strcpy(&CardDatabase[CARD_UNLOAD].description_up, "���ظ� 18 �ݴϴ�. ī�带 ��� �����ϴ�.");
//
//	initCard(CARD_WRAITHFORM);
//	SetColorRarityType(CARD_WRAITHFORM, GREEN, RARE, POWER);
//	CardDatabase[CARD_WRAITHFORM].cost = 3;
//	SetUpgradedCardCDB(CARD_WRAITHFORM, -1, 0, 0);
//	strcpy(&CardDatabase[CARD_WRAITHFORM].name, "���� ����");
//	strcpy(&CardDatabase[CARD_WRAITHFORM].description, "������ 2 ����ϴ�. �� �� ���� �� ��ø�� 1 �ҽ��ϴ�.");
//	strcpy(&CardDatabase[CARD_WRAITHFORM].description_up, "������ 3 ����ϴ�.");
//
//	initCard(CARD_ZAP);
//	SetColorRarityType(CARD_ZAP, BLUE, COMMON, ATTACK);
//	CardDatabase[CARD_ZAP].cost = 1;
//	SetUpgradedCardCDB(CARD_ZAP, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_ZAP].name, "����");
//	strcpy(&CardDatabase[CARD_ZAP].description, "8�� ���ظ� �ݴϴ�. 1���� ���� ��ü�� �����մϴ�.");
//	strcpy(&CardDatabase[CARD_ZAP].description_up, "10�� ���ظ� �ݴϴ�. 1���� ���� ��ü�� �����մϴ�.");
//
//	initCard(CARD_DUALCAST);
//	SetColorRarityType(CARD_DUALCAST, BLUE, COMMON, SKILL);
//	CardDatabase[CARD_DUALCAST].cost = 1;
//	SetUpgradedCardCDB(CARD_DUALCAST, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_DUALCAST].name, "���� �߻�");
//	strcpy(&CardDatabase[CARD_DUALCAST].description, "���긦 2�� �ߵ���ŵ�ϴ�.");
//	strcpy(&CardDatabase[CARD_DUALCAST].description_up, "���긦 3�� �ߵ���ŵ�ϴ�.");
//
//	initCard(CARD_DEFEND3);
//	SetColorRarityType(CARD_DEFEND3, BLUE, COMMON, SKILL);
//	CardDatabase[CARD_DEFEND3].cost = 1;
//	SetUpgradedCardCDB(CARD_DEFEND3, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_DEFEND3].name, "����");
//	strcpy(&CardDatabase[CARD_DEFEND3].description, "5�� ���� ����ϴ�.");
//	strcpy(&CardDatabase[CARD_DEFEND3].description_up, "8�� ���� ����ϴ�.");
//
//	initCard(CARD_STRIKE3);
//	SetColorRarityType(CARD_STRIKE3, BLUE, COMMON, ATTACK);
//	CardDatabase[CARD_STRIKE3].cost = 1;
//	SetUpgradedCardCDB(CARD_STRIKE3, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_STRIKE3].name, "Ÿ��");
//	strcpy(&CardDatabase[CARD_STRIKE3].description, "6�� ���ظ� �ݴϴ�.");
//	strcpy(&CardDatabase[CARD_STRIKE3].description_up, "9�� ���ظ� �ݴϴ�.");
//
//	// ����Ʈ �Ϲ� ī�� (COMMON)
//	initCard(CARD_BALLLIGHTNING);
//	SetColorRarityType(CARD_BALLLIGHTNING, BLUE, COMMON, ATTACK);
//	CardDatabase[CARD_BALLLIGHTNING].cost = 1;
//	SetUpgradedCardCDB(CARD_BALLLIGHTNING, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_BALLLIGHTNING].name, "���� ����");
//	strcpy(&CardDatabase[CARD_BALLLIGHTNING].description, "7�� ���ظ� �ݴϴ�. 1���� ���� ��ü�� �����մϴ�.");
//	strcpy(&CardDatabase[CARD_BALLLIGHTNING].description_up, "10�� ���ظ� �ݴϴ�. 1���� ���� ��ü�� �����մϴ�.");
//
//	initCard(CARD_BARRAGE);
//	SetColorRarityType(CARD_BARRAGE, BLUE, COMMON, ATTACK);
//	CardDatabase[CARD_BARRAGE].cost = 1;
//	SetUpgradedCardCDB(CARD_BARRAGE, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_BARRAGE].name, "����");
//	strcpy(&CardDatabase[CARD_BARRAGE].description, "4�� ���ظ� �ݴϴ�. ���� ���� 1���� ���ذ� 4�� �����մϴ�.");
//	strcpy(&CardDatabase[CARD_BARRAGE].description_up, "6�� ���ظ� �ݴϴ�. ���� ���� 1���� ���ذ� 4�� �����մϴ�.");
//
//	initCard(CARD_BEAMCELL);
//	SetColorRarityType(CARD_BEAMCELL, BLUE, COMMON, ATTACK);
//	CardDatabase[CARD_BEAMCELL].cost = 0;
//	SetUpgradedCardCDB(CARD_BEAMCELL, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_BEAMCELL].name, "���� ����");
//	strcpy(&CardDatabase[CARD_BEAMCELL].description, "3�� ���ظ� �ݴϴ�. �̹� �Ͽ� �Ҹ�� ������ 1�� ���ذ� 2�� �����մϴ�.");
//	strcpy(&CardDatabase[CARD_BEAMCELL].description_up, "3�� ���ظ� �ݴϴ�. �̹� �Ͽ� �Ҹ�� ������ 1�� ���ذ� 3�� �����մϴ�.");
//
//	initCard(CARD_COLDSNAP);
//	SetColorRarityType(CARD_COLDSNAP, BLUE, COMMON, ATTACK);
//	CardDatabase[CARD_COLDSNAP].cost = 1;
//	SetUpgradedCardCDB(CARD_COLDSNAP, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_COLDSNAP].name, "Ȥ��");
//	strcpy(&CardDatabase[CARD_COLDSNAP].description, "6�� ���ظ� �ݴϴ�. 1���� ���� ��ü�� �����մϴ�.");
//	strcpy(&CardDatabase[CARD_COLDSNAP].description_up, "9�� ���ظ� �ݴϴ�. 1���� ���� ��ü�� �����մϴ�.");
//
//	initCard(CARD_COMPILEDRIVER);
//	SetColorRarityType(CARD_COMPILEDRIVER, BLUE, COMMON, ATTACK);
//	CardDatabase[CARD_COMPILEDRIVER].cost = 1;
//	SetUpgradedCardCDB(CARD_COMPILEDRIVER, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_COMPILEDRIVER].name, "������ ����̹�");
//	strcpy(&CardDatabase[CARD_COMPILEDRIVER].description, "7�� ���ظ� �ݴϴ�. �տ� �ִ� ī�� 1���� ���� ���� ������ �����ϴ�.");
//	strcpy(&CardDatabase[CARD_COMPILEDRIVER].description_up, "10�� ���ظ� �ݴϴ�. �տ� �ִ� ī�� 1���� ���� ���� ������ �����ϴ�.");
//
//	initCard(CARD_COOLHEADED);
//	SetColorRarityType(CARD_COOLHEADED, BLUE, COMMON, SKILL);
//	CardDatabase[CARD_COOLHEADED].cost = 1;
//	SetUpgradedCardCDB(CARD_COOLHEADED, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_COOLHEADED].name, "������");
//	strcpy(&CardDatabase[CARD_COOLHEADED].description, "ī�带 1�� �̽��ϴ�. 1���� ���� ��ü�� �����մϴ�.");
//	strcpy(&CardDatabase[CARD_COOLHEADED].description_up, "ī�带 2�� �̽��ϴ�. 1���� ���� ��ü�� �����մϴ�.");
//
//	initCard(CARD_GOFORTHEEYES);
//	SetColorRarityType(CARD_GOFORTHEEYES, BLUE, COMMON, ATTACK);
//	CardDatabase[CARD_GOFORTHEEYES].cost = 0;
//	SetUpgradedCardCDB(CARD_GOFORTHEEYES, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_GOFORTHEEYES].name, "�޼� ����");
//	strcpy(&CardDatabase[CARD_GOFORTHEEYES].description, "3�� ���ظ� �ݴϴ�. ������ ��ȭ�� 1 �����մϴ�.");
//	strcpy(&CardDatabase[CARD_GOFORTHEEYES].description_up, "4�� ���ظ� �ݴϴ�. ������ ��ȭ�� 2 �����մϴ�.");
//
//	initCard(CARD_HOLOGRAM);
//	SetColorRarityType(CARD_HOLOGRAM, BLUE, COMMON, SKILL);
//	CardDatabase[CARD_HOLOGRAM].cost = 1;
//	SetUpgradedCardCDB(CARD_HOLOGRAM, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_HOLOGRAM].name, "Ȧ�α׷�");
//	strcpy(&CardDatabase[CARD_HOLOGRAM].description, "������ ������ ���� ī�带 1�� �����մϴ�.");
//	strcpy(&CardDatabase[CARD_HOLOGRAM].description_up, "������ ������ ���� ī�带 1�� �����մϴ�. �� ī���� ����� 0�� �˴ϴ�.");
//
//	initCard(CARD_LEAP);
//	SetColorRarityType(CARD_LEAP, BLUE, COMMON, SKILL);
//	CardDatabase[CARD_LEAP].cost = 1;
//	SetUpgradedCardCDB(CARD_LEAP, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_LEAP].name, "����");
//	strcpy(&CardDatabase[CARD_LEAP].description, "9�� ���� ����ϴ�.");
//	strcpy(&CardDatabase[CARD_LEAP].description_up, "12�� ���� ����ϴ�.");
//
//	initCard(CARD_RECURSION);
//	SetColorRarityType(CARD_RECURSION, BLUE, COMMON, SKILL);
//	CardDatabase[CARD_RECURSION].cost = 1;
//	SetUpgradedCardCDB(CARD_RECURSION, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_RECURSION].name, "���");
//	strcpy(&CardDatabase[CARD_RECURSION].description, "��� ���긦 �ҽ��ϴ�. ���� ���� 1���� ������ 1 ����ϴ�.");
//	strcpy(&CardDatabase[CARD_RECURSION].description_up, "��� ���긦 �ҽ��ϴ�. ���� ���� 1���� ������ 2 ����ϴ�.");
//
//	initCard(CARD_STACK);
//	SetColorRarityType(CARD_STACK, BLUE, COMMON, SKILL);
//	CardDatabase[CARD_STACK].cost = 1;
//	SetUpgradedCardCDB(CARD_STACK, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_STACK].name, "����");
//	strcpy(&CardDatabase[CARD_STACK].description, "5�� ���� ����ϴ�. ī�带 1�� �̽��ϴ�.");
//	strcpy(&CardDatabase[CARD_STACK].description_up, "7�� ���� ����ϴ�. ī�带 1�� �̽��ϴ�.");
//
//	initCard(CARD_STEAMBARRIER);
//	SetColorRarityType(CARD_STEAMBARRIER, BLUE, COMMON, SKILL);
//	CardDatabase[CARD_STEAMBARRIER].cost = 0;
//	SetUpgradedCardCDB(CARD_STEAMBARRIER, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_STEAMBARRIER].name, "���� �溮");
//	strcpy(&CardDatabase[CARD_STEAMBARRIER].description, "6�� ���� ����ϴ�.");
//	strcpy(&CardDatabase[CARD_STEAMBARRIER].description_up, "8�� ���� ����ϴ�.");
//
//	initCard(CARD_STREAMLINE);
//	SetColorRarityType(CARD_STREAMLINE, BLUE, COMMON, ATTACK);
//	CardDatabase[CARD_STREAMLINE].cost = 2;
//	SetUpgradedCardCDB(CARD_STREAMLINE, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_STREAMLINE].name, "����ȭ");
//	strcpy(&CardDatabase[CARD_STREAMLINE].description, "15�� ���ظ� �ݴϴ�. �� ī���� ����� ���������� 1 �����մϴ�.");
//	strcpy(&CardDatabase[CARD_STREAMLINE].description_up, "20�� ���ظ� �ݴϴ�. �� ī���� ����� ���������� 1 �����մϴ�.");
//
//	initCard(CARD_SWEEPINGBEAM);
//	SetColorRarityType(CARD_SWEEPINGBEAM, BLUE, COMMON, ATTACK);
//	CardDatabase[CARD_SWEEPINGBEAM].cost = 1;
//	SetUpgradedCardCDB(CARD_SWEEPINGBEAM, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_SWEEPINGBEAM].name, "������ ����");
//	strcpy(&CardDatabase[CARD_SWEEPINGBEAM].description, "��� ������ 6�� ���ظ� �ݴϴ�.");
//	strcpy(&CardDatabase[CARD_SWEEPINGBEAM].description_up, "��� ������ 9�� ���ظ� �ݴϴ�.");
//
//	// ����Ʈ ��Ŀ�� ī�� (UNCOMMON)
//	initCard(CARD_AGGREGATE);
//	SetColorRarityType(CARD_AGGREGATE, BLUE, UNCOMMON, SKILL);
//	CardDatabase[CARD_AGGREGATE].cost = 1;
//	SetUpgradedCardCDB(CARD_AGGREGATE, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_AGGREGATE].name, "����");
//	strcpy(&CardDatabase[CARD_AGGREGATE].description, "�������� 1 ����ϴ�. ���� �� ���긦 �ߵ���ų ��, �� ���긦 �Ҹ����� �ʽ��ϴ�.");
//	strcpy(&CardDatabase[CARD_AGGREGATE].description_up, "�������� 1 ����ϴ�. ���� �� ���긦 2�� �ߵ���ų ��, �� ���긦 �Ҹ����� �ʽ��ϴ�.");
//
//	initCard(CARD_AUTOSHIELDS);
//	SetColorRarityType(CARD_AUTOSHIELDS, BLUE, UNCOMMON, SKILL);
//	CardDatabase[CARD_AUTOSHIELDS].cost = 1;
//	SetUpgradedCardCDB(CARD_AUTOSHIELDS, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_AUTOSHIELDS].name, "�ڵ� ��ȣ��");
//	strcpy(&CardDatabase[CARD_AUTOSHIELDS].description, "�տ� �ִ� ī�� 1��� ���� 4�� ����ϴ�.");
//	strcpy(&CardDatabase[CARD_AUTOSHIELDS].description_up, "�տ� �ִ� ī�� 1��� ���� 5�� ����ϴ�.");
//
//	initCard(CARD_BLIZZARD);
//	SetColorRarityType(CARD_BLIZZARD, BLUE, UNCOMMON, ATTACK);
//	CardDatabase[CARD_BLIZZARD].cost = 1;
//	SetUpgradedCardCDB(CARD_BLIZZARD, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_BLIZZARD].name, "������");
//	strcpy(&CardDatabase[CARD_BLIZZARD].description, "���� ��ü 1���� ��� ������ 2�� ���ظ� �ݴϴ�.");
//	strcpy(&CardDatabase[CARD_BLIZZARD].description_up, "���� ��ü 1���� ��� ������ 3�� ���ظ� �ݴϴ�.");
//
//	initCard(CARD_BOOTSEQUENCE);
//	SetColorRarityType(CARD_BOOTSEQUENCE, BLUE, UNCOMMON, SKILL);
//	CardDatabase[CARD_BOOTSEQUENCE].cost = 0;
//	SetUpgradedCardCDB(CARD_BOOTSEQUENCE, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_BOOTSEQUENCE].name, "���� ������");
//	strcpy(&CardDatabase[CARD_BOOTSEQUENCE].description, "10�� ���� ����ϴ�. �Ҹ�.");
//	strcpy(&CardDatabase[CARD_BOOTSEQUENCE].description_up, "13�� ���� ����ϴ�. �Ҹ�.");
//
//	initCard(CARD_CHAOS);
//	SetColorRarityType(CARD_CHAOS, BLUE, UNCOMMON, SKILL);
//	CardDatabase[CARD_CHAOS].cost = 1;
//	SetUpgradedCardCDB(CARD_CHAOS, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_CHAOS].name, "ȥ��");
//	strcpy(&CardDatabase[CARD_CHAOS].description, "������ ���긦 1�� �����մϴ�.");
//	strcpy(&CardDatabase[CARD_CHAOS].description_up, "������ ���긦 2�� �����մϴ�.");
//
//	initCard(CARD_CHILL);
//	SetColorRarityType(CARD_CHILL, BLUE, UNCOMMON, SKILL);
//	CardDatabase[CARD_CHILL].cost = 0;
//	SetUpgradedCardCDB(CARD_CHILL, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_CHILL].name, "�ñ�");
//	strcpy(&CardDatabase[CARD_CHILL].description, "������ 1 ��� 1���� ���� ��ü�� �����մϴ�.");
//	strcpy(&CardDatabase[CARD_CHILL].description_up, "������ 1 ��� 2���� ���� ��ü�� �����մϴ�.");
//
//	initCard(CARD_CLAW);
//	SetColorRarityType(CARD_CLAW, BLUE, UNCOMMON, ATTACK);
//	CardDatabase[CARD_CLAW].cost = 0;
//	SetUpgradedCardCDB(CARD_CLAW, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_CLAW].name, "����");
//	strcpy(&CardDatabase[CARD_CLAW].description, "3�� ���ظ� �ݴϴ�. ������ ���ذ� ���������� 2 �����մϴ�.");
//	strcpy(&CardDatabase[CARD_CLAW].description_up, "5�� ���ظ� �ݴϴ�. ������ ���ذ� ���������� 2 �����մϴ�.");
//
//	initCard(CARD_DARKNESS);
//	SetColorRarityType(CARD_DARKNESS, BLUE, UNCOMMON, SKILL);
//	CardDatabase[CARD_DARKNESS].cost = 1;
//	SetUpgradedCardCDB(CARD_DARKNESS, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_DARKNESS].name, "���");
//	strcpy(&CardDatabase[CARD_DARKNESS].description, "1���� ���� ��ü�� �����մϴ�.");
//	strcpy(&CardDatabase[CARD_DARKNESS].description_up, "2���� ���� ��ü�� �����մϴ�.");
//
//	initCard(CARD_DOOMANDGLOOM);
//	SetColorRarityType(CARD_DOOMANDGLOOM, BLUE, UNCOMMON, ATTACK);
//	CardDatabase[CARD_DOOMANDGLOOM].cost = 2;
//	SetUpgradedCardCDB(CARD_DOOMANDGLOOM, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_DOOMANDGLOOM].name, "������ ���");
//	strcpy(&CardDatabase[CARD_DOOMANDGLOOM].description, "��� ������ 10�� ���ظ� �ݴϴ�. 1���� ���� ��ü�� �����մϴ�.");
//	strcpy(&CardDatabase[CARD_DOOMANDGLOOM].description_up, "��� ������ 14�� ���ظ� �ݴϴ�. 1���� ���� ��ü�� �����մϴ�.");
//
//	initCard(CARD_DOUBLEENERGY);
//	SetColorRarityType(CARD_DOUBLEENERGY, BLUE, UNCOMMON, SKILL);
//	CardDatabase[CARD_DOUBLEENERGY].cost = 1;
//	SetUpgradedCardCDB(CARD_DOUBLEENERGY, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_DOUBLEENERGY].name, "������ ����");
//	strcpy(&CardDatabase[CARD_DOUBLEENERGY].description, "���� �������� �� ��� �ø��ϴ�.");
//	strcpy(&CardDatabase[CARD_DOUBLEENERGY].description_up, "���� �������� �� ��� �ø��ϴ�. ī�带 1�� �̽��ϴ�.");
//
//	initCard(CARD_EQUILIBRIUM);
//	SetColorRarityType(CARD_EQUILIBRIUM, BLUE, UNCOMMON, SKILL);
//	CardDatabase[CARD_EQUILIBRIUM].cost = 1;
//	SetUpgradedCardCDB(CARD_EQUILIBRIUM, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_EQUILIBRIUM].name, "����");
//	strcpy(&CardDatabase[CARD_EQUILIBRIUM].description, "�����Ǵ� ī����� ����� 0�� �˴ϴ�. �Ҹ�.");
//	strcpy(&CardDatabase[CARD_EQUILIBRIUM].description_up, "�����Ǵ� ī����� ����� 0�� �˴ϴ�. ī�带 1�� �̽��ϴ�. �Ҹ�.");
//
//	initCard(CARD_FTL);
//	SetColorRarityType(CARD_FTL, BLUE, UNCOMMON, ATTACK);
//	CardDatabase[CARD_FTL].cost = 0;
//	SetUpgradedCardCDB(CARD_FTL, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_FTL].name, "�ʱ���");
//	strcpy(&CardDatabase[CARD_FTL].description, "5�� ���ظ� �ݴϴ�. �� ī��� �տ��� ���� ���̷� ���� �ʽ��ϴ�.");
//	strcpy(&CardDatabase[CARD_FTL].description_up, "8�� ���ظ� �ݴϴ�. �� ī��� �տ��� ���� ���̷� ���� �ʽ��ϴ�.");
//
//	initCard(CARD_GENETICALGORITHM);
//	SetColorRarityType(CARD_GENETICALGORITHM, BLUE, UNCOMMON, SKILL);
//	CardDatabase[CARD_GENETICALGORITHM].cost = 1;
//	SetUpgradedCardCDB(CARD_GENETICALGORITHM, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_GENETICALGORITHM].name, "���� �˰���");
//	strcpy(&CardDatabase[CARD_GENETICALGORITHM].description, "5�� ���� ����ϴ�. ����. �� �� ���� �� �� ī���� ���� 2�� �����մϴ�.");
//	strcpy(&CardDatabase[CARD_GENETICALGORITHM].description_up, "7�� ���� ����ϴ�. ����. �� �� ���� �� �� ī���� ���� 2�� �����մϴ�.");
//
//	initCard(CARD_GLACIER);
//	SetColorRarityType(CARD_GLACIER, BLUE, UNCOMMON, SKILL);
//	CardDatabase[CARD_GLACIER].cost = 2;
//	SetUpgradedCardCDB(CARD_GLACIER, -1, 0, 0);
//	strcpy(&CardDatabase[CARD_GLACIER].name, "����");
//	strcpy(&CardDatabase[CARD_GLACIER].description, "7�� ���� ����ϴ�. 2���� ���� ��ü�� �����մϴ�.");
//	strcpy(&CardDatabase[CARD_GLACIER].description_up, "7�� ���� ����ϴ�. 2���� ���� ��ü�� �����մϴ�.");
//
//	initCard(CARD_CLAW);
//	SetColorRarityType(CARD_CLAW, BLUE, UNCOMMON, ATTACK);
//	CardDatabase[CARD_CLAW].cost = 2;
//	SetUpgradedCardCDB(CARD_CLAW, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_CLAW].name, "����");
//	strcpy(&CardDatabase[CARD_CLAW].description, "16�� ���ظ� �ݴϴ�. �տ� ��ó 2���� �߰��մϴ�.");
//	strcpy(&CardDatabase[CARD_CLAW].description_up, "20�� ���ظ� �ݴϴ�. �տ� ��ó 2���� �߰��մϴ�.");
//
//	initCard(CARD_HELLOWORLD);
//	SetColorRarityType(CARD_HELLOWORLD, BLUE, UNCOMMON, POWER);
//	CardDatabase[CARD_HELLOWORLD].cost = 1;
//	SetUpgradedCardCDB(CARD_HELLOWORLD, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_HELLOWORLD].name, "��� ����");
//	strcpy(&CardDatabase[CARD_HELLOWORLD].description, "�� �� ���� �� �տ� ������ �Ϲ� ī�带 1�� �߰��մϴ�.");
//	strcpy(&CardDatabase[CARD_HELLOWORLD].description_up, "�� �� ���� �� �տ� ������ �Ϲ� ī�带 1�� �߰��մϴ�. �� ī���� ����� 0�� �˴ϴ�.");
//
//	initCard(CARD_LOOP);
//	SetColorRarityType(CARD_LOOP, BLUE, UNCOMMON, POWER);
//	CardDatabase[CARD_LOOP].cost = 1;
//	SetUpgradedCardCDB(CARD_LOOP, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_LOOP].name, "����");
//	strcpy(&CardDatabase[CARD_LOOP].description, "�� �� ���� �� �տ� �ִ� ī�� 1���� ���� ���� �� ���� �ø��ϴ�.");
//	strcpy(&CardDatabase[CARD_LOOP].description_up, "�� �� ���� �� �տ� �ִ� ī�� 2���� ���� ���� �� ���� �ø��ϴ�.");
//
//	initCard(CARD_MELTER);
//	SetColorRarityType(CARD_MELTER, BLUE, UNCOMMON, ATTACK);
//	CardDatabase[CARD_MELTER].cost = 1;
//	SetUpgradedCardCDB(CARD_MELTER, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_MELTER].name, "���ر�");
//	strcpy(&CardDatabase[CARD_MELTER].description, "10�� ���ظ� �ݴϴ�. ���� ���� �ִٸ� �Ҹ��ŵ�ϴ�.");
//	strcpy(&CardDatabase[CARD_MELTER].description_up, "14�� ���ظ� �ݴϴ�. ���� ���� �ִٸ� �Ҹ��ŵ�ϴ�.");
//
//	initCard(CARD_OVERCLOCK);
//	SetColorRarityType(CARD_OVERCLOCK, BLUE, UNCOMMON, SKILL);
//	CardDatabase[CARD_OVERCLOCK].cost = 0;
//	SetUpgradedCardCDB(CARD_OVERCLOCK, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_OVERCLOCK].name, "����Ŭ��");
//	strcpy(&CardDatabase[CARD_OVERCLOCK].description, "ī�带 2�� �̽��ϴ�. �տ� ���ƿ� 1���� �߰��մϴ�.");
//	strcpy(&CardDatabase[CARD_OVERCLOCK].description_up, "ī�带 3�� �̽��ϴ�. �տ� ���ƿ� 1���� �߰��մϴ�.");
//
//	initCard(CARD_RECYCLE);
//	SetColorRarityType(CARD_RECYCLE, BLUE, UNCOMMON, SKILL);
//	CardDatabase[CARD_RECYCLE].cost = 1;
//	SetUpgradedCardCDB(CARD_RECYCLE, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_RECYCLE].name, "��Ȱ��");
//	strcpy(&CardDatabase[CARD_RECYCLE].description, "�տ� �ִ� ī�带 �Ҹ��ŵ�ϴ�. �Ҹ�� ī���� ��븸ŭ �������� ����ϴ�.");
//	strcpy(&CardDatabase[CARD_RECYCLE].description_up, "�տ� �ִ� ī�带 �Ҹ��ŵ�ϴ�. �Ҹ�� ī���� ��븸ŭ �������� ��� ī�带 �׸�ŭ �̽��ϴ�.");
//
//	initCard(CARD_REBOOT);
//	SetColorRarityType(CARD_REBOOT, BLUE, UNCOMMON, SKILL);
//	CardDatabase[CARD_REBOOT].cost = 0;
//	SetUpgradedCardCDB(CARD_REBOOT, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_REBOOT].name, "�����");
//	strcpy(&CardDatabase[CARD_REBOOT].description, "���� ��� ī�带 �����ϴ�. ī�带 4�� �̽��ϴ�.");
//	strcpy(&CardDatabase[CARD_REBOOT].description_up, "���� ��� ī�带 �����ϴ�. ī�带 6�� �̽��ϴ�.");
//
//	initCard(CARD_REINFORCEDBODY);
//	SetColorRarityType(CARD_REINFORCEDBODY, BLUE, UNCOMMON, SKILL);
//	CardDatabase[CARD_REINFORCEDBODY].cost = 1;
//	SetUpgradedCardCDB(CARD_REINFORCEDBODY, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_REINFORCEDBODY].name, "��ȭ�� ��");
//	strcpy(&CardDatabase[CARD_REINFORCEDBODY].description, "���� 7 ����ϴ�. �̹� �� �Ҹ��� ������ 1�� ���� 7�� �߰��˴ϴ�.");
//	strcpy(&CardDatabase[CARD_REINFORCEDBODY].description_up, "���� 9 ����ϴ�. �̹� �� �Ҹ��� ������ 1�� ���� 9�� �߰��˴ϴ�.");
//
//	initCard(CARD_RIPANDTEAR);
//	SetColorRarityType(CARD_RIPANDTEAR, BLUE, UNCOMMON, ATTACK);
//	CardDatabase[CARD_RIPANDTEAR].cost = 1;
//	SetUpgradedCardCDB(CARD_RIPANDTEAR, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_RIPANDTEAR].name, "���� �����");
//	strcpy(&CardDatabase[CARD_RIPANDTEAR].description, "������ ������ 7�� ���ظ� 2�� �ݴϴ�.");
//	strcpy(&CardDatabase[CARD_RIPANDTEAR].description_up, "������ ������ 9�� ���ظ� 2�� �ݴϴ�.");
//
//	initCard(CARD_SCRAPE);
//	SetColorRarityType(CARD_SCRAPE, BLUE, UNCOMMON, ATTACK);
//	CardDatabase[CARD_SCRAPE].cost = 1;
//	SetUpgradedCardCDB(CARD_SCRAPE, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_SCRAPE].name, "�ܱ�");
//	strcpy(&CardDatabase[CARD_SCRAPE].description, "3�� ���ظ� 3�� �ݴϴ�. ī�带 3�� �̰�, ����� 0�� �ƴ� ī��� �����ϴ�.");
//	strcpy(&CardDatabase[CARD_SCRAPE].description_up, "4�� ���ظ� 3�� �ݴϴ�. ī�带 4�� �̰�, ����� 0�� �ƴ� ī��� �����ϴ�.");
//
//	initCard(CARD_TURBO);
//	SetColorRarityType(CARD_TURBO, BLUE, UNCOMMON, SKILL);
//	CardDatabase[CARD_TURBO].cost = 0;
//	SetUpgradedCardCDB(CARD_TURBO, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_TURBO].name, "�ͺ�");
//	strcpy(&CardDatabase[CARD_TURBO].description, "�������� 2 ����ϴ�. �տ� ���ƿ� 1���� �߰��մϴ�.");
//	strcpy(&CardDatabase[CARD_TURBO].description_up, "�������� 3 ����ϴ�. �տ� ���ƿ� 1���� �߰��մϴ�.");
//
//	initCard(CARD_WHITENOISE);
//	SetColorRarityType(CARD_WHITENOISE, BLUE, UNCOMMON, SKILL);
//	CardDatabase[CARD_WHITENOISE].cost = 1;
//	SetUpgradedCardCDB(CARD_WHITENOISE, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_WHITENOISE].name, "��� ����");
//	strcpy(&CardDatabase[CARD_WHITENOISE].description, "������ �Ŀ� ī�带 �տ� �߰��մϴ�. �� ī��� �̹� �� ����� 0�� �˴ϴ�.");
//	strcpy(&CardDatabase[CARD_WHITENOISE].description_up, "������ �Ŀ� ī�带 �տ� 2�� �߰��մϴ�. �� ī����� �̹� �� ����� 0�� �˴ϴ�.");
//
//	// ����Ʈ ���� ī�� (RARE)
//	initCard(CARD_ALLFORONE);
//	SetColorRarityType(CARD_ALLFORONE, BLUE, RARE, ATTACK);
//	CardDatabase[CARD_ALLFORONE].cost = 2;
//	SetUpgradedCardCDB(CARD_ALLFORONE, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_ALLFORONE].name, "�� �� ��");
//	strcpy(&CardDatabase[CARD_ALLFORONE].description, "10�� ���ظ� �ݴϴ�. �̹� �������� ����ߴ� ��� 0¥�� ī�带 ��� ������ �����ɴϴ�.");
//	strcpy(&CardDatabase[CARD_ALLFORONE].description_up, "14�� ���ظ� �ݴϴ�. �̹� �������� ����ߴ� ��� 0¥�� ī�带 ��� ������ �����ɴϴ�.");
//
//	initCard(CARD_BIASEDCOGNITION);
//	SetColorRarityType(CARD_BIASEDCOGNITION, BLUE, RARE, POWER);
//	CardDatabase[CARD_BIASEDCOGNITION].cost = 1;
//	SetUpgradedCardCDB(CARD_BIASEDCOGNITION, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_BIASEDCOGNITION].name, "����� ���");
//	strcpy(&CardDatabase[CARD_BIASEDCOGNITION].description, "������ 4 ����ϴ�. �� �� ������ 1 �ҽ��ϴ�.");
//	strcpy(&CardDatabase[CARD_BIASEDCOGNITION].description_up, "������ 4 ����ϴ�.");
//
//	initCard(CARD_BUFFER);
//	SetColorRarityType(CARD_BUFFER, BLUE, RARE, POWER);
//	CardDatabase[CARD_BUFFER].cost = 2;
//	SetUpgradedCardCDB(CARD_BUFFER, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_BUFFER].name, "����");
//	strcpy(&CardDatabase[CARD_BUFFER].description, "���ظ� 1�� ��ȿȭ�մϴ�.");
//	strcpy(&CardDatabase[CARD_BUFFER].description_up, "���ظ� 2�� ��ȿȭ�մϴ�.");
//
//	initCard(CARD_CAPACITOR);
//	SetColorRarityType(CARD_CAPACITOR, BLUE, RARE, POWER);
//	CardDatabase[CARD_CAPACITOR].cost = 1;
//	SetUpgradedCardCDB(CARD_CAPACITOR, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_CAPACITOR].name, "Ŀ�н���");
//	strcpy(&CardDatabase[CARD_CAPACITOR].description, "���� ������ 2�� �߰��մϴ�.");
//	strcpy(&CardDatabase[CARD_CAPACITOR].description_up, "���� ������ 3�� �߰��մϴ�.");
//
//	initCard(CARD_CORESURGE);
//	SetColorRarityType(CARD_CORESURGE, BLUE, RARE, ATTACK);
//	CardDatabase[CARD_CORESURGE].cost = 1;
//	SetUpgradedCardCDB(CARD_CORESURGE, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_CORESURGE].name, "�ھ� ����");
//	strcpy(&CardDatabase[CARD_CORESURGE].description, "11�� ���ظ� �ݴϴ�. ������� ��� �����ϰ�, ������ 2 ����ϴ�.");
//	strcpy(&CardDatabase[CARD_CORESURGE].description_up, "16�� ���ظ� �ݴϴ�. ������� ��� �����ϰ�, ������ 2 ����ϴ�.");
//
//	initCard(CARD_CREATIVEAI);
//	SetColorRarityType(CARD_CREATIVEAI, BLUE, RARE, POWER);
//	CardDatabase[CARD_CREATIVEAI].cost = 3;
//	SetUpgradedCardCDB(CARD_CREATIVEAI, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_CREATIVEAI].name, "â������ �ΰ�����");
//	strcpy(&CardDatabase[CARD_CREATIVEAI].description, "�� �� ���� �� ������ �Ŀ� ī�带 �տ� �߰��մϴ�.");
//	strcpy(&CardDatabase[CARD_CREATIVEAI].description_up, "�� �� ���� �� ������ �Ŀ� ī�带 �տ� 2�� �߰��մϴ�.");
//
//	initCard(CARD_ECHOFORM);
//	SetColorRarityType(CARD_ECHOFORM, BLUE, RARE, POWER);
//	CardDatabase[CARD_ECHOFORM].cost = 3;
//	SetUpgradedCardCDB(CARD_ECHOFORM, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_ECHOFORM].name, "���� ��");
//	strcpy(&CardDatabase[CARD_ECHOFORM].description, "�� �� ó�� ����ϴ� ī�带 �� �� ����մϴ�.");
//	strcpy(&CardDatabase[CARD_ECHOFORM].description_up, "�� �� ó�� ����ϴ� ī�带 �� �� ����մϴ�.");
//
//	initCard(CARD_ELECTRODYNAMICS);
//	SetColorRarityType(CARD_ELECTRODYNAMICS, BLUE, RARE, POWER);
//	CardDatabase[CARD_ELECTRODYNAMICS].cost = 3;
//	SetUpgradedCardCDB(CARD_ELECTRODYNAMICS, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_ELECTRODYNAMICS].name, "���ڱ⿪��");
//	strcpy(&CardDatabase[CARD_ELECTRODYNAMICS].description, "���� ������ ���ذ� ��� ������ ����˴ϴ�. 2���� ���� ��ü�� �����մϴ�.");
//	strcpy(&CardDatabase[CARD_ELECTRODYNAMICS].description_up, "���� ������ ���ذ� ��� ������ ����˴ϴ�. 3���� ���� ��ü�� �����մϴ�.");
//
//	initCard(CARD_HYPERBEAM);
//	SetColorRarityType(CARD_HYPERBEAM, BLUE, RARE, ATTACK);
//	CardDatabase[CARD_HYPERBEAM].cost = 2;
//	SetUpgradedCardCDB(CARD_HYPERBEAM, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_HYPERBEAM].name, "������ ��");
//	strcpy(&CardDatabase[CARD_HYPERBEAM].description, "��� ������ 26�� ���ظ� �ݴϴ�. ������ 3 �ҽ��ϴ�.");
//	strcpy(&CardDatabase[CARD_HYPERBEAM].description_up, "��� ������ 34�� ���ظ� �ݴϴ�. ������ 3 �ҽ��ϴ�.");
//
//	initCard(CARD_MACHINELEARNING);
//	SetColorRarityType(CARD_MACHINELEARNING, BLUE, RARE, POWER);
//	CardDatabase[CARD_MACHINELEARNING].cost = 1;
//	SetUpgradedCardCDB(CARD_MACHINELEARNING, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_MACHINELEARNING].name, "�ӽ� ����");
//	strcpy(&CardDatabase[CARD_MACHINELEARNING].description, "�� �� ī�� 1���� �߰��� �̽��ϴ�.");
//	strcpy(&CardDatabase[CARD_MACHINELEARNING].description_up, "�� �� ī�� 2���� �߰��� �̽��ϴ�.");
//
//	initCard(CARD_MULTICAST);
//	SetColorRarityType(CARD_MULTICAST, BLUE, RARE, SKILL);
//	CardDatabase[CARD_MULTICAST].cost = 2;
//	SetUpgradedCardCDB(CARD_MULTICAST, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_MULTICAST].name, "��Ƽĳ��Ʈ");
//	strcpy(&CardDatabase[CARD_MULTICAST].description, "ù ��° ���긦 X�� �ߵ���ŵ�ϴ�.");
//	strcpy(&CardDatabase[CARD_MULTICAST].description_up, "ù ��° ���긦 X+1�� �ߵ���ŵ�ϴ�.");
//
//	initCard(CARD_STRIKE4);
//	SetColorRarityType(CARD_STRIKE4, PURPLE, BASIC, ATTACK);
//	CardDatabase[CARD_STRIKE4].cost = 1;
//	CardDatabase[CARD_STRIKE4].damage = 6;
//	SetUpgradedCardCDB(CARD_STRIKE4, 0, 0, 3);
//	strcpy(&CardDatabase[CARD_STRIKE4].name, "Ÿ��");
//	strcpy(&CardDatabase[CARD_STRIKE4].description, "���ظ� 6 �ݴϴ�.");
//	strcpy(&CardDatabase[CARD_STRIKE4].description_up, "���ظ� 9 �ݴϴ�.");
//
//	// 2
//	initCard(CARD_DEFEND4);
//	SetColorRarityType(CARD_DEFEND4, PURPLE, BASIC, SKILL);
//	CardDatabase[CARD_DEFEND4].cost = 1;
//	CardDatabase[CARD_DEFEND4].block = 5;
//	SetUpgradedCardCDB(CARD_DEFEND4, 0, 3, 0);
//	strcpy(&CardDatabase[CARD_DEFEND4].name, "���");
//	strcpy(&CardDatabase[CARD_DEFEND4].description, "5�� ���� ����ϴ�.");
//	strcpy(&CardDatabase[CARD_DEFEND4].description_up, "8�� ���� ����ϴ�.");
//
//	// 3
//	initCard(CARD_ERUPTION);
//	SetColorRarityType(CARD_ERUPTION, PURPLE, BASIC, ATTACK);
//	CardDatabase[CARD_ERUPTION].cost = 2;
//	CardDatabase[CARD_ERUPTION].damage = 9;
//	SetUpgradedCardCDB(CARD_ERUPTION, 0, 0, 3);
//	strcpy(&CardDatabase[CARD_ERUPTION].name, "����");
//	strcpy(&CardDatabase[CARD_ERUPTION].description, "���ظ� 9 �ݴϴ�. �ݳ� ���¿� �����մϴ�.");
//	strcpy(&CardDatabase[CARD_ERUPTION].description_up, "���ظ� 12 �ݴϴ�. �ݳ� ���¿� �����մϴ�.");
//
//	// 4
//	initCard(CARD_VIGILANCE);
//	SetColorRarityType(CARD_VIGILANCE, PURPLE, BASIC, SKILL);
//	CardDatabase[CARD_VIGILANCE].cost = 2;
//	CardDatabase[CARD_VIGILANCE].block = 8;
//	SetUpgradedCardCDB(CARD_VIGILANCE, 0, 4, 0);
//	strcpy(&CardDatabase[CARD_VIGILANCE].name, "���");
//	strcpy(&CardDatabase[CARD_VIGILANCE].description, "8�� ���� ����ϴ�. ���� ���¿� �����մϴ�.");
//	strcpy(&CardDatabase[CARD_VIGILANCE].description_up, "12�� ���� ����ϴ�. ���� ���¿� �����մϴ�.");
//
//	// 5
//	initCard(CARD_BOWLINGBASH);
//	SetColorRarityType(CARD_BOWLINGBASH, PURPLE, COMMON, ATTACK);
//	CardDatabase[CARD_BOWLINGBASH].cost = 1;
//	CardDatabase[CARD_BOWLINGBASH].damage = 7;
//	SetUpgradedCardCDB(CARD_BOWLINGBASH, 0, 0, 3);
//	strcpy(&CardDatabase[CARD_BOWLINGBASH].name, "���� ����");
//	strcpy(&CardDatabase[CARD_BOWLINGBASH].description, "�� ������ ���ظ� 7 �ݴϴ�. �� �ϳ��� ���ذ� �߰��˴ϴ�.");
//	strcpy(&CardDatabase[CARD_BOWLINGBASH].description_up, "�� ������ ���ظ� 10 �ݴϴ�. �� �ϳ��� ���ذ� �߰��˴ϴ�.");
//
//	// 6
//	initCard(CARD_CONSECRATE);
//	SetColorRarityType(CARD_CONSECRATE, PURPLE, COMMON, ATTACK);
//	CardDatabase[CARD_CONSECRATE].cost = 0;
//	CardDatabase[CARD_CONSECRATE].damage = 5;
//	SetUpgradedCardCDB(CARD_CONSECRATE, 0, 0, 2);
//	strcpy(&CardDatabase[CARD_CONSECRATE].name, "�ż�ȭ");
//	strcpy(&CardDatabase[CARD_CONSECRATE].description, "��� ������ ���ظ� 5 �ݴϴ�.");
//	strcpy(&CardDatabase[CARD_CONSECRATE].description_up, "��� ������ ���ظ� 7 �ݴϴ�.");
//
//	// 7
//	initCard(CARD_CRUSHJOINTS);
//	SetColorRarityType(CARD_CRUSHJOINTS, PURPLE, COMMON, SKILL);
//	CardDatabase[CARD_CRUSHJOINTS].cost = 1;
//	CardDatabase[CARD_CRUSHJOINTS].block = 6;
//	SetUpgradedCardCDB(CARD_CRUSHJOINTS, 0, 3, 0);
//	strcpy(&CardDatabase[CARD_CRUSHJOINTS].name, "���� �μ���");
//	strcpy(&CardDatabase[CARD_CRUSHJOINTS].description, "6�� ���� ����ϴ�.");
//	strcpy(&CardDatabase[CARD_CRUSHJOINTS].description_up, "9�� ���� ����ϴ�.");
//
//	// 8
//	initCard(CARD_CUTTHROUGHFATE);
//	SetColorRarityType(CARD_CUTTHROUGHFATE, PURPLE, COMMON, ATTACK);
//	CardDatabase[CARD_CUTTHROUGHFATE].cost = 1;
//	CardDatabase[CARD_CUTTHROUGHFATE].damage = 7;
//	SetUpgradedCardCDB(CARD_CUTTHROUGHFATE, 0, 0, 3);
//	strcpy(&CardDatabase[CARD_CUTTHROUGHFATE].name, "��� ����");
//	strcpy(&CardDatabase[CARD_CUTTHROUGHFATE].description, "���ظ� 7 �ݴϴ�.");
//	strcpy(&CardDatabase[CARD_CUTTHROUGHFATE].description_up, "���ظ� 10 �ݴϴ�.");
//
//	// 9
//	initCard(CARD_EMPTYFIST);
//	SetColorRarityType(CARD_EMPTYFIST, PURPLE, COMMON, ATTACK);
//	CardDatabase[CARD_EMPTYFIST].cost = 0;
//	CardDatabase[CARD_EMPTYFIST].damage = 5;
//	SetUpgradedCardCDB(CARD_EMPTYFIST, 0, 0, 2);
//	strcpy(&CardDatabase[CARD_EMPTYFIST].name, "�� �ָ�");
//	strcpy(&CardDatabase[CARD_EMPTYFIST].description, "���ظ� 5 �ݴϴ�.");
//	strcpy(&CardDatabase[CARD_EMPTYFIST].description_up, "���ظ� 7 �ݴϴ�.");
//
//	// 10
//	initCard(CARD_FLURRYOFBLOWS);
//	SetColorRarityType(CARD_FLURRYOFBLOWS, PURPLE, COMMON, ATTACK);
//	CardDatabase[CARD_FLURRYOFBLOWS].cost = 1;
//	CardDatabase[CARD_FLURRYOFBLOWS].damage = 8;
//	SetUpgradedCardCDB(CARD_FLURRYOFBLOWS, 0, 0, 3);
//	strcpy(&CardDatabase[CARD_FLURRYOFBLOWS].name, "���� Ÿ��");
//	strcpy(&CardDatabase[CARD_FLURRYOFBLOWS].description, "���ظ� 8 �ݴϴ�.");
//	strcpy(&CardDatabase[CARD_FLURRYOFBLOWS].description_up, "���ظ� 11 �ݴϴ�.");
//
//	// 11
//	initCard(CARD_FLYINGSLEEVES);
//	SetColorRarityType(CARD_FLYINGSLEEVES, PURPLE, COMMON, ATTACK);
//	CardDatabase[CARD_FLYINGSLEEVES].cost = 0;
//	CardDatabase[CARD_FLYINGSLEEVES].damage = 4;
//	SetUpgradedCardCDB(CARD_FLYINGSLEEVES, 0, 0, 2);
//	strcpy(&CardDatabase[CARD_FLYINGSLEEVES].name, "���ư��� �Ҹ�");
//	strcpy(&CardDatabase[CARD_FLYINGSLEEVES].description, "���ظ� 4 �ݴϴ�.");
//	strcpy(&CardDatabase[CARD_FLYINGSLEEVES].description_up, "���ظ� 6 �ݴϴ�.");
//
//	// 12
//	initCard(CARD_FOLLOWUP);
//	SetColorRarityType(CARD_FOLLOWUP, PURPLE, COMMON, ATTACK);
//	CardDatabase[CARD_FOLLOWUP].cost = 1;
//	CardDatabase[CARD_FOLLOWUP].damage = 6;
//	SetUpgradedCardCDB(CARD_FOLLOWUP, 0, 0, 3);
//	strcpy(&CardDatabase[CARD_FOLLOWUP].name, "�ļ�Ÿ");
//	strcpy(&CardDatabase[CARD_FOLLOWUP].description, "���ظ� 6 �ݴϴ�.");
//	strcpy(&CardDatabase[CARD_FOLLOWUP].description_up, "���ظ� 9 �ݴϴ�.");
//
//	// 13
//	initCard(CARD_JUSTLUCKY);
//	SetColorRarityType(CARD_JUSTLUCKY, PURPLE, COMMON, SKILL);
//	CardDatabase[CARD_JUSTLUCKY].cost = 0;
//	CardDatabase[CARD_JUSTLUCKY].block = 3;
//	SetUpgradedCardCDB(CARD_JUSTLUCKY, 0, 2, 0);
//	strcpy(&CardDatabase[CARD_JUSTLUCKY].name, "�� ���� �� ��");
//	strcpy(&CardDatabase[CARD_JUSTLUCKY].description, "3�� ���� ����ϴ�.");
//	strcpy(&CardDatabase[CARD_JUSTLUCKY].description_up, "5�� ���� ����ϴ�.");
//
//	// 14
//	initCard(CARD_SASHWHIP);
//	SetColorRarityType(CARD_SASHWHIP, PURPLE, COMMON, ATTACK);
//	CardDatabase[CARD_SASHWHIP].cost = 1;
//	CardDatabase[CARD_SASHWHIP].damage = 7;
//	SetUpgradedCardCDB(CARD_SASHWHIP, 0, 0, 3);
//	strcpy(&CardDatabase[CARD_SASHWHIP].name, "ä����");
//	strcpy(&CardDatabase[CARD_SASHWHIP].description, "���ظ� 7 �ݴϴ�.");
//	strcpy(&CardDatabase[CARD_SASHWHIP].description_up, "���ظ� 10 �ݴϴ�.");
//
//	// 15
//	initCard(CARD_CARVEREALITY);
//	SetColorRarityType(CARD_CARVEREALITY, PURPLE, COMMON, SKILL);
//	CardDatabase[CARD_CARVEREALITY].cost = 1;
//	CardDatabase[CARD_CARVEREALITY].block = 6;
//	SetUpgradedCardCDB(CARD_CARVEREALITY, 0, 3, 0);
//	strcpy(&CardDatabase[CARD_CARVEREALITY].name, "���� ����");
//	strcpy(&CardDatabase[CARD_CARVEREALITY].description, "6�� ���� ����ϴ�.");
//	strcpy(&CardDatabase[CARD_CARVEREALITY].description_up, "9�� ���� ����ϴ�.");
//
//	// 16
//	initCard(CARD_CONCLUDE);
//	SetColorRarityType(CARD_CONCLUDE, PURPLE, COMMON, SKILL);
//	CardDatabase[CARD_CONCLUDE].cost = 2;
//	CardDatabase[CARD_CONCLUDE].block = 10;
//	SetUpgradedCardCDB(CARD_CONCLUDE, 0, 4, 0);
//	strcpy(&CardDatabase[CARD_CONCLUDE].name, "�ḻ");
//	strcpy(&CardDatabase[CARD_CONCLUDE].description, "10�� ���� ����ϴ�.");
//	strcpy(&CardDatabase[CARD_CONCLUDE].description_up, "14�� ���� ����ϴ�.");
//
//	// 17
//	initCard(CARD_FEARNOEVIL);
//	SetColorRarityType(CARD_FEARNOEVIL, PURPLE, COMMON, ATTACK);
//	CardDatabase[CARD_FEARNOEVIL].cost = 1;
//	CardDatabase[CARD_FEARNOEVIL].damage = 9;
//	SetUpgradedCardCDB(CARD_FEARNOEVIL, 0, 0, 3);
//	strcpy(&CardDatabase[CARD_FEARNOEVIL].name, "�Ǹ��� �η��� ����");
//	strcpy(&CardDatabase[CARD_FEARNOEVIL].description, "���ظ� 9 �ݴϴ�.");
//	strcpy(&CardDatabase[CARD_FEARNOEVIL].description_up, "���ظ� 12 �ݴϴ�.");
//
//	// 18
//	initCard(CARD_REACHHEAVEN);
//	SetColorRarityType(CARD_REACHHEAVEN, PURPLE, COMMON, SKILL);
//	CardDatabase[CARD_REACHHEAVEN].cost = 1;
//	CardDatabase[CARD_REACHHEAVEN].block = 7;
//	SetUpgradedCardCDB(CARD_REACHHEAVEN, 0, 3, 0);
//	strcpy(&CardDatabase[CARD_REACHHEAVEN].name, "õ�� ���");
//	strcpy(&CardDatabase[CARD_REACHHEAVEN].description, "7�� ���� ����ϴ�.");
//	strcpy(&CardDatabase[CARD_REACHHEAVEN].description_up, "10�� ���� ����ϴ�.");
//
//	// 19
//	initCard(CARD_SANDSOFTIME);
//	SetColorRarityType(CARD_SANDSOFTIME, PURPLE, COMMON, SKILL);
//	CardDatabase[CARD_SANDSOFTIME].cost = 2;
//	CardDatabase[CARD_SANDSOFTIME].block = 9;
//	SetUpgradedCardCDB(CARD_SANDSOFTIME, 0, 4, 0);
//	strcpy(&CardDatabase[CARD_SANDSOFTIME].name, "�ð��� ��");
//	strcpy(&CardDatabase[CARD_SANDSOFTIME].description, "9�� ���� ����ϴ�.");
//	strcpy(&CardDatabase[CARD_SANDSOFTIME].description_up, "13�� ���� ����ϴ�.");
//
//	// 20
//	initCard(CARD_SIGNATUREMOVE);
//	SetColorRarityType(CARD_SIGNATUREMOVE, PURPLE, COMMON, ATTACK);
//	CardDatabase[CARD_SIGNATUREMOVE].cost = 1;
//	CardDatabase[CARD_SIGNATUREMOVE].damage = 10;
//	SetUpgradedCardCDB(CARD_SIGNATUREMOVE, 0, 0, 4);
//	strcpy(&CardDatabase[CARD_SIGNATUREMOVE].name, "�ñ״�ó ����");
//	strcpy(&CardDatabase[CARD_SIGNATUREMOVE].description, "���ظ� 10 �ݴϴ�.");
//	strcpy(&CardDatabase[CARD_SIGNATUREMOVE].description_up, "���ظ� 14 �ݴϴ�.");
//
//	// 21
//	initCard(CARD_TALKTOTHEHAND);
//	SetColorRarityType(CARD_TALKTOTHEHAND, PURPLE, COMMON, SKILL);
//	CardDatabase[CARD_TALKTOTHEHAND].cost = 1;
//	CardDatabase[CARD_TALKTOTHEHAND].block = 8;
//	SetUpgradedCardCDB(CARD_TALKTOTHEHAND, 0, 4, 0);
//	strcpy(&CardDatabase[CARD_TALKTOTHEHAND].name, "�հ� ��ȭ�ϱ�");
//	strcpy(&CardDatabase[CARD_TALKTOTHEHAND].description, "8�� ���� ����ϴ�.");
//	strcpy(&CardDatabase[CARD_TALKTOTHEHAND].description_up, "12�� ���� ����ϴ�.");
//
//	// 22
//	initCard(CARD_TANTRUM);
//	SetColorRarityType(CARD_TANTRUM, PURPLE, COMMON, ATTACK);
//	CardDatabase[CARD_TANTRUM].cost = 1;
//	CardDatabase[CARD_TANTRUM].damage = 7;
//	SetUpgradedCardCDB(CARD_TANTRUM, 0, 0, 3);
//	strcpy(&CardDatabase[CARD_TANTRUM].name, "����");
//	strcpy(&CardDatabase[CARD_TANTRUM].description, "���ظ� 7 �ݴϴ�.");
//	strcpy(&CardDatabase[CARD_TANTRUM].description_up, "���ظ� 10 �ݴϴ�.");
//
//	// 23
//	initCard(CARD_WALLOP);
//	SetColorRarityType(CARD_WALLOP, PURPLE, COMMON, ATTACK);
//	CardDatabase[CARD_WALLOP].cost = 1;
//	CardDatabase[CARD_WALLOP].damage = 6;
//	SetUpgradedCardCDB(CARD_WALLOP, 0, 0, 3);
//	strcpy(&CardDatabase[CARD_WALLOP].name, "��Ÿ");
//	strcpy(&CardDatabase[CARD_WALLOP].description, "���ظ� 6 �ݴϴ�.");
//	strcpy(&CardDatabase[CARD_WALLOP].description_up, "���ظ� 9 �ݴϴ�.");
//
//	// 24
//	initCard(CARD_WEAVE);
//	SetColorRarityType(CARD_WEAVE, PURPLE, COMMON, SKILL);
//	CardDatabase[CARD_WEAVE].cost = 1;
//	CardDatabase[CARD_WEAVE].block = 7;
//	SetUpgradedCardCDB(CARD_WEAVE, 0, 3, 0);
//	strcpy(&CardDatabase[CARD_WEAVE].name, "¥��");
//	strcpy(&CardDatabase[CARD_WEAVE].description, "7�� ���� ����ϴ�.");
//	strcpy(&CardDatabase[CARD_WEAVE].description_up, "10�� ���� ����ϴ�.");
//
//	// 25
//	initCard(CARD_WHEELKICK);
//	SetColorRarityType(CARD_WHEELKICK, PURPLE, COMMON, ATTACK);
//	CardDatabase[CARD_WHEELKICK].cost = 1;
//	CardDatabase[CARD_WHEELKICK].damage = 8;
//	SetUpgradedCardCDB(CARD_WHEELKICK, 0, 0, 3);
//	strcpy(&CardDatabase[CARD_WHEELKICK].name, "�� ű");
//	strcpy(&CardDatabase[CARD_WHEELKICK].description, "���ظ� 8 �ݴϴ�.");
//	strcpy(&CardDatabase[CARD_WHEELKICK].description_up, "���ظ� 11 �ݴϴ�.");
//
//	// 26
//	initCard(CARD_WINDMILLSTRIKE);
//	SetColorRarityType(CARD_WINDMILLSTRIKE, PURPLE, COMMON, ATTACK);
//	CardDatabase[CARD_WINDMILLSTRIKE].cost = 1;
//	CardDatabase[CARD_WINDMILLSTRIKE].damage = 9;
//	SetUpgradedCardCDB(CARD_WINDMILLSTRIKE, 0, 0, 3);
//	strcpy(&CardDatabase[CARD_WINDMILLSTRIKE].name, "ǳ�� ����");
//	strcpy(&CardDatabase[CARD_WINDMILLSTRIKE].description, "���ظ� 9 �ݴϴ�.");
//	strcpy(&CardDatabase[CARD_WINDMILLSTRIKE].description_up, "���ظ� 12 �ݴϴ�.");
//
//	// 27
//	initCard(CARD_BRILLIANCE);
//	SetColorRarityType(CARD_BRILLIANCE, PURPLE, UNCOMMON, SKILL);
//	CardDatabase[CARD_BRILLIANCE].cost = 1;
//	CardDatabase[CARD_BRILLIANCE].block = 5;
//	SetUpgradedCardCDB(CARD_BRILLIANCE, 0, 3, 0);
//	strcpy(&CardDatabase[CARD_BRILLIANCE].name, "����");
//	strcpy(&CardDatabase[CARD_BRILLIANCE].description, "5�� ���� ��� ���� �Ͽ� ī�� 1���� �߰��� �̽��ϴ�.");
//	strcpy(&CardDatabase[CARD_BRILLIANCE].description_up, "8�� ���� ��� ���� �Ͽ� ī�� 1���� �߰��� �̽��ϴ�.");
//
//	// 28
//	initCard(CARD_LESSONLEARNED);
//	SetColorRarityType(CARD_LESSONLEARNED, PURPLE, UNCOMMON, SKILL);
//	CardDatabase[CARD_LESSONLEARNED].cost = 1;
//	CardDatabase[CARD_LESSONLEARNED].block = 7;
//	SetUpgradedCardCDB(CARD_LESSONLEARNED, 0, 3, 0);
//	strcpy(&CardDatabase[CARD_LESSONLEARNED].name, "����");
//	strcpy(&CardDatabase[CARD_LESSONLEARNED].description, "7�� ���� ��� ���� �Ͽ� ī�� 1���� �߰��� �̽��ϴ�.");
//	strcpy(&CardDatabase[CARD_LESSONLEARNED].description_up, "10�� ���� ��� ���� �Ͽ� ī�� 1���� �߰��� �̽��ϴ�.");
//
//	// 29
//	initCard(CARD_RAGNAROK);
//	SetColorRarityType(CARD_RAGNAROK, PURPLE, UNCOMMON, ATTACK);
//	CardDatabase[CARD_RAGNAROK].cost = 2;
//	CardDatabase[CARD_RAGNAROK].damage = 21;
//	SetUpgradedCardCDB(CARD_RAGNAROK, 0, 0, 6);
//	strcpy(&CardDatabase[CARD_RAGNAROK].name, "��׳���ũ");
//	strcpy(&CardDatabase[CARD_RAGNAROK].description, "���ظ� 21 �ݴϴ�. ���� �ҽ��ϴ�.");
//	strcpy(&CardDatabase[CARD_RAGNAROK].description_up, "���ظ� 27 �ݴϴ�. ���� �ҽ��ϴ�.");
//
//	// 30
//	initCard(CARD_CRESCENDO);
//	SetColorRarityType(CARD_CRESCENDO, PURPLE, UNCOMMON, ATTACK);
//	CardDatabase[CARD_CRESCENDO].cost = 2;
//	CardDatabase[CARD_CRESCENDO].damage = 7;
//	SetUpgradedCardCDB(CARD_CRESCENDO, 0, 0, 3);
//	strcpy(&CardDatabase[CARD_CRESCENDO].name, "ũ���ϵ�");
//	strcpy(&CardDatabase[CARD_CRESCENDO].description, "���ظ� 7 �ݴϴ�. ���� Ƚ���� �����մϴ�.");
//	strcpy(&CardDatabase[CARD_CRESCENDO].description_up, "���ظ� 10 �ݴϴ�. ���� Ƚ���� �����մϴ�.");
//
//	// 31
//	initCard(CARD_EMPTYBODY);
//	SetColorRarityType(CARD_EMPTYBODY, PURPLE, UNCOMMON, SKILL);
//	CardDatabase[CARD_EMPTYBODY].cost = 1;
//	CardDatabase[CARD_EMPTYBODY].block = 8;
//	SetUpgradedCardCDB(CARD_EMPTYBODY, 0, 3, 0);
//	strcpy(&CardDatabase[CARD_EMPTYBODY].name, "�� ��");
//	strcpy(&CardDatabase[CARD_EMPTYBODY].description, "8�� ���� ����ϴ�. ���� ���¿� �����մϴ�.");
//	strcpy(&CardDatabase[CARD_EMPTYBODY].description_up, "11�� ���� ����ϴ�. ���� ���¿� �����մϴ�.");
//
//	// 32
//	initCard(CARD_EVALUATE);
//	SetColorRarityType(CARD_EVALUATE, PURPLE, UNCOMMON, SKILL);
//	CardDatabase[CARD_EVALUATE].cost = 0;
//	SetUpgradedCardCDB(CARD_EVALUATE, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_EVALUATE].name, "��");
//	strcpy(&CardDatabase[CARD_EVALUATE].description, "���� ī���� ����� 0���� ����ϴ�.");
//	strcpy(&CardDatabase[CARD_EVALUATE].description_up, "���� ī���� ����� 0���� ����ϴ�.");
//
//	// 33
//	initCard(CARD_HALT);
//	SetColorRarityType(CARD_HALT, PURPLE, UNCOMMON, SKILL);
//	CardDatabase[CARD_HALT].cost = 1;
//	CardDatabase[CARD_HALT].block = 5;
//	SetUpgradedCardCDB(CARD_HALT, 0, 3, 0);
//	strcpy(&CardDatabase[CARD_HALT].name, "����");
//	strcpy(&CardDatabase[CARD_HALT].description, "5�� ���� ����ϴ�.");
//	strcpy(&CardDatabase[CARD_HALT].description_up, "8�� ���� ����ϴ�.");
//
//	// 34
//	initCard(CARD_PRESSUREPOINTS);
//	SetColorRarityType(CARD_PRESSUREPOINTS, PURPLE, UNCOMMON, SKILL);
//	CardDatabase[CARD_PRESSUREPOINTS].cost = 1;
//	CardDatabase[CARD_PRESSUREPOINTS].block = 6;
//	SetUpgradedCardCDB(CARD_PRESSUREPOINTS, 0, 3, 0);
//	strcpy(&CardDatabase[CARD_PRESSUREPOINTS].name, "�з���");
//	strcpy(&CardDatabase[CARD_PRESSUREPOINTS].description, "6�� ���� ����ϴ�.");
//	strcpy(&CardDatabase[CARD_PRESSUREPOINTS].description_up, "9�� ���� ����ϴ�.");
//
//	// 35
//	initCard(CARD_PROSTRATE);
//	SetColorRarityType(CARD_PROSTRATE, PURPLE, UNCOMMON, SKILL);
//	CardDatabase[CARD_PROSTRATE].cost = 2;
//	CardDatabase[CARD_PROSTRATE].block = 11;
//	SetUpgradedCardCDB(CARD_PROSTRATE, 0, 5, 0);
//	strcpy(&CardDatabase[CARD_PROSTRATE].name, "���帮��");
//	strcpy(&CardDatabase[CARD_PROSTRATE].description, "11�� ���� ����ϴ�.");
//	strcpy(&CardDatabase[CARD_PROSTRATE].description_up, "16�� ���� ����ϴ�.");
//
//	// 36
//	initCard(CARD_PROTECT);
//	SetColorRarityType(CARD_PROTECT, PURPLE, UNCOMMON, SKILL);
//	CardDatabase[CARD_PROTECT].cost = 1;
//	CardDatabase[CARD_PROTECT].block = 7;
//	SetUpgradedCardCDB(CARD_PROTECT, 0, 3, 0);
//	strcpy(&CardDatabase[CARD_PROTECT].name, "��ȣ");
//	strcpy(&CardDatabase[CARD_PROTECT].description, "7�� ���� ����ϴ�.");
//	strcpy(&CardDatabase[CARD_PROTECT].description_up, "10�� ���� ����ϴ�.");
//
//	// 37
//	initCard(CARD_THIRDEYE);
//	SetColorRarityType(CARD_THIRDEYE, PURPLE, UNCOMMON, SKILL);
//	CardDatabase[CARD_THIRDEYE].cost = 1;
//	CardDatabase[CARD_THIRDEYE].block = 7;
//	SetUpgradedCardCDB(CARD_THIRDEYE, 0, 3, 0);
//	strcpy(&CardDatabase[CARD_THIRDEYE].name, "��3�� ��");
//	strcpy(&CardDatabase[CARD_THIRDEYE].description, "7�� ���� ��� ī�� 1���� �̽��ϴ�.");
//	strcpy(&CardDatabase[CARD_THIRDEYE].description_up, "10�� ���� ��� ī�� 1���� �̽��ϴ�.");
//
//	// 38
//	initCard(CARD_TRANQUILITY);
//	SetColorRarityType(CARD_TRANQUILITY, PURPLE, UNCOMMON, SKILL);
//	CardDatabase[CARD_TRANQUILITY].cost = 1;
//	CardDatabase[CARD_TRANQUILITY].block = 8;
//	SetUpgradedCardCDB(CARD_TRANQUILITY, 0, 3, 0);
//	strcpy(&CardDatabase[CARD_TRANQUILITY].name, "���");
//	strcpy(&CardDatabase[CARD_TRANQUILITY].description, "8�� ���� ����ϴ�.");
//	strcpy(&CardDatabase[CARD_TRANQUILITY].description_up, "11�� ���� ����ϴ�.");
//
//	// 39
//	initCard(CARD_COLLECT);
//	SetColorRarityType(CARD_COLLECT, PURPLE, UNCOMMON, SKILL);
//	CardDatabase[CARD_COLLECT].cost = 1;
//	SetUpgradedCardCDB(CARD_COLLECT, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_COLLECT].name, "����");
//	strcpy(&CardDatabase[CARD_COLLECT].description, "�������� 1 ����ϴ�.");
//	strcpy(&CardDatabase[CARD_COLLECT].description_up, "�������� 1 ����ϴ�.");
//
//	// 40
//	initCard(CARD_DECEIVEREALITY);
//	SetColorRarityType(CARD_DECEIVEREALITY, PURPLE, RARE, SKILL);
//	CardDatabase[CARD_DECEIVEREALITY].cost = 2;
//	CardDatabase[CARD_DECEIVEREALITY].block = 13;
//	SetUpgradedCardCDB(CARD_DECEIVEREALITY, 0, 4, 0);
//	strcpy(&CardDatabase[CARD_DECEIVEREALITY].name, "���� ���Ӽ�");
//	strcpy(&CardDatabase[CARD_DECEIVEREALITY].description, "13�� ���� ����ϴ�.");
//	strcpy(&CardDatabase[CARD_DECEIVEREALITY].description_up, "17�� ���� ����ϴ�.");
//
//	// 41
//	initCard(CARD_EMPTYMIND);
//	SetColorRarityType(CARD_EMPTYMIND, PURPLE, RARE, SKILL);
//	CardDatabase[CARD_EMPTYMIND].cost = 0;
//	SetUpgradedCardCDB(CARD_EMPTYMIND, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_EMPTYMIND].name, "�� ����");
//	strcpy(&CardDatabase[CARD_EMPTYMIND].description, "���� ���� ī���� ���ظ� 3 ��� ����ϴ�.");
//	strcpy(&CardDatabase[CARD_EMPTYMIND].description_up, "���� ���� ī���� ���ظ� 3 ��� ����ϴ�.");
//
//	// 42
//	initCard(CARD_FOREIGNINFLUENCE);
//	SetColorRarityType(CARD_FOREIGNINFLUENCE, PURPLE, RARE, SKILL);
//	CardDatabase[CARD_FOREIGNINFLUENCE].cost = 2;
//	CardDatabase[CARD_FOREIGNINFLUENCE].block = 10;
//	SetUpgradedCardCDB(CARD_FOREIGNINFLUENCE, 0, 4, 0);
//	strcpy(&CardDatabase[CARD_FOREIGNINFLUENCE].name, "�ܺ� ����");
//	strcpy(&CardDatabase[CARD_FOREIGNINFLUENCE].description, "10�� ���� ����ϴ�.");
//	strcpy(&CardDatabase[CARD_FOREIGNINFLUENCE].description_up, "14�� ���� ����ϴ�.");
//
//	// 43
//	initCard(CARD_INDIGNATION);
//	SetColorRarityType(CARD_INDIGNATION, PURPLE, RARE, ATTACK);
//	CardDatabase[CARD_INDIGNATION].cost = 1;
//	CardDatabase[CARD_INDIGNATION].damage = 14;
//	SetUpgradedCardCDB(CARD_INDIGNATION, 0, 0, 5);
//	strcpy(&CardDatabase[CARD_INDIGNATION].name, "�г�");
//	strcpy(&CardDatabase[CARD_INDIGNATION].description, "���ظ� 14 �ݴϴ�.");
//	strcpy(&CardDatabase[CARD_INDIGNATION].description_up, "���ظ� 19 �ݴϴ�.");
//
//	// 44
//	initCard(CARD_INNERPEACE);
//	SetColorRarityType(CARD_INNERPEACE, PURPLE, RARE, SKILL);
//	CardDatabase[CARD_INNERPEACE].cost = 1;
//	CardDatabase[CARD_INNERPEACE].block = 11;
//	SetUpgradedCardCDB(CARD_INNERPEACE, 0, 5, 0);
//	strcpy(&CardDatabase[CARD_INNERPEACE].name, "������ ��ȭ");
//	strcpy(&CardDatabase[CARD_INNERPEACE].description, "11�� ���� ����ϴ�.");
//	strcpy(&CardDatabase[CARD_INNERPEACE].description_up, "16�� ���� ����ϴ�.");
//
//	// 45
//	initCard(CARD_MEDITATE);
//	SetColorRarityType(CARD_MEDITATE, PURPLE, RARE, SKILL);
//	CardDatabase[CARD_MEDITATE].cost = 1;
//	CardDatabase[CARD_MEDITATE].block = 5;
//	SetUpgradedCardCDB(CARD_MEDITATE, 0, 3, 0);
//	strcpy(&CardDatabase[CARD_MEDITATE].name, "���");
//	strcpy(&CardDatabase[CARD_MEDITATE].description, "5�� ���� ��� ī�带 �� �� �����ϴ�.");
//	strcpy(&CardDatabase[CARD_MEDITATE].description_up, "8�� ���� ��� ī�带 �� �� �����ϴ�.");
//
//	// 46
//	initCard(CARD_PERSEVERANCE);
//	SetColorRarityType(CARD_PERSEVERANCE, PURPLE, RARE, SKILL);
//	CardDatabase[CARD_PERSEVERANCE].cost = 2;
//	CardDatabase[CARD_PERSEVERANCE].block = 14;
//	SetUpgradedCardCDB(CARD_PERSEVERANCE, 0, 5, 0);
//	strcpy(&CardDatabase[CARD_PERSEVERANCE].name, "�γ�");
//	strcpy(&CardDatabase[CARD_PERSEVERANCE].description, "14�� ���� ����ϴ�.");
//	strcpy(&CardDatabase[CARD_PERSEVERANCE].description_up, "19�� ���� ����ϴ�.");
//
//	// 47
//	initCard(CARD_PRAY);
//	SetColorRarityType(CARD_PRAY, PURPLE, RARE, SKILL);
//	CardDatabase[CARD_PRAY].cost = 1;
//	CardDatabase[CARD_PRAY].block = 6;
//	SetUpgradedCardCDB(CARD_PRAY, 0, 3, 0);
//	strcpy(&CardDatabase[CARD_PRAY].name, "�⵵");
//	strcpy(&CardDatabase[CARD_PRAY].description, "6�� ���� ��� �������� 1 ����ϴ�.");
//	strcpy(&CardDatabase[CARD_PRAY].description_up, "9�� ���� ��� �������� 1 ����ϴ�.");
//
//	// 48
//	initCard(CARD_SANCTITY);
//	SetColorRarityType(CARD_SANCTITY, PURPLE, RARE, SKILL);
//	CardDatabase[CARD_SANCTITY].cost = 2;
//	CardDatabase[CARD_SANCTITY].block = 10;
//	SetUpgradedCardCDB(CARD_SANCTITY, 0, 4, 0);
//	strcpy(&CardDatabase[CARD_SANCTITY].name, "��������");
//	strcpy(&CardDatabase[CARD_SANCTITY].description, "10�� ���� ��� ī�� 1���� �̽��ϴ�.");
//	strcpy(&CardDatabase[CARD_SANCTITY].description_up, "14�� ���� ��� ī�� 1���� �̽��ϴ�.");
//
//	// 49
//	initCard(CARD_SIMMERINGFURY);
//	SetColorRarityType(CARD_SIMMERINGFURY, PURPLE, RARE, ATTACK);
//	CardDatabase[CARD_SIMMERINGFURY].cost = 2;
//	CardDatabase[CARD_SIMMERINGFURY].damage = 18;
//	SetUpgradedCardCDB(CARD_SIMMERINGFURY, 0, 0, 5);
//	strcpy(&CardDatabase[CARD_SIMMERINGFURY].name, "��������� �г�");
//	strcpy(&CardDatabase[CARD_SIMMERINGFURY].description, "���ظ� 18 �ݴϴ�.");
//	strcpy(&CardDatabase[CARD_SIMMERINGFURY].description_up, "���ظ� 23 �ݴϴ�.");
//
//	// 50
//	initCard(CARD_SWIVEL);
//	SetColorRarityType(CARD_SWIVEL, PURPLE, RARE, SKILL);
//	CardDatabase[CARD_SWIVEL].cost = 1;
//	CardDatabase[CARD_SWIVEL].block = 7;
//	SetUpgradedCardCDB(CARD_SWIVEL, 0, 3, 0);
//	strcpy(&CardDatabase[CARD_SWIVEL].name, "ȸ��");
//	strcpy(&CardDatabase[CARD_SWIVEL].description, "7�� ���� ����ϴ�.");
//	strcpy(&CardDatabase[CARD_SWIVEL].description_up, "10�� ���� ����ϴ�.");
//
//	// 51
//	initCard(CARD_WAVEOFTHEHAND);
//	SetColorRarityType(CARD_WAVEOFTHEHAND, PURPLE, RARE, SKILL);
//	CardDatabase[CARD_WAVEOFTHEHAND].cost = 1;
//	CardDatabase[CARD_WAVEOFTHEHAND].block = 6;
//	SetUpgradedCardCDB(CARD_WAVEOFTHEHAND, 0, 3, 0);
//	strcpy(&CardDatabase[CARD_WAVEOFTHEHAND].name, "���� �ĵ�");
//	strcpy(&CardDatabase[CARD_WAVEOFTHEHAND].description, "6�� ���� ����ϴ�.");
//	strcpy(&CardDatabase[CARD_WAVEOFTHEHAND].description_up, "9�� ���� ����ϴ�.");
//
//	// 52
//	initCard(CARD_WORSHIP);
//	SetColorRarityType(CARD_WORSHIP, PURPLE, RARE, SKILL);
//	CardDatabase[CARD_WORSHIP].cost = 1;
//	CardDatabase[CARD_WORSHIP].block = 8;
//	SetUpgradedCardCDB(CARD_WORSHIP, 0, 3, 0);
//	strcpy(&CardDatabase[CARD_WORSHIP].name, "����");
//	strcpy(&CardDatabase[CARD_WORSHIP].description, "8�� ���� ����ϴ�.");
//	strcpy(&CardDatabase[CARD_WORSHIP].description_up, "11�� ���� ����ϴ�.");
//
//	// 53
//	initCard(CARD_WREATHOFFLAME);
//	SetColorRarityType(CARD_WREATHOFFLAME, PURPLE, RARE, SKILL);
//	CardDatabase[CARD_WREATHOFFLAME].cost = 2;
//	CardDatabase[CARD_WREATHOFFLAME].block = 12;
//	SetUpgradedCardCDB(CARD_WREATHOFFLAME, 0, 5, 0);
//	strcpy(&CardDatabase[CARD_WREATHOFFLAME].name, "�Ҳ��� ȭȯ");
//	strcpy(&CardDatabase[CARD_WREATHOFFLAME].description, "12�� ���� ����ϴ�.");
//	strcpy(&CardDatabase[CARD_WREATHOFFLAME].description_up, "17�� ���� ����ϴ�.");
//
//	// 54
//	initCard(CARD_WREATHOFWATER);
//	SetColorRarityType(CARD_WREATHOFWATER, PURPLE, RARE, SKILL);
//	CardDatabase[CARD_WREATHOFWATER].cost = 2;
//	CardDatabase[CARD_WREATHOFWATER].block = 11;
//	SetUpgradedCardCDB(CARD_WREATHOFWATER, 0, 5, 0);
//	strcpy(&CardDatabase[CARD_WREATHOFWATER].name, "���� ȭȯ");
//	strcpy(&CardDatabase[CARD_WREATHOFWATER].description, "11�� ���� ����ϴ�.");
//	strcpy(&CardDatabase[CARD_WREATHOFWATER].description_up, "16�� ���� ����ϴ�.");
//
//	// 55
//	initCard(CARD_WREATHOFAIR);
//	SetColorRarityType(CARD_WREATHOFAIR, PURPLE, RARE, SKILL);
//	CardDatabase[CARD_WREATHOFAIR].cost = 2;
//	CardDatabase[CARD_WREATHOFAIR].block = 11;
//	SetUpgradedCardCDB(CARD_WREATHOFAIR, 0, 5, 0);
//	strcpy(&CardDatabase[CARD_WREATHOFAIR].name, "�ٶ��� ȭȯ");
//	strcpy(&CardDatabase[CARD_WREATHOFAIR].description, "11�� ���� ����ϴ�.");
//	strcpy(&CardDatabase[CARD_WREATHOFAIR].description_up, "16�� ���� ����ϴ�.");
//
//	// 56
//	initCard(CARD_WINDMILLSTRIKE);
//	SetColorRarityType(CARD_WINDMILLSTRIKE, PURPLE, RARE, ATTACK);
//	CardDatabase[CARD_WINDMILLSTRIKE].cost = 1;
//	CardDatabase[CARD_WINDMILLSTRIKE].damage = 9;
//	SetUpgradedCardCDB(CARD_WINDMILLSTRIKE, 0, 0, 3);
//	strcpy(&CardDatabase[CARD_WINDMILLSTRIKE].name, "ǳ�� ����");
//	strcpy(&CardDatabase[CARD_WINDMILLSTRIKE].description, "���ظ� 9 �ݴϴ�.");
//	strcpy(&CardDatabase[CARD_WINDMILLSTRIKE].description_up, "���ظ� 12 �ݴϴ�.");
//
//	// 57
//	initCard(CARD_WITHER);
//	SetColorRarityType(CARD_WITHER, PURPLE, RARE, ATTACK);
//	CardDatabase[CARD_WITHER].cost = 1;
//	CardDatabase[CARD_WITHER].damage = 11;
//	SetUpgradedCardCDB(CARD_WITHER, 0, 0, 4);
//	strcpy(&CardDatabase[CARD_WITHER].name, "�õ��");
//	strcpy(&CardDatabase[CARD_WITHER].description, "���ظ� 11 �ݴϴ�. ���� ���ݷ��� ���ҽ�ŵ�ϴ�.");
//	strcpy(&CardDatabase[CARD_WITHER].description_up, "���ظ� 15 �ݴϴ�. ���� ���ݷ��� ���ҽ�ŵ�ϴ�.");
//
//	// 58
//	initCard(CARD_WILLOFWISP);
//	SetColorRarityType(CARD_WILLOFWISP, PURPLE, RARE, SKILL);
//	CardDatabase[CARD_WILLOFWISP].cost = 2;
//	CardDatabase[CARD_WILLOFWISP].block = 12;
//	SetUpgradedCardCDB(CARD_WILLOFWISP, 0, 5, 0);
//	strcpy(&CardDatabase[CARD_WILLOFWISP].name, "������ ����");
//	strcpy(&CardDatabase[CARD_WILLOFWISP].description, "12�� ���� ����ϴ�.");
//	strcpy(&CardDatabase[CARD_WILLOFWISP].description_up, "17�� ���� ����ϴ�.");
//
//	// 59
//	initCard(CARD_YOGASLEEP);
//	SetColorRarityType(CARD_YOGASLEEP, PURPLE, RARE, SKILL);
//	CardDatabase[CARD_YOGASLEEP].cost = 3;
//	CardDatabase[CARD_YOGASLEEP].block = 15;
//	SetUpgradedCardCDB(CARD_YOGASLEEP, 0, 6, 0);
//	strcpy(&CardDatabase[CARD_YOGASLEEP].name, "�䰡 ����");
//	strcpy(&CardDatabase[CARD_YOGASLEEP].description, "15�� ���� ��� ���� �� ���� ���¿� �����մϴ�.");
//	strcpy(&CardDatabase[CARD_YOGASLEEP].description_up, "21�� ���� ��� ���� �� ���� ���¿� �����մϴ�.");
//
//	// 60
//	initCard(CARD_BERSERKERSPIRIT);
//	SetColorRarityType(CARD_BERSERKERSPIRIT, PURPLE, RARE, SKILL);
//	CardDatabase[CARD_BERSERKERSPIRIT].cost = 2;
//	CardDatabase[CARD_BERSERKERSPIRIT].block = 9;
//	SetUpgradedCardCDB(CARD_BERSERKERSPIRIT, 0, 4, 0);
//	strcpy(&CardDatabase[CARD_BERSERKERSPIRIT].name, "�������� ����");
//	strcpy(&CardDatabase[CARD_BERSERKERSPIRIT].description, "9�� ���� ��� ���ݷ��� �����մϴ�.");
//	strcpy(&CardDatabase[CARD_BERSERKERSPIRIT].description_up, "13�� ���� ��� ���ݷ��� �����մϴ�.");
//
//	// 61
//	initCard(CARD_HOLYINSPIRATION);
//	SetColorRarityType(CARD_HOLYINSPIRATION, PURPLE, RARE, SKILL);
//	CardDatabase[CARD_HOLYINSPIRATION].cost = 2;
//	CardDatabase[CARD_HOLYINSPIRATION].block = 10;
//	SetUpgradedCardCDB(CARD_HOLYINSPIRATION, 0, 4, 0);
//	strcpy(&CardDatabase[CARD_HOLYINSPIRATION].name, "�ż��� ����");
//	strcpy(&CardDatabase[CARD_HOLYINSPIRATION].description, "10�� ���� ��� ī�� 2���� �̽��ϴ�.");
//	strcpy(&CardDatabase[CARD_HOLYINSPIRATION].description_up, "14�� ���� ��� ī�� 2���� �̽��ϴ�.");
//
//	// 62
//	initCard(CARD_PRIMECOMMAND);
//	SetColorRarityType(CARD_PRIMECOMMAND, PURPLE, RARE, SKILL);
//	CardDatabase[CARD_PRIMECOMMAND].cost = 3;
//	CardDatabase[CARD_PRIMECOMMAND].block = 14;
//	SetUpgradedCardCDB(CARD_PRIMECOMMAND, 0, 5, 0);
//	strcpy(&CardDatabase[CARD_PRIMECOMMAND].name, "�ְ� ���");
//	strcpy(&CardDatabase[CARD_PRIMECOMMAND].description, "14�� ���� ��� ���� ���� ī���� ���ذ� �����մϴ�.");
//	strcpy(&CardDatabase[CARD_PRIMECOMMAND].description_up, "19�� ���� ��� ���� ���� ī���� ���ذ� �����մϴ�.");
//
//	// 63
//	initCard(CARD_MAELSTROM);
//	SetColorRarityType(CARD_MAELSTROM, PURPLE, RARE, ATTACK);
//	CardDatabase[CARD_MAELSTROM].cost = 2;
//	CardDatabase[CARD_MAELSTROM].damage = 20;
//	SetUpgradedCardCDB(CARD_MAELSTROM, 0, 0, 6);
//	strcpy(&CardDatabase[CARD_MAELSTROM].name, "�ҿ뵹��");
//	strcpy(&CardDatabase[CARD_MAELSTROM].description, "���ظ� 20 �ݴϴ�.");
//	strcpy(&CardDatabase[CARD_MAELSTROM].description_up, "���ظ� 26 �ݴϴ�.");
//
//	// 64
//	initCard(CARD_BLINK);
//	SetColorRarityType(CARD_BLINK, PURPLE, RARE, SKILL);
//	CardDatabase[CARD_BLINK].cost = 1;
//	SetUpgradedCardCDB(CARD_BLINK, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_BLINK].name, "�����̵�");
//	strcpy(&CardDatabase[CARD_BLINK].description, "���� ���� ī���� ���ظ� �� ��� ����ϴ�.");
//	strcpy(&CardDatabase[CARD_BLINK].description_up, "���� ���� ī���� ���ظ� �� ��� ����ϴ�.");
//
//	// 65
//	initCard(CARD_EYEFORAN_EYE);
//	SetColorRarityType(CARD_EYEFORAN_EYE, PURPLE, RARE, ATTACK);
//	CardDatabase[CARD_EYEFORAN_EYE].cost = 1;
//	CardDatabase[CARD_EYEFORAN_EYE].damage = 10;
//	SetUpgradedCardCDB(CARD_EYEFORAN_EYE, 0, 0, 5);
//	strcpy(&CardDatabase[CARD_EYEFORAN_EYE].name, "������ ��");
//	strcpy(&CardDatabase[CARD_EYEFORAN_EYE].description, "���ظ� 10 �ݴϴ�.");
//	strcpy(&CardDatabase[CARD_EYEFORAN_EYE].description_up, "���ظ� 15 �ݴϴ�.");
//
//	// 66
//	initCard(CARD_FANGS_OF_THE_IDOL);
//	SetColorRarityType(CARD_FANGS_OF_THE_IDOL, PURPLE, RARE, ATTACK);
//	CardDatabase[CARD_FANGS_OF_THE_IDOL].cost = 2;
//	CardDatabase[CARD_FANGS_OF_THE_IDOL].damage = 16;
//	SetUpgradedCardCDB(CARD_FANGS_OF_THE_IDOL, 0, 0, 5);
//	strcpy(&CardDatabase[CARD_FANGS_OF_THE_IDOL].name, "��� �̻�");
//	strcpy(&CardDatabase[CARD_FANGS_OF_THE_IDOL].description, "���ظ� 16 �ݴϴ�.");
//	strcpy(&CardDatabase[CARD_FANGS_OF_THE_IDOL].description_up, "���ظ� 21 �ݴϴ�.");
//
//	// 67
//	initCard(CARD_JUDGMENT);
//	SetColorRarityType(CARD_JUDGMENT, PURPLE, RARE, ATTACK);
//	CardDatabase[CARD_JUDGMENT].cost = 1;
//	CardDatabase[CARD_JUDGMENT].damage = 15;
//	SetUpgradedCardCDB(CARD_JUDGMENT, 0, 0, 6);
//	strcpy(&CardDatabase[CARD_JUDGMENT].name, "����");
//	strcpy(&CardDatabase[CARD_JUDGMENT].description, "���ظ� 15 �ݴϴ�.");
//	strcpy(&CardDatabase[CARD_JUDGMENT].description_up, "���ظ� 21 �ݴϴ�.");
//
//	// 68
//	initCard(CARD_RADIANCE);
//	SetColorRarityType(CARD_RADIANCE, PURPLE, RARE, SKILL);
//	CardDatabase[CARD_RADIANCE].cost = 2;
//	CardDatabase[CARD_RADIANCE].block = 13;
//	SetUpgradedCardCDB(CARD_RADIANCE, 0, 4, 0);
//	strcpy(&CardDatabase[CARD_RADIANCE].name, "����");
//	strcpy(&CardDatabase[CARD_RADIANCE].description, "13�� ���� ����ϴ�.");
//	strcpy(&CardDatabase[CARD_RADIANCE].description_up, "17�� ���� ����ϴ�.");
//
//	// 69
//	initCard(CARD_RAVENSGIFT);
//	SetColorRarityType(CARD_RAVENSGIFT, PURPLE, RARE, SKILL);
//	CardDatabase[CARD_RAVENSGIFT].cost = 1;
//	CardDatabase[CARD_RAVENSGIFT].block = 8;
//	SetUpgradedCardCDB(CARD_RAVENSGIFT, 0, 3, 0);
//	strcpy(&CardDatabase[CARD_RAVENSGIFT].name, "����� ����");
//	strcpy(&CardDatabase[CARD_RAVENSGIFT].description, "8�� ���� ����ϴ�.");
//	strcpy(&CardDatabase[CARD_RAVENSGIFT].description_up, "11�� ���� ����ϴ�.");
//
//	// 70
//	initCard(CARD_WEAVESOFTHEHAND);
//	SetColorRarityType(CARD_WEAVESOFTHEHAND, PURPLE, RARE, SKILL);
//	CardDatabase[CARD_WEAVESOFTHEHAND].cost = 1;
//	CardDatabase[CARD_WEAVESOFTHEHAND].block = 9;
//	SetUpgradedCardCDB(CARD_WEAVESOFTHEHAND, 0, 4, 0);
//	strcpy(&CardDatabase[CARD_WEAVESOFTHEHAND].name, "���� ¥�ӻ�");
//	strcpy(&CardDatabase[CARD_WEAVESOFTHEHAND].description, "9�� ���� ����ϴ�.");
//	strcpy(&CardDatabase[CARD_WEAVESOFTHEHAND].description_up, "13�� ���� ����ϴ�.");
//
//	// 71
//	initCard(CARD_WITHER);
//	SetColorRarityType(CARD_WITHER, PURPLE, RARE, ATTACK);
//	CardDatabase[CARD_WITHER].cost = 1;
//	CardDatabase[CARD_WITHER].damage = 11;
//	SetUpgradedCardCDB(CARD_WITHER, 0, 0, 4);
//	strcpy(&CardDatabase[CARD_WITHER].name, "�õ��");
//	strcpy(&CardDatabase[CARD_WITHER].description, "���ظ� 11 �ݴϴ�. ���� ���ݷ��� ���ҽ�ŵ�ϴ�.");
//	strcpy(&CardDatabase[CARD_WITHER].description_up, "���ظ� 15 �ݴϴ�. ���� ���ݷ��� ���ҽ�ŵ�ϴ�.");
//
//	// 72
//	initCard(CARD_WILLOFWISP);
//	SetColorRarityType(CARD_WILLOFWISP, PURPLE, RARE, SKILL);
//	CardDatabase[CARD_WILLOFWISP].cost = 2;
//	CardDatabase[CARD_WILLOFWISP].block = 12;
//	SetUpgradedCardCDB(CARD_WILLOFWISP, 0, 5, 0);
//	strcpy(&CardDatabase[CARD_WILLOFWISP].name, "������ ����");
//	strcpy(&CardDatabase[CARD_WILLOFWISP].description, "12�� ���� ����ϴ�.");
//	strcpy(&CardDatabase[CARD_WILLOFWISP].description_up, "17�� ���� ����ϴ�.");
//
//	// 73
//	initCard(CARD_YOGASLEEP);
//	SetColorRarityType(CARD_YOGASLEEP, PURPLE, RARE, SKILL);
//	CardDatabase[CARD_YOGASLEEP].cost = 3;
//	CardDatabase[CARD_YOGASLEEP].block = 15;
//	SetUpgradedCardCDB(CARD_YOGASLEEP, 0, 6, 0);
//	strcpy(&CardDatabase[CARD_YOGASLEEP].name, "�䰡 ����");
//	strcpy(&CardDatabase[CARD_YOGASLEEP].description, "15�� ���� ��� ���� �� ���� ���¿� �����մϴ�.");
//	strcpy(&CardDatabase[CARD_YOGASLEEP].description_up, "21�� ���� ��� ���� �� ���� ���¿� �����մϴ�.");
//
//	// 74
//	initCard(CARD_ZEN);
//	SetColorRarityType(CARD_ZEN, PURPLE, RARE, SKILL);
//	CardDatabase[CARD_ZEN].cost = 2;
//	CardDatabase[CARD_ZEN].block = 12;
//	SetUpgradedCardCDB(CARD_ZEN, 0, 5, 0);
//	strcpy(&CardDatabase[CARD_ZEN].name, "��");
//	strcpy(&CardDatabase[CARD_ZEN].description, "12�� ���� ����ϴ�.");
//	strcpy(&CardDatabase[CARD_ZEN].description_up, "17�� ���� ����ϴ�.");
//
//	initCard(CARD_BITE);
//	SetColorRarityType(CARD_BITE, COLORLESS, COMMON, ATTACK);
//	CardDatabase[CARD_BITE].cost = 1;
//	SetUpgradedCardCDB(CARD_BITE, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_BITE].name, "������");
//	strcpy(&CardDatabase[CARD_BITE].description, "������ ���ظ� 7 �ݴϴ�. ġ���� 2 �մϴ�.");
//	strcpy(&CardDatabase[CARD_BITE].description_up, "������ ���ظ� 8 �ݴϴ�. ġ���� 3 �մϴ�.");
//
//	initCard(CARD_DAZED);
//	SetColorRarityType(CARD_DAZED, COLORLESS, COMMON, STATUS);
//	CardDatabase[CARD_DAZED].cost = -2;
//	SetUpgradedCardCDB(CARD_DAZED, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_DAZED].name, "ȥ��");
//	strcpy(&CardDatabase[CARD_DAZED].description, "���. ī�带 �� �� �����ϴ�.");
//	strcpy(&CardDatabase[CARD_DAZED].description_up, "���. ī�带 �� �� �����ϴ�.");
//
//	initCard(CARD_SLIMED);
//	SetColorRarityType(CARD_SLIMED, COLORLESS, COMMON, STATUS);
//	CardDatabase[CARD_SLIMED].cost = 1;
//	SetUpgradedCardCDB(CARD_SLIMED, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_SLIMED].name, "����");
//	strcpy(&CardDatabase[CARD_SLIMED].description, "����. ī�� �̱⸦ 1 �մϴ�.");
//	strcpy(&CardDatabase[CARD_SLIMED].description_up, "����. ī�� �̱⸦ 1 �մϴ�.");
//
//	initCard(CARD_VOID);
//	SetColorRarityType(CARD_VOID, COLORLESS, COMMON, STATUS);
//	CardDatabase[CARD_VOID].cost = -2;
//	SetUpgradedCardCDB(CARD_VOID, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_VOID].name, "����");
//	strcpy(&CardDatabase[CARD_VOID].description, "���. �տ��� �ٸ� ī�尡 ����� �� �������� 1 �ҽ��ϴ�.");
//	strcpy(&CardDatabase[CARD_VOID].description_up, "���. �տ��� �ٸ� ī�尡 ����� �� �������� 1 �ҽ��ϴ�.");
//
//	initCard(CARD_WOUND);
//	SetColorRarityType(CARD_WOUND, COLORLESS, COMMON, STATUS);
//	CardDatabase[CARD_WOUND].cost = -2;
//	SetUpgradedCardCDB(CARD_WOUND, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_WOUND].name, "��ó");
//	strcpy(&CardDatabase[CARD_WOUND].description, "���. ī�带 �� �� �����ϴ�.");
//	strcpy(&CardDatabase[CARD_WOUND].description_up, "���. ī�带 �� �� �����ϴ�.");
//
//	initCard(CARD_BURN);
//	SetColorRarityType(CARD_BURN, COLORLESS, COMMON, STATUS);
//	CardDatabase[CARD_BURN].cost = -2;
//	SetUpgradedCardCDB(CARD_BURN, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_BURN].name, "ȭ��");
//	strcpy(&CardDatabase[CARD_BURN].description, "���. �� ���� �� ���ظ� 2 �޽��ϴ�.");
//	strcpy(&CardDatabase[CARD_BURN].description_up, "���. �� ���� �� ���ظ� 4 �޽��ϴ�.");
//
//	// ���� ī�� - ��Ŀ��
//	initCard(CARD_BLIND);
//	SetColorRarityType(CARD_BLIND, COLORLESS, UNCOMMON, CURSE);
//	CardDatabase[CARD_BLIND].cost = -2;
//	SetUpgradedCardCDB(CARD_BLIND, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_BLIND].name, "�Ǹ�");
//	strcpy(&CardDatabase[CARD_BLIND].description, "����. ī�带 �� �� �����ϴ�.");
//	strcpy(&CardDatabase[CARD_BLIND].description_up, "����. ī�带 �� �� �����ϴ�.");
//
//	initCard(CARD_DECAY);
//	SetColorRarityType(CARD_DECAY, COLORLESS, UNCOMMON, CURSE);
//	CardDatabase[CARD_DECAY].cost = -2;
//	SetUpgradedCardCDB(CARD_DECAY, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_DECAY].name, "����");
//	strcpy(&CardDatabase[CARD_DECAY].description, "����. �� ���� �� ��ø�� 2 �ҽ��ϴ�.");
//	strcpy(&CardDatabase[CARD_DECAY].description_up, "����. �� ���� �� ��ø�� 3 �ҽ��ϴ�.");
//
//	initCard(CARD_DOUBT);
//	SetColorRarityType(CARD_DOUBT, COLORLESS, UNCOMMON, CURSE);
//	CardDatabase[CARD_DOUBT].cost = -2;
//	SetUpgradedCardCDB(CARD_DOUBT, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_DOUBT].name, "�ǽ�");
//	strcpy(&CardDatabase[CARD_DOUBT].description, "����. ��ȭ�� 1 ����ϴ�.");
//	strcpy(&CardDatabase[CARD_DOUBT].description_up, "����. ��ȭ�� 2 ����ϴ�.");
//
//	initCard(CARD_INJURY);
//	SetColorRarityType(CARD_INJURY, COLORLESS, UNCOMMON, CURSE);
//	CardDatabase[CARD_INJURY].cost = -2;
//	SetUpgradedCardCDB(CARD_INJURY, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_INJURY].name, "�λ�");
//	strcpy(&CardDatabase[CARD_INJURY].description, "����. ī�带 �� �� �����ϴ�.");
//	strcpy(&CardDatabase[CARD_INJURY].description_up, "����. ī�带 �� �� �����ϴ�.");
//
//	initCard(CARD_NORMALITY);
//	SetColorRarityType(CARD_NORMALITY, COLORLESS, UNCOMMON, CURSE);
//	CardDatabase[CARD_NORMALITY].cost = -2;
//	SetUpgradedCardCDB(CARD_NORMALITY, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_NORMALITY].name, "�����");
//	strcpy(&CardDatabase[CARD_NORMALITY].description, "����. �ϸ��� 3���� �ʰ��Ͽ� ī�带 �� �� �����ϴ�.");
//	strcpy(&CardDatabase[CARD_NORMALITY].description_up, "����. �ϸ��� 2���� �ʰ��Ͽ� ī�带 �� �� �����ϴ�.");
//
//	initCard(CARD_PAIN);
//	SetColorRarityType(CARD_PAIN, COLORLESS, UNCOMMON, CURSE);
//	CardDatabase[CARD_PAIN].cost = -2;
//	SetUpgradedCardCDB(CARD_PAIN, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_PAIN].name, "����");
//	strcpy(&CardDatabase[CARD_PAIN].description, "����. ī�带 �� ������ ü���� 1 �ҽ��ϴ�.");
//	strcpy(&CardDatabase[CARD_PAIN].description_up, "����. ī�带 �� ������ ü���� 2 �ҽ��ϴ�.");
//
//	initCard(CARD_PARASITE);
//	SetColorRarityType(CARD_PARASITE, COLORLESS, UNCOMMON, CURSE);
//	CardDatabase[CARD_PARASITE].cost = -2;
//	SetUpgradedCardCDB(CARD_PARASITE, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_PARASITE].name, "�����");
//	strcpy(&CardDatabase[CARD_PARASITE].description, "����. ���� ���� �� ü���� �ҽ��ϴ�.");
//	strcpy(&CardDatabase[CARD_PARASITE].description_up, "����. ���� ���� �� ü���� �ҽ��ϴ�.");
//
//	initCard(CARD_REGRET);
//	SetColorRarityType(CARD_REGRET, COLORLESS, UNCOMMON, CURSE);
//	CardDatabase[CARD_REGRET].cost = -2;
//	SetUpgradedCardCDB(CARD_REGRET, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_REGRET].name, "��ȸ");
//	strcpy(&CardDatabase[CARD_REGRET].description, "����. �տ� �ִ� ����� �ƴ� ī�帶�� �� ���� �� ü���� 1 �ҽ��ϴ�.");
//	strcpy(&CardDatabase[CARD_REGRET].description_up, "����. �տ� �ִ� ����� �ƴ� ī�帶�� �� ���� �� ü���� 2 �ҽ��ϴ�.");
//
//	initCard(CARD_SHAME);
//	SetColorRarityType(CARD_SHAME, COLORLESS, UNCOMMON, CURSE);
//	CardDatabase[CARD_SHAME].cost = -2;
//	SetUpgradedCardCDB(CARD_SHAME, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_SHAME].name, "��ġ");
//	strcpy(&CardDatabase[CARD_SHAME].description, "����. ����� 1 ����ϴ�.");
//	strcpy(&CardDatabase[CARD_SHAME].description_up, "����. ����� 2 ����ϴ�.");
//
//	initCard(CARD_WRITHE);
//	SetColorRarityType(CARD_WRITHE, COLORLESS, UNCOMMON, CURSE);
//	CardDatabase[CARD_WRITHE].cost = -2;
//	SetUpgradedCardCDB(CARD_WRITHE, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_WRITHE].name, "���θ�");
//	strcpy(&CardDatabase[CARD_WRITHE].description, "����. ���. ī�带 �� �� �����ϴ�.");
//	strcpy(&CardDatabase[CARD_WRITHE].description_up, "����. ���. ī�带 �� �� �����ϴ�.");
//
//	initCard(CARD_APPARITION);
//	SetColorRarityType(CARD_APPARITION, COLORLESS, UNCOMMON, SKILL);
//	CardDatabase[CARD_APPARITION].cost = 1;
//	SetUpgradedCardCDB(CARD_APPARITION, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_APPARITION].name, "����");
//	strcpy(&CardDatabase[CARD_APPARITION].description, "���. ������ 1 ����ϴ�.");
//	strcpy(&CardDatabase[CARD_APPARITION].description_up, "���. ������ 1 ����ϴ�.");
//
//	initCard(CARD_BETA);
//	SetColorRarityType(CARD_BETA, COLORLESS, UNCOMMON, SKILL);
//	CardDatabase[CARD_BETA].cost = 2;
//	SetUpgradedCardCDB(CARD_BETA, -1, 0, 0);
//	strcpy(&CardDatabase[CARD_BETA].name, "��Ÿ");
//	strcpy(&CardDatabase[CARD_BETA].description, "������ 1 �մϴ�. ������ ī�带 ���� ������ ī�带 �̽��ϴ�.");
//	strcpy(&CardDatabase[CARD_BETA].description_up, "������ 1 �մϴ�. ������ ī�带 ���� ������ ī�带 �̽��ϴ�.");
//
//	initCard(CARD_DEEPBREATH);
//	SetColorRarityType(CARD_DEEPBREATH, COLORLESS, UNCOMMON, SKILL);
//	CardDatabase[CARD_DEEPBREATH].cost = 0;
//	SetUpgradedCardCDB(CARD_DEEPBREATH, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_DEEPBREATH].name, "��ȣ��");
//	strcpy(&CardDatabase[CARD_DEEPBREATH].description, "������ 1 �մϴ�. ī�� �̱⸦ 1 �մϴ�.");
//	strcpy(&CardDatabase[CARD_DEEPBREATH].description_up, "������ 1 �մϴ�. ī�带 2�� �̽��ϴ�.");
//
//	initCard(CARD_DISCOVERY);
//	SetColorRarityType(CARD_DISCOVERY, COLORLESS, UNCOMMON, SKILL);
//	CardDatabase[CARD_DISCOVERY].cost = 1;
//	SetUpgradedCardCDB(CARD_DISCOVERY, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_DISCOVERY].name, "�߰�");
//	strcpy(&CardDatabase[CARD_DISCOVERY].description, "���� ī�带 3�� �߰��Ͽ� 1���� �����մϴ�. ������ ī���� �ڽ�Ʈ�� 0�� �˴ϴ�.");
//	strcpy(&CardDatabase[CARD_DISCOVERY].description_up, "���� ī�带 3�� �߰��Ͽ� 1���� �����մϴ�. ������ ī���� �ڽ�Ʈ�� 0�� �˴ϴ�.");
//
//	initCard(CARD_DRAMATICENTRANCE);
//	SetColorRarityType(CARD_DRAMATICENTRANCE, COLORLESS, UNCOMMON, ATTACK);
//	CardDatabase[CARD_DRAMATICENTRANCE].cost = 0;
//	SetUpgradedCardCDB(CARD_DRAMATICENTRANCE, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_DRAMATICENTRANCE].name, "��������");
//	strcpy(&CardDatabase[CARD_DRAMATICENTRANCE].description, "��� ������ ���ظ� 8 �ݴϴ�. ���������θ� ���� �� �ֽ��ϴ�.");
//	strcpy(&CardDatabase[CARD_DRAMATICENTRANCE].description_up, "��� ������ ���ظ� 12 �ݴϴ�. ���������θ� ���� �� �ֽ��ϴ�.");
//
//	initCard(CARD_ENLIGHTENMENT);
//	SetColorRarityType(CARD_ENLIGHTENMENT, COLORLESS, UNCOMMON, SKILL);
//	CardDatabase[CARD_ENLIGHTENMENT].cost = 0;
//	SetUpgradedCardCDB(CARD_ENLIGHTENMENT, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_ENLIGHTENMENT].name, "������");
//	strcpy(&CardDatabase[CARD_ENLIGHTENMENT].description, "�̹� �� ���� �տ� �ִ� ��� ī���� �ڽ�Ʈ�� 1�� �˴ϴ�.");
//	strcpy(&CardDatabase[CARD_ENLIGHTENMENT].description_up, "�̹� �� ���� �տ� �ִ� ��� ī���� �ڽ�Ʈ�� 0�� �˴ϴ�.");
//
//	initCard(CARD_FINESSE);
//	SetColorRarityType(CARD_FINESSE, COLORLESS, UNCOMMON, SKILL);
//	CardDatabase[CARD_FINESSE].cost = 0;
//	SetUpgradedCardCDB(CARD_FINESSE, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_FINESSE].name, "�ⱳ");
//	strcpy(&CardDatabase[CARD_FINESSE].description, "���� 2 ����ϴ�. ī�� �̱⸦ 1 �մϴ�.");
//	strcpy(&CardDatabase[CARD_FINESSE].description_up, "���� 4 ����ϴ�. ī�� �̱⸦ 1 �մϴ�.");
//
//	initCard(CARD_FLASHOFSTEEL);
//	SetColorRarityType(CARD_FLASHOFSTEEL, COLORLESS, UNCOMMON, ATTACK);
//	CardDatabase[CARD_FLASHOFSTEEL].cost = 0;
//	SetUpgradedCardCDB(CARD_FLASHOFSTEEL, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_FLASHOFSTEEL].name, "������ö");
//	strcpy(&CardDatabase[CARD_FLASHOFSTEEL].description, "��� ������ ���ظ� 3 �ݴϴ�. ī�� �̱⸦ 1 �մϴ�.");
//	strcpy(&CardDatabase[CARD_FLASHOFSTEEL].description_up, "��� ������ ���ظ� 4 �ݴϴ�. ī�� �̱⸦ 1 �մϴ�.");
//
//	initCard(CARD_FORETHOUGHT);
//	SetColorRarityType(CARD_FORETHOUGHT, COLORLESS, UNCOMMON, SKILL);
//	CardDatabase[CARD_FORETHOUGHT].cost = 0;
//	SetUpgradedCardCDB(CARD_FORETHOUGHT, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_FORETHOUGHT].name, "��������");
//	strcpy(&CardDatabase[CARD_FORETHOUGHT].description, "���� ī�� 1���� �� �� �Ʒ��� �����ϴ�. �� ī���� �ڽ�Ʈ�� 0�� �˴ϴ�.");
//	strcpy(&CardDatabase[CARD_FORETHOUGHT].description_up, "���� ī�� 1���� �� �� �Ʒ��� �����ϴ�. �� ī���� �ڽ�Ʈ�� 0�� �˴ϴ�.");
//
//	initCard(CARD_GOODINSTINCTS);
//	SetColorRarityType(CARD_GOODINSTINCTS, COLORLESS, UNCOMMON, SKILL);
//	CardDatabase[CARD_GOODINSTINCTS].cost = 0;
//	SetUpgradedCardCDB(CARD_GOODINSTINCTS, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_GOODINSTINCTS].name, "��������");
//	strcpy(&CardDatabase[CARD_GOODINSTINCTS].description, "���� 6 ����ϴ�.");
//	strcpy(&CardDatabase[CARD_GOODINSTINCTS].description_up, "���� 9 ����ϴ�.");
//
//	initCard(CARD_IMPATIENCE);
//	SetColorRarityType(CARD_IMPATIENCE, COLORLESS, UNCOMMON, SKILL);
//	CardDatabase[CARD_IMPATIENCE].cost = 0;
//	SetUpgradedCardCDB(CARD_IMPATIENCE, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_IMPATIENCE].name, "������");
//	strcpy(&CardDatabase[CARD_IMPATIENCE].description, "ī�带 2�� �̽��ϴ�. ���� ī�尡 10���̸� ���ظ� 2 �޽��ϴ�.");
//	strcpy(&CardDatabase[CARD_IMPATIENCE].description_up, "ī�带 3�� �̽��ϴ�. ���� ī�尡 10���̸� ���ظ� 2 �޽��ϴ�.");
//
//	initCard(CARD_JACKOFALLTRADES);
//	SetColorRarityType(CARD_JACKOFALLTRADES, COLORLESS, UNCOMMON, SKILL);
//	CardDatabase[CARD_JACKOFALLTRADES].cost = 0;
//	SetUpgradedCardCDB(CARD_JACKOFALLTRADES, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_JACKOFALLTRADES].name, "�������ֲ�");
//	strcpy(&CardDatabase[CARD_JACKOFALLTRADES].description, "�̹� ���� ���� ������ ī�带 5�� �߿��� 1�� �����Ͽ� �տ� �ֽ��ϴ�.");
//	strcpy(&CardDatabase[CARD_JACKOFALLTRADES].description_up, "�̹� ���� ���� ������ ī�带 5�� �߿��� 1�� �����Ͽ� �տ� �ֽ��ϴ�.");
//
//	initCard(CARD_MASTEROFSTRATEGY);
//	SetColorRarityType(CARD_MASTEROFSTRATEGY, COLORLESS, UNCOMMON, SKILL);
//	CardDatabase[CARD_MASTEROFSTRATEGY].cost = 0;
//	SetUpgradedCardCDB(CARD_MASTEROFSTRATEGY, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_MASTEROFSTRATEGY].name, "�����Ǵ���");
//	strcpy(&CardDatabase[CARD_MASTEROFSTRATEGY].description, "ī�带 3�� �̽��ϴ�. ���� �� ī�带 1�� ���� �̽��ϴ�.");
//	strcpy(&CardDatabase[CARD_MASTEROFSTRATEGY].description_up, "ī�带 4�� �̽��ϴ�. ���� �� ī�带 1�� ���� �̽��ϴ�.");
//
//	initCard(CARD_PANACEA);
//	SetColorRarityType(CARD_PANACEA, COLORLESS, UNCOMMON, SKILL);
//	CardDatabase[CARD_PANACEA].cost = 0;
//	SetUpgradedCardCDB(CARD_PANACEA, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_PANACEA].name, "������ġ��");
//	strcpy(&CardDatabase[CARD_PANACEA].description, "��� ������� �����մϴ�.");
//	strcpy(&CardDatabase[CARD_PANACEA].description_up, "��� ������� �����մϴ�.");
//
//	initCard(CARD_PURITY);
//	SetColorRarityType(CARD_PURITY, COLORLESS, UNCOMMON, SKILL);
//	CardDatabase[CARD_PURITY].cost = 0;
//	SetUpgradedCardCDB(CARD_PURITY, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_PURITY].name, "����");
//	strcpy(&CardDatabase[CARD_PURITY].description, "������ ī�带 3�� �����Ͽ� �̹� �������� �����մϴ�.");
//	strcpy(&CardDatabase[CARD_PURITY].description_up, "������ ī�带 5�� �����Ͽ� �̹� �������� �����մϴ�.");
//
//	initCard(CARD_SWIFTSTRIKE);
//	SetColorRarityType(CARD_SWIFTSTRIKE, COLORLESS, UNCOMMON, ATTACK);
//	CardDatabase[CARD_SWIFTSTRIKE].cost = 0;
//	SetUpgradedCardCDB(CARD_SWIFTSTRIKE, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_SWIFTSTRIKE].name, "�ż����ϰ�");
//	strcpy(&CardDatabase[CARD_SWIFTSTRIKE].description, "������ ���ظ� 7 �ݴϴ�.");
//	strcpy(&CardDatabase[CARD_SWIFTSTRIKE].description_up, "������ ���ظ� 10 �ݴϴ�.");
//
//	initCard(CARD_TRIP);
//	SetColorRarityType(CARD_TRIP, COLORLESS, UNCOMMON, SKILL);
//	CardDatabase[CARD_TRIP].cost = 0;
//	SetUpgradedCardCDB(CARD_TRIP, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_TRIP].name, "�ɾ�Ѿ�߸���");
//	strcpy(&CardDatabase[CARD_TRIP].description, "����� 2 �����մϴ�.");
//	strcpy(&CardDatabase[CARD_TRIP].description_up, "����� 4 �����մϴ�.");
//
//	// ���� ī�� - ����
//	initCard(CARD_APOTHEOSIS);
//	SetColorRarityType(CARD_APOTHEOSIS, COLORLESS, RARE, SKILL);
//	CardDatabase[CARD_APOTHEOSIS].cost = 2;
//	SetUpgradedCardCDB(CARD_APOTHEOSIS, -1, 0, 0);
//	strcpy(&CardDatabase[CARD_APOTHEOSIS].name, "�Ű�ȭ");
//	strcpy(&CardDatabase[CARD_APOTHEOSIS].description, "�տ� �ִ� ��� ī�带 ���������� ���׷��̵��մϴ�. �Ҹ�.");
//	strcpy(&CardDatabase[CARD_APOTHEOSIS].description_up, "�տ� �ִ� ��� ī�带 ���������� ���׷��̵��մϴ�. �Ҹ�.");
//
//	initCard(CARD_CHRYSALIS);
//	SetColorRarityType(CARD_CHRYSALIS, COLORLESS, RARE, SKILL);
//	CardDatabase[CARD_CHRYSALIS].cost = 2;
//	SetUpgradedCardCDB(CARD_CHRYSALIS, -1, 0, 0);
//	strcpy(&CardDatabase[CARD_CHRYSALIS].name, "������");
//	strcpy(&CardDatabase[CARD_CHRYSALIS].description, "���� ��ų ī�� 3���� ����ϴ�. �Ҹ�.");
//	strcpy(&CardDatabase[CARD_CHRYSALIS].description_up, "���� ��ų ī�� 5���� ����ϴ�. �Ҹ�.");
//
//	initCard(CARD_HANDOFGREED);
//	SetColorRarityType(CARD_HANDOFGREED, COLORLESS, RARE, ATTACK);
//	CardDatabase[CARD_HANDOFGREED].cost = 2;
//	SetUpgradedCardCDB(CARD_HANDOFGREED, -1, 0, 0);
//	strcpy(&CardDatabase[CARD_HANDOFGREED].name, "Ž���Ǽ�");
//	strcpy(&CardDatabase[CARD_HANDOFGREED].description, "������ ���ظ� 20 �ݴϴ�. ���� ġ�������� ������ ��带 20 ��� �� ī�带 �Ҹ��ŵ�ϴ�.");
//	strcpy(&CardDatabase[CARD_HANDOFGREED].description_up, "������ ���ظ� 25 �ݴϴ�. ���� ġ�������� ������ ��带 25 ��� �� ī�带 �Ҹ��ŵ�ϴ�.");
//
//	initCard(CARD_MAGNETISM);
//	SetColorRarityType(CARD_MAGNETISM, COLORLESS, RARE, POWER);
//	CardDatabase[CARD_MAGNETISM].cost = 2;
//	SetUpgradedCardCDB(CARD_MAGNETISM, -1, 0, 0);
//	strcpy(&CardDatabase[CARD_MAGNETISM].name, "�ڷ�");
//	strcpy(&CardDatabase[CARD_MAGNETISM].description, "�� ���� �� ������ �ݼ� ī�� 1���� �տ� �ֽ��ϴ�.");
//	strcpy(&CardDatabase[CARD_MAGNETISM].description_up, "�� ���� �� ������ �ݼ� ī�� 1���� �տ� �ֽ��ϴ�.");
//
//	initCard(CARD_MAYHEM);
//	SetColorRarityType(CARD_MAYHEM, COLORLESS, RARE, POWER);
//	CardDatabase[CARD_MAYHEM].cost = 2;
//	SetUpgradedCardCDB(CARD_MAYHEM, -1, 0, 0);
//	strcpy(&CardDatabase[CARD_MAYHEM].name, "��ȥ��");
//	strcpy(&CardDatabase[CARD_MAYHEM].description, "�� ���� �� �տ��� ���� ī�� 1���� ����մϴ�.");
//	strcpy(&CardDatabase[CARD_MAYHEM].description_up, "�� ���� �� �տ��� ���� ī�� 1���� ����մϴ�.");
//
//	initCard(CARD_METAMORPHOSIS);
//	SetColorRarityType(CARD_METAMORPHOSIS, COLORLESS, RARE, SKILL);
//	CardDatabase[CARD_METAMORPHOSIS].cost = 2;
//	SetUpgradedCardCDB(CARD_METAMORPHOSIS, -1, 0, 0);
//	strcpy(&CardDatabase[CARD_METAMORPHOSIS].name, "����");
//	strcpy(&CardDatabase[CARD_METAMORPHOSIS].description, "���� ���� ī�� 3���� ����ϴ�. �Ҹ�.");
//	strcpy(&CardDatabase[CARD_METAMORPHOSIS].description_up, "���� ���� ī�� 5���� ����ϴ�. �Ҹ�.");
//
//	initCard(CARD_MINDBLAST);
//	SetColorRarityType(CARD_MINDBLAST, COLORLESS, RARE, ATTACK);
//	CardDatabase[CARD_MINDBLAST].cost = 2;
//	SetUpgradedCardCDB(CARD_MINDBLAST, -1, 0, 0);
//	strcpy(&CardDatabase[CARD_MINDBLAST].name, "��������");
//	strcpy(&CardDatabase[CARD_MINDBLAST].description, "�տ� �ִ� ī�� 1��� ��� ������ ���ظ� 3 �ݴϴ�.");
//	strcpy(&CardDatabase[CARD_MINDBLAST].description_up, "�տ� �ִ� ī�� 1��� ��� ������ ���ظ� 4 �ݴϴ�.");
//
//	initCard(CARD_PANACHE);
//	SetColorRarityType(CARD_PANACHE, COLORLESS, RARE, POWER);
//	CardDatabase[CARD_PANACHE].cost = 0;
//	SetUpgradedCardCDB(CARD_PANACHE, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_PANACHE].name, "ȭ����");
//	strcpy(&CardDatabase[CARD_PANACHE].description, "�ϸ��� 5���� ī�带 ����ϸ� ��� ������ ���ظ� 10 �ݴϴ�.");
//	strcpy(&CardDatabase[CARD_PANACHE].description_up, "�ϸ��� 4���� ī�带 ����ϸ� ��� ������ ���ظ� 10 �ݴϴ�.");
//
//	initCard(CARD_SECRETTECHNIQUE);
//	SetColorRarityType(CARD_SECRETTECHNIQUE, COLORLESS, RARE, SKILL);
//	CardDatabase[CARD_SECRETTECHNIQUE].cost = 0;
//	SetUpgradedCardCDB(CARD_SECRETTECHNIQUE, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_SECRETTECHNIQUE].name, "��б��");
//	strcpy(&CardDatabase[CARD_SECRETTECHNIQUE].description, "������ ��ų ī�� 1���� �����Ͽ� �տ� �ֽ��ϴ�. �Ҹ�.");
//	strcpy(&CardDatabase[CARD_SECRETTECHNIQUE].description_up, "������ ��ų ī�� 1���� �����Ͽ� �տ� �ֽ��ϴ�.");
//
//	initCard(CARD_SECRETWEAPON);
//	SetColorRarityType(CARD_SECRETWEAPON, COLORLESS, RARE, SKILL);
//	CardDatabase[CARD_SECRETWEAPON].cost = 0;
//	SetUpgradedCardCDB(CARD_SECRETWEAPON, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_SECRETWEAPON].name, "��й���");
//	strcpy(&CardDatabase[CARD_SECRETWEAPON].description, "������ ���� ī�� 1���� �����Ͽ� �տ� �ֽ��ϴ�. �Ҹ�.");
//	strcpy(&CardDatabase[CARD_SECRETWEAPON].description_up, "������ ���� ī�� 1���� �����Ͽ� �տ� �ֽ��ϴ�.");
//
//	initCard(CARD_BOMB);
//	SetColorRarityType(CARD_BOMB, COLORLESS, RARE, POWER);
//	CardDatabase[CARD_BOMB].cost = 2;
//	SetUpgradedCardCDB(CARD_BOMB, -1, 0, 0);
//	strcpy(&CardDatabase[CARD_BOMB].name, "��ź");
//	strcpy(&CardDatabase[CARD_BOMB].description, "3�� �� ��� ������ ���ظ� 40 �ݴϴ�.");
//	strcpy(&CardDatabase[CARD_BOMB].description_up, "3�� �� ��� ������ ���ظ� 50 �ݴϴ�.");
//
//	initCard(CARD_TRANSMUTATION);
//	SetColorRarityType(CARD_TRANSMUTATION, COLORLESS, RARE, SKILL);
//	CardDatabase[CARD_TRANSMUTATION].cost = 1;
//	SetUpgradedCardCDB(CARD_TRANSMUTATION, 0, 0, 0);
//	strcpy(&CardDatabase[CARD_TRANSMUTATION].name, "��ȯ");
//	strcpy(&CardDatabase[CARD_TRANSMUTATION].description, "������ ���� ī�带 X�� ����ϴ�. �ڽ�Ʈ�� 0�� �˴ϴ�.");
//	strcpy(&CardDatabase[CARD_TRANSMUTATION].description_up, "������ ���� ī�带 X+1�� ����ϴ�. �ڽ�Ʈ�� 0�� �˴ϴ�.");
//
//	initCard(CARD_VAULT);
//	SetColorRarityType(CARD_VAULT, COLORLESS, RARE, SKILL);
//	CardDatabase[CARD_VAULT].cost = 3;
//	SetUpgradedCardCDB(CARD_VAULT, -1, 0, 0);
//	strcpy(&CardDatabase[CARD_VAULT].name, "�ݰ�");
//	strcpy(&CardDatabase[CARD_VAULT].description, "���� �����ϰ� ���� ���� ��� �����մϴ�.");
//	strcpy(&CardDatabase[CARD_VAULT].description_up, "���� �����ϰ� ���� ���� ��� �����մϴ�.");
//}
//void print_card(Card* card) {
//	printf("%s : %s\n���׷��̵� -> %s\n\n", card->name, card->description, card->description_up);
//}