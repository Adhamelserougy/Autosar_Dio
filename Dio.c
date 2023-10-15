#include <Dio.h>

Dio_LevelType Dio_ReadChannel(Dio_ChannelType ChannelId)
{
    uint8_t Port = ChannelId / 8U;
    uint8_t Pin = ChannelId % 8U;
    switch (Port)
    {
    case PORTA:
        return ((uint8_t) GPIOA->DATA[1U << Pin]) >> Pin;
    case PORTB:
        return ((uint8_t) GPIOB->DATA[1U << Pin]) >> Pin;
    case PORTC:
        return ((uint8_t) GPIOC->DATA[1U << Pin]) >> Pin;
    case PORTD:
        return ((uint8_t) GPIOD->DATA[1U << Pin]) >> Pin;
    case PORTE:
        return ((uint8_t) GPIOE->DATA[1U << Pin]) >> Pin;
    case PORTF:
        return ((uint8_t) GPIOF->DATA[1U << Pin]) >> Pin;
    default:
        break;
    }
    return 0U;
}

void Dio_WriteChannel(Dio_ChannelType ChannelId, Dio_LevelType Level)
{
    uint8_t Port = ChannelId / 8U;
    uint8_t Pin = ChannelId % 8U;
    switch (Port)
    {
    case PORTA:
        GPIOA->DATA[(Level << Pin)] = (Level << Pin);
        break;
    case PORTB:
        GPIOB->DATA[(Level << Pin)] = (Level << Pin);
        break;
    case PORTC:
        GPIOC->DATA[(Level << Pin)] = (Level << Pin);
        break;
    case PORTD:
        GPIOD->DATA[(Level << Pin)] = (Level << Pin);
        break;
    case PORTE:
        GPIOE->DATA[(Level << Pin)] = (Level << Pin);
        break;
    case PORTF:
        GPIOF->DATA[(Level << Pin)] = (Level << Pin);
        break;
    default:
        break;
    }
}

Dio_PortLevelType Dio_ReadPort(Dio_PortType PortId)
{
    switch (PortId)
    {
    case PORTA:
        return (uint8_t) GPIOA->DATA[255];
    case PORTB:
        return (uint8_t) GPIOB->DATA[255];
    case PORTC:
        return (uint8_t) GPIOC->DATA[255];
    case PORTD:
        return (uint8_t) GPIOD->DATA[255];
    case PORTE:
        return (uint8_t) GPIOE->DATA[255];
    case PORTF:
        return (uint8_t) GPIOF->DATA[255];
    default:
        break;
    }
    return 0U;
}

void Dio_WritePort(Dio_PortType PortId, Dio_PortLevelType Level)
{
    switch (PortId)
    {
    case PORTA:
        GPIOA->DATA[Level] = Level;
        break;
    case PORTB:
        GPIOB->DATA[Level] = Level;
        break;
    case PORTC:
        GPIOC->DATA[Level] = Level;
        break;
    case PORTD:
        GPIOD->DATA[Level] = Level;
        break;
    case PORTE:
        GPIOE->DATA[Level] = Level;
        break;
    case PORTF:
        GPIOF->DATA[Level] = Level;
        break;
    default:
        break;
    }
}
