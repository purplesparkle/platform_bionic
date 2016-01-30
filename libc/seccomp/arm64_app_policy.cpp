// Autogenerated file - edit at your peril!!

#include <linux/filter.h>
#include <errno.h>

#include "seccomp_bpfs.h"
const sock_filter arm64_app_filter[] = {
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 0, 0, 58),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 160, 29, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 107, 15, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 52, 7, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 41, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 19, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 18, 52, 51), //io_setup|io_destroy|io_submit|io_cancel|io_getevents|setxattr|lsetxattr|fsetxattr|getxattr|lgetxattr|fgetxattr|listxattr|llistxattr|flistxattr|removexattr|lremovexattr|fremovexattr|getcwd
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 39, 51, 50), //eventfd2|epoll_create1|epoll_ctl|epoll_pwait|dup|dup3|fcntl|inotify_init1|inotify_add_watch|inotify_rm_watch|ioctl|ioprio_set|ioprio_get|flock|mknodat|mkdirat|unlinkat|symlinkat|linkat|renameat
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 43, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 42, 49, 48), //pivot_root
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 51, 48, 47), //statfs|fstatfs|truncate|ftruncate|fallocate|faccessat|chdir|fchdir
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 90, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 59, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 58, 45, 44), //fchmod|fchmodat|fchownat|fchown|openat|close
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 89, 44, 43), //pipe2|quotactl|getdents64|lseek|read|write|readv|writev|pread64|pwrite64|preadv|pwritev|sendfile|pselect6|ppoll|signalfd4|vmsplice|splice|tee|readlinkat|newfstatat|fstat|sync|fsync|fdatasync|sync_file_range|timerfd_create|timerfd_settime|timerfd_gettime|utimensat
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 101, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 99, 42, 41), //capget|capset|personality|exit|exit_group|waitid|set_tid_address|unshare|futex
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 104, 41, 40), //nanosleep|getitimer|setitimer
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 147, 7, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 117, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 113, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 112, 37, 36), //timer_create|timer_gettime|timer_getoverrun|timer_settime|timer_delete
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 116, 36, 35), //clock_gettime|clock_getres|clock_nanosleep
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 143, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 142, 34, 33), //ptrace|sched_setparam|sched_setscheduler|sched_getscheduler|sched_getparam|sched_setaffinity|sched_getaffinity|sched_yield|sched_get_priority_max|sched_get_priority_min|sched_rr_get_interval|restart_syscall|kill|tkill|tgkill|sigaltstack|rt_sigsuspend|rt_sigaction|rt_sigprocmask|rt_sigpending|rt_sigtimedwait|rt_sigqueueinfo|rt_sigreturn|setpriority|getpriority
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 144, 33, 32), //setregid
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 153, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 150, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 149, 30, 29), //setresuid|getresuid
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 151, 29, 28), //getresgid
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 159, 28, 27), //times|setpgid|getpgid|getsid|setsid|getgroups
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 226, 13, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 203, 7, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 172, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 163, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 161, 23, 22), //uname
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 170, 22, 21), //getrlimit|setrlimit|getrusage|umask|prctl|getcpu|gettimeofday
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 198, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 180, 20, 19), //getpid|getppid|getuid|geteuid|getgid|getegid|gettid|sysinfo
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 202, 19, 18), //socket|socketpair|bind|listen
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 220, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 215, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 214, 16, 15), //connect|getsockname|getpeername|sendto|recvfrom|setsockopt|getsockopt|shutdown|sendmsg|recvmsg|readahead
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 217, 15, 14), //munmap|mremap
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 224, 14, 13), //clone|execve|mmap|fadvise64
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 274, 7, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 260, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 240, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 234, 10, 9), //mprotect|msync|mlock|munlock|mlockall|munlockall|mincore|madvise
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 244, 9, 8), //rt_tgsigqueueinfo|perf_event_open|accept4|recvmmsg
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 267, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 262, 7, 6), //wait4|prlimit64
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 272, 6, 5), //syncfs|setns|sendmmsg|process_vm_readv|process_vm_writev
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 284, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 281, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 280, 3, 2), //sched_setattr|sched_getattr|renameat2|seccomp|getrandom|memfd_create
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 282, 2, 1), //execveat
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 288, 1, 0), //mlock2|copy_file_range|preadv2|pwritev2
BPF_STMT(BPF_RET|BPF_K, SECCOMP_RET_ALLOW),
};

const size_t arm64_app_filter_size = sizeof(arm64_app_filter) / sizeof(struct sock_filter);