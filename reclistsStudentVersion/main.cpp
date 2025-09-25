#include<iostream>
#include"reclists.hpp"
#include"solutions.hpp"

using namespace std;

void test_is_lat() {
    cout << "----Testing is_lat----" << endl;
    cout << "Enter testing list p: ";
    list p = read_list();
    cout << "Echoing p:";
    write_list(p);
    cout << (is_lat(p) ? "True!" : "False!") << endl;
}

void test_member() {
    cout << "----Testing member----" << endl;
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
    cout << "----Testing last----" << endl;
    cout << "Enter testing list p: ";
    list p = read_list();
    cout << "Echoing p:";
    write_list(p);

    cout << "Last item is: ";
    write_list(last(p));
}

void test_list_pair() {
    cout << "----Testing list_pair----" << endl;
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
    cout << "----Testing firsts----" << endl;
    cout << "Enter testing list p: ";
    list p = read_list();
    cout << "Echoing p: ";
    write_list(p);

    cout << "Result: ";
    write_list(firsts(p));
}

void test_flat() {
    cout << "----Testing flat----" << endl;
    cout << "Enter testing list p: ";
    list p = read_list();
    cout << "Echoing p: ";
    write_list(p);

    cout << "Result: ";
    write_list(flat(p));
}

void test_two_the_same() {
    cout << "----Testing two_the_same----" << endl;
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
    cout << "----Testing equal----" << endl;
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
    cout << "----Testing total_reverse----" << endl;
    cout << "Enter testing list p: ";
    list p = read_list();
    cout << "Echoing p: ";
    write_list(p);

    cout << "Result: ";
    write_list(total_reverse(p));
}

void test_shape() {
    cout << "----Testing shape----" << endl;
    cout << "Enter testing list p: ";
    list p = read_list();
    cout << "Echoing p: ";
    write_list(p);

    cout << "Result: ";
    write_list(shape(p));
}

void test_intersection() {
    cout << "----Testing intersection----" << endl;
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
    cout << "----Testing list_union----" << endl;
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
    cout << "----Testing substitute----" << endl;
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
    cout << "----Testing remove----" << endl;
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
    cout << "----Testing subset----" << endl;
    cout << "Enter testing list p: ";
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
    cout << "----Testing permute----" << endl;
    cout << "Enter testing list p: ";
    list p = read_list();
    cout << "Echoing p: ";
    write_list(p);

    cout << "Permutations include: ";
    write_list(permute(p));
}
int main()
{
    test_is_lat();
    test_is_lat();
    test_is_lat();
    test_is_lat();
    test_is_lat();

    test_member();
    test_member();
    test_member();
    
    test_last();

    test_list_pair();
    test_list_pair();
    test_list_pair();

    test_firsts(); 
    test_firsts(); 

    test_flat();
    test_flat();
    test_flat();
    test_flat();

    test_two_the_same();
    test_two_the_same();

    test_equal();
    test_equal();

    test_total_reverse();
    test_total_reverse();

    test_shape(); 
    test_shape(); 
    test_shape(); 
    test_shape(); 

    test_intersection();
    test_intersection();
    test_intersection();
    test_intersection();

    test_list_union();
    test_list_union();
    test_list_union();
    test_list_union();

    test_substitute();

    test_remove();

    test_subset();
    test_subset();
    test_subset();
    test_subset();
    test_subset();

    test_permute(); 
    
    return 0;
}
