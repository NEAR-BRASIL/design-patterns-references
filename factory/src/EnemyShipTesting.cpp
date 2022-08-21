#include "./EnemyShipFactory.cpp"

void doStuffEnemy(EnemyShip *anEnemyShip) {
    anEnemyShip->displayEnemyShip();
    anEnemyShip->followHeroShip();
    anEnemyShip->enemyShipShoots();
}

int main() {

    EnemyShip *theEnemy = nullptr;
    EnemyShipFactory shipFactory = EnemyShipFactory();

    std::string userInput = "";

    std::cout << "What type of ship? (U / R / B)  ";

    std::cin >> userInput;

    if (userInput != "") {
        theEnemy = shipFactory.makeEnemyShip(userInput);
    }

    if (theEnemy != nullptr) 
        doStuffEnemy(theEnemy);
    else std::cout << "Something bad happened";

    return 0;
}

// int main_bad() {
//     EnemyShip *theEnemy = nullptr;

//     std::string userInput = "";

//     std::string enemyShipOption;

//     std::cout << "What type of ship? (U / R)  ";

//     std::cin >> userInput;
    
//     if (userInput != "") {
//         enemyShipOption = userInput;
//     }

//     if (userInput == "U") 
//         theEnemy = new UFOEnemyShip();
//     else if (userInput == "R")
//         theEnemy = new RocketEnemyShip();


//     doStuffEnemy(theEnemy);
//     return 0; 
// }