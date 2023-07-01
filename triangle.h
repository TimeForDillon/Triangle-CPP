#ifndef TRIANGLE_H
#define TRIANGLE_H

#include <cmath>
#include <iostream>
#include <iomanip>

using namespace std;

class Triangle
{
private:
    int size;       // IN - size of side of triangle
    char border;    // IN - symbol for border of triangle
    char fill;      // IN - symbol for fill of trianlge

public:
    /********************************
     ** CONSTRUCTORS & DESTRUCTORS **
     ********************************/
    Triangle(int size);                         // Constructor
    Triangle(int size, char border);            // Constructor
    Triangle(int size, char border, char fill); // Constructor

    /***************
     ** ACCESSORS **
     ***************/
    int getSize() const;
    int perimeter() const;
    double area() const;
    void draw() const;
    void summary() const;

    /**************
     ** MUTATORS **
     **************/
    void grow();
    void shrink();
    void setBorder(char border);
    void setFill(char fill);
};

/*******************************************************************************
 * Triangle Class
 *  This class represents a triangle. This class is responsible for constructing
 *  a triangle and drawing it depending on the specified size and symbols.
 ******************************************************************************/

/********************************
 ** CONSTRUCTORS & DESTRUCTORS **
 ********************************/

/*******************************************************************************
 * Triangle(int size);
 * Constructor; Sets triangle size to passed in value.
 * Parameters: int size
 * Return: none
 ******************************************************************************/

/*******************************************************************************
 * Triangle(int size, char border);
 * Constructor; Sets triangle size to passed in value and border character to
 *              the passed in char value.
 * Parameters: int size, char border
 * Return: none
 ******************************************************************************/

/*******************************************************************************
 * Triangle(int size, char border, char fill);
 * Constructor; Sets triangle size to passed in value, border character to
 *              the passed in char value, and fill character to the passed in
 *              char value.
 * Parameters: int size, char border, char fill
 * Return: none
 ******************************************************************************/

/***************
 ** ACCESSORS **
 ***************/

/*******************************************************************************
 * int getSize() const;
 *
 * Accessor; Retrieves the size of the side of the triangle.
 * -----------------------------------------------------------------------------
 * Parameters: none
 * -----------------------------------------------------------------------------
 * Return: int
 ******************************************************************************/

/*******************************************************************************
 * int perimeter() const;
 *
 * Accessor; Retrieves the perimeter of the triangle.
 * -----------------------------------------------------------------------------
 * Parameters: none
 * -----------------------------------------------------------------------------
 * Return: int
 ******************************************************************************/

/*******************************************************************************
 * double area() const;
 *
 * Accessor; Retrieves the area of the triangle.
 * -----------------------------------------------------------------------------
 * Parameters: none
 * -----------------------------------------------------------------------------
 * Return: double
 ******************************************************************************/

/*******************************************************************************
 * void draw() const;
 *
 * Accessor; Draws the triangle.
 * -----------------------------------------------------------------------------
 * Parameters: none
 * -----------------------------------------------------------------------------
 * Return: none
 ******************************************************************************/

/*******************************************************************************
 * void summary() const;
 *
 * Accessor; Outputs the triangle's important information and draws the triangle.
 * -----------------------------------------------------------------------------
 * Parameters: none
 * -----------------------------------------------------------------------------
 * Return: none
 ******************************************************************************/

/**************
 ** MUTATORS **
 **************/

/*******************************************************************************
 * void grow();
 *
 * Mutator; Increases the size of the triangle's side by 1 if within range.
 * -----------------------------------------------------------------------------
 * Parameters: none
 * -----------------------------------------------------------------------------
 * Return: none
 ******************************************************************************/

/*******************************************************************************
 * void shrink();
 *
 * Mutator; Decreases the size of the triangle's side by 1 if within range.
 * -----------------------------------------------------------------------------
 * Parameters: none
 * -----------------------------------------------------------------------------
 * Return: none
 ******************************************************************************/

/*******************************************************************************
 * void setBorder(char border);
 *
 * Mutator; Sets the triangle's border character to the passed in char.
 * -----------------------------------------------------------------------------
 * Parameters: char border
 * -----------------------------------------------------------------------------
 * Return: none
 ******************************************************************************/

/*******************************************************************************
 * void setFill(char fill);
 *
 * Mutator; Sets the triangle's fill character to the passed in char.
 * -----------------------------------------------------------------------------
 * Parameters: char fill
 * -----------------------------------------------------------------------------
 * Return: none
 ******************************************************************************/

#endif // TRIANGLE_H
