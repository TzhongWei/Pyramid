#include "pch.h"
#include "Test_1_PointAdd.h"
#include <list>

Pyramid::Pyramid(ON_3dPoint Pt1, ON_3dPoint Pt2, ON_3dPoint Pt3, ON_3dPoint Pt4) : Pt1(Pt1), Pt2(Pt2), Pt3(Pt3), Pt4(Pt4)
{}

Pyramid::~Pyramid()
{
	this->Pt1.~ON_3dPoint();
	this->Pt2.~ON_3dPoint();
	this->Pt3.~ON_3dPoint();
	this->Pt4.~ON_3dPoint();
}

std::list<ON_Line> Pyramid::GetPyramid()
{
	list<ON_Line> ReturnLN = *new list<ON_Line>();
	ReturnLN.push_back(ON_Line(this->Pt1, this->Pt2));
	ReturnLN.push_back(ON_Line(this->Pt1, this->Pt3));
	ReturnLN.push_back(ON_Line(this->Pt1, this->Pt4));
	ReturnLN.push_back(ON_Line(this->Pt2, this->Pt3));
	ReturnLN.push_back(ON_Line(this->Pt2, this->Pt4));
	ReturnLN.push_back(ON_Line(this->Pt3, this->Pt4));
	return ReturnLN;
}



