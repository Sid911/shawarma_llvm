includes("@builtin/check")

add_rules("mode.debug", "mode.release", "mode.releasedbg")
add_rules("plugin.compile_commands.autoupdate", { outputdir = "./build", configs = { shared = false } })


set_toolchains("gcc", "clang-20")
set_runtimes("c++_static")
-- add_ldflags("-fuse-ld=mold")

add_requires("llvm", { system = true })

set_languages("c++23", "c23")
includes("./src")
includes("./shw_std")
