#include <iostream>

using namespace std;

class Main {
private:
    int jarak, target, skala;
    string jurus;
public:
    void setValue ();
    void getValue();
};

void Main :: setValue() {
    cout << "Masukan Jumlah Target          : "; cin >> target;
    cout << "Masukkan jarak Target 1-10 m   : "; cin >> jarak;
}

void Main :: getValue() {
    
    if (target == 1 && jarak <= 1) {
        jurus = "Iron Tail";
        skala = 3;
    } 
    if (target >= 1 && jarak <= 3) {
        jurus = "Electroweb";
        skala = 2;
    } 
    if (target > 1 && jarak > 3) {
        jurus = "Thunderbolt ";
        skala = 5;
    } 
    cout << endl;
    cout << "Ratatta Berjumlah " << target << " Ekor. Terlihat Pada Jarak " << jarak << " M." << endl;
    cout << "Pikachu Melakukan Serangan " << jurus << " Dengan Kekuatan " <<  skala << " Power" << endl;;
    
    
}

int main () {
    Main view;

    view.setValue();
    view.getValue();
}