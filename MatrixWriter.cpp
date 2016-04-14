#include "MatrixWriter.h"

MWriter::MWriter(Matrix* m){
  matrix = m;
}

Sprite MWriter::getSpriteForChar5(char value){

  if(value >= 97 && value <= 122) value -= 32;

    switch (value) {
      case '0': return N0;
      case '1': return N1;
      case '2': return N2;
      case '3': return N3;
      case '4': return N4;
      case '5': return N5;
      case '6': return N6;
      case '7': return N7;
      case '8': return N8;
      case '9': return N9;

      case 'A': return A_5;
      case 'B': return B_5;
      case 'C': return C_5;
      case 'D': return D_5;
      case 'E': return E_5;
      case 'F': return F_5;
      case 'G': return G_5;
      case 'H': return H_5;
      case 'I': return I_5;
      case 'J': return J_5;
      case 'K': return K_5;
      case 'L': return L_5;
      case 'M': return M_5;
      case 'N': return N_5;
      case 'O': return O_5;
      case 'P': return P_5;
      case 'Q': return Q_5;
      case 'R': return R_5;
      case 'S': return N5;
      case 'T': return T_5;
      case 'V': return V_5;
      case 'W': return W_5;
      case 'X': return X_5;
      case 'Y': return Y_5;
      case 'Z': return Z_5;

      case 32: return SPACE; // Space
      case 44: return DOT; // Comma
      case 46: return DOT; // Dot
      case 58: return DOUBLEDOT; // Doubledot

    };
    return EMPTY;
}

Sprite MWriter::getSpriteForChar8(char value){
    switch (value) {

    };
    return N0;
}

void MWriter::write(uint8_t x, uint8_t y, char value)
{
  matrix -> write(x,y,getSpriteForChar5(value));
}
void MWriter::write(String value, uint8_t offset)
{
  charPos = offset;
  matrix -> clear();

  for( int i =0 ; i< sizeof(value); i++){
      append(value.charAt(i));
  }
}

void MWriter::append( String value, uint8_t offset)
{
  for( int i =0 ; i< sizeof(value); i++){
      append(value.charAt(i),offset);
  }

}
void MWriter::append(char value, uint8_t offset)
{

  Sprite s = getSpriteForChar5(value);
  uint8_t y = (8-s.height())/2+1;

  charPos += offset;
  matrix -> write(charPos,y,s);

  uint8_t space = s.width() >0 ? 1:0;
  charPos += s.width()+space;

}

void MWriter::clear( )
{
  matrix->clear();
  charPos= 0;

}
uint8_t MWriter::bufferPosition(){
  return charPos;
}
