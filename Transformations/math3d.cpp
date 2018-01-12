#include "math3d.h"

#include <math.h>

VECTOR3D Add(VECTOR3D a, VECTOR3D b) //Ya implementado como ejemplo.
{
	VECTOR3D ret;
	ret.x = a.x + b.x;
	ret.y = a.y + b.y;
	ret.z = a.z + b.z;
	return ret;
}

VECTOR3D Substract(VECTOR3D a, VECTOR3D b)
{
	VECTOR3D ret;
	ret.x = a.x - b.x;
	ret.y = a.y - b.y;
	ret.z = a.z - b.z;
	return ret;
}

VECTOR3D Multiply(VECTOR3D a, VECTOR3D b)
{
	VECTOR3D ret;
	ret.x = a.x * b.x;
	ret.y = a.y * b.y;
	ret.z = a.z * b.z;
	return ret;
}

VECTOR3D MultiplyWithScalar(float scalar, VECTOR3D a)
{
	VECTOR3D ret;
	ret.x = a.x * scalar;
	ret.y = a.y * scalar;
	ret.z = a.z * scalar;
	return ret;
}

double Magnitude(VECTOR3D a)
{
	double valor = 0;

	valor = sqrt(a.x + a.y + a.z);

	return valor;
}

VECTOR3D Normalize(VECTOR3D a)
{
	VECTOR3D ret;

	double magnitudVector = Magnitude(a);

	ret.x = a.x / magnitudVector;
	ret.y = a.y / magnitudVector;
	ret.z = a.z / magnitudVector;

	return ret;
}

VECTOR3D CrossProduct(VECTOR3D a, VECTOR3D b) {

	VECTOR3D ret;

	ret.x = (a.y * b.z) - (b.y * a.z);
	ret.y = - ( (a.x * b.z) - (b.x * a.z) );
	ret.z = (a.x * b.y) - (b.x * a.y);

	return ret;
}

double DotProduct(VECTOR3D a, VECTOR3D b)
{
	double valor = 0;

	valor = (a.x * b.x) + (a.y * b.y) + (a.z * b.z);

	return valor;
}