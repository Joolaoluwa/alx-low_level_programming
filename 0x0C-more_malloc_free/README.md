I learnt more about dynamic allocation of memory
by using the (malloc(), calloc(), realloc(), free()
, exit()) functions

I worked with on tasks in my ALX program, whose files are listed below

i) 0-malloc_checked.c
ii) 1-string_nconcat.c
iii) 2-calloc.c
iv) 3-array_range.c
v) 100-realloc.c
vi) 101-mul.c

Their prototypes are also listed below and also match the above files respectively

i) void *malloc_checked(unsigned int b);
ii) char *string_nconcat(char *s1, char *s2, unsigned int n);
iii) int *array_range(int min, int max);
iv) void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

0-malloc_checked:
	> Prototype: void *malloc_checked(unsigned int b);
	> Returns a pointer to the allocated memory
	> if malloc fails, the malloc_checked function should cause normal process
	termination with a status value of 98

1-string_nconcat.c:
	> Prototype: char *string_nconcat(char *s1, char *s2, unsigned int n);
	> The returned pointer shall point to a newly allocated space in memory,
	which contains s1, followed by the first n bytes of s2,and null terminated
	> If the function fails, it should return NULL
	> If n is greater or equal to the length of s2 then use the entire string s2
	> if NULL is passed, treat it as an empty string
