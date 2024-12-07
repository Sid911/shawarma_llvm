target("shawarma")
  set_kind("binary")
  if (is_mode("release", "profile", "releasedbg")) then
    add_vectorexts("avx2")
  end

  add_includedirs("$(projectdir)/include")
  add_includedirs("$(projectdir)/third_party/cxxopts")

  add_files(
    "pre_analysis.cpp",
    "global_variable.cpp",
    "ast_visitor.cpp",
    "ast_dumper.cpp",
    "ast.cpp",
    "ir_support.cpp",
    "kale_util.cpp",
    "parser.cpp",
    "ir_builder.cpp",
    "test/token_parser_test.cpp",
    "main.cpp",
    "asm_builder.cpp",
    "type_checker.cpp"
  )

  add_packages("llvm")
target_end()
