#ifndef KEDAI_H_INCLUDED
#define KEDAI_H_INCLUDED
using namespace std;


struct barang {
    string nama;
    int price;
    int stock;
};
typedef barang infotype;
// Define the pointer to the element
typedef struct elmList* address;

struct elmList {
    barang info;    // Each node contains a barang struct
    address next;   // Pointer to the next element
};

// Define the List structure with a pointer to the first element
struct List {
    address first;
};

void createList(List &l);

address createElemen(infotype data);

void insertFirst(List &l,address p);
void insertLast(List &l,address p);
void insertAfter(List &l, address prev, address p);

void SortByName(List &l);
address SearchByAngka(int target, List &l);

void show(List l);
void DeleteAfter(List &l, address prev, address adr);
void DeleteLast(List &l,address& p);
void deleteFirst(List &l, address& p);


#endif // KEDAI_H_INCLUDED
