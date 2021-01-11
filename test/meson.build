if get_option('with_tests').enabled()
    unity = dependency('unity', required: false, fallback: 'unity')

    test_exe = executable('test-prog',
        files('test_cases.c'),
        dependencies : [unity, code_dep])

    test('Execute project tests', test_exe)
endif
