main: main.o Persona.o PoderEspecial.o AirBender.o FireBender.o WaterBender.o EarthBender.o NonBender.o Ofensivo.o Defensivo.o Curacion.o Invocacion.o
	g++ main.o Persona.o PoderEspecial.o AirBender.o FireBender.o WaterBender.o EarthBender.o NonBender.o Ofensivo.o Defensivo.o Curacion.o Invocacion.o -o main

PoderEspecial.o: PoderEspecial.cpp Ofensivo.cpp Defensivo.cpp Curacion.cpp Invocacion.cpp
	g++ -c PoderEspecial.cpp Ofensivo.cpp Defensivo.cpp Curacion.cpp Invocacion.cpp

Persona.o: Persona.cpp AirBender.cpp FireBender.cpp WaterBender.cpp EarthBender.cpp NonBender.cpp
	g++ -c Persona.cpp AirBender.cpp FireBender.cpp WaterBender.cpp EarthBender.cpp NonBender.cpp

main.o: main.cpp
	g++ -c main.cpp
