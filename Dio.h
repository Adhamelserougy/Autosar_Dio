#ifndef DIO_H_
#define DIO_H_

#include <stdint.h>
#include "Register_Map.h"

typedef uint8_t Dio_LevelType;
typedef uint8_t Dio_PortLevelType;
typedef uint8_t Dio_PortType;
typedef uint8_t Dio_ChannelType;

#define STD_LOW                         0x00U
#define STD_HIGH                        0x01U

#define PORTA                           0x00U
#define PORTB                           0x01U
#define PORTC                           0x02U
#define PORTD                           0x03U
#define PORTE                           0x04U
#define PORTF                           0x05U

#endif /* DIO_H_ */
