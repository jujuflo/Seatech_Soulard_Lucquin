/* 
 * File:   PWM.h
 * Author: TP_EO_6
 *
 * Created on 28 septembre 2022, 08:59
 */

#ifndef PWM_H
#define PWM_H
#define MOTEUR_DROIT 0
#define MOTEUR_GAUCHE 1


void InitPWM(void);
void PWMSetSpeed(float vitesseEnPourcents, unsigned char numeroMoteur);

#endif /* PWM_H */


