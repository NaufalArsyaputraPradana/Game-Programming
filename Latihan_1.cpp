#include <iostream>

using namespace std;

int main() {
    string item = "";
    string item_sebelum = ""; 
    string item_terhebat = "";
    string item_terlemah = "";
    
    int stat = 0; 
    int stat_sebelum = 0; 
    int stat_terhebat = 0;
    int stat_terlemah = 0;
    
    char ulang = 'y'; 
    bool first = true; 
    
    while(ulang == 'y') { //game loop
        //tulis dan baca item dan stat 
        cout << "Nama item : "; 
        cin >> item; 
        cout << "Stat item : "; 
        cin >> stat; 
    
        //tampilkan item dan stat yang baru diinput 
        cout << "Item : " << item << endl;
        cout << "Stat : " << stat << endl; 
        
        if (first) { //item pertama
            item_sebelum = "belum ada";
            stat_sebelum = 0; 
            item_terhebat = item; 
            item_terlemah = item;
            stat_terhebat = stat;
            stat_terlemah = stat;
            first = false; 
        } else {
            //tampilkan item terhebat dan terlemah
            if (stat > stat_terhebat) {
                stat_terhebat = stat;
                item_terhebat = item;
            } 
            else if (stat < stat_terlemah) {
                stat_terlemah = stat;
                item_terlemah = item;
            }
        }
         
        //tampilkan item dan stat sebelumnya 
        cout << "Item sebelumnya : " << item_sebelum << endl; 
        cout << "Stat sebelumnya : " << stat_sebelum << endl;
        
        cout << "Item terhebat : " << item_terhebat << endl;
        cout << "Item terlemah : " << item_terlemah << endl;
        
        item_sebelum = item;
        stat_sebelum = stat;
        
        //input lagi ? 
        cout << "Input lagi (y/n) ? ";
        cin >> ulang;    
    }
    
    return 0;
}