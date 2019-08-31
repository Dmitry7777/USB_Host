#ifndef USB_HOST_H
#define USB_HOST_H
#pragma USB_HOST MCU
#warning "Found a new hardware"
//#error FAIL"Hardware is failed"

#define IO_MCU_USB_HOST_DP INPUT
#define IO_MCU_USB_HOST_DP OUTPUT
#define IO_MCU_USB_HOST_DM INPUT
#define IO_MCU_USB_HOST_DM OUTPUT

#define HID_Interface 0x03 //Human interface device (HID)
#define CDC_Both 0x02 //Communications and CDC Control

uint8_t PROCESS_USB_HOST_DP;
uint8_t PROCESS_USB_HOST_DM;

class USB_Host{
  public:
  USB_Host(int DataPlus, int DataMinus){
    PROCESS_USB_HOST_DP = DataPlus; //
    PROCESS_USB_HOST_DM = DataMinus; //
    pinMode(DataPlus, IO_MCU_USB_HOST_DP); //
    pinMode(DataMinus, IO_MCU_USB_HOST_DM); //
  };

  void begin(){
digitalWrite(_DataPlus, HIGH); //
PROCESS_USB_HOST_DM = digitalRead(_DataMinus); //
    }; //It functions the beginning
void write(void){
  }; //It functions the read with the aid of the port
void available(void){
}; //
void flush(){
}; //It functions the flush access of the port
void setTimeout(){
}; //It functions the time out to the port
void find(){
}; //
void print(){
}; //
void println(){
}; //
void peek(){
}; //
void findUntil(){
}; //
void availableForWrite(){
}; //
void parseFloat(){
}; //
void parseInt(){
}; //
void readString(){
}; //
void readStringUntil(){
}; //
void readBytes(){
}; //
void readBytesUntil(){
}; //
  void end(){
digitalWrite(_DataPlus, LOW); //
PROCESS_USB_HOST_DM = digitalRead(_DataMinus); //
    }; //It functions the end of the operating of the port
  
  private:
  uint8_t _PROCESS_USB_HOST_DP; //
  uint8_t _PROCESS_USB_HOST_DM; //
  uint8_t _DataPlus; //
  uint8_t _DataMinus; //
  
  protected:
  word DigitalSignature;
};

#endif
