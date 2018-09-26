#ifndef _VECTOR_H__
#define _VECTOR_H__

class Vector
{
public:
	float x, y, z;

public:
	Vector() {}
	Vector(const float& x, const float& y, const float& z) : x(x), y(y), z(z) {}
	Vector(const Vector& v) : x(v.x), y(v.y), z(v.z) {}

	void Print()
	{
		printf("%.2f %.2f %.2f \n", x, y, z);
	}

	void Zero()
	{
		x = y = z = 0.0f;
	}

	Vector Zero2()
	{
		x = y = z = 0.0f;
		return *this;
	}

	bool IsZero()
	{
		return x == 0.0f&&y == 0.0f&&z == 0.0f;
	}

	void Normalize()
	{
		float magnitude = sqrtf(x*x + y*y + z*z);
		if (magnitude != 0.0f)
		{
			x /= magnitude;
			y /= magnitude;
			z /= magnitude;
		}
	}

	Vector Normalized() 
	{
		float magnitude = sqrtf(x*x + y*y + z*z);
		if (magnitude != 0)
		{
			x /= magnitude;
			y /= magnitude;
			z /= magnitude;
		}
		return *this;
	}

	Vector operator + (const Vector& v) const
	{
		return Vector(x + v.x, y + v.y, z + v.z);
	}

	Vector operator - (const Vector& v) const
	{
		return Vector(x - v.x, y - v.y, z - v.z);
	}

	Vector operator += (const Vector& v)
	{
		x += v.x;
		y += v.y;
		z += v.z;
		return *this;
	}

	Vector operator -= (const Vector& v)
	{
		x -= v.x;
		y -= v.y;
		z -= v.z;
		return *this;
	}

	Vector operator = (const Vector& v)
	{
		x = v.x;
		y = v.y;
		z = v.z;
		return *this;
	}

	bool operator == (const Vector& v) const
	{
		return x == v.x&&y == v.y&&z == v.z;
	}
	 
	bool operator != (const Vector& v) const
	{
		return x != v.x || y != v.y || z != v.z;
	}

	float Distance(const Vector& v) const
	{
		return sqrtf(x - v.x*x - v.x + y - v.y*y - v.y + z - v.z*z - v.z);
	}

	float DistanceSqrt(const Vector& v) const
	{
		return x - v.x*x - v.x + y - v.y*y - v.y + z - v.z*z - v.z;
	}
};
#endif // !_VECTOR_H__
