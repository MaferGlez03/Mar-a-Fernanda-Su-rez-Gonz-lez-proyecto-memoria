#include <stdio.h>
typedef struct pag_process
{
    int pid;
    int heap[2048];
    size_t page_start;
    size_t page_ip;
    int process_part;

} pag_process_t;
