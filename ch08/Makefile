.DEFAULT_GOAL = run
name = stackArr

clean:
	rm -f $(name)

build: clean
	gcc -Wall $(name).c -o $(name)

run: build
	./$(name)
