#include <stdio.h>
#include <string.h>
#include "potion.h"

Potion PotionDatabase[POTION_TOTAL_COUNT];

// �ʱ�ȭ �Լ�
void init_potion_database() {
    PotionDatabase[POTION_POISONPOTION] = (Potion){
        .name = "Poison Potion",
        .rarity = POTION_COMMON,
        .description = "�� 6�� �����մϴ�. �ż��� ������ �Բ� ����ϸ� 12. ���Ϸ�Ʈ ����."
    };

    PotionDatabase[POTION_FOCUSPOTION] = (Potion){
        .name = "Focus Potion",
        .rarity = POTION_COMMON,
        .description = "���� 2�� ȹ���մϴ�. �ż��� ������ �Բ� ����ϸ� 4. ����Ʈ ����."
    };

    PotionDatabase[POTION_BOTTLEDMIRACLE] = (Potion){
        .name = "Bottled Miracle",
        .rarity = POTION_COMMON,
        .description = "���п� ���� 2���� �߰��մϴ�. �ż��� ������ �Բ� ����ϸ� 4��. ���� ����."
    };

    PotionDatabase[POTION_FIREPOTION] = (Potion){
        .name = "Fire Potion",
        .rarity = POTION_COMMON,
        .description = "20 ���ظ� �����ϴ�. �ż��� ������ �Բ� ����ϸ� 40."
    };

    PotionDatabase[POTION_EXPLOSIVEPOTION] = (Potion){
        .name = "Explosive Potion",
        .rarity = POTION_COMMON,
        .description = "��� ������ 10 ���ظ� �����ϴ�. �ż��� ������ �Բ� ����ϸ� 20."
    };

    PotionDatabase[POTION_WEAKPOTION] = (Potion){
        .name = "Weak Potion",
        .rarity = POTION_COMMON,
        .description = "��ȭ 3�� �����մϴ�. �ż��� ������ �Բ� ����ϸ� 6."
    };

    PotionDatabase[POTION_FEARPOTION] = (Potion){
        .name = "Fear Potion",
        .rarity = POTION_COMMON,
        .description = "��� 3�� �����մϴ�. �ż��� ������ �Բ� ����ϸ� 6."
    };

    PotionDatabase[POTION_BLOCKPOTION] = (Potion){
        .name = "Block Potion",
        .rarity = POTION_COMMON,
        .description = "�� 12�� ȹ���մϴ�. �ż��� ������ �Բ� ����ϸ� 24."
    };

    PotionDatabase[POTION_STRENGTHPOTION] = (Potion){
        .name = "Strength Potion",
        .rarity = POTION_COMMON,
        .description = "�� 2�� ȹ���մϴ�. �ż��� ������ �Բ� ����ϸ� 4."
    };

    PotionDatabase[POTION_DEXTERITYPOTION] = (Potion){
        .name = "Dexterity Potion",
        .rarity = POTION_COMMON,
        .description = "��ø 2�� ȹ���մϴ�. �ż��� ������ �Բ� ����ϸ� 4."
    };

    PotionDatabase[POTION_STEROIDPOTION] = (Potion){
        .name = "Steroid Potion",
        .rarity = POTION_COMMON,
        .description = "�� 5�� ȹ���մϴ�. �� ���� �� �� 5�� �ҽ��ϴ�."
    };

    PotionDatabase[POTION_SPEEDPOTION] = (Potion){
        .name = "Speed Potion",
        .rarity = POTION_COMMON,
        .description = "��ø 5�� ȹ���մϴ�. �� ���� �� ��ø 5�� �ҽ��ϴ�."
    };

    PotionDatabase[POTION_ENERGYPOTION] = (Potion){
        .name = "Energy Potion",
        .rarity = POTION_COMMON,
        .description = "������ 2�� ȹ���մϴ�. �ż��� ������ �Բ� ����ϸ� 4."
    };

    PotionDatabase[POTION_SWIFTPOTION] = (Potion){
        .name = "Swift Potion",
        .rarity = POTION_COMMON,
        .description = "ī�� 3���� �̽��ϴ�. �ż��� ������ �Բ� ����ϸ� 6��."
    };

    PotionDatabase[POTION_ATTACKPOTION] = (Potion){
        .name = "Attack Potion",
        .rarity = POTION_COMMON,
        .description = "������ ���� ī�� 3�� �� 1���� �����մϴ�. �̹� �Ͽ� ����� 0�� �˴ϴ�."
    };

    PotionDatabase[POTION_SKILLPOTION] = (Potion){
        .name = "Skill Potion",
        .rarity = POTION_COMMON,
        .description = "������ ��ų ī�� 3�� �� 1���� �����մϴ�. �̹� �Ͽ� ����� 0�� �˴ϴ�."
    };

    PotionDatabase[POTION_POWERPOTION] = (Potion){
        .name = "Power Potion",
        .rarity = POTION_COMMON,
        .description = "������ �Ŀ� ī�� 3�� �� 1���� �����մϴ�. �̹� �Ͽ� ����� 0�� �˴ϴ�."
    };

    PotionDatabase[POTION_COLORLESSPOTION] = (Potion){
        .name = "Colorless Potion",
        .rarity = POTION_COMMON,
        .description = "������ ���� ī�� 3�� �� 1���� �����մϴ�. �̹� �Ͽ� ����� 0�� �˴ϴ�."
    };

    PotionDatabase[POTION_BLESSINGOFTHEFORGE] = (Potion){
        .name = "Blessing of the Forge",
        .rarity = POTION_COMMON,
        .description = "������ ���� ������ ������ ��� ī�带 ���׷��̵��մϴ�."
    };

    // Uncommon Potions
    PotionDatabase[POTION_ELIXIR] = (Potion){
        .name = "Elixir",
        .rarity = POTION_UNCOMMON,
        .description = "���п��� ���ϴ� ����ŭ ī�带 �Ҹ��մϴ�. ���̾�Ŭ���� ����."
    };

    PotionDatabase[POTION_CUNNINGPOTION] = (Potion){
        .name = "Cunning Potion",
        .rarity = POTION_UNCOMMON,
        .description = "���п� Į��+ 3���� �߰��մϴ�. �ż��� ������ �Բ� ����ϸ� 6��. ���Ϸ�Ʈ ����."
    };

    PotionDatabase[POTION_POTIONOFCAPACITY] = (Potion){
        .name = "Potion of Capacity",
        .rarity = POTION_UNCOMMON,
        .description = "���� ���� 2���� ȹ���մϴ�. �ż��� ������ �Բ� ����ϸ� 4��. ����Ʈ ����."
    };

    PotionDatabase[POTION_STANCEPOTION] = (Potion){
        .name = "Stance Potion",
        .rarity = POTION_UNCOMMON,
        .description = "��� �Ǵ� �г� �ڼ��� �����մϴ�. ���� ����."
    };

    PotionDatabase[POTION_REGENPOTION] = (Potion){
        .name = "Regen Potion",
        .rarity = POTION_UNCOMMON,
        .description = "��� 5�� ȹ���մϴ�. �ż��� ������ �Բ� ����ϸ� 10."
    };

    PotionDatabase[POTION_ANCIENTPOTION] = (Potion){
        .name = "Ancient Potion",
        .rarity = POTION_UNCOMMON,
        .description = "�ΰ��� 1�� ȹ���մϴ�. �ż��� ������ �Բ� ����ϸ� 2."
    };

    PotionDatabase[POTION_LIQUIDBRONZE] = (Potion){
        .name = "Liquid Bronze",
        .rarity = POTION_UNCOMMON,
        .description = "���� 3�� ȹ���մϴ�. �ż��� ������ �Բ� ����ϸ� 6."
    };

    PotionDatabase[POTION_GAMBLERSBREW] = (Potion){
        .name = "Gambler's Brew",
        .rarity = POTION_UNCOMMON,
        .description = "���ϴ� ����ŭ ī�带 ���� ��, ���� ����ŭ ī�带 �̽��ϴ�."
    };

    PotionDatabase[POTION_ESSENCEOFSTEEL] = (Potion){
        .name = "Essence of Steel",
        .rarity = POTION_UNCOMMON,
        .description = "�Ǳ� ���� 4�� ȹ���մϴ�. �ż��� ������ �Բ� ����ϸ� 8."
    };

    PotionDatabase[POTION_DUPLICATIONPOTION] = (Potion){
        .name = "Duplication Potion",
        .rarity = POTION_UNCOMMON,
        .description = "�̹� �Ͽ�, ���� ī�带 �� �� �÷����մϴ�."
    };

    PotionDatabase[POTION_DISTILLEDCHAOS] = (Potion){
        .name = "Distilled Chaos",
        .rarity = POTION_UNCOMMON,
        .description = "�̱� ���� �� �� ī�� 3���� �÷����մϴ�."
    };

    PotionDatabase[POTION_LIQUIDMEMORIES] = (Potion){
        .name = "Liquid Memories",
        .rarity = POTION_UNCOMMON,
        .description = "���� ī�� ���̿��� ī�� 1���� �����մϴ�. �̹� �Ͽ� ����� 0�� �˴ϴ�."
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