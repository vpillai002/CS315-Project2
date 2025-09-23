#include<iostream>
#include"reclists.hpp"
#include"solutions.hpp"

using namespace std;

void test_is_lat() {
    cout << "Enter testing list p: ";
    list p = read_list();
    cout << "Echoing p:";
    write_list(p);
    cout << (is_lat(p) ? "True!" : "False!") << endl;
}

void test_member() {
    cout << "Enter testing atom p: ";
    list p = read_list();
    cout << "Echoing p:";
    write_list(p);

    cout << "Enter testing list q: ";
    list q = read_list();
    cout << "Echoing q:";
    write_list(q);

    cout << (member(p, q) ? "True!" : "False!") << endl;
}

void test_last() {
    cout << "Enter testing list p: ";
    list p = read_list();
    cout << "Echoing p:";
    write_list(p);

    cout << "Last item is: ";
    write_list(last(p));
}

void test_list_pair() {
    cout << "Enter testing list p: ";
    list p = read_list();
    cout << "Echoing p: ";
    write_list(p);

    cout << "Enter testing list q: ";
    list q = read_list();
    cout << "Echoing q: ";
    write_list(q);

    cout << "Result: ";
    write_list(list_pair(p, q));
}

int main()
{
    // test_is_lat();
    // test_member();
    // test_last();
    test_list_pair();

    return 0;
}
