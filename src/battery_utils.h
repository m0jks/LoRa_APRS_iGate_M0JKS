#ifndef BATTERY_UTILS_H_
#define BATTERY_UTILS_H_

#include <Arduino.h>


namespace BATTERY_Utils {

    void    adcCalibration();
    void    adcCalibrationCheck();
    void    setup();
    float   rdExtBatteryCurrent_mA();
    float   rdExtSolarCurrent_mA();
    float   checkInternalVoltage();
    float   checkExternalVoltage();
    void    checkIfShouldSleep(); // ????
    void    startupBatteryHealth();

    String  generateEncodedTelemetryBytes(float value, bool firstBytes, byte voltageType);
    String  generateEncodedTelemetry();
}

#endif
