#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;


int game(int maxnum) {
    srand(time(0) % 20 +1);
    int arvottuluku = rand() % maxnum + 1;
    int arvattuluku;
    int arvaukset=0;

    do {
        cout << "Anna lukuarvaus:";
        cin >> arvattuluku;
        cout << "Arvasit luvun: " << arvattuluku << endl;
        arvaukset++;
        if (arvattuluku == arvottuluku) {
            cout << "Arvasit oikean luvun!" << endl;
            //cout << "Arvausten maara: " << arvaukset << endl;
        }
        else if (arvattuluku < arvottuluku) {
            cout << "Arvattu luku liian pieni, koita uudestaan" << endl;
        }
        else if (arvattuluku > arvottuluku) {
            cout << "Arvattu luku liian suuri, koita uudestaan" << endl;
        }
    }
    while (arvattuluku != arvottuluku);
    return arvaukset;
}

int main()
{

    int tulos = game(40);
    cout << "Arvausten lukumaara : " << tulos << endl;
}
