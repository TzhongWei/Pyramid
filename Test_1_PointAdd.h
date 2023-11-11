#pragma once
#include "pch.h"
#include <list>

using namespace std;

#define PRINCIPLECURVATURE_EXPORTS
#ifdef PRINCIPLECURVATURE_EXPORTS
#define PRIN_API __declspec(dllexport)
#else
#define PRIN_API __declspec(dllimport)
#endif



class PRIN_API Pyramid
{
private:
	ON_3dPoint Pt1;
	ON_3dPoint Pt2;
	ON_3dPoint Pt3;
	ON_3dPoint Pt4;
public:
	Pyramid(ON_3dPoint, ON_3dPoint, ON_3dPoint, ON_3dPoint);
	~Pyramid();
	list<ON_Line> GetPyramid();
};