
#ifndef SHW_AST_DUMPER_H
#define SHW_AST_DUMPER_H

#include "ast_visitor.h"

namespace shw {

class DumpVisitor : public AstVisitor {

public:
    DumpVisitor() = default;


    void preAction(ASTBase *node) override;
    void postAction(ASTBase *node) override;
};

}

#endif
