/*
 * software_timer.h
 *
 *  Created on: 5 Oct 2022
 *      Author: duvan
 */

#ifndef INC_TIMER_H_
#define INC_TIMER_H_

extern int timer1_flag, timer2_flag;


void setTimer1(int duration);
void setTimer2(int duration);
void timerRun();


#endif /* INC_TIMER_H_ */
