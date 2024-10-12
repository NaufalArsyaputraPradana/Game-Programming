#include <iostream>

using namespace std;

int main()
{
    // inisialisasi dan deklarasi variabel
    int acak = 0;
    char ulang = 'y';
    srand(static_cast<unsigned int>(time(0)));
    
    // Game loop
    while(ulang == 'y')
    {
        acak = rand()%10;
        cout << "Hasil Acak: " << acak << endl;
        
        cout << "Acak lagi?(y/n): ";
        cin >> ulang;
    }
    return 0;
}