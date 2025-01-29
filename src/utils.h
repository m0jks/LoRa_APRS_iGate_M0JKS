#ifndef UTILS_H_
#define UTILS_H_

#include <Arduino.h>

class ReceivedPacket {
public:
    long    millis;
    String  packet;
    int     RSSI;
    float   SNR;
};

struct _currents {
  float battery;
  float solar;
};

namespace Utils {
  
    void      processStatus();
    String   getLocalIP();
    void     setupDisplay();
    void     activeStations();
    void     checkBeaconInterval(bool force);
    void     checkDisplayInterval();
    void     validateFreqs();
    void     typeOfPacket(const String& packet, const uint8_t packetType);
    void     print(const String& text);
    void     println(const String& text);
    void     checkRebootMode();
    void     checkRebootTime();
    void     checkSleepByLowBatteryVoltage(uint8_t mode);
    bool     checkValidCallsign(const String& callsign);

    void     setLastScreenOn(const String& funcname, bool dbg);
    uint32_t getLastScreenOn(void);
    
    void  setExtBatteryCurrent(float current); 
    void  setExtSolarCurrent(float current);     
    float getExtBatteryCurrent(void);
    float getExtSolarCurrent(void);          
}
#endif
