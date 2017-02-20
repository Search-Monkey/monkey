all: build
	$(MAKE) -C build $%

build:
		 mkdir -p build; cd build; cmake ..;
