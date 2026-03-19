#include "CharacterRender.h"

void CharacterRenderer::DrawCharacter(const User& user, const Assets& assets, Rectangle dest) {
    // draw base
    DrawTexturePro(
        assets.characterTexture,
        Rectangle{0, 0, (float)assets.characterTexture.width, (float)assets.characterTexture.height},
        dest,
        Vector2{0, 0},
        0.0f,
        WHITE
    );

    // draw equipped top
    if (user.equippedTop == "Blue Dress") {
        DrawTexturePro(
            assets.blueDress,
            Rectangle{0, 0, (float)assets.blueDress.width, (float)assets.blueDress.height},
            dest,
            Vector2{0, 0},
            0.0f,
            WHITE
        );
    }

    // later:
    // if (user.equippedHat == "Red Hat") { ... }
    // if (user.equippedBottom == "Black Pants") { ... }
}