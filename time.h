
static bool _delay(unsigned long timeStamp, unsigned long hourGlass){ /*Checks if time has passed between readings. Takes timeStamp (time when reading was made), 
                                                                        and hourGlass (time you want to have passed before next reading is made.) as arguments.*/
    if (millis() - timeStamp > hourGlass) 
    {       
            return (true);               
    }
    else
    {   
        return (false);
    }
  
}