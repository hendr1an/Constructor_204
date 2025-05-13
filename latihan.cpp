#include <iostream>
using namespace std;

class BangunDatar {
public:
    int HitungLuas(int l, int p);
    int HitungKeliling(int l, int p);
};

class PersegiPanjang{
    public:
    int panjang, lebar;

    friend int BangunDatar::HitungLuas(int l, int p);
    friend int BangunDatar::HitungKeliling(int l, int p);
};

int BangunDatar::HitungLuas(int l, int p){
    return l * p;
}

int BangunDatar::HitungKeliling(int l, int p){
    return (2 * p) + (2 * l);
}

int main(){
    BangunDatar BD;
    PersegiPanjang Pp;
    PersegiPanjang & refpP = Pp;
    refpP.panjang = 10;
    refpP.lebar = 100;
    cout << BD.HitungLuas(refpP.lebar, refpP.panjang);
}