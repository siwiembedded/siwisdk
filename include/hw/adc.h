/*
 * adc.h
 *
 */

#ifndef INCLUDE_HW_ADC_H_
#define INCLUDE_HW_ADC_H_

/**
 * ADC channels
 */
enum adcch_e {
	ADC_CH0,/**< ADC channel 0 mapped to pin ADC0 */
	ADC_CH1,/**< ADC channel 1 mapped to @ref GPIO_1 */
	ADC_CH2,/**< ADC channel 2 mapped to @ref GPIO_21 */
	ADC_CH3,/**< ADC channel 3 mapped to @ref GPIO_31 */
	ADC_CH4,/**< ADC channel 4 mapped to @ref GPIO_32 */
	ADC_CH5,/**< ADC channel 5 mapped to pin ADC1 */
};

#ifdef __cpluplus
extern "C" {
#endif

/**
 * Configure ADC channel and setup pin-muxing
 * @param ch	[in] ADC Channel to use @ref adcch_e
 * @return		0 on success, negative error otherwise
 */
int adc_config(int ch);

/**
 * Read ADC Channel
 * @param ch	[in] ADC Channel to read @ref adcch_e
 * @return		12-bit ADC value, If ADC channel is not configured prior to calling this function, return value is unreliable.
 */
unsigned int adc_read(int ch);

#ifdef __cpluplus
}
#endif

#endif /* INCLUDE_HW_ADC_H_ */
