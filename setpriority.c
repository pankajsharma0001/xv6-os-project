#include "types.h"
#include "user.h"

int main(int argc, char *argv[])
{
    if(argc < 3){
        printf(2, "Usage: setpriority pid priority\n");
        exit();
    }
    int pid = atoi(argv[1]);
    int pr = atoi(argv[2]);

    setpriority(pid, pr);
    exit();
}
