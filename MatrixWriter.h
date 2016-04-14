#ifndef MATRIX_WRITER_H
#define MATRIX_WRITER_H


#include "Matrix.h"
#include "Char5.h"

class MWriter{

  Matrix* matrix;

  uint8_t charPos =0;



  Sprite getSpriteForChar5(char);
  Sprite getSpriteForChar8(char);

public:

  MWriter(Matrix* m);



  void write(uint8_t, uint8_t, char);
  void write(String,uint8_t offset =0);
  void append(String,uint8_t =0);
  void append(char, uint8_t =0);

  void clear();

  uint8_t bufferPosition();
};

#endif
