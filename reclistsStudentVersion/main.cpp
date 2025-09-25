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

void test_firsts() {
    cout << "Enter testing list p: ";
    list p = read_list();
    cout << "Echoing p: ";
    write_list(p);

    cout << "Result: ";
    write_list(firsts(p));
}

void test_flat() {
    cout << "Enter testing list p: ";
    list p = read_list();
    cout << "Echoing p: ";
    write_list(p);

    cout << "Result: ";
    write_list(flat(p));
}

void test_two_the_same() {
    cout << "Enter testing atom p: ";
    list p = read_list();
    cout << "Echoing p:";
    write_list(p);

    cout << "Enter testing list q: ";
    list q = read_list();
    cout << "Echoing q:";
    write_list(q);

    cout << (two_the_same(p, q) ? "True!" : "False!") << endl;
}

void test_equal() {
    cout << "Enter testing atom p: ";
    list p = read_list();
    cout << "Echoing p:";
    write_list(p);

    cout << "Enter testing list q: ";
    list q = read_list();
    cout << "Echoing q:";
    write_list(q);

    cout << (equal(p, q) ? "True!" : "False!") << endl;
}

void test_total_reverse() {
    cout << "Enter testing list p: ";
    list p = read_list();
    cout << "Echoing p: ";
    write_list(p);

    cout << "Result: ";
    write_list(total_reverse(p));
}

void test_shape() {
    cout << "Enter testing list p: ";
    list p = read_list();
    cout << "Echoing p: ";
    write_list(p);

    cout << "Result: ";
    write_list(shape(p));
}

void test_intersection() {
    cout << "Enter testing list p: ";
    list p = read_list();
    cout << "Echoing p: ";
    write_list(p);

    cout << "Enter testing list q: ";
    list q = read_list();
    cout << "Echoing q: ";
    write_list(q);

    cout << "Result: ";
    write_list(intersection(p, q));
}

void test_list_union() {
    cout << "Enter testing list p: ";
    list p = read_list();
    cout << "Echoing p: ";
    write_list(p);

    cout << "Enter testing list q: ";
    list q = read_list();
    cout << "Echoing q: ";
    write_list(q);

    cout << "Result: ";
    write_list(list_union(p, q));
}

void test_substitute() {
    cout << "Enter old: ";
    list old = read_list();
    
    cout << "Enter new: ";
    list replaced = read_list();

    cout << "Enter testing list p: ";
    list p = read_list();

    cout << "New list is: ";
    write_list(substitute(old, replaced, p));
}   

void test_remove() {
    cout << "Enter testing list p: ";
    list p = read_list();

    cout << "Echoing p: ";
    write_list(p);

    cout << "Enter atom 'a' to remove: ";
    list a = read_list();

    cout << "Echoing 'a': ";
    write_list(a);

    cout << "New list is: ";
    write_list(remove(p, a));
}

void test_subset() {
    cout << "Enter testing atom p: ";
    list p = read_list();
    cout << "Echoing p:";
    write_list(p);

    cout << "Enter testing list q: ";
    list q = read_list();
    cout << "Echoing q:";
    write_list(q);

    cout << (subset(p, q) ? "True!" : "False!") << endl;
}

void test_permute() {
    cout << "Enter testing list p: ";
    list p = read_list();
    cout << "Echoing p: ";
    write_list(p);

    cout << "Permutations include: ";
    write_list(permute(p));
}
int main()
{
    // test_is_lat();
    // test_member();
    // test_last();
    // test_list_pair();
    // test_firsts(); // check the test case with prof
    // test_flat();
    // test_two_the_same();
    // test_equal();
    // test_total_reverse();
    // test_shape(); 
    // test_intersection();
    // test_list_union();
    // test_substitute();
    // test_remove();
    // test_subset();
    // test_permute(); 
    
    return 0;
}
