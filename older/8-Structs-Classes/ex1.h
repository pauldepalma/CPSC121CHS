//class example

//#ifndef EX140_H
//#define EX140_H

class CD 
 {
  public:
    CD();
    void init();
    void display();
    void accumulate(); 
  
  private: 
     char id[5]; 
     double balance;
     double rate;
     int term;
 };
//#endif
