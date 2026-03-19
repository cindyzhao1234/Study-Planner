#include "Assets.h"
#include <iostream>

void Assets::Load() {
    coinTexture = LoadTexture("../assets/coin.png");
    characterTexture = LoadTexture("../assets/character.png");
    std::cout << coinTexture.id << "\n";

}

void Assets::Unload() {
    UnloadTexture(coinTexture);
}