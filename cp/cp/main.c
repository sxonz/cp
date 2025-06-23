#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "card.h"
#include "cardeffect.h"
#include "relic.h"
#include "potion.h"
#include "monster.h"
#include <SDL.h>

int seed;
int coin;
SDL_Texture t;
SDL_Renderer* renderer;


typedef enum { Ironclad, Silent, Defect, Watcher, Yoonseo }PlayerType;
typedef struct {
    PlayerType type;
    int maxhp;
    int currenthp;
    Card Deck[200];
    Relic RelicDeck[200];
    Potion potions[5];

}Player;
int SaveData();
int LoadData();
int map1[15][7] = { 0, };
int map2[15][7] = { 0, };
int map3[15][7] = { 0, };
int edges1[15][7][3] = { 0, };
int edges2[15][7][3] = { 0, };
int edges3[15][7][3] = { 0, };
typedef enum {
    BATTLE, ELITE, BOSS, EVENT, FIRE, SHOP, ROOMTYPE_SIZE
}RoomType;
int CreateMap(int map[15][7], int edges[15][7][3], int seed);
int test();
int MainMenu();

int main(int argc, char* argv[]) {
    init_card_database();
    SDL_Window* window = SDL_CreateWindow("SDL2 Window (C)",
        SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
        640, 480, SDL_WINDOW_SHOWN);
    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);


    // SDL Å×½ºÆ®
    if (SDL_Init(SDL_INIT_VIDEO) != 0) {
        SDL_Log("SDL_Init Error: %s", SDL_GetError());
        return 1;
    }

    if (!window) {
        SDL_Log("Window Creation Error: %s", SDL_GetError());
        SDL_Quit();
        return 1;
    }

    SDL_Surface* screen = SDL_GetWindowSurface(window);
    SDL_FillRect(screen, NULL, SDL_MapRGB(screen->format, 0, 128, 255));
    SDL_UpdateWindowSurface(window);

    SDL_Delay(3000);

    SDL_DestroyWindow(window);
    SDL_Quit();
    return 0;
}

int CreateMap(int map[15][7], int edges[15][7][3], int seed) {
    srand(seed);
    for (int i = 0; i < 6; i++) {
        int start = rand() % 6;
    }
}
int test() {
    printf("=== Card Test ===\n");
    for (int i = 0; i < CARD_TOTAL_COUNT; i++) {
        print_card(&CardDatabase[i]);
    }

    //printf("=== Relic Test ===\n");
    //for (int i = 0; i < RELIC_TOTAL_COUNT; i++) {
    //    print_relic(&RelicDatabase[i]);
    //}

    //printf("=== Potion Test ===\n");
    //for (int i = 0; i < POTION_TOTAL_COUNT; i++) {
    //    print_potion(&PotionDatabase[i]);
    //}

    //return 0;
}
int MainMenu() {

}