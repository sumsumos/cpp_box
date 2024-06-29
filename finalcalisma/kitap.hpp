#pragma once
#include "girdiokuyucu.hpp"

#include <iostream>
#include <list>

using namespace std;

struct Kitap {
    string yazar;
    string adi;
    int sayfa = 0;
};

struct Kitap girdi_olarak_kitap_oku() {
    struct Kitap kitap;

    kitap.yazar = girdi_al("Yazar adi girin: ");
    kitap.adi = girdi_al("Kitap adi girin: ");
    kitap.sayfa = girdi_al_sayi("Kitabin sayfa sayisini girin: ");

    return kitap;
}

void kitap_bilgilerini_yazdir(list<struct Kitap> kitaplar_listesi) {
    list<struct Kitap>::iterator gezici;
    for (gezici = kitaplar_listesi.begin(); gezici != kitaplar_listesi.end(); gezici++) {
        // *gezici yazarsam işaret edilen kitap bana gelir. yani listedeki alacağım kitabın kendisi (örneğin kitaplar[0] gibi)
        // gezici yazarsam listedeki kitabı işaret eden işaretçi bana gelir

        // (*gezici).adi şeklinde yazarsam önce kitap bana gelir sonra kitabın adını alırım
        // gezici->adi şeklinde yazarsam 'işaretçi vasfındaki gezici' üzerinden kitabın adına erişirim

        kitap_bilgilerini_yazdir(*gezici); // kitabın ta kendisi ile bilgileri yazdırma
        
        //kitap_bilgilerini_yazdir_iterator(gezici); // kitabın pointerı üzerinden kitap bilgilerini yazdırma
    }

}

// kitabın kendisi üzerinden kitap bilgilerini yazdıran fonksiyon
void kitap_bilgilerini_yazdir(struct Kitap herhangi_bir_kitap) {
    cout << endl << "Yazdirilan kitap bilgileri:" << endl;
    cout << "Yazar adi: " << herhangi_bir_kitap.yazar << endl;
    cout << "Kitap adi: " << herhangi_bir_kitap.adi << endl;
    cout << "Sayfa sayisi: " << herhangi_bir_kitap.sayfa << endl;
}

// kitabın gezicisinin işaretçisi/pointerı üzerinden kitap bilgilerini yazdıran fonksiyon
// parameter olarak iterator yani gezici alıyor ve onun gösterdiği indisteki elemanı yazdırıyor
void kitap_bilgilerini_yazdir_iterator(list<struct Kitap>::iterator bir_indis_uzerindeki_gezici) {
    cout << endl << "Yazdirilan kitap bilgileri:" << endl;

    // buradaki herhangi_bir_kitap pointer olduğu için sahip olduğu verilere
    // -> kullanarak erişim sağladık

    cout << "Yazar adi: " << bir_indis_uzerindeki_gezici->yazar << endl;
    cout << "Kitap adi: " << bir_indis_uzerindeki_gezici->adi << endl;
    cout << "Sayfa sayisi: " << bir_indis_uzerindeki_gezici->sayfa << endl;
}
