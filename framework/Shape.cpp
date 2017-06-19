#include "Shape.hpp"


Shape::Shape():
	shapeColor{0.0,0.0,0.0}{

		std::cout <<"Default Construction of a Shape" <<std::endl;
	}

Shape::Shape(std::string const&  name, Color const& color):
	shapeName {name},
	shapeColor {color}{

		std::cout << "User defined Shape Created" <<std::endl;
	}

Shape::~Shape()
	{
		std::cout<< "The Shape has been Deleted" <<std::endl;
	}

std::string const& Shape::getName() const{

	return shapeName;
}

Color const& Shape::getColor() const{

	return shapeColor;
}

