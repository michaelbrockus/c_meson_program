code_lib = static_library('code_lib', files('program.c'),
    include_directories: '.',
    install: true)

code_dep = declare_dependency(
    link_with: code_lib,
    include_directories: '.')

executable('prog', files('main.c'), dependencies: code_dep, install: true)
