Analog to Digital Converter
===========================

.. |br| raw:: html

	<br>

There are 10-bit analog ports available on GSM modules. Input voltage
range from 0-2.8v gives digial output of 0-1023.

However analog ports on NBIoT module are 12-but and input voltage range
from 0-1.4v with digial output of 0-4095.

ADC Channel Mapping
-------------------

+--------------+------------------+-----------+-----------------+-----------+------------+------------+
| ADC Channel  |  MC20U Pin       |  M56 Pin  |  MC60 Pin       |  M66 Pin  |  BC20 Pin  |  SIM868    |
|              |  |br| S20U Pin   |           |  |br| MC20 Pin  |           |            |  Pin       |
+==============+==================+===========+=================+===========+============+============+
| ADC CH 0     |  Pin 6           |  Pin 61   |  Pin 6          |  Pin 9    |  Pin 6     |  Pin 38    |
+--------------+------------------+-----------+-----------------+-----------+------------+------------+
| ADC CH 1     |  Pin 47          |  Pin 12   |  Pin 47         |  Pin 16   |  Pin 54    |  --        |
+--------------+------------------+-----------+-----------------+-----------+------------+------------+
| ADC CH 2     |  Pin 66          |  Pin 3    |  Pin 28         |  Pin 28   |  --        |  --        |
+--------------+------------------+-----------+-----------------+-----------+------------+------------+
| ADC CH 3     |  Pin 30          |  Pin 2    |  Pin 29         |  Pin 29   |  --        |  --        |
+--------------+------------------+-----------+-----------------+-----------+------------+------------+
| ADC CH 4     |  Pin 29          |  Pin 13   |  --             |  --       |  --        |  --        |
+--------------+------------------+-----------+-----------------+-----------+------------+------------+
| ADC CH 5     |  --              |  Pin 33   |  --             |  --       |  --        |  --        |
+--------------+------------------+-----------+-----------------+-----------+------------+------------+


.. include:: /inc/adc.inc

.. note:: Please refer header file for actual number of channels available for respective board.

.. include:: /inc/def_adc.inc
