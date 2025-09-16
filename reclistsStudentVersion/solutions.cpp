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

