
#ifndef CHAR_5_LIH_H
#define CHAR_5_LIH_H

#include "Arduino.h"
#include "Sprite.h"
#include "binary.h"

const Sprite EMPTY = Sprite(0,0
);



const Sprite A_5 = Sprite(4, 5,
  B0110,
  B1001,
  B1111,
  B1001,
  B1001
);

const Sprite B_5 = Sprite(4, 5,
  B1111,
  B1001,
  B1111,
  B1001,
  B1111
);

const Sprite C_5 = Sprite(3, 5,
  B111,
  B100,
  B100,
  B100,
  B111
);
const Sprite D_5 = Sprite(4, 5,
  B1110,
  B1001,
  B1001,
  B1001,
  B1110
);

const Sprite E_5 = Sprite(3, 5,
  B111,
  B100,
  B111,
  B100,
  B111
);


const Sprite F_5 = Sprite(3, 5,
  B111,
  B100,
  B110,
  B100,
  B100
);
const Sprite G_5 = Sprite(4, 5,
  B1111,
  B1000,
  B1011,
  B1001,
  B1111
);

const Sprite H_5 = Sprite(3, 5,
  B101,
  B101,
  B111,
  B101,
  B101
);
const Sprite I_5 = Sprite(1, 5,
  B1,
  B1,
  B1,
  B1,
  B1
);

const Sprite J_5 = Sprite(2, 5,
  B01,
  B01,
  B01,
  B01,
  B11
);
const Sprite K_5 = Sprite(4, 5,
  B1001,
  B1010,
  B1000,
  B1010,
  B1001
);
const Sprite L_5 = Sprite(3, 5,
  B100,
  B100,
  B100,
  B100,
  B111
);
const Sprite M_5 = Sprite(4, 5,
  B1001,
  B1111,
  B1001,
  B1001,
  B1001
);
const Sprite N_5 = Sprite(4, 5,
  B1001,
  B1101,
  B1011,
  B1001,
  B1001
);

const Sprite O_5 = Sprite(3, 5,
  B111,
  B101,
  B101,
  B101,
  B111
);
const Sprite P_5 = Sprite(3, 5,
  B111,
  B101,
  B111,
  B100,
  B100
);
const Sprite Q_5 = Sprite(4, 5,
  B1110,
  B1010,
  B1010,
  B1010,
  B1111
);

const Sprite R_5 = Sprite(4, 5,
  B1111,
  B1001,
  B1110,
  B1001,
  B1001
);
//S
const Sprite T_5 = Sprite(3, 5,
  B111,
  B010,
  B010,
  B010,
  B010
);
const Sprite V_5 = Sprite(4, 5,
  B1001,
  B1001,
  B1001,
  B1010,
  B1100
);

const Sprite W_5 = Sprite(4, 5,
  B10001,
  B10001,
  B10001,
  B10101,
  B01010
);
const Sprite X_5 = Sprite(4, 5,
  B1001,
  B1001,
  B0110,
  B1001,
  B1001
);
const Sprite Y_5 = Sprite(3, 5,
  B101,
  B101,
  B010,
  B010,
  B010
);

const Sprite Z_5 = Sprite(3, 5,
  B111,
  B101,
  B010,
  B101,
  B111
);

//  Numbers
const Sprite N0 = Sprite(3, 5,
  B111,
  B101,
  B101,
  B101,
  B111
);

const Sprite N1 = Sprite(1, 5,
  B1,
  B1,
  B1,
  B1,
  B1
);
const Sprite N2 = Sprite(3, 5,
  B111,
  B001,
  B111,
  B100,
  B111
);
const Sprite N3 = Sprite(3, 5,
  B111,
  B001,
  B111,
  B001,
  B111
);
const Sprite N4 = Sprite(3, 5,
  B101,
  B101,
  B111,
  B001,
  B001
);
const Sprite N5 = Sprite(3, 5,
  B111,
  B100,
  B111,
  B001,
  B111
);
const Sprite N6 = Sprite(4, 5,
  B111,
  B100,
  B111,
  B101,
  B111
);
const Sprite N7 = Sprite(4, 5,
  B1111,
  B0001,
  B0010,
  B0100,
  B1000
);
const Sprite N8 = Sprite(4, 5,
  B1111,
  B1001,
  B1111,
  B1001,
  B1111
);
const Sprite N9 = Sprite(3, 5,
  B111,
  B101,
  B111,
  B001,
  B111
);


// Specials

const Sprite SPACE = Sprite(1, 5,
  B0,
  B0,
  B0,
  B0,
  B0
);
const Sprite DOT = Sprite(1, 5,
  B0,
  B0,
  B0,
  B0,
  B1
);

const Sprite DOUBLEDOT = Sprite(1, 5,
  B0,
  B1,
  B0,
  B1,
  B0
);

#endif
