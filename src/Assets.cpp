#include "Assets.h"
#include <iostream>

void Assets::Load() {
    coinTexture = LoadTexture("../assets/coin.png");
    characterTexture = LoadTexture("../assets/character.png");
    blueDress = LoadTexture("../assets/dress.png");
    std::cout << coinTexture.id << "\n";

}

void Assets::Unload() {
    UnloadTexture(coinTexture);
    UnloadTexture(characterTexture);
    UnloadTexture(blueDress);
}