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
    mahasiswa(int INim, int iNama);
    void cetak();
};

mahasiswa::mahasiswa(){
}

mahasiswa::mahasiswa(int INim){
nim=INim; 
}

mahasiswa::mahasiswa(int INama){
nama=INama;
}

mahasiswa::mahasiswa(int INim, int INama){
nim=INim;
nama=INama;
}