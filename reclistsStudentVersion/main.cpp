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
    
    return 0;
}
