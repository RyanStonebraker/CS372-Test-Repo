// mergeConflict.cpp
// Ryan Stonebraker
// 2/6/2018
// An example of a merge conflict resolution using Git.

#include <unistd.h>
#include <sys/types.h>

int main () {
   // spawn a new process
   pid_t proc = fork();
  
			if (!proc) {
				write(1, "Edit from Github!\n", 18);
			} else if (proc < 0) {
				_exit(1);
			}
  return 0;
}
