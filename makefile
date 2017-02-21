all: build 
	$(MAKE) -C build $%

build:
		mkdir -p build; cd build; cmake ..;
links:		
		ln -fs $(CURDIR)/build/src/Monkey src/Monkey 
		ln -fs $(CURDIR)/build/tests/tests tests/tests
