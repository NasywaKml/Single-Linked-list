#include <iostream>
#include "kedai.h"

using namespace std;

int main()
{
    List NLR;

    address Location;
    address prev;
    address p;
    infotype data;
    int angka;

    createList(NLR);

    // Insert First (kesatu)
    cout<< "masukan nama barang pertama: ";
    cin >> data.nama;
    cout<< "masukan banyak stock barang: ";
    cin >> data.stock;
    cout<< "masukan harga barang: ";
    cin >> data.price;
    Location = createElemen(data);
    insertFirst(NLR, Location);

    // Insert Last (kedua)
    cout<< "masukan nama barang kedua: ";
    cin >> data.nama;
    cout<< "masukan banyak stock barang: ";
    cin >> data.stock;
    cout<< "masukan harga barang: ";
    cin >> data.price;
    Location = createElemen(data);
    insertLast(NLR, Location);

    // Insert First (ketiga)
    cout<< "masukan nama barang ketiga: ";
    cin >> data.nama;
    cout<< "masukan banyak stock barang: ";
    cin >> data.stock;
    cout<< "masukan harga barang: ";
    cin >> data.price;
    Location = createElemen(data);
    insertFirst(NLR, Location);

    // Insert Last (keempat)
    cout<< "masukan nama barang keempat: ";
    cin >> data.nama;
    cout<< "masukan banyak stock barang: ";
    cin >> data.stock;
    cout<< "masukan harga barang: ";
    cin >> data.price;
    Location = createElemen(data);
    insertLast(NLR, Location);

    // Insert After (kelima)
    cout<< "masukan nama barang kelima: ";
    cin >> data.nama;
    cout<< "masukan banyak stock barang: ";
    cin >> data.stock;
    cout<< "masukan harga barang: ";
    cin >> data.price;
    Location = createElemen(data);

    // pencarian elmlist ke- (cari elmlist ke-4 yang ingin disisipkan)
    prev = SearchByAngka(4-1, NLR);
    insertAfter(NLR, prev, Location);

    // Insert After (keenam)
    cout<< "masukan nama barang keenam: ";
    cin >> data.nama;
    cout<< "masukan banyak stock barang: ";
    cin >> data.stock;
    cout<< "masukan harga barang: ";
    cin >> data.price;
    Location = createElemen(data);

    // pencarian elmlist ke- (cari elmlist ke-4 yang ingin disisipkan)
    prev = SearchByAngka(4-1, NLR); // di kasih -1 karena mau cari address prev nya
    insertAfter(NLR, prev, Location);

    // Print Ouput
    cout << "Daftar barang dalam list sebelum sorting: " << endl;
    show(NLR);


    // pencarian elmlist ke- (cari elmlist ke brp yang ingin di hapus)
    cout << "Input list barang ke- Yang Dihapus: "; //hapus data ke-2
    cin>>angka;
    prev = SearchByAngka(angka-1, NLR);

    DeleteAfter(NLR,prev,p);
    cout<< "List setelah delete after: ";
    show(NLR);

    // pencarian elmlist ke- (cari elmlist ke brp yang ingin di hapus)
    prev = SearchByAngka(6-1, NLR);
    DeleteAfter(NLR,prev,p);
    cout<< "List setelah delete elm ke 6: ";
    show(NLR);

    cout << "Daftar barang dalam list setelah sorting: " << endl;
    SortByName(NLR);
    show(NLR);

    return 0;
}
