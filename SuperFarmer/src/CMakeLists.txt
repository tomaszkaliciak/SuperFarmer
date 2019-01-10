add_library(
    superFarmer
    Animal.hpp
    Bank.hpp
    Bank.cpp
    bar.hpp
    Dice.hpp
    Dice.cpp
    Gamestate.hpp
    Gamestate.cpp
    Player.hpp
    Player.cpp
    )

target_include_directories(superFarmer PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/")