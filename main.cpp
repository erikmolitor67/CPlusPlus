#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    srand(time(0));

    int geheimzahl = rand() % 10 + 1;
    int tipp;
    int versuche = 0 ;
    

    while(versuche < 6){
        cout << "Rate eine Zahl zwischen 1 und 10: ";
        cin >> tipp;
        if (tipp == geheimzahl) {
            cout << "Richtig!\n";
            break;
        }
        else {
            if(versuche==5){
                cout<< "Du hast alle versuche aufgebraucht";
                break;
            }
            cout <<"Falsch!\n";
            versuche++;
            continue;
        }
    }
    
    return 0;
}
