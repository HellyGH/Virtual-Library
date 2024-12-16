cmake_minimum_required(VERSION 3.10)
project(VirtualLibraly)
#компилатор
# Set the C++ standard
set(CMAKE_CXX_STANDARD 17)

# Add the executable and include all source files
add_executable(VirtualLibraly
        main.cpp
        InformationCarrier.cpp
        Book.cpp
        Magazine.cpp
        AudioCD.cpp
        Cassete.cpp
        VideoCassette.cpp
)
