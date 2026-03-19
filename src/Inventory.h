#pragma once
#include "Accessories.h"
#include "CharacterRender.h"
#include "User.h"
#include <vector>
#include <raylib.h>

class Inventory {
public:
    void DrawButton();
    void UpdateButton();

    void DrawPopup(const User& user, const Assets& assets, CharacterRenderer& characterRenderer);   
    void UpdatePopup(User& user);

    void AddAccessory(const Accessories& accessory);

private:
    bool isOpen = false;
    Rectangle inventoryButton;
    Rectangle popupBox;

    std::vector<Accessories> accessoriesList;
};