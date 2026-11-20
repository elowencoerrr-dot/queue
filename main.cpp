#include <iostream>
#define MAX 100
using namespace std;

class Queue {
private:
    int antrean[MAX];
    int depan, belakang;
public:
    Queue() {
        depan = -1;
        belakang = -1;
    }
    bool isEmpty() {
        return (depan == -1 && belakang == -1);
    }
    bool isFull() {
        return (belakang == MAX‑1);
    }
    // Ambil nomor antrean (enqueue)
    void ambilNomor(int nomor) {
        if (isFull()) {
            cout << "Antrean Penuh!\n";
            return;
        }
        if (isEmpty()) depan = 0;
        belakang++;
        antrean[belakang] = nomor;
        cout << "✅ Nomor antrean anda: " << nomor << endl;
    }
    // Panggil nomor berikutnya (dequeue)
    void panggilNomor() {
        if (isEmpty()) {
            cout << "⚠️ Belum ada antrean!\n";
            return;
        }
        cout << "🔔 Memanggil nomor: " << antrean[depan] << " silakan ke loket!\n";
        if (depan == belakang) {
            depan = -1; belakang = -1;
        } else {
            depan++;
        }
    }
    // Tampilkan sisa antrean
    void sisaAntrean() {
        if (isEmpty()) {
            cout << "📋 Sisa antrean: KOSONG\n";
            return;
        }
        cout << "📋 Sisa nomor antrean: ";
        for(int i = depan; i <= belakang; i++){
            cout << antrean[i] << " ";
        }
        cout << "\nJumlah sisa antrean: " << (belakang‑depan+1) << " orang\n";
    }
};

int main() {
    Queue q;
    int pilih, nomor = 1;
    do {
        cout << "\n==== SISTEM ANTREAN LAYANAN ====\n";
        cout << "1. Ambil Nomor Antrean\n";
        cout << "2. Panggil Nomor Berikutnya\n";
        cout << "3. Lihat Sisa Antrean\n";
        cout << "4. Keluar\n";
        cout << "Pilihan: "; cin >> pilih;
        switch(pilih){
            case 1: q.ambilNomor(nor); nomor++; break;
            case 2: q.panggilNomor(); break;
            case 3: q.sisaAntrean(); break;
            case 4: cout << "Program selesai\n"; break;
            default: cout << "Pilihan tidak valid\n";
        }
    } while(pilih !=4);
    return 0;
}
