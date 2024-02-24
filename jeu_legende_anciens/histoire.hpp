#pragma once
#include <memory>
#include <iostream>

class Etape{
protected:
    std::string description_;
    //int niv_ennemi_;

public :
    std::shared_ptr<Etape> left_;
    std::shared_ptr<Etape> right_;
    int niv_ennemi_ ;

    int decrire();
    Etape(const std::string& description, int niv_ennemi);
    
};

auto composition_trame();