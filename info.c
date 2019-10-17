#include "types.h"
#include "user.h"
int main(int argc, char **argv){
    if(argc < 2) {
		printf(1, "usage: info \n1\treport A count of the processes in the system\n2\treport total number of system calls that a process has done so far\n3\treports the number of memory pages the current process is using\n");
		exit();
	}
    info(atoi(argv[1]));
    exit();
}
//https://windows-hexerror.linestarve.com/q/so57745250-How-to-add-a-system-call-to-find-the-number-of-processes-in-xv6