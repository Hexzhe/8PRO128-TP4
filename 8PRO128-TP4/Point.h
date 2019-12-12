#pragma once
#include <string>

template <class T>
class Point
{
public:

	Point(T x = 0, T y = 0) {
		this->X = x;
		this->Y = y;
	}

	~Point() {};

	T GetX() { return this->X; }
	T GetY() { return this->Y; }

	Point<T> MoveAbsolute(T x, T y) {
		this->X = x;
		this->Y = y;

		return *this;
	}

	Point<T> MoveRelative(T countX, T countY) {
		this->MoveAbsolute(this->X + countX, this->Y + countY);

		return *this;
	}

	std::string Info() {
		return std::string(std::to_string(this->X) + "," + std::to_string(this->Y));
	}

private:
	T X;
	T Y;
};
