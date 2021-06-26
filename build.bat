md tmp
cd tmp
C:\gbdk\bin\lcc -Wa-l -Wl-m -Wl-j -DUSE_SFR_FOR_REG -c -o gb-run.o ..\gb-run.c
C:\gbdk\bin\lcc -Wa-l -Wl-m -Wl-j -DUSE_SFR_FOR_REG -o gb-run.gb gb-run.o
copy gb-run.gb ..\gb-run.gb
cd ..
del /Q tmp\*
echo This is filler, so rmdir works
rmdir tmp