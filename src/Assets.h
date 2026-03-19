#pragma once
#include "raylib.h"

struct Assets {
    Texture2D coinTexture;
    Texture2D characterTexture;

    void Load();
    void Unload();
};