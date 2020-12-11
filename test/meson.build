if get_option('with_tests').enabled()
    unity = subproject('unity')

    test_exe = executable('test-prog',
        files('test_cases.c'),
        dependencies : [unity.get_variable('unity_dep'), code_dep])

    test('Execute project tests', test_exe)
endif
