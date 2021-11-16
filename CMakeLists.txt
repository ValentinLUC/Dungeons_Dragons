cmake_minimum_required(VERSION 3.20)
project(Dungeons_Dragons C)

set(CMAKE_C_STANDARD 99)

add_executable(Dungeons_Dragons main.c characters.c characters.h sort.c sort.h ascii_art_characters.c ascii_art_characters.h)
