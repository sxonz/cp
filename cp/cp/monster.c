#define _CRT_SECURE_NO_WARNINGS   
#include "monster.h"
#include <stdio.h>
#include <string.h>

Monster MonsterDatabase[MONSTER_TOTAL_COUNT];

void initMonster(MonsterID monster) {
    MonsterDatabase[monster].maxhp = 0;
    MonsterDatabase[monster].currenthp = 0;

    // �迭 �ʱ�ȭ
    for (int i = 0; i < 10; i++) {
        MonsterDatabase[monster].possiblepattern[i] = P_NONE;
        MonsterDatabase[monster].possibletarget[i] = 0;
        MonsterDatabase[monster].pattern[i] = P_NONE;
        MonsterDatabase[monster].target[i] = 0;
    }

    for (int i = 0; i < 5; i++) {
        MonsterDatabase[monster].Spossiblestage[i] = 0;
        MonsterDatabase[monster].Epossiblestage[i] = 0;
    }
}

void SetMonsterStats(MonsterID monster, int maxhp, int currenthp) {
    MonsterDatabase[monster].maxhp = maxhp;
    MonsterDatabase[monster].currenthp = currenthp;
}

void SetMonsterPatterns(MonsterID monster, PatternType pattern1, PatternType pattern2, PatternType pattern3) {
    MonsterDatabase[monster].possiblepattern[0] = pattern1;
    MonsterDatabase[monster].possiblepattern[1] = pattern2;
    MonsterDatabase[monster].possiblepattern[2] = pattern3;
}

void init_monster_database() {
    // Green Louse
    initMonster(MONSTER_LOUSEGREEN);
    SetMonsterStats(MONSTER_LOUSEGREEN, 11, 11);
    SetMonsterPatterns(MONSTER_LOUSEGREEN, P_ATTACK, P_EFFECT, P_NONE);
    strcpy(MonsterDatabase[MONSTER_LOUSEGREEN].name, "��� ������");

    // Red Louse
    initMonster(MONSTER_LOUSERED);
    SetMonsterStats(MONSTER_LOUSERED, 10, 10);
    SetMonsterPatterns(MONSTER_LOUSERED, P_ATTACK, P_EFFECT, P_NONE);
    strcpy(MonsterDatabase[MONSTER_LOUSERED].name, "���� ������");

    // Jaw Worm
    initMonster(MONSTER_JAWWORM);
    SetMonsterStats(MONSTER_JAWWORM, 40, 40);
    SetMonsterPatterns(MONSTER_JAWWORM, P_ATTACK, P_BLOCK, P_EFFECT);
    strcpy(MonsterDatabase[MONSTER_JAWWORM].name, "�ι���");

    // Cultist
    initMonster(MONSTER_CULTIST);
    SetMonsterStats(MONSTER_CULTIST, 48, 48);
    SetMonsterPatterns(MONSTER_CULTIST, P_ATTACK, P_EFFECT, P_NONE);
    strcpy(MonsterDatabase[MONSTER_CULTIST].name, "���ŵ�");

    // Sentry
    initMonster(MONSTER_SENTRY);
    SetMonsterStats(MONSTER_SENTRY, 38, 38);
    SetMonsterPatterns(MONSTER_SENTRY, P_ATTACK, P_EFFECT, P_NONE);
    strcpy(MonsterDatabase[MONSTER_SENTRY].name, "����");

    // Gremlin Warrior
    initMonster(MONSTER_GREMLINWAR);
    SetMonsterStats(MONSTER_GREMLINWAR, 20, 20);
    SetMonsterPatterns(MONSTER_GREMLINWAR, P_ATTACK, P_NONE, P_NONE);
    strcpy(MonsterDatabase[MONSTER_GREMLINWAR].name, "�׷��� ����");

    // Fat Gremlin
    initMonster(MONSTER_GREMLINFAT);
    SetMonsterStats(MONSTER_GREMLINFAT, 13, 13);
    SetMonsterPatterns(MONSTER_GREMLINFAT, P_ATTACK, P_EFFECT, P_NONE);
    strcpy(MonsterDatabase[MONSTER_GREMLINFAT].name, "�׶��� �׷���");

    // Gremlin Thief
    initMonster(MONSTER_GREMLINTHIEF);
    SetMonsterStats(MONSTER_GREMLINTHIEF, 10, 10);
    SetMonsterPatterns(MONSTER_GREMLINTHIEF, P_ATTACK, P_EFFECT, P_NONE);
    strcpy(MonsterDatabase[MONSTER_GREMLINTHIEF].name, "�׷��� ����");

    // Gremlin Wizard
    initMonster(MONSTER_GREMLINWIZARD);
    SetMonsterStats(MONSTER_GREMLINWIZARD, 21, 21);
    SetMonsterPatterns(MONSTER_GREMLINWIZARD, P_ATTACK, P_EFFECT, P_NONE);
    strcpy(MonsterDatabase[MONSTER_GREMLINWIZARD].name, "�׷��� ������");

    // Lagavulin
    initMonster(MONSTER_LAGAVULIN);
    SetMonsterStats(MONSTER_LAGAVULIN, 109, 109);
    SetMonsterPatterns(MONSTER_LAGAVULIN, P_NONE, P_ATTACK, P_EFFECT);
    strcpy(MonsterDatabase[MONSTER_LAGAVULIN].name, "�󰡺Ҹ�");

    // Looter
    initMonster(MONSTER_LOOTER);
    SetMonsterStats(MONSTER_LOOTER, 44, 44);
    SetMonsterPatterns(MONSTER_LOOTER, P_ATTACK, P_BLOCK, P_EFFECT);
    strcpy(MonsterDatabase[MONSTER_LOOTER].name, "��Ż��");

    // Mugger
    initMonster(MONSTER_MUGGER);
    SetMonsterStats(MONSTER_MUGGER, 48, 48);
    SetMonsterPatterns(MONSTER_MUGGER, P_ATTACK, P_EFFECT, P_NONE);
    strcpy(MonsterDatabase[MONSTER_MUGGER].name, "����");

    // Red Slaver
    initMonster(MONSTER_SLAVERRED);
    SetMonsterStats(MONSTER_SLAVERRED, 46, 46);
    SetMonsterPatterns(MONSTER_SLAVERRED, P_ATTACK, P_EFFECT, P_NONE);
    strcpy(MonsterDatabase[MONSTER_SLAVERRED].name, "���� �뿹 ����");

    // Blue Slaver
    initMonster(MONSTER_SLAVERBLUE);
    SetMonsterStats(MONSTER_SLAVERBLUE, 46, 46);
    SetMonsterPatterns(MONSTER_SLAVERBLUE, P_ATTACK, P_EFFECT, P_NONE);
    strcpy(MonsterDatabase[MONSTER_SLAVERBLUE].name, "Ǫ�� �뿹 ����");

    // Large Slime
    initMonster(MONSTER_SLIMELARGE);
    SetMonsterStats(MONSTER_SLIMELARGE, 68, 68);
    SetMonsterPatterns(MONSTER_SLIMELARGE, P_ATTACK, P_EFFECT, P_NONE);
    strcpy(MonsterDatabase[MONSTER_SLIMELARGE].name, "������ (��)");

    // Small Slime
    initMonster(MONSTER_SLIMESMALL);
    SetMonsterStats(MONSTER_SLIMESMALL, 8, 8);
    SetMonsterPatterns(MONSTER_SLIMESMALL, P_ATTACK, P_EFFECT, P_NONE);
    strcpy(MonsterDatabase[MONSTER_SLIMESMALL].name, "������ (��)");

    // Exordium Thug
    initMonster(MONSTER_EXORDIUMTHUG);
    SetMonsterStats(MONSTER_EXORDIUMTHUG, 17, 17);
    SetMonsterPatterns(MONSTER_EXORDIUMTHUG, P_ATTACK, P_NONE, P_NONE);
    strcpy(MonsterDatabase[MONSTER_EXORDIUMTHUG].name, "������ ���´�");

    // Exordium Wildlife
    initMonster(MONSTER_EXORDIUMWILDLIFE);
    SetMonsterStats(MONSTER_EXORDIUMWILDLIFE, 17, 17);
    SetMonsterPatterns(MONSTER_EXORDIUMWILDLIFE, P_ATTACK, P_NONE, P_NONE);
    strcpy(MonsterDatabase[MONSTER_EXORDIUMWILDLIFE].name, "������ �߻�����");

    // Fungal Beast
    initMonster(MONSTER_FUNGALBEAST);
    SetMonsterStats(MONSTER_FUNGALBEAST, 22, 22);
    SetMonsterPatterns(MONSTER_FUNGALBEAST, P_ATTACK, P_EFFECT, P_NONE);
    strcpy(MonsterDatabase[MONSTER_FUNGALBEAST].name, "��������");

    // Gremlin Nob (Boss)
    initMonster(MONSTER_NOB);
    SetMonsterStats(MONSTER_NOB, 82, 82);
    SetMonsterPatterns(MONSTER_NOB, P_ATTACK, P_EFFECT, P_NONE);
    strcpy(MonsterDatabase[MONSTER_NOB].name, "�׷��� ���");

    // The Guardian (Boss)
    initMonster(MONSTER_THEGUARDIAN);
    SetMonsterStats(MONSTER_THEGUARDIAN, 250, 250);
    SetMonsterPatterns(MONSTER_THEGUARDIAN, P_ATTACK, P_BLOCK, P_EFFECT);
    strcpy(MonsterDatabase[MONSTER_THEGUARDIAN].name, "��ȣ��");

    // Slime Boss
    initMonster(MONSTER_SLIMEBOSS);
    SetMonsterStats(MONSTER_SLIMEBOSS, 140, 140);
    SetMonsterPatterns(MONSTER_SLIMEBOSS, P_ATTACK, P_EFFECT, P_NONE);
    strcpy(MonsterDatabase[MONSTER_SLIMEBOSS].name, "������ ����");

    // Hexaghost (Boss)
    initMonster(MONSTER_HEXAGHOST);
    SetMonsterStats(MONSTER_HEXAGHOST, 250, 250);
    SetMonsterPatterns(MONSTER_HEXAGHOST, P_ATTACK, P_EFFECT, P_NONE);
    strcpy(MonsterDatabase[MONSTER_HEXAGHOST].name, "������");
}

void print_monster(Monster* monster) {
    if (monster == NULL) {
        printf("���� ������ �����ϴ�.\n");
        return;
    }

    printf("=== ���� ���� ===\n");
    printf("�̸�: %s\n", monster->name);
    printf("ü��: %d/%d\n", monster->currenthp, monster->maxhp);

    printf("������ ����: ");
    for (int i = 0; i < 10; i++) {
        if (monster->possiblepattern[i] == P_NONE) break;
        switch (monster->possiblepattern[i]) {
        case P_ATTACK: printf("���� "); break;
        case P_BLOCK: printf("��� "); break;
        case P_EFFECT: printf("ȿ�� "); break;
        default: break;
        }
    }
    printf("\n");
    printf("==================\n");
}