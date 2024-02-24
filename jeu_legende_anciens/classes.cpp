/* INUTILE */
/*
Définition des rôles sous forme de classes avec leurs différents bonus de stats initiaux.
Les classes : Mage, Archer, Paladin, Voleur, Alchimiste
*/

#include <iostream>
#include <array>
#include <tuple>
#include "user_stat.cpp"



class Mage : public User
{
    std::map<std::string, int> atk1 = std::make_tuple("boule de feu",15);
    std::map<std::string, int> atk2 = std::make_tuple("boule de glace",13);
    std::array<type, 2> attaques = {atk1, atk2};

    void print_atk(){
        std::cout << std::get<0> atk1 << " " << std::get<1> atk1 << " dégâts" << std::endl;
        std::cout << std::get<0> atk2 << " " << std::get<1> atk2 << " dégâts" << std::endl;
    };
};

class Archer : public User{};


class Paladin : public User{};


class Voleur : public User{};

