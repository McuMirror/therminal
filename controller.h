#include <iostream>
#include <fstream>
#include <string>

#include "tempsensors.h"
#include "relaycontrol.h"
#include "logger.h"


class Controller
{
public:
   enum ControllerState
   {
      automatic,
      manual
   };
  
private:
   TempSensors m_ts;
   RelayControl m_rc;
   Logger m_log;
   bool m_light;
   ControllerState m_state;

       
   void executeStep(void);
   void createStatusMessage(void);
       
         
public:
   Controller();
   
   void initializeController(void);

   void executeCommand(std::string command);
};