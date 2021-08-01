/**
 * @file Activity2.h
 * @author Paras jain
 * @brief Activity2 function definition
 * @version 0.1
 * @date 2021-08-01
 *
 * @copyright Copyright (c) 2021
 *
 */

#ifndef __Activity2_H__
#define __Activity2_H__
/**
 * @brief Reading the analog input and returning a digital 8bit value
 *
 * @param ch
 * @return uint16_t
 */
uint16_t ReadADC(uint8_t ch);
void InitADC();
#endif
