#include <iostream>
using namespace std;

class buku{
    string judul;
    public:
        buku setjudul(string judul){
            this->judul = judul;
            return *this;
        }
        string getJudul(){
            return this->judul;
        }
};

int main()
{
    buku bukunya;
    cout << bukunya.setjudul("Matematika").getJudul();
    return 0;
}
