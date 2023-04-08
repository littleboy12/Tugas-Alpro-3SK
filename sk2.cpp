#include <iostream>
using namespace std;

class Main {
private:
    int uang = 296800;
    int pecahan[10] = {100000, 50000, 20000, 10000, 5000, 2000, 1000, 500, 200, 100};
    int jumlah[10] = {0};
public:
    void setValue ();
    void getValue ();
};

void Main :: setValue() {
    cout << "Masukan Jumlah Uang : "; cin >> uang;
    
}

void Main :: getValue () {
    cout << "Pecahan uang untuk " << uang << " adalah:" << endl;
    for (int i = 0; i < 10; i++) {
        while (uang >= pecahan[i]) {
            jumlah[i]++;
            uang -= pecahan[i];
        }
        if (jumlah[i] > 0) {
            cout << pecahan[i] << " sebanyak " << jumlah[i] << " lembar" << endl;
        }
    }
}

int main() {
    Main view;

    view.setValue();
    view.getValue();
}