/*******************************************************************************
 * AUTHOR        : Dillon Welsh
 * LAB 1         : Triangle
 * CLASS         : CS8
 * SECTION       : 33776
 * DUE DATE      : 02/19/2021
 ******************************************************************************/

#include "triangle.h"

/*******************************************************************************
 * Constructor Triangle: Class Triangle
 *______________________________________________________________________________
 * This constructor sets the triangles size to the passed in value.
 * returns nothing.
 *______________________________________________________________________________
 * PRE-CONDITIONS
 *  The following need previously defined values:
 *      int size:       size of the triangle's sides
 *
 * POST-CONDITIONS
 *      N/A
 ******************************************************************************/

Triangle::Triangle(int size)    // IN - size of triangle's side
{
    if(size > 0 && size <= 39) this->size = size;
    else if(size <= 0) this->size = 1;
    else if(size > 39) this->size = 39;
    this->border = '#';
    this->fill = '*';
}

/*******************************************************************************
 * Constructor Triangle: Class Triangle
 *______________________________________________________________________________
 * This constructor sets the triangles size to the passed in value and the
 * border char to the passed in border char.
 * returns nothing.
 *______________________________________________________________________________
 * PRE-CONDITIONS
 *  The following need previously defined values:
 *      int size:       size of the triangle's sides
 *      char border:    character for triangle's border
 *
 * POST-CONDITIONS
 *      N/A
 ******************************************************************************/

Triangle::Triangle(int size,        // IN - size of triangle's side
                   char border)     // IN - character for triangle's border
{
    if(size > 0 && size <= 39) this->size = size;
    else if(size <= 0) this->size = 1;
    else if(size > 39) this->size = 39;
    this->setBorder(border);
    this->fill = '*';
}

/*******************************************************************************
 * Constructor Triangle: Class Triangle
 *______________________________________________________________________________
 * This constructor sets the triangles size to the passed in value, the
 * border char to the passed in border char, and the fill char to the passed in
 * fill char.
 * returns nothing.
 *______________________________________________________________________________
 * PRE-CONDITIONS
 *  The following need previously defined values:
 *      int size:       size of the triangle's sides
 *      char border:    character for triangle's border
 *      char fill:      character for triangle's fill
 *
 * POST-CONDITIONS
 *      N/A
 ******************************************************************************/

Triangle::Triangle(int size, char border, char fill)
{
    if(size > 0 && size <= 39) this->size = size;
    else if(size <= 0) this->size = 1;
    else if(size > 39) this->size = 39;
    this->setBorder(border);
    this->setFill(fill);
}

/*******************************************************************************
 * Method getSize: Class Triangle
 *______________________________________________________________________________
 * This method retrieves the size of the side of the triangle. Returns the
 * size.
 *______________________________________________________________________________
 * PRE-CONDITIONS
 *  The following need previously defined values:
 *      N/A
 *
 * POST-CONDITIONS
 *      int
 ******************************************************************************/

int Triangle::getSize() const
{
    return this->size;
}

/*******************************************************************************
 * Method perimeter: Class Triangle
 *______________________________________________________________________________
 * This method retrieves the perimeter of the triangle. Returns the perimeter.
 *______________________________________________________________________________
 * PRE-CONDITIONS
 *  The following need previously defined values:
 *      N/A
 *
 * POST-CONDITIONS
 *      int
 ******************************************************************************/

int Triangle::perimeter() const
{
    return this->size * 3;
}

/*******************************************************************************
 * Method area: Class Triangle
 *______________________________________________________________________________
 * This method retrieves the area of the triangle. Returns the area.
 *______________________________________________________________________________
 * PRE-CONDITIONS
 *  The following need previously defined values:
 *      N/A
 *
 * POST-CONDITIONS
 *      double
 ******************************************************************************/

double Triangle::area() const
{
    return ( (sqrt(3.0) / 4.0) * pow(this->size, 2.0) );
}

/*******************************************************************************
 * Method grow: Class Triangle
 *______________________________________________________________________________
 * This method increases the size of the triangle's side by 1 if within range.
 * Returns nothing.
 *______________________________________________________________________________
 * PRE-CONDITIONS
 *  The following need previously defined values:
 *      N/A
 *
 * POST-CONDITIONS
 *      N/A
 ******************************************************************************/

void Triangle::grow()
{
    if(this->size < 39) this->size++;
    else return;
}

/*******************************************************************************
 * Method shrink: Class Triangle
 *______________________________________________________________________________
 * This method decreases the size of the triangle's side by 1 if within range.
 * Returns nothing.
 *______________________________________________________________________________
 * PRE-CONDITIONS
 *  The following need previously defined values:
 *      N/A
 *
 * POST-CONDITIONS
 *      N/A
 ******************************************************************************/

void Triangle::shrink()
{
    if(this->size > 1) this->size--;
    else return;
}

/*******************************************************************************
 * Method setBorder: Class Triangle
 *______________________________________________________________________________
 * This method sets the triangle's border character to the passed in char value.
 * Returns nothing.
 *______________________________________________________________________________
 * PRE-CONDITIONS
 *  The following need previously defined values:
 *      char border: character for border
 *
 * POST-CONDITIONS
 *      N/A
 ******************************************************************************/

void Triangle::setBorder(char border)
{
    if(border >= 33 && border <= 126)
    {
        this->border = border;
    }
    else this->border = '#';
}

/*******************************************************************************
 * Method setFill: Class Triangle
 *______________________________________________________________________________
 * This method sets the triangle's fill character to the passed in char value.
 * Returns nothing.
 *______________________________________________________________________________
 * PRE-CONDITIONS
 *  The following need previously defined values:
 *      char fill: character for fill
 *
 * POST-CONDITIONS
 *      N/A
 ******************************************************************************/

void Triangle::setFill(char fill)
{
    if(fill >= 33 && fill <= 126)
    {
        this->fill = fill;
    }
    else this->fill = '*';
}

/*******************************************************************************
 * Method draw: Class Triangle
 *______________________________________________________________________________
 * This method draws the triangle. Returns nothing.
 *______________________________________________________________________________
 * PRE-CONDITIONS
 *  The following need previously defined values:
 *      N/A
 *
 * POST-CONDITIONS
 *      N/A
 ******************************************************************************/

void Triangle::draw() const
{
    for(int i = 0; i < this->size; i++)
    {
        for(int k = this->size - 2; k>=i; k--)
        {
            cout << " ";
        }
        for(int j = 0; j <= i; j++)
        {
            if(j == 0 || j == i) cout << this->border << " ";
            else if(i == this->size - 1) cout << this->border << " ";
            else cout << this->fill << " ";
        }
        cout << endl;
    }
}

/*******************************************************************************
 * Method summary: Class Triangle
 *______________________________________________________________________________
 * This method draws the triangle and outputs its important information.
 * Returns nothing.
 *______________________________________________________________________________
 * PRE-CONDITIONS
 *  The following need previously defined values:
 *      N/A
 *
 * POST-CONDITIONS
 *      N/A
 ******************************************************************************/

void Triangle::summary() const
{
    cout << fixed;
    cout << setprecision(2);
    cout << "Size of triangle's side = " << this->size << " units." << endl;
    cout << "Perimeter of triangle = " << this->perimeter() << " units." << endl;
    cout << "Area of triangle = " << this->area() << " units." << endl;
    cout << "Triangle looks like:" << endl;
    this->draw();
}
