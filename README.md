

# ModernSharedLibTemplate

This is a template for **static** and **shared** library which give a good starter point for new C++ project.
It has been designed to use [Modern CMake practices](https://pabloariasal.github.io/2018/02/19/its-time-to-do-cmake-right) in mind, and should be a good starting point for both people willing to learn it and those who want to update their own project.

[![Ubuntu](https://github.com/cppmf/ModernSharedLibTemplate/actions/workflows/ubuntu.yml/badge.svg)](https://github.com/cppmf/ModernSharedLibTemplate/actions/workflows/ubuntu.yml)
[![MacOS](https://github.com/cppmf/ModernSharedLibTemplate/actions/workflows/macos.yml/badge.svg)](https://github.com/cppmf/ModernSharedLibTemplate/actions/workflows/macos.yml)
[![Windows](https://github.com/cppmf/ModernSharedLibTemplate/actions/workflows/windows.yml/badge.svg)](https://github.com/cppmf/ModernSharedLibTemplate/actions/workflows/windows.yml)

[![codecov](https://codecov.io/gh/cppmf/ModernSharedLibTemplate/branch/master/graph/badge.svg?token=HK6YTUCDUC)](https://codecov.io/gh/cppmf/ModernSharedLibTemplate)
[![Quality Gate Status](https://sonarcloud.io/api/project_badges/measure?project=cppmf_ModernSharedLibTemplate&metric=alert_status)](https://sonarcloud.io/summary/new_code?id=cppmf_ModernSharedLibTemplate)
[![Coverage](https://sonarcloud.io/api/project_badges/measure?project=cppmf_ModernSharedLibTemplate&metric=coverage)](https://sonarcloud.io/summary/new_code?id=cppmf_ModernSharedLibTemplate)
[![Maintainability Rating](https://sonarcloud.io/api/project_badges/measure?project=cppmf_ModernSharedLibTemplate&metric=sqale_rating)](https://sonarcloud.io/summary/new_code?id=cppmf_ModernSharedLibTemplate)


## Features
- [x] Reproducible dependency management via [CPM.cmake](https://github.com/TheLartians/CPM.cmake).
- [x] Clean separation of code, tests and documentation.
- [x] Integrated test suite with [Catch2](https://github.com/catchorg/Catch2).
- [x] Automatic [documentation](https://cppmf.github.io/ModernSharedLibTemplate) and deployment with [Doxygen](https://www.doxygen.nl/) and [GitHub Pages](https://pages.github.com).
- [x] Code formatting enforced by [clang-format](https://clang.llvm.org/docs/ClangFormat.html) and [cmake-format](https://github.com/cheshirekow/cmake_format) from script.
- [x] Code coverage via [codecov](https://codecov.io).
- [x] Code coverage and analysis via [sonarcloud](https://sonarcloud.io).
- [x] CI workflows for Windows, Linux and MacOS using GitHub Actions.

## Todo
- [ ] Add [include-what-you-use](https://include-what-you-use.org/)
- [ ] Add Ccache

## Usage
All source code can be found in the following directories :
 - ```include\mlt``` :
   - Replace the mlt directory according to the PROJECT_ID defined in CMakeLists.txt
   - Add your own source code.
 - ```src``` :
     - Add your own source code.

then add you files to ```CMakeLists_files.cmake```.

### Build as static lib
Use the following commands to build as a static library.

```cmake
cmake -S . -B build/static -DBUILD_SHARED_LIBS=NO -DMLT_PACKAGE=YES -DCMAKE_INSTALL_PREFIX=install
cmake --build build/static --target install
```

### Build as shared lib
Use the following commands to build as a shared library.

```cmake
cmake -S . -B build/shared -DBUILD_SHARED_LIBS=YES -DMLT_PACKAGE=YES -DCMAKE_INSTALL_PREFIX=install
cmake --build build/shared --target install
```

### Build and run test suite
Use the following commands to run the test suite.

```cmake
cmake -S test -B build/test
cmake --build build/test
cmake --build build/test --target test

# for more details, run:
./build/test/ModernSharedLibTemplateTest
```

### Build the documentation
Use the following commands to manually build the documentation.

```cmake
cmake -S doc -B build/doc
cmake --build build/doc --target GenerateDocs
```

## Related projects

CppMfLibTemplate got inspired from the following :

- [alexreinking/SharedStaticStarter](https://github.com/alexreinking/SharedStaticStarter): A simple starter project showing how to distribute both static and shared libraries in CMake.
- [TheLartians/ModernCppStarter](https://github.com/TheLartians/ModernCppStarter): A popular C++ starter project.
- [Doxygen Awesome](https://github.com/jothepro/doxygen-awesome-css): A custom CSS theme for doxygen html-documentation with lots of customization parameters..
