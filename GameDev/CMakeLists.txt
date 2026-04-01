cmake_minimum_required(VERSION 3.14)
project(MySFMLProject)

# Устанавливаем стандарт C++
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# --- Автоматическая загрузка и сборка SFML ---
include(FetchContent)
FetchContent_Declare(
    sfml
    GIT_REPOSITORY https://github.com/SFML/SFML.git
    GIT_TAG 3.0.2  # Укажите нужную версию, например, 2.6.1 или 3.0.2
)
FetchContent_MakeAvailable(sfml)

# --- Создание исполняемого файла ---
add_executable(${PROJECT_NAME} main.cpp)

# --- Подключение библиотек SFML ---
# Подключаем нужные модули: Graphics, Window, System
target_link_libraries(${PROJECT_NAME} PRIVATE sfml-graphics sfml-window sfml-system)
