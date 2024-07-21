
#ifndef SHW_IR_SUPPORT_H
#define SHW_IR_SUPPORT_H


#include "llvm/IR/Type.h"
#include "llvm/IR/Constant.h"

namespace shw {

class ShwIRTypeSupport {

public:
    static llvm::Type *ShwVoidType;
    static llvm::Type *ShwBoolType;
    static llvm::Type *ShwCharType;
    static llvm::Type *ShwUCharType;
    static llvm::Type *ShwShortType;
    static llvm::Type *ShwUShortType;
    static llvm::Type *ShwIntType;
    static llvm::Type *ShwUIntType;
    static llvm::Type *ShwLongType;
    static llvm::Type *ShwULongType;
    static llvm::Type *ShwFloatType;
    static llvm::Type *ShwDoubleType;

    static void initIRTypeSupport();
};


class ShwIRConstantValueSupport {

public:
    static llvm::Constant *ShwTrue;
    static llvm::Constant *ShwFalse;
    static llvm::Constant *ShwCharZero;
    static llvm::Constant *ShwUCharZero;
    static llvm::Constant *ShwShortZero;
    static llvm::Constant *ShwUShortZero;
    static llvm::Constant *ShwIntZero;
    static llvm::Constant *ShwUIntZero;
    static llvm::Constant *ShwLongZero;
    static llvm::Constant *ShwULongZero;
    static llvm::Constant *ShwFloatZero;
    static llvm::Constant *ShwDoubleZero;

    static void initIRConastantSupport();
};

}

#endif
