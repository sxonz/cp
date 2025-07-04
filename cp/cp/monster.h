#ifndef MONSTER_H
#define MONSTER_H

typedef enum{
    P_NONE, P_ATTACK, P_BLOCK, P_EFFECT, 
}PatternType;

typedef struct {
    char name[32];
    char description[256];

    int maxhp;
    int currenthp;

    int possiblepattern[10];
    int possibletarget[10];

    int pattern[10];
    int target[10];

    int Spossiblestage[5];
    int Epossiblestage[5];
} Monster;
typedef enum {
    MONSTER_JAWWORM,
    MONSTER_CULTIST,
    MONSTER_LOUSERED,
    MONSTER_LOUSEGREEN,
    MONSTER_SENTRY,
    MONSTER_GREMLINWAR,
    MONSTER_GREMLINFAT,
    MONSTER_GREMLINTHIEF,
    MONSTER_GREMLINWIZARD,
    MONSTER_LAGAVULIN,
    MONSTER_LOOTER,
    MONSTER_MUGGER,
    MONSTER_SLAVERRED,
    MONSTER_SLAVERBLUE,
    MONSTER_SLIMELARGE,
    MONSTER_SLIMESMALL,
    MONSTER_EXORDIUMTHUG,
    MONSTER_EXORDIUMWILDLIFE,
    MONSTER_FUNGALBEAST,
    MONSTER_NOB,
    MONSTER_THEGUARDIAN,
    MONSTER_SLIMEBOSS,
    MONSTER_HEXAGHOST,
    MONSTER_SNECKO,
    MONSTER_SPHEREGUARDIAN,
    MONSTER_BIRD,
    MONSTER_SHELLPARASITE,
    MONSTER_BOOKOFSTABBING,
    MONSTER_GREMLINLEADER,
    MONSTER_CHOSEN,
    MONSTER_CULTISTCHOSEN,
    MONSTER_SNAKEPLANT,
    MONSTER_WRITHINGMASS,
    MONSTER_BRONZEAUTOMATON,
    MONSTER_BRONZEORB,
    MONSTER_CHAMP,
    MONSTER_COLLECTOR,
    MONSTER_TORCHHEAD,
    MONSTER_DONU,
    MONSTER_DECA,
    MONSTER_SPIRESHIELD,
    MONSTER_SPIRESPEAR,
    MONSTER_AWAKENEDONE,
    MONSTER_CULTISTAWAKENED,
    MONSTER_TIMEEATER,
    MONSTER_CORRUPTHEART,
    MONSTER_BEYONDNEMESIS,
    MONSTER_REPTOMANCER,
    MONSTER_EXPLODER,
    MONSTER_WRITH,
    MONSTER_MALAISE,
    MONSTER_TRANSIENT,
    MONSTER_MAW,
    MONSTER_DARKLING,
    MONSTER_SPIREGROWTH,
    MONSTER_MINDBLOOMBOSS,
    MONSTER_MINDBLOOMEVENT,
    MONSTER_MASKEDBANDITS,
  
    MONSTER_TOTAL_COUNT
}MonsterID;
extern Monster MonsterDatabase[MONSTER_TOTAL_COUNT];

void print_monster(const Monster* monster);

#endif