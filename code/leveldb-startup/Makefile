_XUE_COMPILE_TIME = $(shell date +"%Y%m%d%H%M%S")
x86:
	g++  -g -I/usr/local/leveldb1.23/include/ -DX86 -DXUE_COMPILE_TIME=$(_XUE_COMPILE_TIME)   level1.cpp -o level1 -lpthread  /usr/local/leveldb1.23/lib/libleveldb.a
strace:
	strace -v -s 1000  ./level1 >level14.md 2>&1
single:
	g++  -fsanitize=leak -I/usr/local/libevent2.1/include/ -DX86 -DXUE_COMPILE_TIME=$(_XUE_COMPILE_TIME)   JDaemon.cpp -o JDaemonS -lpthread  ./x86/libevent.a
test:
	g++  -fsanitize=leak -fpermissive -I/usr/local/libevent2.1/include/  -DX86 -DXUE_COMPILE_TIME=$(_XUE_COMPILE_TIME)   JEvent-test.cpp -o JEvent-test -lpthread  ./x86/libevent.a


start:
	/home/jrun/startJDaemon start
stop:
	/home/jrun/startJDaemon stop
clean:
	rm -rf installJDaemon.sh
	rm -rf JDaemon-release.tgz
	rm -rf JDaemon
push:
	git add ./*
	git commit -m 'noraml update'
	git push -u origin main

.PHONY: x86 arm single install clean remove release  start stop clang test push strace


