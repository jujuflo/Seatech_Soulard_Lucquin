/*
 * TacheADC.h
 *
 *  Created on: 8 déc. 2023
 *      Author: TP-EO-5
 */

#ifndef TACHEADC_TACHEADC_H_
#define TACHEADC_TACHEADC_H_

void TacheADC_CreateTask(void);
void TacheADC_taskFxn(UArg a0, UArg a1);
void myClockSwiFxn(uintptr_t arg0);



#endif /* TACHEADC_TACHEADC_H_ */
