// NPC that trades a Poké Ball for a Charmander Egg
NPC_GiveEgg::
    lock
    faceplayer
    checkitem ITEM_POKE_BALL 1    // Needs at least 1 Poké Ball
    goto_if_eq 0, NoPokeball      // If none, go to NoPokeball label

    msgbox "Ah, you brought me a Poké Ball! Perfect.$"

    removeitem ITEM_POKE_BALL 1   // Remove 1 Poké Ball
    giveegg SPECIES_MIRAIDON    // Give the player a Miraidon Egg

    msgbox "Here, take this special Miraidon Egg!$"
    release
    end

NoPokeball:
    msgbox "You need to bring me a regular Poké Ball first.$"
    release
    end
