# MatrixWriter
Library that help writing text on a LED Matrix

This library is an expansion to the library : 
Matrix.h - Max7219 LED Matrix library for Arduino & Wiring
  Copyright (c) 2006 Nicholas Zambetti.  All right reserved.
  
Usage:


Matrix myMatrix = Matrix(6, 10, 11,COUNT_MATRIX,true);

MWriter writer = MWriter(&myMatrix);



myMatrix.clear(); //  or writer.clear()   -> clear display

writer.write("SomeText"); // Clear, write text, offset X = 0
writer.write("SomeText",5); // Clear, write text, offset X = 5
writer.append("SomeText");  // Appends text to current, offset X = 0
writer.append("SomeText",5);  // Appends text with offset X = 5
