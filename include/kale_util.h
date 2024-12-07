

#ifndef SHW_UTIL_H
#define SHW_UTIL_H

#include "ast.h"

namespace shw {

/**
 * @brief ShwUtils class give api to help compiler generate IR.
*/
class ShwUtils {

public:
    static bool isConstant(ExprAST *expr);

};

}

#endif
