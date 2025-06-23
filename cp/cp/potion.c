#include <stdio.h>
#include <string.h>
#include "potion.h"

Potion PotionDatabase[POTION_TOTAL_COUNT];

// 초기화 함수
void init_potion_database() {
    PotionDatabase[POTION_POISONPOTION] = (Potion){
        .name = "Poison Potion",
        .rarity = POTION_COMMON,
        .description = "독 6을 적용합니다. 신성한 껍질과 함께 사용하면 12. 사일런트 전용."
    };

    PotionDatabase[POTION_FOCUSPOTION] = (Potion){
        .name = "Focus Potion",
        .rarity = POTION_COMMON,
        .description = "집중 2를 획득합니다. 신성한 껍질과 함께 사용하면 4. 디펙트 전용."
    };

    PotionDatabase[POTION_BOTTLEDMIRACLE] = (Potion){
        .name = "Bottled Miracle",
        .rarity = POTION_COMMON,
        .description = "손패에 기적 2장을 추가합니다. 신성한 껍질과 함께 사용하면 4장. 와쳐 전용."
    };

    PotionDatabase[POTION_FIREPOTION] = (Potion){
        .name = "Fire Potion",
        .rarity = POTION_COMMON,
        .description = "20 피해를 입힙니다. 신성한 껍질과 함께 사용하면 40."
    };

    PotionDatabase[POTION_EXPLOSIVEPOTION] = (Potion){
        .name = "Explosive Potion",
        .rarity = POTION_COMMON,
        .description = "모든 적에게 10 피해를 입힙니다. 신성한 껍질과 함께 사용하면 20."
    };

    PotionDatabase[POTION_WEAKPOTION] = (Potion){
        .name = "Weak Potion",
        .rarity = POTION_COMMON,
        .description = "약화 3을 적용합니다. 신성한 껍질과 함께 사용하면 6."
    };

    PotionDatabase[POTION_FEARPOTION] = (Potion){
        .name = "Fear Potion",
        .rarity = POTION_COMMON,
        .description = "취약 3을 적용합니다. 신성한 껍질과 함께 사용하면 6."
    };

    PotionDatabase[POTION_BLOCKPOTION] = (Potion){
        .name = "Block Potion",
        .rarity = POTION_COMMON,
        .description = "방어도 12를 획득합니다. 신성한 껍질과 함께 사용하면 24."
    };

    PotionDatabase[POTION_STRENGTHPOTION] = (Potion){
        .name = "Strength Potion",
        .rarity = POTION_COMMON,
        .description = "힘 2를 획득합니다. 신성한 껍질과 함께 사용하면 4."
    };

    PotionDatabase[POTION_DEXTERITYPOTION] = (Potion){
        .name = "Dexterity Potion",
        .rarity = POTION_COMMON,
        .description = "민첩 2를 획득합니다. 신성한 껍질과 함께 사용하면 4."
    };

    PotionDatabase[POTION_STEROIDPOTION] = (Potion){
        .name = "Steroid Potion",
        .rarity = POTION_COMMON,
        .description = "힘 5를 획득합니다. 턴 종료 시 힘 5를 잃습니다."
    };

    PotionDatabase[POTION_SPEEDPOTION] = (Potion){
        .name = "Speed Potion",
        .rarity = POTION_COMMON,
        .description = "민첩 5를 획득합니다. 턴 종료 시 민첩 5를 잃습니다."
    };

    PotionDatabase[POTION_ENERGYPOTION] = (Potion){
        .name = "Energy Potion",
        .rarity = POTION_COMMON,
        .description = "에너지 2를 획득합니다. 신성한 껍질과 함께 사용하면 4."
    };

    PotionDatabase[POTION_SWIFTPOTION] = (Potion){
        .name = "Swift Potion",
        .rarity = POTION_COMMON,
        .description = "카드 3장을 뽑습니다. 신성한 껍질과 함께 사용하면 6장."
    };

    PotionDatabase[POTION_ATTACKPOTION] = (Potion){
        .name = "Attack Potion",
        .rarity = POTION_COMMON,
        .description = "무작위 공격 카드 3장 중 1장을 선택합니다. 이번 턴에 비용이 0이 됩니다."
    };

    PotionDatabase[POTION_SKILLPOTION] = (Potion){
        .name = "Skill Potion",
        .rarity = POTION_COMMON,
        .description = "무작위 스킬 카드 3장 중 1장을 선택합니다. 이번 턴에 비용이 0이 됩니다."
    };

    PotionDatabase[POTION_POWERPOTION] = (Potion){
        .name = "Power Potion",
        .rarity = POTION_COMMON,
        .description = "무작위 파워 카드 3장 중 1장을 선택합니다. 이번 턴에 비용이 0이 됩니다."
    };

    PotionDatabase[POTION_COLORLESSPOTION] = (Potion){
        .name = "Colorless Potion",
        .rarity = POTION_COMMON,
        .description = "무작위 무색 카드 3장 중 1장을 선택합니다. 이번 턴에 비용이 0이 됩니다."
    };

    PotionDatabase[POTION_BLESSINGOFTHEFORGE] = (Potion){
        .name = "Blessing of the Forge",
        .rarity = POTION_COMMON,
        .description = "전투가 끝날 때까지 손패의 모든 카드를 업그레이드합니다."
    };

    // Uncommon Potions
    PotionDatabase[POTION_ELIXIR] = (Potion){
        .name = "Elixir",
        .rarity = POTION_UNCOMMON,
        .description = "손패에서 원하는 수만큼 카드를 소모합니다. 아이언클래드 전용."
    };

    PotionDatabase[POTION_CUNNINGPOTION] = (Potion){
        .name = "Cunning Potion",
        .rarity = POTION_UNCOMMON,
        .description = "손패에 칼날+ 3장을 추가합니다. 신성한 껍질과 함께 사용하면 6장. 사일런트 전용."
    };

    PotionDatabase[POTION_POTIONOFCAPACITY] = (Potion){
        .name = "Potion of Capacity",
        .rarity = POTION_UNCOMMON,
        .description = "오브 슬롯 2개를 획득합니다. 신성한 껍질과 함께 사용하면 4개. 디펙트 전용."
    };

    PotionDatabase[POTION_STANCEPOTION] = (Potion){
        .name = "Stance Potion",
        .rarity = POTION_UNCOMMON,
        .description = "평온 또는 분노 자세에 진입합니다. 와쳐 전용."
    };

    PotionDatabase[POTION_REGENPOTION] = (Potion){
        .name = "Regen Potion",
        .rarity = POTION_UNCOMMON,
        .description = "재생 5를 획득합니다. 신성한 껍질과 함께 사용하면 10."
    };

    PotionDatabase[POTION_ANCIENTPOTION] = (Potion){
        .name = "Ancient Potion",
        .rarity = POTION_UNCOMMON,
        .description = "인공물 1을 획득합니다. 신성한 껍질과 함께 사용하면 2."
    };

    PotionDatabase[POTION_LIQUIDBRONZE] = (Potion){
        .name = "Liquid Bronze",
        .rarity = POTION_UNCOMMON,
        .description = "가시 3을 획득합니다. 신성한 껍질과 함께 사용하면 6."
    };

    PotionDatabase[POTION_GAMBLERSBREW] = (Potion){
        .name = "Gambler's Brew",
        .rarity = POTION_UNCOMMON,
        .description = "원하는 수만큼 카드를 버린 후, 버린 수만큼 카드를 뽑습니다."
    };

    PotionDatabase[POTION_ESSENCEOFSTEEL] = (Potion){
        .name = "Essence of Steel",
        .rarity = POTION_UNCOMMON,
        .description = "판금 갑옷 4를 획득합니다. 신성한 껍질과 함께 사용하면 8."
    };

    PotionDatabase[POTION_DUPLICATIONPOTION] = (Potion){
        .name = "Duplication Potion",
        .rarity = POTION_UNCOMMON,
        .description = "이번 턴에, 다음 카드를 두 번 플레이합니다."
    };

    PotionDatabase[POTION_DISTILLEDCHAOS] = (Potion){
        .name = "Distilled Chaos",
        .rarity = POTION_UNCOMMON,
        .description = "뽑기 더미 맨 위 카드 3장을 플레이합니다."
    };

    PotionDatabase[POTION_LIQUIDMEMORIES] = (Potion){
        .name = "Liquid Memories",
        .rarity = POTION_UNCOMMON,
        .description = "버린 카드 더미에서 카드 1장을 선택합니다. 이번 턴에 비용이 0이 됩니다."
    };

    // Rare Potions
    PotionDatabase[POTION_HEARTOFIRON] = (Potion){
        .name = "Heart of Iron",
        .rarity = POTION_RARE,
        .description = "Gain 6 Metallicize. 12 with Sacred Bark. Ironclad only."
    };

    PotionDatabase[POTION_GHOSTINAJAR] = (Potion){
        .name = "Ghost in a Jar",
        .rarity = POTION_RARE,
        .description = "Gain 1 Intangible. 2 with Sacred Bark. Silent only."
    };

    PotionDatabase[POTION_ESSENCEOFDARKNESS] = (Potion){
        .name = "Essence of Darkness",
        .rarity = POTION_RARE,
        .description = "Channel 1 Dark orb in each orb slot. Defect only."
    };

    PotionDatabase[POTION_AMBROSIA] = (Potion){
        .name = "Ambrosia",
        .rarity = POTION_RARE,
        .description = "Enter Divinity. Watcher only."
    };

    PotionDatabase[POTION_CULTISTPOTION] = (Potion){
        .name = "Cultist Potion",
        .rarity = POTION_RARE,
        .description = "Gain 1 Ritual. 2 with Sacred Bark."
    };

    PotionDatabase[POTION_FRUITJUICE] = (Potion){
        .name = "Fruit Juice",
        .rarity = POTION_RARE,
        .description = "Gain 5 Max HP. 10 with Sacred Bark."
    };

    PotionDatabase[POTION_SNECKOOIL] = (Potion){
        .name = "Snecko Oil",
        .rarity = POTION_RARE,
        .description = "Draw 5 cards. Randomize the cost of cards in your hand."
    };

    PotionDatabase[POTION_FAIRYINABOTTLE] = (Potion){
        .name = "Fairy in a Bottle",
        .rarity = POTION_RARE,
        .description = "When you would die, heal to 30% HP instead and discard this."
    };

    PotionDatabase[POTION_SMOKEBOMB] = (Potion){
        .name = "Smoke Bomb",
        .rarity = POTION_RARE,
        .description = "Escape from a non-boss fight. Receive no rewards."
    };

    PotionDatabase[POTION_ENTROPICBREW] = (Potion){
        .name = "Entropic Brew",
        .rarity = POTION_RARE,
        .description = "Not implemented in base document."
    };
}