#include "types.h"
#include "stat.h"
#include "user.h"

int main(void)
{
    int pid = getpid();
    printf(1, "Testing setpriority...\n");

    if (setpriority(pid, 2) == 0) {
        printf(1, "SUCCESS: setpriority(%d, 2) returned 0\n", pid);
    } else {
        printf(1, "FAILURE: set priority(%d, 2) returned -1\n", pid);
    }
    
    if (setpriority(pid, 10) == -1) {
        printf(1, "SUCCESS: setpriority(%d, 10) correctly failed\n", pid);
    } else {
        printf(1, "FAILURE: setpriority(%d, 10) unexpectedly succeeded\n", pid);
    }

    if (setpriority(99999, 1) == -1) {
        printf(1, "SUCCESS: setpriority(99999, 1) correctly failed\n", pid);
    } else{
        printf(1, "FAILURE: setpriority(99999, 1) unexpectedly succeeded\n");
    }
    exit();
    }
    
    
