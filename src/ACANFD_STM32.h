//------------------------------------------------------------------------------

#pragma once

//------------------------------------------------------------------------------

#ifdef ARDUINO_NUCLEO_H743ZI2
  #include "ACANFD_STM32_NUCLEO_H743ZI2-objects.h"
#elif defined (ARDUINO_NUCLEO_G431KB)
  #include "ACANFD_STM32_NUCLEO_G431KB-objects.h"
#elif defined (ARDUINO_NUCLEO_G474RE)
  #include "ACANFD_STM32_NUCLEO_G474RE-objects.h"
#elif defined (ARDUINO_WEACT_G474CE)
  #include "ACANFD_STM32_NUCLEO_G474RE-objects.h"
#elif defined (ARDUINO_NUCLEO_G0B1RE)
  #include "ACANFD_STM32_NUCLEO_G0B1RE-objects.h"
#elif defined (ARDUINO_NUCLEO_H723ZG)
  #include "ACANFD_STM32_NUCLEO_H723ZG-objects.h"
#elif defined (ARDUINO_B_G431B_ESC1)
  #include "ACANFD_STM32_DISCO_B_G431B_ESC1-objects.h"
#else
  #error "Unhandled Nucleo Board"
#endif

//------------------------------------------------------------------------------
