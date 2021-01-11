if get_option('with_tests').enabled()
    unity_dep = dependency('unity')

    test_exe = executable('test-prog',
        files('test_cases.c'),
        dependencies : [unity_dep, code_dep])

    test('Execute project tests', test_exe)
endif
