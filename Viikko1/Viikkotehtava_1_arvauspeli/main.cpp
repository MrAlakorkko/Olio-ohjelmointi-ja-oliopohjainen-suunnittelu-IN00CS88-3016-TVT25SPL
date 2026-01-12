#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
//Versio 1
int main()
{
    srand(time(0) % 20 +1);
    int arvottuluku = rand() % 20 + 1;
    int arvattuluku;

    do {
    cout << "Anna lukuarvaus:";
    cin >> arvattuluku;
    cout << "Arvasit luvun: " << arvattuluku << endl;

    if (arvattuluku == arvottuluku) {
        cout << "Arvasit oikean luvun!" << endl;
        }
    else if (arvattuluku < arvottuluku) {
        cout << "Arvattu luku liian pieni, koita uudestaan" << endl;
        }
    else if (arvattuluku > arvottuluku) {
            cout << "Arvattu luku liian suuri, koita uudestaan" << endl;
        }
    }
    while (arvattuluku != arvottuluku);
}
