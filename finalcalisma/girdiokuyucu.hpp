#pragma once
#include <iostream>
using namespace std;

string girdi_al(string sorgu) {
    cout << sorgu;
    string text;
    getline(cin, text);
    cin.clear();
    cin.sync();
    return text;
}

int girdi_al_sayi(string sorgu) {
    cout << sorgu;
    int numara;
    cin >> numara;
    cin.clear();
    cin.sync();
    return numara;
}

char girdi_al_karakter(string sorgu) {
    cout << sorgu;
    char karakter;
    cin >> karakter;
    cin.clear();
    cin.sync();
    return karakter;
}
