#include "reclists.hpp"
#include "solutions.hpp"

// As you implement functions in this file, you should add the
// function-prototype to the solutions.hpp.
//


int numNodesAtTheTopLevel(list p) {
    // p is one of
    //    a null list
    //    an atom
    //    a recursive list

    // The function returns the number of nodes at the top-level
    // of p.

    if( is_null(p) )
        return 0;
    if( is_atom(p) )
        return 1;
    return 1 + numNodesAtTheTopLevel(cdr(p));
}

list append(list p, list q) {
    if (is_null(p))
        return q;
    
    return cons(car(p), append(cdr(p), q));
}

list reverseTopLevel(list p) {
    if (is_null(p))
        return p;
    
    return append(cons(car(p), null()), reverseTopLevel(cdr(p)));
}

bool is_lat(list p) {
    if (is_null(p))
        return true; // empty list is a lat
    
    if (!is_atom(car(p)))
        return false; // found a "not atom"
    
    return is_lat(cdr(p)); // recurisvely iterate through rest of list p
}  

bool member(list p, list q) {
    if (is_null(q))
        return false; 

    if (is_atom(car(q))) {
        if (eq(p, car(q))) 
            return true; 
    }
    else {
        if (member(p, car(q)))
            return true; 
    }

    return member(p, cdr(q)); 
}

list last(list p) {
    if (is_null(cdr(p))) 
        return car(p); 
    
    return last(cdr(p)); 
}

list list_pair(list p, list q) {
    if (is_null(p) || is_null(q)) 
        return null(); 

    list first_pair = cons(car(p), cons(car(q), null()));
    return cons(first_pair, list_pair(cdr(p), cdr(q)));
}