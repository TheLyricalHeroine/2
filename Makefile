a.out: main.o class.o class0.o class1.o func.o factory.o factory0.o factory1.o
	g++ main.o class.o class0.o class1.o func.o factory.o factory0.o factory1.o -o a.out

main.o: main.cpp
	g++ -c main.cpp

class.o: class.cpp class.hpp
	g++ -c class.cpp

class0.o: class0.cpp class0.hpp
	g++ -c class0.cpp

class1.o: class1.cpp class1.hpp
	g++ -c class1.cpp

func.o: func.cpp func.hpp
	g++ -c func.cpp

factory.o: factory.cpp factory.hpp
	g++ -c factory.cpp

factory0.o: factory0.cpp factory0.hpp
	g++ -c factory0.cpp

factory1.o: factory1.cpp factory1.hpp
	g++ -c factory1.cpp

clean: 
	rm *.o a.out