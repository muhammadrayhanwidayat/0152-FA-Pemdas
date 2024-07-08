#include <iostream>
using namespace std;

class MasukUniversitas {
public:// isi access modifier disini

int uangPendaftaran;
// isi daftar variable yang dibutuhkan di bawah ini
int uangSemesterPertama;
int uangBangunan;
int TotalBiaya;

public:
MasukUniversitas() {
uangPendaftaran = 0;
// isi nilai default variable yang dibutuhkan di bawah ini
uangSemesterPertama = 0;
uangBangunan = 0;
TotalBiaya = 0;
}

virtual void namaJalurMasuk() { return; }
// isi disini dengan fungsi virtual yang dibutuhkan
virtual void hitungTotalBiaya() { return; }
virtual void tampilkanTotalBiaya() { return; }
virtual void input() { return; }


void setUangPendaftaran(int nilai) {
this->uangPendaftaran = nilai;
}

int getUangPendaftaran() {
return uangPendaftaran;
}

// isi setter dan getter variable yang dibutuhkan di bawah ini
    void setUangSemesterPertama(int nilai) {
        this->uangSemesterPertama = nilai;
    }

    int getUangSemesterPertama() {
        return uangSemesterPertama;
    }

    void setUangBangunan(int nilai) {
        this->uangBangunan = nilai;
    }

    int getUangBangunan() {
        return uangBangunan;
    }

    void setTotalBiaya(int nilai) {
        this->TotalBiaya = nilai;
    }

    int getTotalBiaya() {
        return TotalBiaya;
    }
};


class SNBT : public MasukUniversitas {
// isi disini untuk melengkapi class SNBT
public:
void namaJalurMasuk()  {
    cout << "SNBT" << endl;
}
void input()  {
    cout << "Masukkan uang pendaftaran: ";
    cin >> uangPendaftaran;
    cout << "Masukkan uang semester pertama: ";
    cin >> uangSemesterPertama;
    cout << "Masukkan uang bangunan: ";
    cin >> uangBangunan;
}

void hitungTotalBiaya()  {
    TotalBiaya = uangPendaftaran + uangSemesterPertama + uangBangunan;
}

    void tampilkanTotalBiaya() {
        cout << "Total Biaya: " << TotalBiaya << endl;
        if (TotalBiaya > 40000000) {
            cout << "Kategori: Mahal" << endl;
            cout << "Rekomendasi: Tidak Direkomendasikan" << endl;
        }
        else if (TotalBiaya > 20000000) {
            cout << "Kategori: Sedang" << endl;
            cout << "Rekomendasi: Dipikir lagi" << endl;
        }
        else {
            cout << "Kategori: Murah" << endl;
            cout << "Rekomendasi: Direkomendasikan" << endl;
        }
    }
};

class SNBP : public MasukUniversitas {
 // isi disini untuk melengkapi class SNBP
public:
    void namaJalurMasuk()  {
        cout << "SNBP" << endl;
    }

    void input()  {
        cout << "Masukkan uang pendaftaran: ";
        cin >> uangPendaftaran;
        cout << "Masukkan uang semester pertama: ";
        cin >> uangSemesterPertama;
    }

    void hitungTotalBiaya()  {
        TotalBiaya = uangPendaftaran + uangSemesterPertama;
    }

    void tampilkanTotalBiaya()  {
        cout << "Total Biaya: " << TotalBiaya << endl;
        if (TotalBiaya > 40000000) {
            cout << "Kategori: Mahal" << endl;
            cout << "Rekomendasi: Tidak Direkomendasikan" << endl;
        }
        else if (TotalBiaya > 20000000) {
            cout << "Kategori: Sedang" << endl;
            cout << "Rekomendasi: Dipertimbangkan" << endl;
        }
        else {
            cout << "Kategori: Murah" << endl;
            cout << "Rekomendasi: Direkomendasikan" << endl;
        }
    }
};

int main() {
        // isi disini untuk fungsi main
    int pilih;
    do {
        cout << "Pilih Jalur Masuk Universitas: \n";
        cout << "1. SNBT\n";
        cout << "2. SNBP\n";
        cout << "3. Keluar\n";

        cin >> pilih;
        if (pilih == 1) {
            SNBT snbt;
            snbt.namaJalurMasuk();
            snbt.input();
            snbt.hitungTotalBiaya();
            snbt.tampilkanTotalBiaya();
        }
        else if (pilih == 2) {
            SNBP snbp;
            snbp.namaJalurMasuk();
            snbp.input();
            snbp.hitungTotalBiaya();
            snbp.tampilkanTotalBiaya();
        }
    } while (pilih != 3); 
    return 0;
}
