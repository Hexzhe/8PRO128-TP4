#pragma once
#include <cmath>
#include "Point.h"

template <class T>
class Segment
{
public:
	Segment(Point<T> a, Point<T> b) {
		this->PointA = a;
		this->PointB = b;
	}
	Segment(T pointAX, T pointAY, T pointBX, T pointBY) {
		this->PointA = Point<T>(pointAX, pointAY);
		this->PointB = Point<T>(pointBX, pointBY);
	}
	~Segment() {};

	void MoveAbsolute(Point<T> newA, Point<T> newB){
		this->PointA.MoveAbsolute(newA.GetX(), newA.GetY());
		this->PointB.MoveAbsolute(newB.GetX(), newB.GetY());
	}

	Segment MoveRelative(T countX, T countY) {
		this->PointA.MoveRelative(countX, countY);
		this->PointB.MoveRelative(countX, countY);

		return *this;
	}
	std::string Info() {
		return std::string("P1: " + this->PointA.Info() + ", P2: " + this->PointB.Info() + ", Length: " + std::to_string(this->Length()));
	}
	double Length() {
		double diffX = this->PointA.GetX() - this->PointB.GetX();
		double diffY = this->PointA.GetY() - this->PointB.GetY();
		return std::sqrt((diffX * diffX) + (diffY * diffY));
	}

private:
	Point<T> PointA;
	Point<T> PointB;
};
