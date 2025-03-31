$CC = gcc
CFLAGS = -Wall -Wextra -pedantic -g
LDFLAGS = -lfl


pascal: ast.o parser.o lexer.o main.o
	$(CC) -o pascal lexer.o ast.o parser.o main.o $(LDFLAGS)
	@echo "Lexer compiled successfully."

parser.c: pascal.y ast.h
	bison -Wcounterexamples -d -o parser.c pascal.y
	@echo "Parser generated successfully."

parser.o: parser.c
	$(CC) $(CFLAGS) -c parser.c
	@echo "Parser object file compiled successfully."

lexer.c: pascal.l
	flex -o lexer.c pascal.l
	@echo "Lexer generated successfully."

lexer.o: lexer.c
	$(CC) $(CFLAGS) -c lexer.c
	@echo "Lexer object file compiled successfully."

ast.o: ast.c ast.h
	$(CC) $(CFLAGS) -c ast.c
	@echo "AST object file compiled successfully."

main.o: main.c
	$(CC) $(CFLAGS) -c main.c
	@echo "Main object file compiled successfully."

clean:
	rm -f pascal *.o lexer.c parser.c parser.h
	@echo "Cleaned up generated files."
