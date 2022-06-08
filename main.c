/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include "project.h"
int s1=0,c1=0,time=100,num=0;

void ClearLeds(){

        for(s1=0;s1<16;s1++){
        Matriz_ClearRC(s1,0);
        Matriz_ClearRC(s1,1);
        Matriz_ClearRC(s1,2);
        Matriz_ClearRC(s1,3);
        }
}




void Fun1(int);
void Fun2(int);
void Fun3(int);
void Fun4(int);
void Fun5(int);

void Fun1(int time){

    for(s1=4;s1<20;s1=s1+4){
        Matriz_SetRC(s1-4,0);
        Matriz_SetRC(s1-3,0);
        Matriz_SetRC(s1-2,0);
        Matriz_SetRC(s1-1,0);
        
        Matriz_SetRC(s1-4,1);
        Matriz_SetRC(s1-3,1);
        Matriz_SetRC(s1-2,1);
        Matriz_SetRC(s1-1,1);
        
        Matriz_SetRC(s1-4,2);
        Matriz_SetRC(s1-3,2);
        Matriz_SetRC(s1-2,2);
        Matriz_SetRC(s1-1,2);
        
        Matriz_SetRC(s1-4,3);
        Matriz_SetRC(s1-3,3);
        Matriz_SetRC(s1-2,3);
        Matriz_SetRC(s1-1,3);
        
        CyDelay(time);
        
        Matriz_ClearRC(s1-4,0);
        Matriz_ClearRC(s1-3,0);
        Matriz_ClearRC(s1-2,0);
        Matriz_ClearRC(s1-1,0);
        
        Matriz_ClearRC(s1-4,1);
        Matriz_ClearRC(s1-3,1);
        Matriz_ClearRC(s1-2,1);
        Matriz_ClearRC(s1-1,1);
        
        Matriz_ClearRC(s1-4,2);
        Matriz_ClearRC(s1-3,2);
        Matriz_ClearRC(s1-2,2);
        Matriz_ClearRC(s1-1,2);
        
        Matriz_ClearRC(s1-4,3);
        Matriz_ClearRC(s1-3,3);
        Matriz_ClearRC(s1-2,3);
        Matriz_ClearRC(s1-1,3);
    }

    for(s1=16;s1>3;s1=s1-4){
        Matriz_SetRC(s1-1,3);
        Matriz_SetRC(s1-2,3);
        Matriz_SetRC(s1-3,3);
        Matriz_SetRC(s1-4,3);
        
        Matriz_SetRC(s1-4,2);
        Matriz_SetRC(s1-3,2);
        Matriz_SetRC(s1-2,2);
        Matriz_SetRC(s1-1,2);
        
        Matriz_SetRC(s1-4,1);
        Matriz_SetRC(s1-3,1);
        Matriz_SetRC(s1-2,1);
        Matriz_SetRC(s1-1,1);
        
        Matriz_SetRC(s1-4,0);
        Matriz_SetRC(s1-3,0);
        Matriz_SetRC(s1-2,0);
        Matriz_SetRC(s1-1,0);
        CyDelay(time);
        Matriz_ClearRC(s1-4,3);
        Matriz_ClearRC(s1-3,3);
        Matriz_ClearRC(s1-2,3);
        Matriz_ClearRC(s1-1,3);

        Matriz_ClearRC(s1-4,2);
        Matriz_ClearRC(s1-3,2);
        Matriz_ClearRC(s1-2,2);
        Matriz_ClearRC(s1-1,2);

        Matriz_ClearRC(s1-4,1);
        Matriz_ClearRC(s1-3,1);
        Matriz_ClearRC(s1-2,1);
        Matriz_ClearRC(s1-1,1);
        
        Matriz_ClearRC(s1-4,0);
        Matriz_ClearRC(s1-3,0);
        Matriz_ClearRC(s1-2,0);
        Matriz_ClearRC(s1-1,0);
    }
    
    CyDelay(time);


    
}
void Fun2(int time){
        for(s1=4;s1<20;s1=s1+4){
            Matriz_SetRC(s1-4,0);
            Matriz_SetRC(s1-3,0);
            Matriz_SetRC(s1-2,0);
            Matriz_SetRC(s1-1,0);
            
            CyDelay(time);
        
            Matriz_ClearRC(s1-4,0);
            Matriz_ClearRC(s1-3,0);
            Matriz_ClearRC(s1-2,0);
            Matriz_ClearRC(s1-1,0);
        }    
        
            ClearLeds();
            
        for(s1=16;s1>3;s1=s1-4){
            Matriz_SetRC(s1-4,1);
            Matriz_SetRC(s1-3,1);
            Matriz_SetRC(s1-2,1);
            Matriz_SetRC(s1-1,1);
            
            CyDelay(time);
        
            Matriz_ClearRC(s1-4,1);
            Matriz_ClearRC(s1-3,1);
            Matriz_ClearRC(s1-2,1);
            Matriz_ClearRC(s1-1,1);
        }
        
            ClearLeds();
            
        for(s1=4;s1<20;s1=s1+4){
            Matriz_SetRC(s1-4,2);
            Matriz_SetRC(s1-3,2);
            Matriz_SetRC(s1-2,2);
            Matriz_SetRC(s1-1,2);
            
            CyDelay(time);
        
            Matriz_ClearRC(s1-4,2);
            Matriz_ClearRC(s1-3,2);
            Matriz_ClearRC(s1-2,2);
            Matriz_ClearRC(s1-1,2);
        }    
        
            ClearLeds();
            
        for(s1=16;s1>3;s1=s1-4){
            Matriz_SetRC(s1-4,3);
            Matriz_SetRC(s1-3,3);
            Matriz_SetRC(s1-2,3);
            Matriz_SetRC(s1-1,3);
            
            CyDelay(time);
        
            Matriz_ClearRC(s1-4,3);
            Matriz_ClearRC(s1-3,3);
            Matriz_ClearRC(s1-2,3);
            Matriz_ClearRC(s1-1,3);
        }           
        
        for (s1=4;s1<20;s1=s1+4){
            
            Matriz_SetRC(s1-4,3);
            Matriz_SetRC(s1-3,3);
            Matriz_SetRC(s1-2,3);
            Matriz_SetRC(s1-1,3);
            
            CyDelay(time);
        
            Matriz_ClearRC(s1-4,3);
            Matriz_ClearRC(s1-3,3);
            Matriz_ClearRC(s1-2,3);
            Matriz_ClearRC(s1-1,3);      
        }
        
            ClearLeds();

        for(s1=16;s1>3;s1=s1-4){
            Matriz_SetRC(s1-4,2);
            Matriz_SetRC(s1-3,2);
            Matriz_SetRC(s1-2,2);
            Matriz_SetRC(s1-1,2);
            
            CyDelay(time);
        
            Matriz_ClearRC(s1-4,2);
            Matriz_ClearRC(s1-3,2);
            Matriz_ClearRC(s1-2,2);
            Matriz_ClearRC(s1-1,2);
        }    

        for(s1=4;s1<20;s1=s1+4){
            Matriz_SetRC(s1-4,1);
            Matriz_SetRC(s1-3,1);
            Matriz_SetRC(s1-2,1);
            Matriz_SetRC(s1-1,1);
            
            CyDelay(time);
        
            Matriz_ClearRC(s1-4,1);
            Matriz_ClearRC(s1-3,1);
            Matriz_ClearRC(s1-2,1);
            Matriz_ClearRC(s1-1,1);
        }    
        
            ClearLeds();
            
        for(s1=16;s1>3;s1=s1-4){
            Matriz_SetRC(s1-4,0);
            Matriz_SetRC(s1-3,0);
            Matriz_SetRC(s1-2,0);
            Matriz_SetRC(s1-1,0);
            
            CyDelay(time);
        
            Matriz_ClearRC(s1-4,0);
            Matriz_ClearRC(s1-3,0);
            Matriz_ClearRC(s1-2,0);
            Matriz_ClearRC(s1-1,0);
        }

}
void Fun3(int time){
    ClearLeds();
       
    for(s1=0;s1<16;s1++){
        Matriz_ClearRC(s1,0);
        Matriz_ClearRC(s1,1);
        Matriz_ClearRC(s1,2);
        Matriz_ClearRC(s1,3);
        if(s1==5||s1==6||s1==9||s1==10){
            Matriz_SetRC(s1,1);
            Matriz_SetRC(s1,2);
        }else{}
    }
    CyDelay(time);        


    for(s1=0;s1<16;s1++){
        Matriz_SetRC(s1,0);
        Matriz_SetRC(s1,1);
        Matriz_SetRC(s1,2);
        Matriz_SetRC(s1,3);
        if(s1==5||s1==6||s1==9||s1==10){
            Matriz_ClearRC(s1,1);
            Matriz_ClearRC(s1,2);   
        }else{}
    }
    CyDelay(time);
    
    ClearLeds();
   
    CyDelay(time);
    
}
void Fun4(int time){
            for(s1=0;s1<3;s1++){
                for(c1=0;c1<4;c1++){
                    Matriz_SetRC(s1,c1);
                }
                CyDelay(time);
            }
            
            for(s1=3;s1<15;s1=s1+4){
                for(c1=0;c1<4;c1++){
                    Matriz_SetRC(s1,c1);
                }
                CyDelay(time);
            }
            
            for (s1=15;s1>11;s1=s1-1){
                for(c1=0;c1<4;c1++){
                    Matriz_SetRC(s1,c1);
                }
                CyDelay(time);
            }
            
            for (s1=8;s1>0;s1=s1-4){
                for(c1=0;c1<4;c1++){
                    Matriz_SetRC(s1,c1);
                }
                CyDelay(time);
            }
            
            for (s1=5;s1<7;s1++){
                for(c1=0;c1<4;c1++){
                    Matriz_SetRC(s1,c1);
                }
                CyDelay(time);
            }
            
            for(c1=0;c1<4;c1++){
                    Matriz_SetRC(10,c1);
                    Matriz_SetRC(10,c1);
                    Matriz_SetRC(10,c1);
                    Matriz_SetRC(10,c1);
                }
                CyDelay(time);
            
            for(c1=0;c1<4;c1++){
                    Matriz_SetRC(9,c1);
                    Matriz_SetRC(9,c1);
                    Matriz_SetRC(9,c1);
                    Matriz_SetRC(9,c1);
                }
                CyDelay(time);    
            
            for(c1=0;c1<4;c1++){
                    Matriz_ClearRC(9,c1);
                    Matriz_ClearRC(9,c1);
                    Matriz_ClearRC(9,c1);
                    Matriz_ClearRC(9,c1);
                }
                CyDelay(time);
                
            for(c1=0;c1<4;c1++){
                    Matriz_ClearRC(10,c1);
                    Matriz_ClearRC(10,c1);
                    Matriz_ClearRC(10,c1);
                    Matriz_ClearRC(10,c1);
                }
                CyDelay(time);
                
            for (s1=6;s1>3;s1--){
                for(c1=0;c1<4;c1++){
                    Matriz_ClearRC(s1,c1);
                }
                CyDelay(time);
            }
            
            for (s1=8;s1<13;s1=s1+4){
                for(c1=0;c1<4;c1++){
                    Matriz_ClearRC(s1,c1);
                }
                CyDelay(time);
            }
            
            for (s1=13;s1<15;s1=s1+1){
                for(c1=0;c1<4;c1++){
                    Matriz_ClearRC(s1,c1);
                }
                CyDelay(time);
            }
            
            for(s1=15;s1>3;s1=s1-4){
                for(c1=0;c1<4;c1++){
                    Matriz_ClearRC(s1,c1);
                }
                CyDelay(time);
            }
            
            for(s1=3;s1>-1;s1--){
                for(c1=0;c1<4;c1++){
                    Matriz_ClearRC(s1,c1);
                }
                CyDelay(time);
            }
}
void Fun5(int time){
            for(c1=0;c1<3;c1++){
            for(s1=0;s1<16;s1++){
                
                Matriz_SetRC(s1,c1);
                Matriz_SetRC(s1,c1+1);
                
            }
            CyDelay(time);
            for(s1=0;s1<20;s1++){
                Matriz_ClearRC(s1,c1);
            }
        }
        
        for(c1=4;c1>-1;c1--){
            for(s1=0;s1<16;s1++){
                
                Matriz_SetRC(s1,c1);
                Matriz_SetRC(s1,c1-1);
                
            }
            CyDelay(time);
            for(s1=0;s1<20;s1++){
                Matriz_ClearRC(s1,c1);
            }
        }    
}


int main(void)

{
    CyGlobalIntEnable; /* Enable global interrupts. */
    Matriz_Start();
   

    for(;;)
    {

        /////// Lectura pin cambio de modo//////////     
        if(Func_Read()==0){
            num++;
            
            if(num==6){
                num=0;
            }
            CyDelay(10);
            while(Func_Read()==0);
        }
        ////// Lectura pin cambio de velocidad de la sequencia/////////
        if(tiempo_Read()==0){
            time=time+100;
            
            if(time==600){
                time=100;
            }
            CyDelay(10);
            while(tiempo_Read()==0);
        }
        /////////Seleccion del modo///////////
        switch(num){
            case 0:
                Fun1(time);
            break;
            case 1:
                Fun2(time);
            break;    
            case 2:
                Fun3(time);
            break;    
            case 3:
                Fun4(time);
            break;
            case 4:
                Fun5(time);
            break;
            case 5:
                Fun1(time);
                CyDelay(250);
                Fun2(time);
                CyDelay(250);
                Fun3(time);
                CyDelay(250);
                Fun4(time);
                CyDelay(250);
                Fun5(time);
                CyDelay(250);
            break;
        }    

        


                            
        

    }
        
      
        /* Place your application code here. */
}


/* [] END OF FILE */
