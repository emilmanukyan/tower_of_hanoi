all:
	fpc hanoi.pas
clean:
	@echo "Removing executable and .o files..."
	rm -rf *.o hanoi
