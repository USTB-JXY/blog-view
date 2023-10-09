
mkdir("testdb", 0755)                   = 0
rename("testdb/LOG", "testdb/LOG.old")  = -1 ENOENT (No such file or directory)

openat(AT_FDCWD, "testdb/LOG", O_WRONLY|O_CREAT|O_APPEND|O_CLOEXEC, 0644) = 3
fcntl(3, F_GETFL)                       = 0x8401 (flags O_WRONLY|O_APPEND|O_LARGEFILE)

mkdir("testdb", 0755)                   = -1 EEXIST (File exists)
openat(AT_FDCWD, "testdb/LOCK", O_RDWR|O_CREAT|O_CLOEXEC, 0644) = 4
fcntl(4, F_SETLK, {l_type=F_WRLCK, l_whence=SEEK_SET, l_start=0, l_len=0}) = 0
access("testdb/CURRENT", F_OK)          = -1 ENOENT (No such file or directory)
openat(AT_FDCWD, "/etc/localtime", O_RDONLY|O_CLOEXEC) = 5
newfstatat(5, "", {st_dev=makedev(0x8, 0x3), st_ino=7738475, st_mode=S_IFREG|0644, st_nlink=1, st_uid=0, st_gid=0, st_blksize=4096, st_blocks=8, st_size=561, ...st_ctime_nsec=636245265}, AT_EMPTY_PATH) = 0
newfstatat(5, "", {st_dev=makedev(0x8, 0x3), st_ino=7738475, st_mode=S_IFREG|0644, ...
st_ctime_nsec=636245265}, AT_EMPTY_PATH) = 0

read(5, "TZif2\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\35\0\0\0\3\0\0\0\f\200\0\0\0\240\227\...
0\0\10LMT\0CDT\0CST\0\nCST-8\n", 4096) = 561
lseek(5, -342, SEEK_CUR)                = 219
read(5, "TZif2\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\35\0\0\0\3\0\0\0\f\377\377\377\377~6C\10LMT\0CDT\0CST\0\nCST-8\n", 4096) = 342

close(5)                                = 0
newfstatat(3, "", {st_dev=makedev(0x8, 0x3), st_ino=1717949, st_mode=S_IFREG|0644, st_nlink=1, st_uid=0, st_gid=0, st_blksize=4096, st_blocks=0, st_size=0, st_atime=1696423637 /* 2023-10-04T20:47:17.371107674+0800 */, st_atime_nsec=371107674, st_mtime=1696423637 /* 2023-10-04T20:47:17.371107674+0800 */, st_mtime_nsec=371107674, st_ctime=1696423637 /* 2023-10-04T20:47:17.371107674+0800 */, st_ctime_nsec=371107674}, AT_EMPTY_PATH) = 0
write(3, "2023/10/04-20:47:17.375116 140451363283712 Creating DB testdb since it was missing.\n", 84) = 84
openat(AT_FDCWD, "testdb/MANIFEST-000001", O_WRONLY|O_CREAT|O_TRUNC|O_CLOEXEC, 0644) = 5
s
write(5, "\225|\271\305\"\0\1\1\32leveldb.BytewiseComparator\2\0\3\2\4\0", 41) = 41
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

read(5, "MANIFEST-000001\n", 8192)      = 16
read(5, "", 8192)                       = 0
close(5)                                = 0
openat(AT_FDCWD, "testdb/MANIFEST-000001", O_RDONLY|O_CLOEXEC) = 5

read(5, "\225|\271\305\"\0\1\1\32leveldb.BytewiseComparator\2\0\3\2\4\0", 32768) = 41
close(5)                                = 0
openat(AT_FDCWD, "testdb", O_RDONLY|O_NONBLOCK|O_CLOEXEC|O_DIRECTORY) = 5
newfstatat(5, "", {...
 2023-10-04T20:47:17.375107622+0800 */, st_ctime_nsec=375107622}, AT_EMPTY_PATH) = 0

getdents64(5, [{d_ino=1717940, d_off=1420281158766783016, d_reclen=24, d_type=DT_DIR, d_name=".."}, {d_ino=1717951, d_off=5852529720890549475, d_reclen=40, d_type=DT_REG, d_name="MANIFEST-000001"}, {d_ino=1717949, d_off=7674594917386126506, d_reclen=24, d_type=DT_REG, d_name="LOG"}, {d_ino=1717947, d_off=7964572430136927093, d_reclen=24, d_type=DT_DIR, d_name="."}, {d_ino=1717952, d_off=8846557995649461253, d_reclen=32, d_type=DT_REG, d_name="CURRENT"}, {d_ino=1717950, d_off=9223372036854775807, d_reclen=24, d_type=DT_REG, d_name="LOCK"}], 32768) = 168

getdents64(5, [], 32768)                = 0
close(5)                                = 0
openat(AT_FDCWD, "testdb/000003.log", O_WRONLY|O_CREAT|O_TRUNC|O_CLOEXEC, 0644) = 5

openat(AT_FDCWD, "testdb/MANIFEST-000002", O_WRONLY|O_CREAT|O_TRUNC|O_CLOEXEC, 0644) = 6

write(6, "V\371\270\370\34\0\1\1\32leveldb.BytewiseComparator", 35) = 35
write(6, "\244\234\213\276\10\0\1\2\3\t\0\3\4\4\0", 15) = 15
openat(AT_FDCWD, "testdb", O_RDONLY|O_CLOEXEC) = 7
fdatasync(7)                            = 0
close(7)                                = 0
fdatasync(6)                            = 0
openat(AT_FDCWD, "testdb/000002.dbtmp", O_WRONLY|O_CREAT|O_TRUNC|O_CLOEXEC, 0644) = 7
s
write(7, "MANIFEST-000002\n", 16)       = 16
fdatasync(7)                            = 0
close(7)                                = 0
rename("testdb/000002.dbtmp", "testdb/CURRENT") = 0
openat(AT_FDCWD, "testdb", O_RDONLY|O_NONBLOCK|O_CLOEXEC|O_DIRECTORY) = 7

getdents64(7, [{d_ino=1717940, d_off=1420281158766783016, d_reclen=24, d_type=DT_DIR, d_name=".."}, {d_ino=1717951, d_off=3951558940983613031, d_reclen=40, d_type=DT_REG, d_name="MANIFEST-000001"}, {d_ino=1717953, d_off=5852529720890549475, d_reclen=32, d_type=DT_REG, d_name="000003.log"}, {d_ino=1717949, d_off=7674594917386126506, d_reclen=24, d_type=DT_REG, d_name="LOG"}, {d_ino=1717947, d_off=7964572430136927093, d_reclen=24, d_type=DT_DIR, d_name="."}, {d_ino=1717955, d_off=8699494478177071992, d_reclen=32, d_type=DT_REG, d_name="CURRENT"}, {d_ino=1717954, d_off=8846557995649461253, d_reclen=40, d_type=DT_REG, d_name="MANIFEST-000002"}, {d_ino=1717950, d_off=9223372036854775807, d_reclen=24, d_type=DT_REG, d_name="LOCK"}], 32768) = 240
getdents64(7, [], 32768)                = 0
close(7)                                = 0
write(3, "2023/10/04-20:47:17.382471 140451363283712 Delete type=3 #1\n", 60) = 60
unlink("testdb/MANIFEST-000001")        = 0
write(5, "\5\273w\204\31\0\1\1\0\0\0\0\0\0\0\1\0\0\0\1\4key1\6value1", 32) = 32
write(5, "\227\217\4T\31\0\1\2\0\0\0\0\0\0\0\1\0\0\0\1\4key2\6value2", 32) = 32

write(1, "Value for key key1: value1\n", 27Value for key key1: value1
) = 27
write(1, "Value for key key2: value2\n", 27Value for key key2: value2
) = 27
fcntl(4, F_SETLK, {l_type=F_UNLCK, l_whence=SEEK_SET, l_start=0, l_len=0}) = 0
close(4)                                = 0
close(6)                                = 0
close(5)                                = 0
close(3)                                = 0
