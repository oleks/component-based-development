export LD_LIBRARY_PATH := ../static-libstack:$(LD_LIBRARY_PATH)

all: calc.exe
	mono calc.exe

calc.exe: calc.fs
	fsharpc calc.fs

clean:
	rm -f *.exe
