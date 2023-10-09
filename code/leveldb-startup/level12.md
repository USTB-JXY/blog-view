
mkdir("testdb", 0755)                   = 0
rename("testdb/LOG", "testdb/LOG.old")  = -1 ENOENT (No such file or directory)

openat(AT_FDCWD, "testdb/LOG", O_WRONLY|O_CREAT|O_APPEND|O_CLOEXEC, 0644) = 3
fcntl(3, F_GETFL)                       = 0x8401 (flags O_WRONLY|O_APPEND|O_LARGEFILE)

mkdir("testdb", 0755)                   = -1 EEXIST (File exists)
openat(AT_FDCWD, "testdb/LOCK", O_RDWR|O_CREAT|O_CLOEXEC, 0644) = 4
fcntl(4, F_SETLK, {l_type=F_WRLCK, l_whence=SEEK_SET, l_start=0, l_len=0}) = 0
access("testdb/CURRENT", F_OK)          = -1 ENOENT (No such file or directory)
openat(AT_FDCWD, "/etc/localtime", O_RDONLY|O_CLOEXEC) = 5
newfstatat(5, "", {st_dev=makedev(0x8, 0x3), st_ino=7738475, st_mode=S_IFREG|0644, st_nlink=1, st_uid=0, st_gid=0, st_blksize=4096, st_blocks=8, st_size=561, st_atime=1696341085 /* 2023-10-03T21:51:25.033780417+0800 */, st_atime_nsec=33780417, st_mtime=1684538816 /* 2023-05-20T07:26:56+0800 */, st_mtime_nsec=0, st_ctime=1696077290 /* 2023-09-30T20:34:50.636245265+0800 */, st_ctime_nsec=636245265}, AT_EMPTY_PATH) = 0
newfstatat(5, "", {st_dev=makedev(0x8, 0x3), st_ino=7738475, st_mode=S_IFREG|0644, st_nlink=1, st_uid=0, st_gid=0, st_blksize=4096, st_blocks=8, st_size=561, st_atime=1696341085 /* 2023-10-03T21:51:25.033780417+0800 */, st_atime_nsec=33780417, st_mtime=1684538816 /* 2023-05-20T07:26:56+0800 */, st_mtime_nsec=0, st_ctime=1696077290 /* 2023-09-30T20:34:50.636245265+0800 */, st_ctime_nsec=636245265}, AT_EMPTY_PATH) = 0

read(5, "TZif2\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"..., 4096) = 561
lseek(5, -342, SEEK_CUR)                = 219
read(5, "TZif2\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"..., 4096) = 342

close(5)                                = 0
newfstatat(3, "", {st_dev=makedev(0x8, 0x3), st_ino=1717947, st_mode=S_IFREG|0644, st_nlink=1, st_uid=0, st_gid=0, st_blksize=4096, st_blocks=0, st_size=0, st_atime=1696423352 /* 2023-10-04T20:42:32.315088852+0800 */, st_atime_nsec=315088852, st_mtime=1696423352 /* 2023-10-04T20:42:32.315088852+0800 */, st_mtime_nsec=315088852, st_ctime=1696423352 /* 2023-10-04T20:42:32.315088852+0800 */, st_ctime_nsec=315088852}, AT_EMPTY_PATH) = 0
write(3, "2023/10/04-20:42:32.319447 14058"..., 84) = 84
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
newfstatat(5, "", {st_dev=makedev(0x8, 0x3), st_ino=1717946, st_mode=S_IFDIR|0755, st_nlink=2, st_uid=0, st_gid=0, st_blksize=4096, st_blocks=8, st_size=4096, st_atime=1696423352 /* 2023-10-04T20:42:32.311088911+0800 */, st_atime_nsec=311088911, st_mtime=1696423352 /* 2023-10-04T20:42:32.319088793+0800 */, st_mtime_nsec=319088793, st_ctime=1696423352 /* 2023-10-04T20:42:32.319088793+0800 */, st_ctime_nsec=319088793}, AT_EMPTY_PATH) = 0
mmap(0x62d000000000, 65536, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_ANONYMOUS, -1, 0) = 0x62d000000000
mmap(0x62ddffff0000, 65536, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_ANONYMOUS, -1, 0) = 0x62ddffff0000
mmap(0x62de00000000, 65536, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_ANONYMOUS, -1, 0) = 0x62de00000000
getdents64(5, [{d_ino=1717940, d_off=1420281158766783016, d_reclen=24, d_type=DT_DIR, d_name=".."}, {d_ino=1717950, d_off=5852529720890549475, d_reclen=40, d_type=DT_REG, d_name="MANIFEST-000001"}, {d_ino=1717947, d_off=7674594917386126506, d_reclen=24, d_type=DT_REG, d_name="LOG"}, {d_ino=1717946, d_off=7964572430136927093, d_reclen=24, d_type=DT_DIR, d_name="."}, {d_ino=1717951, d_off=8846557995649461253, d_reclen=32, d_type=DT_REG, d_name="CURRENT"}, {d_ino=1717949, d_off=9223372036854775807, d_reclen=24, d_type=DT_REG, d_name="LOCK"}], 32768) = 168
mmap(0x608000000000, 65536, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_ANONYMOUS, -1, 0) = 0x608000000000
mmap(0x608dffff0000, 65536, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_ANONYMOUS, -1, 0) = 0x608dffff0000
mmap(0x608e00000000, 65536, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_ANONYMOUS, -1, 0) = 0x608e00000000
mmap(0x610000000000, 65536, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_ANONYMOUS, -1, 0) = 0x610000000000
mmap(0x610dffff0000, 65536, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_ANONYMOUS, -1, 0) = 0x610dffff0000
mmap(0x610e00000000, 65536, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_ANONYMOUS, -1, 0) = 0x610e00000000
getdents64(5, [], 32768)                = 0
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
newfstatat(7, "", {st_dev=makedev(0x8, 0x3), st_ino=1717946, st_mode=S_IFDIR|0755, st_nlink=2, st_uid=0, st_gid=0, st_blksize=4096, st_blocks=8, st_size=4096, st_atime=1696423352 /* 2023-10-04T20:42:32.319088793+0800 */, st_atime_nsec=319088793, st_mtime=1696423352 /* 2023-10-04T20:42:32.323088734+0800 */, st_mtime_nsec=323088734, st_ctime=1696423352 /* 2023-10-04T20:42:32.323088734+0800 */, st_ctime_nsec=323088734}, AT_EMPTY_PATH) = 0
getdents64(7, [{d_ino=1717940, d_off=1420281158766783016, d_reclen=24, d_type=DT_DIR, d_name=".."}, {d_ino=1717950, d_off=3951558940983613031, d_reclen=40, d_type=DT_REG, d_name="MANIFEST-000001"}, {d_ino=1717952, d_off=5852529720890549475, d_reclen=32, d_type=DT_REG, d_name="000003.log"}, {d_ino=1717947, d_off=7674594917386126506, d_reclen=24, d_type=DT_REG, d_name="LOG"}, {d_ino=1717946, d_off=7964572430136927093, d_reclen=24, d_type=DT_DIR, d_name="."}, {d_ino=1717954, d_off=8699494478177071992, d_reclen=32, d_type=DT_REG, d_name="CURRENT"}, {d_ino=1717953, d_off=8846557995649461253, d_reclen=40, d_type=DT_REG, d_name="MANIFEST-000002"}, {d_ino=1717949, d_off=9223372036854775807, d_reclen=24, d_type=DT_REG, d_name="LOCK"}], 32768) = 240
getdents64(7, [], 32768)                = 0
close(7)                                = 0
write(3, "2023/10/04-20:42:32.328147 14058"..., 60) = 60
unlink("testdb/MANIFEST-000001")        = 0
write(5, "\5\273w\204\31\0\1\1\0\0\0\0\0\0\0\1\0\0\0\1\4key1\6value1", 32) = 32
write(5, "\227\217\4T\31\0\1\2\0\0\0\0\0\0\0\1\0\0\0\1\4key2\6value2", 32) = 32
newfstatat(1, "", {st_dev=makedev(0x8, 0x3), st_ino=1717945, st_mode=S_IFREG|0644, st_nlink=1, st_uid=0, st_gid=0, st_blksize=4096, st_blocks=56, st_size=28411, st_atime=1696423352 /* 2023-10-04T20:42:32.299089088+0800 */, st_atime_nsec=299089088, st_mtime=1696423352 /* 2023-10-04T20:42:32.323088734+0800 */, st_mtime_nsec=323088734, st_ctime=1696423352 /* 2023-10-04T20:42:32.323088734+0800 */, st_ctime_nsec=323088734}, AT_EMPTY_PATH) = 0
write(1, "Value for key key1: value1\n", 27Value for key key1: value1
) = 27
write(1, "Value for key key2: value2\n", 27Value for key key2: value2
) = 27
fcntl(4, F_SETLK, {l_type=F_UNLCK, l_whence=SEEK_SET, l_start=0, l_len=0}) = 0
close(4)                                = 0
close(6)                                = 0
close(5)                                = 0
close(3)                                = 0
gettid()                                = 15171
prctl(PR_GET_DUMPABLE)                  = 1 (SUID_DUMP_USER)
getpid()                                = 15171
mmap(NULL, 2101248, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0) = 0x7fdb5b7ff000
mprotect(0x7fdb5b7ff000, 4096, PROT_NONE) = 0
rt_sigprocmask(SIG_BLOCK, ~[ILL ABRT BUS FPE SEGV XCPU XFSZ], [], 8) = 0
clone(child_stack=0x7fdb5b9ffff0, flags=CLONE_VM|CLONE_FS|CLONE_FILES|CLONE_UNTRACED) = 15172
rt_sigprocmask(SIG_SETMASK, [], NULL, 8) = 0
getpid()                                = 15171
prctl(PR_SET_PTRACER, 15172)            = 0
futex(0x7ffe8b7ddd38, FUTEX_WAKE_PRIVATE, 1) = 1
sched_yield()                           = 0
wait4(15172, NULL, __WALL, NULL)        = 15172
munmap(0x7fdb5b7ff000, 2101248)         = 0
getpid()                                = 15171
write(2, "==15171==LeakSanitizer has encou"..., 54==15171==LeakSanitizer has encountered a fatal error.
) = 54
getpid()                                = 15171
write(2, "==15171==HINT: For debugging, tr"..., 102==15171==HINT: For debugging, try setting environment variable LSAN_OPTIONS=verbosity=1:log_threads=1
) = 102
getpid()                                = 15171
write(2, "==15171==HINT: LeakSanitizer doe"..., 75==15171==HINT: LeakSanitizer does not work under ptrace (strace, gdb, etc)
) = 75
exit_group(23)                          = ?
+++ exited with 23 +++
