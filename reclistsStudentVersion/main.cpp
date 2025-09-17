#include<iostream>
#include"reclists.hpp"
#include"solutions.hpp"

using namespace std;

int main()
{

    cout << "Enter first list: ";
    list p = read_list();
    cout << "Enter second list: ";
    list q = read_list();

    cout << "---Testing Functions---\n";

    cout << "Echoing p: " << endl;
    write_list(p);
    cout << "Echoing q: " << endl;
    write_list(q);

    cout << "\nis_lat(p): " << (is_lat(p) ? "true" : "false") << endl;
    cout << "last(p): ";
    write_list(last(p));

    std::cout << "list_pair(p, q): ";
    write_list(list_pair(p, q));

    std::cout << "firsts(p): ";
    write_list(firsts(p));

    
    return 0;
}
