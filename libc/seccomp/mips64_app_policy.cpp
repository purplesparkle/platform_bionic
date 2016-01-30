// Autogenerated file - edit at your peril!!

#include <linux/filter.h>
#include <errno.h>

#include "seccomp_bpfs.h"
const sock_filter mips64_app_filter[] = {
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5000, 0, 100),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5137, 49, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5089, 25, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5034, 13, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5013, 7, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5005, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5003, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5002, 93, 92), //read|write
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5004, 92, 91), //close
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5008, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5006, 90, 89), //fstat
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5012, 89, 88), //lseek|mmap|mprotect|munmap
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5031, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5023, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5020, 86, 85), //rt_sigaction|rt_sigprocmask|ioctl|pread64|pwrite64|readv|writev
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5028, 85, 84), //sched_yield|mremap|msync|mincore|madvise
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5032, 84, 83), //dup
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5057, 5, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5043, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5038, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5037, 80, 79), //nanosleep|getitimer|setitimer
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5042, 79, 78), //getpid|sendfile|socket|connect
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5056, 78, 77), //sendto|recvfrom|sendmsg|recvmsg|shutdown|bind|listen|getsockname|getpeername|socketpair|setsockopt|getsockopt|clone
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5077, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5070, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5062, 75, 74), //execve|exit|wait4|kill|uname
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5076, 74, 73), //fcntl|flock|fsync|fdatasync|truncate|ftruncate
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5080, 73, 72), //getcwd|chdir|fchdir
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5112, 11, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5102, 5, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5093, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5091, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5090, 68, 67), //fchmod
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5092, 67, 66), //fchown
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5101, 66, 65), //umask|gettimeofday|getrlimit|getrusage|sysinfo|times|ptrace|getuid
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5110, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5105, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5103, 63, 62), //getgid
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5109, 62, 61), //geteuid|getegid|setpgid|getppid
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5111, 61, 60), //setsid
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5122, 5, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5118, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5115, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5114, 57, 56), //setregid|getgroups
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5117, 56, 55), //setresuid|getresuid
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5120, 55, 54), //getresgid|getpgid
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5134, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5132, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5130, 52, 51), //getsid|capget|capset|rt_sigpending|rt_sigtimedwait|rt_sigqueueinfo|rt_sigsuspend|sigaltstack
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5133, 51, 50), //personality
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5136, 50, 49), //statfs|fstatfs
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5237, 25, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5194, 13, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5157, 7, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5153, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5151, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5150, 44, 43), //getpriority|setpriority|sched_setparam|sched_getparam|sched_setscheduler|sched_getscheduler|sched_get_priority_max|sched_get_priority_min|sched_rr_get_interval|mlock|munlock|mlockall|munlockall
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5152, 43, 42), //pivot_root
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5155, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5154, 41, 40), //prctl
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5156, 40, 39), //setrlimit
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5178, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5172, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5158, 37, 36), //sync
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5173, 36, 35), //quotactl
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5193, 35, 34), //gettid|readahead|setxattr|lsetxattr|fsetxattr|getxattr|lgetxattr|fgetxattr|listxattr|llistxattr|flistxattr|removexattr|lremovexattr|fremovexattr|tkill
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5211, 5, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5208, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5200, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5198, 31, 30), //futex|sched_setaffinity|sched_getaffinity|cacheflush
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5206, 30, 29), //io_setup|io_destroy|io_getevents|io_submit|io_cancel|exit_group
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5209, 29, 28), //epoll_ctl
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5222, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5215, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5214, 26, 25), //rt_sigreturn|set_tid_address|restart_syscall
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5221, 25, 24), //fadvise64|timer_create|timer_settime|timer_gettime|timer_getoverrun|timer_delete
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5226, 24, 23), //clock_gettime|clock_getres|clock_nanosleep|tgkill
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5279, 11, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5247, 5, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5244, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5242, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5238, 19, 18), //waitid
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5243, 18, 17), //set_thread_area
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5246, 17, 16), //inotify_add_watch|inotify_rm_watch
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5271, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5252, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5251, 14, 13), //openat|mkdirat|mknodat|fchownat
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5267, 13, 12), //newfstatat|unlinkat|renameat|linkat|symlinkat|readlinkat|fchmodat|faccessat|pselect6|ppoll|unshare|splice|sync_file_range|tee|vmsplice
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5276, 12, 11), //getcpu|epoll_pwait|ioprio_set|ioprio_get|utimensat
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5308, 5, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5301, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5297, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5295, 8, 7), //fallocate|timerfd_create|timerfd_gettime|timerfd_settime|signalfd4|eventfd2|epoll_create1|dup3|pipe2|inotify_init1|preadv|pwritev|rt_tgsigqueueinfo|perf_event_open|accept4|recvmmsg
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5298, 7, 6), //prlimit64
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5306, 6, 5), //syncfs|sendmmsg|setns|process_vm_readv|process_vm_writev
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5319, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5316, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5315, 3, 2), //getdents64|sched_setattr|sched_getattr|renameat2|seccomp|getrandom|memfd_create
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5317, 2, 1), //execveat
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5323, 1, 0), //mlock2|copy_file_range|preadv2|pwritev2
BPF_STMT(BPF_RET|BPF_K, SECCOMP_RET_ALLOW),
};

const size_t mips64_app_filter_size = sizeof(mips64_app_filter) / sizeof(struct sock_filter);