cpp:
	g++ -Wall test.cpp *.hpp gsl.h -lgsl -lgslcblas -lm

clean:
	rm -f *gch a.out
