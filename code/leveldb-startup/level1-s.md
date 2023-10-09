# 创建目录 数据库文件
mkdir("testdb", 0755)                   = 0
rename("testdb/LOG", "testdb/LOG.old")  = -1 ENOENT (No such file or directory)

openat(AT_FDCWD, "testdb/LOG", O_WRONLY|O_CREAT|O_APPEND|O_CLOEXEC, 0644) = 3
fcntl(3, F_GETFL)                       = 0x8401 (flags O_WRONLY|O_APPEND|O_LARGEFILE)

mkdir("testdb", 0755)                   = -1 EEXIST (File exists)
openat(AT_FDCWD, "testdb/LOCK", O_RDWR|O_CREAT|O_CLOEXEC, 0644) = 4
fcntl(4, F_SETLK, {l_type=F_WRLCK, l_whence=SEEK_SET, l_start=0, l_len=0}) = 0
access("testdb/CURRENT", F_OK)          = -1 ENOENT (No such file or directory)

openat(AT_FDCWD, "/etc/localtime", O_RDONLY|O_CLOEXEC) = 5
newfstatat(5, "", {st_mode=S_IFREG|0644, st_size=561, ...}, AT_EMPTY_PATH) = 0
newfstatat(5, "", {st_mode=S_IFREG|0644, st_size=561, ...}, AT_EMPTY_PATH) = 0
read(5, "TZif2\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"..., 4096) = 561
lseek(5, -342, SEEK_CUR)                = 219
read(5, "TZif2\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"..., 4096) = 342
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
