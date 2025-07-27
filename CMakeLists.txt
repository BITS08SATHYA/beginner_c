cmake_minimum_required(VERSION 3.31)
project(beginner)

set(CMAKE_CXX_STANDARD 20)

add_executable(beginner main.cpp
        01-swap/swap.c
        02-minmax/minMax.c
        03-sizeof/sizeOf.c
        04-generic_pointer/main.c
        05-arrays_pointers/arrays.c
        05-arrays_pointers/searching.c
        05-arrays_pointers/maxmium.c
        06-input-print-functions/source.c
        Challenges/challenge-3.c
        Challenges/challenge-3.1.c
        Challenges/challenge-4.c
        07-DMA/malloc/01-malloc.c
        07-DMA/challenges/challenge-2.c
        07-DMA/calloc/calloc.c
        07-DMA/free/free.c
        07-DMA/realloc/realloc.c
        07-DMA/adjustable_reallocation_Perf/adjRealloc.c
        07-DMA/adjustable_reallocation_Perf/1dArray.c
        07-DMA/challenges_with_arrays/removeDupArrays.c
        07-DMA/challenges_with_arrays/odd_even_arrays.c
        07-DMA/challenges_with_arrays/insert_function.c
        07-DMA/challenges_with_arrays/CopyArray.c
        08-2DArrays/main.c)
