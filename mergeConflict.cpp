// mergeConflict.cpp
// Ryan Stonebraker
// 2/6/2018
// An example of a merge conflict resolution using Git.

#include <unistd.h>
#include <sys/types.h>

int main () {
   // spawn a new process
   pid_t proc = fork();

      // Only perform the write in the child process (when fork returns 0)
			if (!proc) {
				write(1, "Merge Conflict!!\n", 16);
			} else if (proc < 0) {
				// Error occured creating new process, an error code was returned
				_exit(1);
			}
      // All good, get out of here
  return 0;
}
