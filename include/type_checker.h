//
// Created by 20580 on 2023/9/7.
//

#ifndef SHWIDSCOPE_TYPE_CHECKER_H
#define SHWIDSCOPE_TYPE_CHECKER_H

#include "ast_visitor.h"
#include "common.h"

namespace shw {
    class TypeChecker : public AstVisitor {
    public:
        void visit(shw::BinaryExprAST   *node) override;
        void visit(shw::CallExprAST     *node) override;
        void visit(shw::UnaryExprAST    *node) override;
        void visit(shw::NumberExprAST   *node) override;
        void visit(shw::IdRefAST        *node) override;
        void visit(shw::IdIndexedRefAST *node) override;


        static unsigned getTypeSize(KType t);
        static bool matchType(ExprAST *, ExprAST *);
        static bool isBool(ExprAST *);
        static bool isInt(ExprAST *);
        static bool isFP(ExprAST *);
        static bool isConstant(ExprAST *);
    public:
        static bool isSigned(KType);

    };
}



#endif //SHWIDSCOPE_TYPE_CHECKER_H
