#pragma once
#include <string>

class Prostokat;

class Punkt
{
private:
	std::string _nazwa = {};
	float _x = 0.0f;
	float _y = 0.0f;
public:
	Punkt(std::string nazwa, float x, float y);
	friend void sedzia(Punkt pkt, Prostokat p);
};

class Prostokat
{
private:
	std::string _nazwa = {};
	float _x = 0.0f;
	float _y = 0.0f;
	float _szerokosc = 0.0f;
	float _wysokosc = 0.0f;
public:
	Prostokat(std::string nazwa, float x, float y, float szerokosc, float wysokosc);
	friend void sedzia(Punkt pkt, Prostokat p);

};

void sedzia(Punkt pkt, Prostokat p);