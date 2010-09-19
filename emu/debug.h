#ifndef DEBUG_H
#define DEBUG_H

void dump_stack(long stack_end);
void dump_stack_rev(long stack_end);

void dump_mem(void *mem, long len);

void printhex(const void *data, int len);
void printhex_diff(const void *data1, ssize_t len1,
                   const void *data2, ssize_t len2, int grane);


#endif /* DEBUG_H */
