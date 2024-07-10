#ifndef VECTOR2_HPP
#define VECTOR2_HPP

#include <iostream>

class Vector2 {
	private:
		float x;
		float y;

	public:
		Vector2(const float &x, const float &y);
		const float &getX() const;
		const float &getY() const;

		friend std::ostream& operator << (std::ostream& os, const Vector2 &vector2) {
			os << "[" << vector2.getX() << ", " << vector2.getY() << "]";
			return (os);
		}
};

#endif