#include <iostream>
#include <string>
using namespace std;

class mahasiswa{
    private:
    int nim;
    string nama;
    public:
    mahasiswa();
    mahasiswa(int);
    mahasiswa(string);
    mahasiswa(int INim, string iNama);
    void cetak();
};

mahasiswa::mahasiswa(){
}

mahasiswa::mahasiswa(int INim){
nim=INim; 
}

mahasiswa::mahasiswa(string INama){
nama=INama;
}

mahasiswa::mahasiswa (int INim, string INama){
nim=INim;
nama=INama;
}

void mahasiswa::cetak(){
    cout << endl << "NIM = " << nim << endl;
    cout << "Nama = " << nama << endl;
}

int main(){
    mahasiswa mhs1(102030);
    mahasiswa mhs2("andi");
    mahasiswa mhs3(010203, "Santi"); 
    
    cout << "Mahasiswa 1: "; mhs1.cetak();
    cout << "Mahasiswa 2: "; mhs2.cetak();
    cout << "Mahasiswa 3: "; mhs3.cetak();

    return 0;
}