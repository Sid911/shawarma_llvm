set(CMAKE_CXX_STANDARD 17)

if(BUILD_WITH_CMODEL)
    message(STATUS "Build with cmodel")
    set(SRC_FILE
            pre_analysis.cpp
            global_variable.cpp
            ast_visitor.cpp
            ast_dumper.cpp
            ast.cpp
            kale_util.cpp
            parser.cpp
            test/token_parser_test.cpp
            main.cpp
            asm_builder.cpp
    )

    add_executable(${PROJECT_NAME} ${SRC_FILE})
    # target_compile_options(${PROJECT_NAME} PUBLIC -fPIE)

    target_include_directories(
            ${PROJECT_NAME}
            PUBLIC ${PROJECT_SOURCE_DIR}/third_party/cxxopts
            PUBLIC ${PROJECT_SOURCE_DIR}/include
    )
else ()
    message(STATUS "Build with llvm-20")
    find_package(LLVM 20 REQUIRED CONFIG)

    #set(ARCHS
    #    AArch64
    #    AMDGPU
    #    ARM
    #    AVR
    #    BPF
    #    Hexagon
    #    Lanai
    #    Mips
    #    MSP430
    #   # NVPTX
    #    PowerPC
    #    RISCV
    #    Sparc
    #    SystemZ
    #    WebAssembly
    #    X86
    #  #  XCore
    #)

    set(LLVM_LIBS
            "LLVMAnalysis"
            "LLVMCore"
            "LLVMSupport"
            #    "LLVMAsmPrinter"
            #    "LLVMXCoreCodeGen"
            #    "LLVMXCoreDesc"
            #    "LLVMXCoreInfo"
            #    "LLVMNVPTXCodeGen"
            #    "LLVMNVPTXDesc"
            #    "LLVMNVPTXInfo"
    )

    #foreach(arch ${ARCHS})
    #    message(STATUS "ARCH ${arch}")
    #    list(APPEND LLVM_LIBS "LLVM${arch}CodeGen")
    #    list(APPEND LLVM_LIBS "LLVM${arch}AsmParser")
    #endforeach ()

    link_directories(${LLVM_LIBRARY_DIRS})

    set(SRC_FILE
            pre_analysis.cpp
            global_variable.cpp
            ast_visitor.cpp
            ast_dumper.cpp
            ast.cpp
            ir_support.cpp
            kale_util.cpp
            parser.cpp
            ir_builder.cpp
            test/token_parser_test.cpp
            main.cpp
            asm_builder.cpp
            type_checker.cpp
    )

    add_executable(${PROJECT_NAME} ${SRC_FILE})

    target_include_directories(
            ${PROJECT_NAME}
            PUBLIC ${PROJECT_SOURCE_DIR}/third_party/cxxopts
            PUBLIC ${PROJECT_SOURCE_DIR}/include
            PUBLIC ${LLVM_INCLUDE_DIRS}
    )

    message(STATUS ${LLVM_LIBS})
    target_link_libraries(${PROJECT_NAME}
            PUBLIC ${LLVM_LIBS}
    )

endif ()

