///\file configs.h
///
/// This is where global parameters such as scale coefficients and step paces are defined.
///
#ifndef _CONFIGS_H
#define _CONFIGS_H

#define NO_MAD_ACCEL			//!< gobsmackingly fast mode for little to none precision
#define NO_SLOW_QUALITY			//!< painstakingly slow mode for extra precision, maybe
#define NO_YSKIPPY			//!< YSKIPPY makes extra pace by skipping every 4th step on Y axis

// fast speeds
// x=40 is okay for small Y's, but even 80 is too fast for the far side
// y=80 is generally fine
// 
// for prescaler / 256
#define MOTOR_PACE_SLOW  0x60	//!< both motors start at slow pace
#define MOTOR_PACE_FASTX 0x20 	//!< X axis has smaller steps, goes faster
#define MOTOR_PACE_FASTY 0x20 	//!< Y axis has larger steps, goes slower
// for prescaler / 64
//#define MOTOR_PACE_SLOW  0xff	//!< both motors start at slow pace
//#define MOTOR_PACE_FASTX 0x40 	//!< X axis has smaller steps, goes faster
//#define MOTOR_PACE_FASTY 0x60 	//!< Y axis has larger steps, goes slower

#define ACCEL_STEPS_PER_INCREMENT 3	//!< ramp up/down each this many steps 

#define STEPSCALE_X 1.8989		//!< scale coefficient X
#define STEPSCALE_Y 0.7588		//!< scale coefficient Y

#endif