main:
    gcc -o main.exe main.c
run:
	./main.exe
	
clean:
	rm -rf *.out
	rm -rf *.o