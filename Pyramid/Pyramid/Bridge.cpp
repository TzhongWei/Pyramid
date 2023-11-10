#include "pch.h"
#include "Test_1_PointAdd.h"
#include <list>

#if defined __cplusplus

extern "C"
{
#endif
	std::list<ON_Line> GetPyramid(ON_3dPoint P1, ON_3dPoint P2, ON_3dPoint P3, ON_3dPoint P4)
	{
		auto Py = Pyramid(P1, P2, P3, P4);
		return Py.GetPyramid();
	}
#if defined __cplusplus
}
#endif