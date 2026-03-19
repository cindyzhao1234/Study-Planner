#pragma once
#include "raylib.h"

struct Assets {
    Texture2D coinTexture;
    Texture2D characterTexture;
    Texture2D blueDress;

    void Load();
    void Unload();
};