CXX=g++
CXXFLAGS=-Wall
LDFLAGS = 
EXEC=calculateurfamilier

all: $(EXEC)

calculateurfamilier: main.o calculateurFamilier.o
	$(CXX)  $^ -o $(EXEC) $(LDFLAGS)
	
main.o: main.cpp calculateurFamilier.h
	$(CXX) -o $@ -c $< $(CXXFLAGS)

calculateurFamilier.o: calculateurFamilier.cpp calculateurFamilier.h
	$(CXX) -o $@ -c $< $(CXXFLAGS)



clean: 
	rm -rf *.o

mrproper: clean
	rm -rf $(EXEC)
