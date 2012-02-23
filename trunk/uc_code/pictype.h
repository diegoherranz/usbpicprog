/*
 * list of all the pictypes in alphabetical order for device table
 * This file also generates the majority of the device table
 *  * list of all the pictypes in PICTYPE order to create PICTYPE enum as well as create strings for the test harness
 * This file also generates the device table
 *
 */
#ifndef ENUM
//    Pictype,		picfamily,5V,		enter_ISCP,	bulk_erase,	read_code,	read_data,	write_code,	write_data,	write_config_bits )
LIST( dsP30F,		dsPIC30,5V,		dsPIC30,	dsP30F,		dsPIC30,	dsPIC30,	dsP30F,		dsPIC30,	dsP30F )
LIST( dsP30F_LV,	dsPIC30,3V,		dsPIC30,	dsP30F,		dsPIC30,	dsPIC30,	dsP30F,		dsPIC30,	dsP30F )
LIST( I2C_EE_1,		I2C,	5V,		I2C_EE,		none,		I2C_EE_1,	XXXX,		EE_1,		XXXX,		XXXX )
LIST( I2C_EE_2,		I2C,	5V,		I2C_EE,		none,		I2C_EE_2,	XXXX,		EE_2,		XXXX,		XXXX )
LIST( P10F200,		PIC10,	5V,		simple,		P10F200,	PIC10,		XXXX,		P16F54,		none,		P16F54 )
LIST( P10F202,		PIC10,	5V,		simple,		P10F202,	PIC10,		XXXX,		P16F54,		none,		P16F54 )
LIST( P12F508,		PIC10,	5V,		simple,		P10F202,	PIC10,		XXXX,		P16F54,		XXXX,		P16F54 )
LIST( P12F61X,		PIC16,	5V,		simple,		P12F61X,	PIC16,		PIC16,		P12F61X,	PIC16,		P16F785 )
LIST( P12F629,		PIC16,	5V,		P16_Vpp,	P12F629,	PIC16,		PIC16,		P16F84A,	P16F785,	P16F62XA )
LIST( P12F6XX,		PIC16,	5V,		P16_Vpp,	P12F6XX,	PIC16,		PIC16,		P12F6XX,	PIC16,		P16F62XA )
LIST( P14000,		PIC16,	5V,		simple,		XXXX,		PIC16,		PIC16,		XXXX,		PIC16,		XXXX )
LIST( P16C432,		PIC16,	5V,		simple,		XXXX,		PIC16,		PIC16,		XXXX,		PIC16,		XXXX )
LIST( P16C50X,		PIC16,	5V,		simple,		XXXX,		PIC16,		PIC16,		XXXX,		PIC16,		XXXX )
LIST( P16C55X,		PIC16,	5V,		simple,		XXXX,		PIC16,		PIC16,		XXXX,		PIC16,		XXXX )
LIST( P16C64X,		PIC16,	5V,		simple,		XXXX,		PIC16,		PIC16,		XXXX,		PIC16,		XXXX )
LIST( P16C6XX,		PIC16,	5V,		simple,		XXXX,		PIC16,		PIC16,		XXXX,		PIC16,		XXXX )
LIST( P16C7XX,		PIC16,	5V,		simple,		XXXX,		PIC16,		PIC16,		XXXX,		PIC16,		XXXX )
LIST( P16F18XX,		PIC16,	5V,		simple,		P16F18XX,	PIC16,		PIC16,		P16F18XX,	PIC16,		P16F18XX )
//    Pictype,		picfamily,5V,		enter_ISCP,	bulk_erase,	read_code,	read_data,	write_code,	write_data,	write_config_bits )
LIST( P16F54,		PIC10,	5V,		simple,		P16F59,		PIC10,		XXXX,		P16F54,		XXXX,		P16F54 )
LIST( P16F57,		PIC10,	5V,		simple,		P16F59,		PIC10,		XXXX,		P16F54,		XXXX,		P16F54 )
LIST( P16F59,		PIC10,	5V,		simple,		P16F59,		PIC10,		XXXX,		P16F54,		XXXX,		P16F54 )
LIST( P16F62XA,		PIC16,	5V,		P16_Vpp,	P12F6XX,	PIC16,		PIC16,		P16F84A,	PIC16,		P16F62XA )
LIST( P16F62X,		PIC16,	5V,		P16_Vpp,	P16F62X,	PIC16,		PIC16,		P16F84A,	PIC16,		P16F62XA )
LIST( P16F716,		PIC16,	5V,		simple,		P16F716,	PIC16,		PIC16,		P16F716,	PIC16,		P16F716 )
LIST( P16F72,		PIC16,	5V,		simple,		P16F72,		PIC16,		PIC16,		P16F72,		PIC16,		P16F72 )
LIST( P16F785,		PIC16,	5V,		simple,		P16F18XX,	PIC16,		PIC16,		P16F785,	P16F785,	P16F785 )
LIST( P16F7X7,		PIC16,	5V,		simple,		P16F72,		PIC16,		PIC16,		P16F72,		PIC16,		P16F72 )
LIST( P16F7X,		PIC16,	5V,		simple,		P16F72,		PIC16,		PIC16,		P16F72,		PIC16,		P16F72 )
LIST( P16F81X,		PIC16,	5V,		simple,		P16F87,		PIC16,		PIC16,		P16F87,		P16F87,		P16F62XA )
LIST( P16F84A,		PIC16,	5V,		simple,		P16F84A,	PIC16,		PIC16,		P16F84A,	P16F84A,	P16F62XA )
LIST( P16F87,		PIC16,	5V,		P16_Vpp,	P16F87,		PIC16,		PIC16,		P16F87,		P16F87,		P16F87 )
LIST( P16F87XA,		PIC16,	5V,		simple,		P16F87,		PIC16,		PIC16,		P16F87XA,	PIC16,		P16F62XA )
LIST( P16F87X,		PIC16,	5V,		simple,		P16F87X,	PIC16,		PIC16,		P16F84A,	PIC16,		P16F62XA )
LIST( P16F88X,		PIC16,	5V,		simple,		P16F18XX,	PIC16,		PIC16,		P16F785,	PIC16,		P16F18XX )
LIST( P16F91X,		PIC16,	5V,		simple,		P16F91X,	PIC16,		PIC16,		P16F87,		P16F785,	P16F62XA )
LIST( P17C7XX,		PIC16,	5V,		simple,		XXXX,		PIC16,		PIC16,		XXXX,		PIC16,		XXXX )
LIST( P17CXX,		PIC16,	5V,		simple,		XXXX,		PIC16,		PIC16,		XXXX,		PIC16,		XXXX )
LIST( P18F13K22,	PIC18,	5V,		simple,		P18F13K22,	PIC18,		PIC18,		P18F13K22,	PIC18,		XXXX )
//    Pictype,		picfamily,5V,		enter_ISCP,	bulk_erase,	read_code,	read_data,	write_code,	write_data,	write_config_bits )
LIST( P18F14K22,	PIC18,	5V,		simple,		P18F13K22,	PIC18,		PIC18,		P18F14K22,	PIC18,		XXXX )
LIST( P18F1X30,		PIC18,	5V,		simple,		XXXX,		PIC18,		PIC18,		XXXX,		PIC18,		XXXX )
LIST( P18F2XXX,		PIC18,	5V,		simple,		P18F2XXX,	PIC18,		PIC18,		P18F2XXX,	PIC18,		P18F2XXX )
LIST( P18F45J10,	PIC18J,	3V,		PIC18J,		P18F97J60,	PIC18,		XXXX,		P18F45J10,	PIC18,		P18F45J10 )
LIST( P18F4XK22,	PIC18,	5V,		simple,		P18F4XK22,	PIC18,		PIC18,		P18F4XK22,	P18F4XK22,	P18F4XK22 )
LIST( P18F67KXX,	PIC18K,	5V,		PIC18K,		P18F67KXX,	XXXX,		XXXX,		P18F67KXX,	PIC18K,		XXXX )
LIST( P18F6X2X,		PIC18,	5V,		simple,		P18FX220,	PIC18,		PIC18,		P18FXX31,	PIC18,		P18F2XXX )
LIST( P18F6XJXX,	PIC18J,	3V,		PIC18J,		P18F97J60,	PIC18,		XXXX,		P18F45J10,	PIC18,		P18F45J10 )
LIST( P18F6XKXX,	PIC18K,	5V,		PIC18K,		P18F6XKXX,	XXXX,		XXXX,		P18F6XKXX,	PIC18K,		XXXX )
LIST( P18F8410,		PIC18,	5V,		simple,		XXXX,		PIC18,		PIC18,		XXXX,		PIC18,		XXXX )
LIST( P18F872X,		PIC18,	5V,		simple,		P18F872X,	PIC18,		PIC18,		P18F872X,	PIC18,		P18F2XXX )
//LIST( P18F872X,	PIC18,	5V,		simple,		P18F872X,	XXXX,		XXXX,		P18F872X,	PIC18,		P18F2XXX )
LIST( P18F97J60,	PIC18J,	3V,		PIC18J,		P18F97J60,	PIC18,		XXXX,		P18F45J10,	PIC18,		P18F45J10 )
LIST( P18FX220,		PIC18,	5V,		simple,		P18FX220,	PIC18,		PIC18,		P18FX220,	P18FXX2,	P18F2XXX )
//LIST( P18FX220,	PIC18,	5V,		simple,		P18FX220,	XXXX,		XXXX,		P18FX220,	P18FXX2,	P18F2XXX )
LIST( P18FXX23,		PIC18,	5V,		simple,		XXXX,		PIC18,		PIC18,		XXXX,		PIC18,		XXXX )
LIST( P18FXX2,		PIC18,	5V,		simple,		P18FX220,	PIC18,		PIC18,		P18FXX31,	P18FXX2,	P18FXX2 )
LIST( P18FXX31,		PIC18,	5V,		simple,		P18FX220,	PIC18,		PIC18,		P18FXX31,	P18FXX2,	XXXX )
//LIST( P18FXX31,	PIC18,	5V,		simple,		P18FX220,	XXXX,		XXXX,		P18FXX31,	P18FXX2,	XXXX )
LIST( P18FXX39,		PIC18,	5V,		simple,		P18FXX39,	PIC18,		PIC18,		P18FXX31,	PIC18,		P18F2XXX )
//    Pictype,		picfamily,5V,		enter_ISCP,	bulk_erase,	read_code,	read_data,	write_code,	write_data,	write_config_bits )
LIST( P18FXX80,		PIC18,	5V,		simple,		XXXX,		PIC18,		PIC18,		XXXX,		PIC18,		XXXX )
LIST( P18FXXK20,	PIC18,	5V,		simple,		XXXX,		PIC18,		PIC18,		XXXX,		PIC18,		XXXX )
LIST( P18LF13K22,	PIC18,	3V,		simple,		P18F13K22,	PIC18,		PIC18,		P18F13K22,	PIC18,		XXXX )
LIST( P18LF14K22,	PIC18,	3V,		simple,		P18F13K22,	PIC18,		PIC18,		P18F14K22,	PIC18,		XXXX )
LIST( P18LF4XK22,	PIC18,	3V,		simple,		P18F4XK22,	PIC18,		PIC18,		P18F4XK22,	P18F4XK22,	P18F4XK22 )
//    Pictype,		picfamily,5V,		enter_ISCP,	bulk_erase,	read_code,	read_data,	write_code,	write_data,	write_config_bits
#else
	LIST(P18F2XXX)
	LIST(P18FXX2)
	LIST(P16F87XA)
	LIST(P16F62XA)
	LIST(P16F62X)
	LIST(P12F629)
	LIST(P12F6XX)
	LIST(P16F84A)
	LIST(P16F81X)
	LIST(P16F7X)
	LIST(P16F7X7)
	LIST(P16F87X)
	LIST(P16F72)
	LIST(P16F87)
	LIST(P16F54)
	LIST(P16F57)
	LIST(P16F785)
	LIST(P16F59)
	LIST(P16F91X)
	LIST(P16F88X)
	LIST(P16C6XX)
	LIST(P16C55X)
	LIST(P16C7XX)
	LIST(P16C64X)
	LIST(P14000)
	LIST(P16C50X)
	LIST(P16C432)
	LIST(P17CXX)
	LIST(P17C7XX)
	LIST(P18FXX39)
	LIST(P18F6X2X)
	LIST(P18FXX80)
	LIST(P18F8410)
	LIST(P18F6XJXX)
	LIST(P18F45J10)
	LIST(P18F97J60)
	LIST(P18F1X30)
	LIST(P18FXX23)
	LIST(P18FXXK20)
	LIST(P24FJXXXGA0XX)
	LIST(P24FJXXXGA1)
	LIST(dsP30F)
	LIST(dsP33F)
	LIST(P24H)
	LIST(P10F200)
	LIST(P10F202)
	LIST(P12F61X)
	LIST(P16F716)
	LIST(P18FXX31)
	LIST(P18FX220)
	LIST(I2C_EE_1)
	LIST(I2C_EE_2)
	LIST(P12F508)
	LIST(P24FXXKAXXX)
	LIST(P18F4XK22)
	LIST(P18LF4XK22)
	LIST(P18F872X)
	LIST(P16F18XX)
	LIST(P18F6XKXX)
	LIST(P18F67KXX)
	LIST(P18F13K22)
	LIST(P18LF13K22)
	LIST(P18F14K22)
	LIST(P18LF14K22)
	LIST(dsP30F_LV)
#endif
