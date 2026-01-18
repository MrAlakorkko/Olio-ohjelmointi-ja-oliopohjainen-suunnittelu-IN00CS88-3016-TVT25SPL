#include "homework_week_2.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

Game::Game(int max) {
    maxNumber=max;
    srand(time(NULL)); //random seed ctime käyttäen
    randomNumber = rand() % maxNumber + 1;
    numOfGuesses=0;
}

Game::~Game() {

}

void Game::play() {
    do {
        cout << "Anna lukuarvaus 1 ja " << maxNumber << " valilta: ";
        cin >> playerGuess;
        cout << "Arvasit luvun: " << playerGuess << endl;
        numOfGuesses++;

        if (playerGuess > randomNumber) {
            cout << "Arvattu lukusi on liian suuri! Yrita uudestaan." << endl;
        }
        else if (playerGuess < randomNumber) {
            cout << "Arvattu lukusi on liian pieni! Yrita uudestaan." << endl;
        } }
        while (playerGuess != randomNumber);
    printGameResult();

}

void Game::printGameResult() {
    cout <<"Onneksi olkoon! Arvasit oikein! Luku oli : " << randomNumber << endl;
    cout <<"Arvauslukumaarasi oli : " << numOfGuesses << endl;
}
