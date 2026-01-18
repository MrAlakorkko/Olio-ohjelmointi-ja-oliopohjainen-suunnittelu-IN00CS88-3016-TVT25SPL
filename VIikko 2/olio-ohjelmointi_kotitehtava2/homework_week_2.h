#ifndef HOMEWORK_WEEK_2_H
#define HOMEWORK_WEEK_2_H

class Game {
public:
    Game(int max);
    ~Game();
    void play();
private:
    int maxNumber;
    int playerGuess;
    int randomNumber;
    int numOfGuesses;
    void printGameResult();
};

#endif // HOMEWORK_WEEK_2_H
