all:
	gcc hanoi.c -o hanoi
clean:
	@echo "Removing executable and .o files..."
	rm -rf *.o hanoi
