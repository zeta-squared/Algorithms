sum_decomposition: sum_decomposition.o binary_search.o merge_sort.o
	gcc -o sum_decomposition sum_decomposition.o binary_search.o merge_sort.o

sum_decomposition.o: sum_decomposition.c binary_search.h merge_sort.h
	gcc -c sum_decomposition.c

binary_search.o: binary_search.c binary_search.h
	gcc -c binary_search.c

merge_sort.o: merge_sort.c merge_sort.h
	gcc -c merge_sort.c
