#ifndef PROCESSES_H
#define PROCESSES_H

#include "gy86.h"
#include "stm32f1xx_hal.h"
#include "cmsis_os.h"

extern ADC_HandleTypeDef hadc1;
extern I2C_HandleTypeDef hi2c1;
extern UART_HandleTypeDef huart1;
extern UART_HandleTypeDef huart3;
extern TIM_HandleTypeDef htim2;


extern uint8_t data[50];
extern uint16_t ADCData[3];
uint16_t* channel;

void SensorTask(void * args);

void TempretureSensorTask(void * args);

void ComputerTransmitterTask(void * args);

void RemoteControlReceiverTask(void * args);

void PWMManagerTask(void * args);

void ADCManagerTask(void * args);


#endif /* PROCESSES_H */
