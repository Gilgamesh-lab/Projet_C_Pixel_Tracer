run:
	g++ -c src/Point.cpp -o src/executable/Point.o
	g++ -c src/Line.cpp -o src/executable/Line.o
	g++ -c src/Circle.cpp -o src/executable/Circle.o
	g++ -c src/Pixel.cpp -o src/executable/Pixel.o
	
	g++ -c src/Shape.cpp -o src/executable/Shape.o
	g++ -c src/Polygon.cpp -o src/executable/Polygon.o
	g++ -c src/Area.cpp -o src/executable/Area.o
	g++ -c src/main.cpp -o src/executable/main.o

	g++ src/executable/Point.o src/executable/Line.o src/executable/Shape.o src/executable/Pixel.o src/executable/main.o src/executable/Polygon.o src/executable/Area.o src/executable/Circle.o -o src/executable/programme.exe
	./src/executable/programme.exe