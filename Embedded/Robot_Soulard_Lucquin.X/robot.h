/* 
 * File:   robot.h
 * Author: TP_EO_6
 *
 * Created on 26 septembre 2022, 17:36
 */

#ifndef ROBOT_H
#define ROBOT_H
typedef struct robotStateBITS {
union {
struct {
unsigned char taskEnCours ;
float vitesseGaucheConsigne;
float vitesseGaucheCommandeCourante ;
float vitesseDroiteConsigne;
float vitesseDroiteCommandeCourante ;
} ;
} ;
} ROBOT_STATE_BITS;
extern volatile ROBOT_STATE_BITS robotState;
#endif /*ROBOT_H*/

