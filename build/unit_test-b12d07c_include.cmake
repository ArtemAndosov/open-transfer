if(EXISTS "/home/artem/workspace/sandbox (1-я копия)/build/unit_test-b12d07c_tests.cmake")
  include("/home/artem/workspace/sandbox (1-я копия)/build/unit_test-b12d07c_tests.cmake")
else()
  add_test(unit_test_NOT_BUILT-b12d07c unit_test_NOT_BUILT-b12d07c)
endif()
