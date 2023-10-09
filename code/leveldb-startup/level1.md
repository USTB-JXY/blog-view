# 链接库等
execve("./level1", ["./level1"], 0x7ffcecd21b40 /* 47 vars */) = 0
brk(NULL)                               = 0x5650aebf6000
arch_prctl(0x3001 /* ARCH_??? */, 0x7fff4b2c4ee0) = -1 EINVAL (Invalid argument)
mmap(NULL, 8192, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0) = 0x7f9ebaf3b000
access("/etc/ld.so.preload", R_OK)      = -1 ENOENT (No such file or directory)
openat(AT_FDCWD, "/etc/ld.so.cache", O_RDONLY|O_CLOEXEC) = 3
newfstatat(3, "", {st_mode=S_IFREG|0644, st_size=57131, ...}, AT_EMPTY_PATH) = 0
mmap(NULL, 57131, PROT_READ, MAP_PRIVATE, 3, 0) = 0x7f9ebaf2d000
close(3)                                = 0
openat(AT_FDCWD, "/lib/x86_64-linux-gnu/liblsan.so.0", O_RDONLY|O_CLOEXEC) = 3
read(3, "\177ELF\2\1\1\0\0\0\0\0\0\0\0\0\3\0>\0\1\0\0\0\0\0\0\0\0\0\0\0"..., 832) = 832
newfstatat(3, "", {st_mode=S_IFREG|0644, st_size=3015512, ...}, AT_EMPTY_PATH) = 0
mmap(NULL, 6001000, PROT_READ, MAP_PRIVATE|MAP_DENYWRITE, 3, 0) = 0x7f9eba800000
mmap(0x7f9eba807000, 278528, PROT_READ|PROT_EXEC, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0x7000) = 0x7f9eba807000
mmap(0x7f9eba84b000, 98304, PROT_READ, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0x4b000) = 0x7f9eba84b000
mmap(0x7f9eba863000, 20480, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0x62000) = 0x7f9eba863000
mmap(0x7f9eba868000, 5575016, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_ANONYMOUS, -1, 0) = 0x7f9eba868000
close(3)                                = 0
openat(AT_FDCWD, "/lib/x86_64-linux-gnu/libstdc++.so.6", O_RDONLY|O_CLOEXEC) = 3
read(3, "\177ELF\2\1\1\3\0\0\0\0\0\0\0\0\3\0>\0\1\0\0\0\0\0\0\0\0\0\0\0"..., 832) = 832
newfstatat(3, "", {st_mode=S_IFREG|0644, st_size=2260296, ...}, AT_EMPTY_PATH) = 0
mmap(NULL, 2275520, PROT_READ, MAP_PRIVATE|MAP_DENYWRITE, 3, 0) = 0x7f9eba400000
mprotect(0x7f9eba49a000, 1576960, PROT_NONE) = 0
mmap(0x7f9eba49a000, 1118208, PROT_READ|PROT_EXEC, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0x9a000) = 0x7f9eba49a000
mmap(0x7f9eba5ab000, 454656, PROT_READ, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0x1ab000) = 0x7f9eba5ab000
mmap(0x7f9eba61b000, 57344, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0x21a000) = 0x7f9eba61b000
mmap(0x7f9eba629000, 10432, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_ANONYMOUS, -1, 0) = 0x7f9eba629000
close(3)                                = 0
openat(AT_FDCWD, "/lib/x86_64-linux-gnu/libm.so.6", O_RDONLY|O_CLOEXEC) = 3
read(3, "\177ELF\2\1\1\3\0\0\0\0\0\0\0\0\3\0>\0\1\0\0\0\0\0\0\0\0\0\0\0"..., 832) = 832
newfstatat(3, "", {st_mode=S_IFREG|0644, st_size=940560, ...}, AT_EMPTY_PATH) = 0
mmap(NULL, 942344, PROT_READ, MAP_PRIVATE|MAP_DENYWRITE, 3, 0) = 0x7f9ebae46000
mmap(0x7f9ebae54000, 507904, PROT_READ|PROT_EXEC, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0xe000) = 0x7f9ebae54000
mmap(0x7f9ebaed0000, 372736, PROT_READ, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0x8a000) = 0x7f9ebaed0000
mmap(0x7f9ebaf2b000, 8192, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0xe4000) = 0x7f9ebaf2b000
close(3)                                = 0
openat(AT_FDCWD, "/lib/x86_64-linux-gnu/libgcc_s.so.1", O_RDONLY|O_CLOEXEC) = 3
read(3, "\177ELF\2\1\1\0\0\0\0\0\0\0\0\0\3\0>\0\1\0\0\0\0\0\0\0\0\0\0\0"..., 832) = 832
newfstatat(3, "", {st_mode=S_IFREG|0644, st_size=125488, ...}, AT_EMPTY_PATH) = 0
mmap(NULL, 127720, PROT_READ, MAP_PRIVATE|MAP_DENYWRITE, 3, 0) = 0x7f9ebae26000
mmap(0x7f9ebae29000, 94208, PROT_READ|PROT_EXEC, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0x3000) = 0x7f9ebae29000
mmap(0x7f9ebae40000, 16384, PROT_READ, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0x1a000) = 0x7f9ebae40000
mmap(0x7f9ebae44000, 8192, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0x1d000) = 0x7f9ebae44000
close(3)                                = 0
openat(AT_FDCWD, "/lib/x86_64-linux-gnu/libc.so.6", O_RDONLY|O_CLOEXEC) = 3
read(3, "\177ELF\2\1\1\3\0\0\0\0\0\0\0\0\3\0>\0\1\0\0\0P\237\2\0\0\0\0\0"..., 832) = 832
pread64(3, "\6\0\0\0\4\0\0\0@\0\0\0\0\0\0\0@\0\0\0\0\0\0\0@\0\0\0\0\0\0\0"..., 784, 64) = 784
pread64(3, "\4\0\0\0 \0\0\0\5\0\0\0GNU\0\2\0\0\300\4\0\0\0\3\0\0\0\0\0\0\0"..., 48, 848) = 48
pread64(3, "\4\0\0\0\24\0\0\0\3\0\0\0GNU\0\"\233}\305\t\5?\344\337^)\350b\231\21\360"..., 68, 896) = 68
newfstatat(3, "", {st_mode=S_IFREG|0755, st_size=2216304, ...}, AT_EMPTY_PATH) = 0
pread64(3, "\6\0\0\0\4\0\0\0@\0\0\0\0\0\0\0@\0\0\0\0\0\0\0@\0\0\0\0\0\0\0"..., 784, 64) = 784
mmap(NULL, 2260560, PROT_READ, MAP_PRIVATE|MAP_DENYWRITE, 3, 0) = 0x7f9eba000000
mmap(0x7f9eba028000, 1658880, PROT_READ|PROT_EXEC, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0x28000) = 0x7f9eba028000
mmap(0x7f9eba1bd000, 360448, PROT_READ, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0x1bd000) = 0x7f9eba1bd000
mmap(0x7f9eba215000, 24576, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0x214000) = 0x7f9eba215000
mmap(0x7f9eba21b000, 52816, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_ANONYMOUS, -1, 0) = 0x7f9eba21b000
close(3)                                = 0
mmap(NULL, 8192, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0) = 0x7f9ebae24000
mmap(NULL, 65536, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0) = 0x7f9ebae14000
arch_prctl(ARCH_SET_FS, 0x7f9ebae22300) = 0
set_tid_address(0x7f9ebae225d0)         = 14913
set_robust_list(0x7f9ebae225e0, 24)     = 0
rseq(0x7f9ebae22ca0, 0x20, 0, 0x53053053) = 0
mprotect(0x7f9eba215000, 16384, PROT_READ) = 0
mprotect(0x7f9ebae44000, 4096, PROT_READ) = 0
mprotect(0x7f9ebaf2b000, 4096, PROT_READ) = 0
mmap(NULL, 8192, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0) = 0x7f9ebae12000
mprotect(0x7f9eba61b000, 45056, PROT_READ) = 0
mprotect(0x7f9eba863000, 8192, PROT_READ) = 0
mprotect(0x5650ad70e000, 8192, PROT_READ) = 0
mprotect(0x7f9ebaf75000, 8192, PROT_READ) = 0
prlimit64(0, RLIMIT_STACK, NULL, {rlim_cur=8192*1024, rlim_max=RLIM64_INFINITY}) = 0
munmap(0x7f9ebaf2d000, 57131)           = 0
readlink("/proc/self/exe", "/home/git-jxy/blog-view/code/lev"..., 4096) = 51
mmap(NULL, 4096, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0) = 0x7f9ebaf74000
open("/proc/self/cmdline", O_RDONLY)    = 3
read(3, "./level1\0", 4096)             = 9
read(3, "", 4087)                       = 0
close(3)                                = 0
munmap(0x7f9ebaf74000, 4096)            = 0
mmap(NULL, 4096, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0) = 0x7f9ebaf74000
open("/proc/self/environ", O_RDONLY)    = 3
read(3, "SHELL=/bin/bash\0COLORTERM=trueco"..., 4096) = 3269
read(3, "", 827)                        = 0
close(3)                                = 0
mmap(NULL, 8192, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0) = 0x7f9ebaf39000
mmap(NULL, 1179648, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0) = 0x7f9eba6e0000
mmap(NULL, 4096, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0) = 0x7f9ebaf38000
mmap(NULL, 2097152, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0) = 0x7f9eb9e00000
munmap(0x7f9eb9f00000, 1048576)         = 0
mmap(NULL, 4096, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0) = 0x7f9ebaf37000
mmap(NULL, 2097152, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0) = 0x7f9eb9c00000
munmap(0x7f9eb9d00000, 1048576)         = 0
mmap(NULL, 2097152, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0) = 0x7f9eb9a00000
munmap(0x7f9eb9b00000, 1048576)         = 0
munmap(0x7f9ebaf38000, 4096)            = 0
mmap(NULL, 4096, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0) = 0x7f9ebaf38000
mmap(NULL, 2097152, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0) = 0x7f9eb9800000
munmap(0x7f9eb9900000, 1048576)         = 0
munmap(0x7f9ebaf38000, 4096)            = 0
mmap(NULL, 4096, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0) = 0x7f9ebaf38000
munmap(0x7f9ebaf38000, 4096)            = 0
mmap(NULL, 4096, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0) = 0x7f9ebaf38000
munmap(0x7f9ebaf38000, 4096)            = 0
mmap(NULL, 4096, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0) = 0x7f9ebaf38000
mmap(NULL, 2097152, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0) = 0x7f9eb9600000
munmap(0x7f9eb9700000, 1048576)         = 0
mmap(NULL, 2097152, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0) = 0x7f9eb9400000
munmap(0x7f9eb9500000, 1048576)         = 0
munmap(0x7f9ebaf38000, 4096)            = 0
mmap(NULL, 4096, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0) = 0x7f9ebaf38000
munmap(0x7f9ebaf38000, 4096)            = 0
mmap(NULL, 4096, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0) = 0x7f9ebaf38000
munmap(0x7f9ebaf38000, 4096)            = 0
mmap(NULL, 4096, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0) = 0x7f9ebaf38000
munmap(0x7f9ebaf38000, 4096)            = 0
mmap(0x600000000000, 4398046519296, PROT_NONE, MAP_PRIVATE|MAP_FIXED|MAP_ANONYMOUS|MAP_NORESERVE, -1, 0) = 0x600000000000
mmap(0x640000000000, 8192, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_ANONYMOUS, -1, 0) = 0x640000000000
mmap(NULL, 8388608, PROT_NONE, MAP_PRIVATE|MAP_ANONYMOUS|MAP_NORESERVE, -1, 0) = 0x7f9eb8c00000
sigaltstack(NULL, {ss_sp=NULL, ss_flags=SS_DISABLE, ss_size=0}) = 0
mmap(NULL, 57344, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0) = 0x7f9ebae04000
sigaltstack({ss_sp=0x7f9ebae04000, ss_flags=0, ss_size=54016}, NULL) = 0
rt_sigaction(SIGSEGV, {sa_handler=0x7f9eba814ee0, sa_mask=[], sa_flags=SA_RESTORER|SA_ONSTACK|SA_NODEFER|SA_SIGINFO, sa_restorer=0x7f9eba042520}, NULL, 8) = 0
rt_sigaction(SIGBUS, {sa_handler=0x7f9eba814ee0, sa_mask=[], sa_flags=SA_RESTORER|SA_ONSTACK|SA_NODEFER|SA_SIGINFO, sa_restorer=0x7f9eba042520}, NULL, 8) = 0
rt_sigaction(SIGFPE, {sa_handler=0x7f9eba814ee0, sa_mask=[], sa_flags=SA_RESTORER|SA_ONSTACK|SA_NODEFER|SA_SIGINFO, sa_restorer=0x7f9eba042520}, NULL, 8) = 0
mmap(NULL, 4096, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0) = 0x7f9ebaf38000
mmap(NULL, 4096, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0) = 0x7f9ebaf36000
gettid()                                = 14913
prlimit64(0, RLIMIT_STACK, NULL, {rlim_cur=8192*1024, rlim_max=RLIM64_INFINITY}) = 0
mmap(NULL, 4096, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0) = 0x7f9ebaf35000
open("/proc/self/maps", O_RDONLY)       = 3
read(3, "5650ad6a7000-5650ad6ac000 r--p 0"..., 4096) = 4042
read(3, "7f9ebaf2b000-7f9ebaf2c000 r--p 0"..., 54) = 54
close(3)                                = 0
munmap(0x7f9ebaf35000, 4096)            = 0
mmap(NULL, 8192, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0) = 0x7f9ebaf34000
open("/proc/self/maps", O_RDONLY)       = 3
read(3, "5650ad6a7000-5650ad6ac000 r--p 0"..., 8192) = 4042
read(3, "7f9ebaf2b000-7f9ebaf2c000 r--p 0"..., 4150) = 1241
read(3, "", 2909)                       = 0
close(3)                                = 0
mmap(NULL, 4096, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0) = 0x7f9ebaf33000
open("/proc/self/maps", O_RDONLY)       = 3
read(3, "5650ad6a7000-5650ad6ac000 r--p 0"..., 4096) = 4042
read(3, "7f9ebaf2b000-7f9ebaf2c000 r--p 0"..., 54) = 54
close(3)                                = 0
munmap(0x7f9ebaf33000, 4096)            = 0
mmap(NULL, 8192, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0) = 0x7f9ebaf32000
open("/proc/self/maps", O_RDONLY)       = 3
read(3, "5650ad6a7000-5650ad6ac000 r--p 0"..., 8192) = 4042
read(3, "7f9ebaf2b000-7f9ebaf2c000 r--p 0"..., 4150) = 1241
read(3, "", 2909)                       = 0
close(3)                                = 0
munmap(0x7f9ebaf32000, 8192)            = 0
mmap(0x631000000000, 131072, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_ANONYMOUS, -1, 0) = 0x631000000000
mmap(0x631dffff0000, 65536, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_ANONYMOUS, -1, 0) = 0x631dffff0000
mmap(0x631e00000000, 65536, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_ANONYMOUS, -1, 0) = 0x631e00000000
mmap(NULL, 1048576, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0) = 0x7f9eba300000
mmap(NULL, 65536, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0) = 0x7f9ebadf4000
mmap(NULL, 524288, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0) = 0x7f9eba660000
futex(0x7f9eba62977c, FUTEX_WAKE_PRIVATE, 2147483647) = 0
mmap(0x604000000000, 65536, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_ANONYMOUS, -1, 0) = 0x604000000000
mmap(0x604dffff0000, 65536, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_ANONYMOUS, -1, 0) = 0x604dffff0000
mmap(0x604e00000000, 65536, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_ANONYMOUS, -1, 0) = 0x604e00000000
mmap(0x614000000000, 65536, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_ANONYMOUS, -1, 0) = 0x614000000000
mmap(0x614dffff0000, 65536, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_ANONYMOUS, -1, 0) = 0x614dffff0000
mmap(0x614e00000000, 65536, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_ANONYMOUS, -1, 0) = 0x614e00000000
prlimit64(0, RLIMIT_NOFILE, NULL, {rlim_cur=1024*1024, rlim_max=1024*1024}) = 0
mmap(0x616000000000, 65536, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_ANONYMOUS, -1, 0) = 0x616000000000
mmap(0x616dffff0000, 65536, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_ANONYMOUS, -1, 0) = 0x616dffff0000
mmap(0x616e00000000, 65536, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_ANONYMOUS, -1, 0) = 0x616e00000000
# 创建目录 数据库文件
mkdir("testdb", 0755)                   = 0
rename("testdb/LOG", "testdb/LOG.old")  = -1 ENOENT (No such file or directory)
mmap(0x603000000000, 65536, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_ANONYMOUS, -1, 0) = 0x603000000000
mmap(0x603dffff0000, 65536, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_ANONYMOUS, -1, 0) = 0x603dffff0000
mmap(0x603e00000000, 65536, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_ANONYMOUS, -1, 0) = 0x603e00000000
openat(AT_FDCWD, "testdb/LOG", O_WRONLY|O_CREAT|O_APPEND|O_CLOEXEC, 0644) = 3
fcntl(3, F_GETFL)                       = 0x8401 (flags O_WRONLY|O_APPEND|O_LARGEFILE)
mmap(0x601000000000, 65536, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_ANONYMOUS, -1, 0) = 0x601000000000
mmap(0x601dffff0000, 65536, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_ANONYMOUS, -1, 0) = 0x601dffff0000
mmap(0x601e00000000, 65536, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_ANONYMOUS, -1, 0) = 0x601e00000000
mmap(0x61f000000000, 65536, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_ANONYMOUS, -1, 0) = 0x61f000000000
mmap(0x61fdffff0000, 65536, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_ANONYMOUS, -1, 0) = 0x61fdffff0000
mmap(0x61fe00000000, 65536, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_ANONYMOUS, -1, 0) = 0x61fe00000000
mmap(0x602000000000, 65536, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_ANONYMOUS, -1, 0) = 0x602000000000
mmap(0x602dffff0000, 65536, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_ANONYMOUS, -1, 0) = 0x602dffff0000
mmap(0x602e00000000, 65536, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_ANONYMOUS, -1, 0) = 0x602e00000000
mmap(0x615000000000, 65536, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_ANONYMOUS, -1, 0) = 0x615000000000
mmap(0x615dffff0000, 65536, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_ANONYMOUS, -1, 0) = 0x615dffff0000
mmap(0x615e00000000, 65536, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_ANONYMOUS, -1, 0) = 0x615e00000000
mmap(0x60f000000000, 65536, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_ANONYMOUS, -1, 0) = 0x60f000000000
mmap(0x60fdffff0000, 65536, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_ANONYMOUS, -1, 0) = 0x60fdffff0000
mmap(0x60fe00000000, 65536, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_ANONYMOUS, -1, 0) = 0x60fe00000000
mkdir("testdb", 0755)                   = -1 EEXIST (File exists)
openat(AT_FDCWD, "testdb/LOCK", O_RDWR|O_CREAT|O_CLOEXEC, 0644) = 4
fcntl(4, F_SETLK, {l_type=F_WRLCK, l_whence=SEEK_SET, l_start=0, l_len=0}) = 0
access("testdb/CURRENT", F_OK)          = -1 ENOENT (No such file or directory)
openat(AT_FDCWD, "/etc/localtime", O_RDONLY|O_CLOEXEC) = 5
newfstatat(5, "", {st_mode=S_IFREG|0644, st_size=561, ...}, AT_EMPTY_PATH) = 0
newfstatat(5, "", {st_mode=S_IFREG|0644, st_size=561, ...}, AT_EMPTY_PATH) = 0
mmap(0x620000000000, 65536, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_ANONYMOUS, -1, 0) = 0x620000000000
mmap(0x620dffff0000, 65536, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_ANONYMOUS, -1, 0) = 0x620dffff0000
mmap(0x620e00000000, 65536, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_ANONYMOUS, -1, 0) = 0x620e00000000
read(5, "TZif2\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"..., 4096) = 561
lseek(5, -342, SEEK_CUR)                = 219
read(5, "TZif2\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"..., 4096) = 342
mmap(0x611000000000, 65536, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_ANONYMOUS, -1, 0) = 0x611000000000
mmap(0x611dffff0000, 65536, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_ANONYMOUS, -1, 0) = 0x611dffff0000
mmap(0x611e00000000, 65536, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_ANONYMOUS, -1, 0) = 0x611e00000000
close(5)                                = 0
newfstatat(3, "", {st_mode=S_IFREG|0644, st_size=0, ...}, AT_EMPTY_PATH) = 0
write(3, "2023/10/04-20:05:30.354366 14031"..., 84) = 84
openat(AT_FDCWD, "testdb/MANIFEST-000001", O_WRONLY|O_CREAT|O_TRUNC|O_CLOEXEC, 0644) = 5
mmap(0x631000020000, 65536, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_ANONYMOUS, -1, 0) = 0x631000020000
write(5, "\225|\271\305\"\0\1\1\32leveldb.BytewiseCompara"..., 41) = 41
openat(AT_FDCWD, "testdb", O_RDONLY|O_CLOEXEC) = 6
fdatasync(6)                            = 0
close(6)                                = 0
fdatasync(5)                            = 0
close(5)                                = 0
openat(AT_FDCWD, "testdb/000001.dbtmp", O_WRONLY|O_CREAT|O_TRUNC|O_CLOEXEC, 0644) = 5
write(5, "MANIFEST-000001\n", 16)       = 16
fdatasync(5)                            = 0
close(5)                                = 0
rename("testdb/000001.dbtmp", "testdb/CURRENT") = 0
openat(AT_FDCWD, "testdb/CURRENT", O_RDONLY|O_CLOEXEC) = 5
mmap(0x624000000000, 65536, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_ANONYMOUS, -1, 0) = 0x624000000000
mmap(0x624dffff0000, 65536, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_ANONYMOUS, -1, 0) = 0x624dffff0000
mmap(0x624e00000000, 65536, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_ANONYMOUS, -1, 0) = 0x624e00000000
read(5, "MANIFEST-000001\n", 8192)      = 16
read(5, "", 8192)                       = 0
close(5)                                = 0
openat(AT_FDCWD, "testdb/MANIFEST-000001", O_RDONLY|O_CLOEXEC) = 5
mmap(0x62c000000000, 65536, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_ANONYMOUS, -1, 0) = 0x62c000000000
mmap(0x62cdffff0000, 65536, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_ANONYMOUS, -1, 0) = 0x62cdffff0000
mmap(0x62ce00000000, 65536, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_ANONYMOUS, -1, 0) = 0x62ce00000000
read(5, "\225|\271\305\"\0\1\1\32leveldb.BytewiseCompara"..., 32768) = 41
close(5)                                = 0
openat(AT_FDCWD, "testdb", O_RDONLY|O_NONBLOCK|O_CLOEXEC|O_DIRECTORY) = 5
newfstatat(5, "", {st_mode=S_IFDIR|0755, st_size=4096, ...}, AT_EMPTY_PATH) = 0
mmap(0x62d000000000, 65536, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_ANONYMOUS, -1, 0) = 0x62d000000000
mmap(0x62ddffff0000, 65536, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_ANONYMOUS, -1, 0) = 0x62ddffff0000
mmap(0x62de00000000, 65536, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_ANONYMOUS, -1, 0) = 0x62de00000000
getdents64(5, 0x62d000000030 /* 6 entries */, 32768) = 168
mmap(0x608000000000, 65536, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_ANONYMOUS, -1, 0) = 0x608000000000
mmap(0x608dffff0000, 65536, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_ANONYMOUS, -1, 0) = 0x608dffff0000
mmap(0x608e00000000, 65536, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_ANONYMOUS, -1, 0) = 0x608e00000000
mmap(0x610000000000, 65536, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_ANONYMOUS, -1, 0) = 0x610000000000
mmap(0x610dffff0000, 65536, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_ANONYMOUS, -1, 0) = 0x610dffff0000
mmap(0x610e00000000, 65536, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_ANONYMOUS, -1, 0) = 0x610e00000000
getdents64(5, 0x62d000000030 /* 0 entries */, 32768) = 0
close(5)                                = 0
openat(AT_FDCWD, "testdb/000003.log", O_WRONLY|O_CREAT|O_TRUNC|O_CLOEXEC, 0644) = 5
mmap(0x607000000000, 65536, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_ANONYMOUS, -1, 0) = 0x607000000000
mmap(0x607dffff0000, 65536, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_ANONYMOUS, -1, 0) = 0x607dffff0000
mmap(0x607e00000000, 65536, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_ANONYMOUS, -1, 0) = 0x607e00000000
openat(AT_FDCWD, "testdb/MANIFEST-000002", O_WRONLY|O_CREAT|O_TRUNC|O_CLOEXEC, 0644) = 6
mmap(0x631000030000, 65536, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_ANONYMOUS, -1, 0) = 0x631000030000
write(6, "V\371\270\370\34\0\1\1\32leveldb.BytewiseCompara"..., 35) = 35
write(6, "\244\234\213\276\10\0\1\2\3\t\0\3\4\4\0", 15) = 15
openat(AT_FDCWD, "testdb", O_RDONLY|O_CLOEXEC) = 7
fdatasync(7)                            = 0
close(7)                                = 0
fdatasync(6)                            = 0
openat(AT_FDCWD, "testdb/000002.dbtmp", O_WRONLY|O_CREAT|O_TRUNC|O_CLOEXEC, 0644) = 7
mmap(0x631000040000, 65536, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_ANONYMOUS, -1, 0) = 0x631000040000
write(7, "MANIFEST-000002\n", 16)       = 16
fdatasync(7)                            = 0
close(7)                                = 0
rename("testdb/000002.dbtmp", "testdb/CURRENT") = 0
openat(AT_FDCWD, "testdb", O_RDONLY|O_NONBLOCK|O_CLOEXEC|O_DIRECTORY) = 7
newfstatat(7, "", {st_mode=S_IFDIR|0755, st_size=4096, ...}, AT_EMPTY_PATH) = 0
getdents64(7, 0x62d000000030 /* 8 entries */, 32768) = 240
getdents64(7, 0x62d000000030 /* 0 entries */, 32768) = 0
close(7)                                = 0
write(3, "2023/10/04-20:05:30.362214 14031"..., 60) = 60
unlink("testdb/MANIFEST-000001")        = 0
write(5, "\5\273w\204\31\0\1\1\0\0\0\0\0\0\0\1\0\0\0\1\4key1\6value1", 32) = 32
write(5, "\227\217\4T\31\0\1\2\0\0\0\0\0\0\0\1\0\0\0\1\4key2\6value2", 32) = 32
newfstatat(1, "", {st_mode=S_IFREG|0644, st_size=22089, ...}, AT_EMPTY_PATH) = 0
write(1, "Value for key key1: value1\n", 27Value for key key1: value1
) = 27
write(1, "Value for key key2: value2\n", 27Value for key key2: value2
) = 27
fcntl(4, F_SETLK, {l_type=F_UNLCK, l_whence=SEEK_SET, l_start=0, l_len=0}) = 0
close(4)                                = 0
close(6)                                = 0
close(5)                                = 0
close(3)                                = 0
gettid()                                = 14913
prctl(PR_GET_DUMPABLE)                  = 1 (SUID_DUMP_USER)
getpid()                                = 14913
mmap(NULL, 2101248, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0) = 0x7f9eb89ff000
mprotect(0x7f9eb89ff000, 4096, PROT_NONE) = 0
rt_sigprocmask(SIG_BLOCK, ~[ILL ABRT BUS FPE SEGV XCPU XFSZ], [], 8) = 0
clone(child_stack=0x7f9eb8bffff0, flags=CLONE_VM|CLONE_FS|CLONE_FILES|CLONE_UNTRACED) = 14914
rt_sigprocmask(SIG_SETMASK, [], NULL, 8) = 0
getpid()                                = 14913
prctl(PR_SET_PTRACER, 14914)            = 0
futex(0x7fff4b2c4c18, FUTEX_WAKE_PRIVATE, 1) = 1
sched_yield()                           = 0
wait4(14914, NULL, __WALL, NULL)        = 14914
munmap(0x7f9eb89ff000, 2101248)         = 0
getpid()                                = 14913
write(2, "==14913==LeakSanitizer has encou"..., 54==14913==LeakSanitizer has encountered a fatal error.
) = 54
getpid()                                = 14913
write(2, "==14913==HINT: For debugging, tr"..., 102==14913==HINT: For debugging, try setting environment variable LSAN_OPTIONS=verbosity=1:log_threads=1
) = 102
getpid()                                = 14913
write(2, "==14913==HINT: LeakSanitizer doe"..., 75==14913==HINT: LeakSanitizer does not work under ptrace (strace, gdb, etc)
) = 75
exit_group(23)                          = ?
+++ exited with 23 +++
