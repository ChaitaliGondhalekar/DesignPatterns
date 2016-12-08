// Singleton derived class cpp file

#include <iostream>

#include "derived.hpp"

sDerived::sDerived(int _initialValueX, int _initialValueY)
: sBase(_initialValueX)
{

   mDataY =_initialValueY;

}

void sDerived::create(int _initialValueX, int _initialValueY)

{

   if(mpoSssInstance)
      std::cout << "Singleton has already been created" << std::endl;
   else
      mpoSssInstance = new sDerived(_initialValueX, _initialValueY);
}


main()
{
   // Only one instance of the singleton class can be created

   sDerived::create(3,3);

   sDerived::instance()->setDataX(5);
   cout << sDerived::instance()->getDataX() << endl;
   sDerived::instance()->setDataY(7);
   cout << sDerived::instance()->getDataY() << endl;
}
