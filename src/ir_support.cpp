
#include "ir_support.h"
#include "global_variable.h"
#include "llvm/IR/Constants.h"


namespace shw {

// clang-format off

llvm::Type *ShwIRTypeSupport::ShwVoidType = nullptr;
llvm::Type *ShwIRTypeSupport::ShwBoolType = nullptr;
llvm::Type *ShwIRTypeSupport::ShwCharType = nullptr;
llvm::Type *ShwIRTypeSupport::ShwUCharType = nullptr;
llvm::Type *ShwIRTypeSupport::ShwShortType = nullptr;
llvm::Type *ShwIRTypeSupport::ShwUShortType = nullptr;
llvm::Type *ShwIRTypeSupport::ShwIntType = nullptr;
llvm::Type *ShwIRTypeSupport::ShwUIntType = nullptr;
llvm::Type *ShwIRTypeSupport::ShwLongType = nullptr;
llvm::Type *ShwIRTypeSupport::ShwULongType = nullptr;
llvm::Type *ShwIRTypeSupport::ShwFloatType = nullptr;
llvm::Type *ShwIRTypeSupport::ShwDoubleType = nullptr;

void ShwIRTypeSupport::initIRTypeSupport() {
    ShwVoidType    = llvm::Type::getVoidTy(GlobalContext);
    ShwBoolType    = llvm::Type::getInt1Ty(GlobalContext);
    ShwCharType    = llvm::Type::getInt8Ty(GlobalContext);
    ShwUCharType   = llvm::Type::getInt8Ty(GlobalContext);
    ShwShortType   = llvm::Type::getInt16Ty(GlobalContext);
    ShwUShortType  = llvm::Type::getInt16Ty(GlobalContext);
    ShwIntType     = llvm::Type::getInt32Ty(GlobalContext);
    ShwUIntType    = llvm::Type::getInt32Ty(GlobalContext);
    ShwLongType    = llvm::Type::getInt64Ty(GlobalContext);
    ShwULongType   = llvm::Type::getInt64Ty(GlobalContext);
    ShwFloatType   = llvm::Type::getFloatTy(GlobalContext);
    ShwDoubleType  = llvm::Type::getDoubleTy(GlobalContext);
}

llvm::Constant *ShwIRConstantValueSupport::ShwFalse = nullptr;
llvm::Constant *ShwIRConstantValueSupport::ShwTrue = nullptr;
llvm::Constant *ShwIRConstantValueSupport::ShwCharZero = nullptr;
llvm::Constant *ShwIRConstantValueSupport::ShwUCharZero = nullptr;
llvm::Constant *ShwIRConstantValueSupport::ShwShortZero = nullptr;
llvm::Constant *ShwIRConstantValueSupport::ShwUShortZero = nullptr;
llvm::Constant *ShwIRConstantValueSupport::ShwIntZero = nullptr;
llvm::Constant *ShwIRConstantValueSupport::ShwUIntZero = nullptr;
llvm::Constant *ShwIRConstantValueSupport::ShwLongZero = nullptr;
llvm::Constant *ShwIRConstantValueSupport::ShwULongZero = nullptr;
llvm::Constant *ShwIRConstantValueSupport::ShwFloatZero = nullptr;
llvm::Constant *ShwIRConstantValueSupport::ShwDoubleZero = nullptr;

void ShwIRConstantValueSupport::initIRConastantSupport() {
    ShwTrue        = llvm::ConstantInt::get(ShwIRTypeSupport::ShwBoolType, 1);
    ShwFalse       = llvm::ConstantInt::get(ShwIRTypeSupport::ShwBoolType, 0);
    ShwCharZero    = llvm::ConstantInt::get(ShwIRTypeSupport::ShwCharType, 0);
    ShwUCharZero   = llvm::ConstantInt::get(ShwIRTypeSupport::ShwUCharType, 0);
    ShwShortZero   = llvm::ConstantInt::get(ShwIRTypeSupport::ShwShortType, 0);
    ShwUShortZero  = llvm::ConstantInt::get(ShwIRTypeSupport::ShwUShortType, 0);
    ShwIntZero     = llvm::ConstantInt::get(ShwIRTypeSupport::ShwIntType, 0);
    ShwUIntZero    = llvm::ConstantInt::get(ShwIRTypeSupport::ShwUIntType, 0);
    ShwLongZero    = llvm::ConstantInt::get(ShwIRTypeSupport::ShwLongType, 0);
    ShwULongZero   = llvm::ConstantInt::get(ShwIRTypeSupport::ShwULongType, 0);
    ShwFloatZero   = llvm::ConstantFP::get(ShwIRTypeSupport::ShwFloatType, 0.0);
    ShwDoubleZero  = llvm::ConstantFP::get(ShwIRTypeSupport::ShwDoubleType, 0.0);
}

//clang-format on

}
