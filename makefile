all: build
	$(MAKE) -C build $%

build:
		 mkdir -p build; cd build; cmake ..;

clean:
	rm -rf build src/Monkey tests/tests
