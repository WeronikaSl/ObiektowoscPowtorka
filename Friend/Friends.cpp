#include "Friends.hpp"
#include <iostream>

Punkt::Punkt(std::string nazwa, float x, float y) : _nazwa(nazwa), _x(x), _y(y)
{
}

Prostokat::Prostokat(std::string nazwa, float x, float y, float szerokosc, float wysokosc) : _nazwa(nazwa), _x(x), _y(y), _szerokosc(szerokosc), _wysokosc(wysokosc)
{
}

void sedzia(Punkt pkt, Prostokat p)
{

	if ((pkt._x >= p._x) && (pkt._x <= p._x + p._szerokosc) && (pkt._y >= p._y) && (pkt._y <= p._y + p._wysokosc))

		std::cout << std::endl << "Punkt " << pkt._nazwa << " nalezy do prostokata: " << p._nazwa;

	else

		std::cout << std::endl << "Punkt " << pkt._nazwa << " lezy POZA prostokatem: " << p._nazwa;
}
