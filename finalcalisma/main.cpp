#include <iostream>
#include <list> 

#include "kitap.hpp"
#include "girdiokuyucu.hpp"


using namespace std;

// fonksiyonlar ve veri tipleri
// diziler ve pointerlar
// struct üzerinden geçiş
// class üzerinden geçiş - nesne tabanlı programlama
// enumlar, kalıtım alan sınıflar


// <sahip olduğu verinin tipi> <bu elemanın ismi> '() { }'
// void - uzay boşluğu

void dosya_sil(string dosya_adi) {
    // int status = remove(dosya_adi.c_str());
    int status = 1; 
    // ders yaptığımız için gerçekten dosya silmesin diye gerçekten dosya silinmiş gibi
    // status'u kendimiz 1 yaptık
    if (status != 0) {
        cout << "Dosya silinemedi" << endl;
    } else {
        cout << "Dosya basariyla silindi" << endl;
    }
}

// struct - structure, yapı anlamına gelir
// ne yapısıdır peki bu? içinde belli başlı değişkenler ve fonksiyonlar toplu halde tutmaya yarayan veri yapısıdır
// ama struct fonksiyon tutmak/bulundurmak için en iyi çözüm değildir
// çünkü class'lar fonksiyonlarla işlem yapmak için daha uygundur

// for (ILK BASTA BI KERE; HER DONGU BLOGUNA GIRMEDEN ONCE; HER DONGU BLOGU BITISINDE)

int main() {
    // dosya_sil("sunum1.ppt");

    // onceki hali n sayisi ile dizi olusturuyoruz
    // int n = girdi_al_sayi("Kac kitabiniz var?: ");
    // struct Kitap kitaplar[n];
    // sonra da for (int i = 0; i<n; i++) { ile n sayısına kadar döngüye alıyoruz ve
    // kitaplar[i] = girdi_olarak_kitap_oku(); ile n. indise kadar kitapları diziye ekliyoruz

    // list<int> - int tipinde elemanlar tutan liste oluşturur
    // list<string> - string tipinde elemanlar tutan liste oluşturur 
    list<struct Kitap> kitaplar;

    while (1) {

        char cevap = girdi_al_karakter("Yeni bir kitap eklemek istiyor musunuz? (E / H): ");
        

        // gelen cevap evet ise kitap okunup listeye eklenecek
        // gelen cevap hayır ise döngünün bitirilmesi gerek. break ile bitiririz
        // gelen cevap herhangi başka bir şey ise soruyu tekrar sormamız lazım. soru da döngünün başında. döngü nasıl başa alınır. continue

        if (cevap == 'e' || cevap == 'E') {

            kitaplar.push_back (girdi_olarak_kitap_oku());
        } else if (cevap == 'h' || cevap == 'H') {
            break;
        } else {
            continue;
        }
        
        // alıdjajdasd
        // aljaldjasd
    }
    
    // burada da eklenen kitapların listelemesini yapacağız

    return 0;
}
