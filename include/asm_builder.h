
#ifndef SHWIDSCOPE_ASM_BUILDER_H
#define SHWIDSCOPE_ASM_BUILDER_H

#include <vector>
#include <string>

namespace shw {

class AsmBuilder {
public:
    enum CPU_TYPE {
        X86_64,
        ARM,
        RISCV
    };

public:
    AsmBuilder();

public:
    void setTargetType(CPU_TYPE ty = X86_64) {
        TargetCPU = ty;
    }
    virtual unsigned runAndCompileToExecutable() = 0;
protected:
    CPU_TYPE TargetCPU;
};

class LLVMBuilderChain : public AsmBuilder {

public:
    LLVMBuilderChain(const std::string& rpath);

    unsigned runAndCompileToExecutable() override;

private:
    std::vector<std::string> ObjFileList;
    std::string Rpath;
};



}



#endif //SHWIDSCOPE_ASM_BUILDER_H
