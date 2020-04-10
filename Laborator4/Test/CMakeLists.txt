project(test)
add_subdirectory(lib)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})
set(SOURCE_FILES
        ../src/domain/Medikamente.cpp
        ../src/domain/Medikamente.h
        ../src/repository/MedikamenteRepository.h
        ../src/repository/MedikamenteRepository.cpp
        ../src/controller/MedikamenteController.h
        ../src/controller/MedikamenteController.cpp)
add_executable(Google_Tests_run MedikamentControllerTest.cpp ${SOURCE_FILES})
target_link_libraries(Google_Tests_run gtest gtest_main)