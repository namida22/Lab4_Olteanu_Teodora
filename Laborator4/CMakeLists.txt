cmake_minimum_required(VERSION 3.15)
set(CMAKE_CXX_STANDARD 14)

project(Laborator4)

set(SOURCE_FILES
        src/domain/Medikamente.cpp
        src/domain/Medikamente.h
        src/repository/MedikamenteRepository.h
        src/repository/MedikamenteRepository.cpp
        src/controller/MedikamenteController.h
        src/controller/MedikamenteController.cpp
        src/ui/MedikamenteUI.h
        src/ui/MedikamenteUI.cpp
        main.cpp)

add_executable(Laborator_4_run ${SOURCE_FILES})

add_subdirectory(test)