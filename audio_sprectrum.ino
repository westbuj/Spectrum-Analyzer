#include <TVout.h>
#include <fix_fft.h>
TVout TV;
char im[128], data[128], lastpass[64];
char x=32, ylim=90;
int i=0,val=0;
void setup()
    {                    
//TV.start_render(_NTSC);      
    TV.begin(_NTSC,128,96);                              //  Initialize TV output, 128x96.
  
    
     TV.print_str(0,0,"Room Tuner");             //  TVout lib uses x,y for print
    TV.print_str(1,8,"Spectrum Visualizer"); 
    
    
    Serial.begin(9600);
    analogReference(DEFAULT);                          //  Use default (5v) aref voltage. 
    for (int z=0; z<64; z++) {lastpass[z]=80;};       //  fill the lastpass[] array with dummy data
    
 //   delay(100);
    };
void loop()
    {
 //   TV.print_str(0,0,"Room Tuner");             //  TVout lib uses x,y for print
//    TV.print_str(1,8,"Spectrum Visualizer"); 
  //    Serial.println(TV.horz_res());      
  //    Serial.println(TV.vert_res());
      // TV.clear_screen();
    
     
 //   TV.delay_frame(60);
    
//    return;
   
   
    for (i=0; i < 128; i++){                                     // We don't go for clean timing here, it's
      val = 96 - analogRead(A0)/12;                                      // better to get somewhat dirty data fast
      /* draw a line
 * x1,y1 to x2,y2
 * with color 1 = white, 0=black, 2=invert
 */
      TV.draw_line(i,20,i,96,0);
      TV.draw_line(i,val,i,96,1);
 //
      };

 //  fix_fft(data,im,7,0);
 
 
    
   
    };
    

