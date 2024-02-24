// on y définit les différentes étapes et noeuds de l'histoire.

#include <iostream>
#include "histoire.hpp"
#include <vector>

auto composition_trame(){
/// description de l'histoire 
    std::string description_etp1 = "Souhaithé-vous rester au chateau et jouer la carte de la prudence en demandant plus d'infos à la reine sur la situation ? (0) Ou préférez-vous vous lancer bravement dans l'aventure sans info supplémenthére ? (1)";
    std::string description_etp1_2 = "La reine a pitié de vous, elle vous octroie une arme. Vous continuez votre chemin";
    std::string description_etp2 = "Vous arrivez à une intersection. Vous n'avez aucune idée de la direction à prendre. A droite, se tient une forêt sombre et inquiétante. A gauche, un magnifique champ de plants de thé illuminé par un ciel bleu et dégagé. Où souhaithé-vous aller ? Entrez 0 pour droite ou 1 pour gauche.";
    std::string description_etp_finale = "Vous arrivez enfin face au dangereux dragon. ";

//composition de la trame
    auto trame = std::make_shared<Etape>(description_etp1, 1);
    trame->left_ = std::make_shared<Etape>(description_etp1_2, 2);

    trame->left_->right_ = std::make_shared<Etape>(description_etp2, 2);
    trame->left_->left_ = std::make_shared<Etape>(description_etp2, 2);

    trame->right_ = std::make_shared<Etape>(description_etp2, 1);
    (trame->left_)->left_ = std::make_shared<Etape>(description_etp_finale, 5);
    (trame->left_)->right_ = std::make_shared<Etape>(description_etp_finale, 5);

    return trame;
};

int Etape::decrire(){
        int choix;
        
        std::cout << std::endl;

        std::cout << this->description_ << std::endl;
        std::cout << "Faites un choix : ";
        std::cin >> choix;
        std::cout << std::endl;

        while ((choix != 0) && (choix != 1)){
                std::cout<< "Cette entrée n'est pas valide. Veuillez n'entrez que 0 ou 1" << std::endl;
                std::cin >> choix;
                std::cout << std::endl;
        }
        return choix;
};

Etape::Etape(const std::string& description, int niv_ennemi){
        this->description_ = description;
        this->niv_ennemi_ = niv_ennemi;
};