#include <iostream>
#include "kedai.h"
using namespace std;

void createList(List &l){
    l.first=nullptr;
};

address createElemen(infotype data){
    address p;
    p=new elmList;
    p->info=data;
    p->next = nullptr; // Initialize next pointer to nullptr
    return p;
};

void insertFirst(List &l,address p){
    if (l.first==nullptr){
        l.first= p;
    } else{
        p->next = l.first;
        l.first=p;
    }
};

void insertAfter(List &l, address prev, address p){
    if (prev->next==nullptr){
        prev->next=p;
    } else {
        p->next=prev->next;
        prev->next=p;
    }
};

void insertLast(List &l,address p){
    address q;
    if (l.first==nullptr){
      l.first=p;
    } else{
        q=l.first;
        while (q->next!=nullptr){
            q=q->next;
        }
        q->next=p;
    }
};

void deteleFirst(List &l,address &p){ // Fix: take 'p' as a reference
    if (l.first == nullptr){ // Fix: use '==', not '='
        p=nullptr;
    } else{
        p=l.first;
        l.first=l.first->next;
        p->next=nullptr;
    }
}

void SortByName(List &l){
    address sortedList, p, q;
    if (l.first != nullptr && l.first->next != nullptr){
        sortedList = nullptr;
        p = l.first;
        while (p != nullptr){
            l.first = p->next;
            if (sortedList == nullptr || sortedList->info.nama > p->info.nama){
                p->next = sortedList;
                sortedList = p;
            } else{
                q = sortedList;
                while (q->next != nullptr && q->next->info.nama < p->info.nama){
                    q = q->next;
                }
                p->next = q->next;
                q->next = p;
            }
            p = l.first;
        }
        l.first = sortedList;
    }
};

address SearchByAngka(int target, List &l) {
    address p = l.first;
    int i = 1;


    while (p != nullptr && i < target) {
        p = p->next;
        i++;
    }


    if (i == target && p != nullptr) {
        return p;
    } else {
        return NULL;
    }
}


void show(List l){
    address p = l.first;
    while (p != nullptr){
        cout << "Nama: " << p->info.nama;
        cout << " Harga: " << p->info.price;
        cout << " Stock: " << p->info.stock << endl; // Fix: add 'endl' for better output format
        p = p->next;
    }
};

//p berupa address kosong
 void deleteFirst(List &l, address& p){
    p=l.first;
    if (l.first == NULL){
        p=NULL;
    } else{
        p=l.first;
        l.first= l.first->next;
        p->next = NULL;
    }
 };

// di main perlu ada variable p address kosong
 void DeleteLast(List &l,address& p){
    address q;

    if (l.first ==NULL){
        p=NULL;
    } else if (l.first->next==NULL) {
        p=l.first;
        l.first=NULL;
    } else{
        q= l.first;
        while (q->next->next != NULL){

            q=q->next;
        }
        p=q->next;
        q->next=NULL;
    }
 };

 void DeleteAfter(List &l, address prev, address p){
    if (l.first == NULL || prev->next == NULL){
        p=NULL;
    } else{
        p=prev->next;
        prev->next=p->next;
        p->next=NULL;
    }


 };

