#include <iostream>
using namespace std;

struct varMain {
    int id, harga, more, jml;
    float qt, sub_total, total, count, totalALL;
    string buah;
};

class Main {
private:
    varMain buy[50];
    varMain var;

public:
    void setValue ();
    void getValue ();
    void getDisplay();
};

void Main :: getDisplay(){
    cout << "UAD MART" << endl;
    cout << "1. Apel Rp. 100.000,00 / Kg \n2. Jeruk Rp. 60.000,00 /  Kg \n3. Mangga Rp. 80.000,00 / Kg" << endl << endl;
}

void Main :: setValue() {
     cout << "Jumlah buah yang di beli : "; cin >> var.jml;

     for (int i = 0; i < var.jml; i++)  {
        buy[i].count = buy[i].total;
        cout << "Masukan Nomor Buah : "; cin >> buy[i].id;
        cout << "Masukan Nomor Buah : (kg) "; cin >> buy[i].qt;
        cout << endl;
     }
}

void Main :: getValue() {
    for (int i = 0; i < var.jml; i++) {
         if (buy[i].id == 1) {
            buy[i].harga = 100000;
            buy[i].buah = "Apel";

            buy[i].sub_total = buy[i].harga * buy[i].qt;

            if (buy[i].qt > 2) {
                buy[i].total = buy[i].sub_total - (0.1 * buy[i].sub_total);
            } else {
                buy[i].total = buy[i].sub_total;
            }
             
        } else if (buy[i].id == 2) {
            buy[i].harga = 60000;
            buy[i].buah = "Jeruk";
            buy[i].sub_total = buy[i].harga * buy[i].qt;

            if (buy[i].qt > 2) {
                buy[i].total = buy[i].sub_total - (0.15 * buy[i].sub_total);
            } else {
                buy[i].total = buy[i].sub_total;
            }
        }  else if (buy[i].id == 3) {
            buy[i].harga = 80000;
            buy[i].buah = "Mangga";
            buy[i].sub_total = buy[i].harga * buy[i].qt;

            if (buy[i].qt > 2) {
                buy[i].total = buy[i].sub_total - (0.2 * buy[i].sub_total);
            } else {
                buy[i].total = buy[i].sub_total;
            }
        } else {
            buy[i].harga = 0;
            buy[i].buah = " ";
        }

        cout << i + 1 << ". " <<  buy[i].buah << " : Rp. " << buy[i].harga << " x " << buy[i].qt << endl;
        

        cout << endl;
        
    }
    for (int i = 0; i < var.jml; i++) {
        var.totalALL += buy[i].total;
    }

    cout << "Total Beli : Rp. " << var.totalALL;
}


int main () {
    Main view;
    view.getDisplay();
    view.setValue();
    view.getValue();
}