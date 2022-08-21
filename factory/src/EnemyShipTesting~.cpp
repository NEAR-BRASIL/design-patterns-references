#include "./EnemyShipFactory.cpp"

class EnemyShipTesting {
    public:
        // void main_bad() {
        //     EnemyShip theEnemy;

        //     std::string userInput = "";

        //     std::string enemyShipOption;

        //     std::cout << "What type of ship? (U / R)  ";

        //     std::cin >> userInput;
            
        //     if (userInput != "") {
        //         enemyShipOption = userInput;
        //     }

        //     if (userInput == "U") 
        //         theEnemy = UFOEnemyShip();
        //     else if (userInput == "R")
        //         theEnemy = RocketEnemyShip();


        //     doStuffEnemy(theEnemy);
        // }

        void main() {
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

        }

        void doStuffEnemy(EnemyShip *anEnemyShip) {
            anEnemyShip->displayEnemyShip();
            anEnemyShip->followHeroShip();
            anEnemyShip->enemyShipShoots();
        }
    
};


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
//     EnemyShip theEnemy;

//     std::string userInput = "";

//     std::string enemyShipOption;

//     std::cout << "What type of ship? (U / R)  ";

//     std::cin >> userInput;
    
//     if (userInput != "") {
//         enemyShipOption = userInput;
//     }

//     if (userInput == "U") 
//         theEnemy = UFOEnemyShip();
//     else if (userInput == "R")
//         theEnemy = RocketEnemyShip();


//     doStuffEnemy(theEnemy);
//     return 0; 
// }



// int main() {

//     EnemyShipTesting enemyShip = EnemyShipTesting();
//     enemyShip.main();

//     return 0;
// }