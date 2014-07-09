#ifndef ANY_OR_ALL_PREDICATE_NODE_H
#define ANY_OR_ALL_PREDICATE_NODE_H

#include "ASTNode.h"
#include "../visitor/Visitor.h"

class AnyOrAllPredicate : public ASTNode {
    
public:
    ScalarExp* se;
    AnyAllSome* aas;
    Subquery* sq;

    /* constructor */
    explicit AnyOrAllPredicate(ScalarExp *n1, AnyAllSome *n2, Subquery *n3) : se(n1), aas(n2), sq(n3) {}

	/**< Accepts the given void visitor by calling v.visit(this) */
    void accept(Visitor &v) {
        v.visit(this);
    }
    
};

#endif // ANY_OR_ALL_PREDICATE_NODE_H
