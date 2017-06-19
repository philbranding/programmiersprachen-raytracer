#ifndef BUW_SHAPE_HPP
#define BUW_SHAPE_HPP
#include <iostream>
#include <cmath>
#include <string>
#include <color.hpp>
#include <glm/glm.hpp>
#include <glm/gtx/intersect.hpp>





class Shape{

	public:
		// Default Constructor
		Shape();

		//Default Destructor
		~Shape();

		//User Defined Constructor
		//@param string Name and Color
		Shape(std::string const& name, Color const& color);

		//Pure Virtual Member Functions 
		virtual float area() const = 0; 
		virtual float volume() const = 0;

		//Accessor Functions (Getters)
		std::string const& getName() const;
		Color const& getColor() const;

	private:

		//variable 
		std::string shapeName;
		Color shapeColor;

};

#endif 