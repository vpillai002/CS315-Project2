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

    return cons(cons(car(p), cons(car(q), null())), list_pair(cdr(p), cdr(q)));
}

list firsts(list p) {
    if (is_null(p)) 
        return null(); 

    return cons(car(car(p)), firsts(cdr(p)));
}

list flat(list p) {
    if (is_null(p)) 
        return null();

    if (is_atom(car(p))) 
        return cons(car(p), flat(cdr(p)));
    else 
        return append(flat(car(p)), flat(cdr(p)));
}

bool two_the_same(list p, list q) {
    if (is_null(p))
        return false;
    if (member(car(p), q)) 
        return true; 
    return two_the_same(cdr(p), q);
}

bool equal(list p, list q) {
    if (is_null(p) && is_null(q))
        return true;
    if (is_null(p) || is_null(q))
        return false;
    if (is_atom(p) && is_atom(q))
        return eq(p, q);
    if (is_atom(p) || is_atom(q))
        return false;
    return equal(car(p), car(q)) && equal(cdr(p), cdr(q));
}

list total_reverse(list p) {
    if (is_null(p))
        return null(); // empty list
    
    if (is_atom(p))
        return p; // list is just an atom

    return append(total_reverse(cdr(p)), cons(total_reverse(car(p)), null()));
}

list shape(list p) {
    if (is_null(p) || is_atom(p)) 
        return null();

    if (is_atom(car(p)))
        return shape(cdr(p));
    
    return cons(shape(car(p)), shape(cdr(p)));
}

list intersection(list p, list q) {
    if (is_null(p))
        return null();
    
    if (member(car(p), q))
        return cons(car(p), intersection(cdr(p), q));
    
    return intersection(cdr(p), q);
}

list list_union(list p, list q) {
    if (is_null(p))
        return q; 

    if (member(car(p), q))
        return list_union(cdr(p), q);
    
    return cons(car(p), list_union(cdr(p), q));
}

// list substitute(list old, list replace, list p) {

// }

// list remove(list p, list a) {

// }

bool subset(list p, list q) {
    if (is_null(p))
        return true; 

    if (is_atom(car(p))) {
        if (!member(car(p), q))
            return false;
        
    }
    else {
        if (!subset(car(p), q))
            return false;
    }

    return subset(cdr(p), q);
} 

// list permute(list p) {
    
// }