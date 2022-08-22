#pragma once

class Vehicle
{
public:
	virtual void drive() const = 0;
	virtual ~Vehicle();
};

class Car : public Vehicle
{
public:
	void drive() const override;
};

class Truck : public Vehicle
{
public:
	void drive() const override;
};

enum class VehicleType {CAR = 1, TRUCK};
