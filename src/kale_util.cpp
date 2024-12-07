
#include "kale_util.h"
#include "cast.h"

namespace shw {

bool ShwUtils::isConstant(ExprAST *expr) {

    switch (expr->getClassId())
    {
        case NumberId: return true;
        case UnaryExprId: {
            UnaryExprAST *unary = shw_cast<UnaryExprAST>(expr);
            return isConstant(unary->getUnaryExpr());
        }
        case BinExprId: {
            BinaryExprAST *bin = shw_cast<BinaryExprAST>(expr);
            return isConstant(bin->getLhs()) && isConstant(bin->getRhs());
        }
        default:
            return false;
    }
}

}




