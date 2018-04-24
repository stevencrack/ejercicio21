#include <iostream>

double value(float x);


int main(){
 
  float x = 0.0;
  float c = 1.0;
  float dx = 0.01;
  float dt = 0.0001;
  float T = 0.5;
  int Newx = 2.0/dx + 1;
  int Newt = T/dt;
  double *u = new double[ Newx ];

    for(int t = 0; t<=Newt; t++){
        x = 0;
        for(int i=Newx; i>0; i--){
            if(t==0){
                u[i] = value(x);
                x += dx;
            }
            else{
                if((i!=0) || (i!=Newx - 1)){
                    u[i] = u[i] - c*(dt/dx)*(u[i] - u[i-1]) ;
                }
            }
  }
}
    x = 0;
    for(int i = 0; i<Newx; i++){
        std::cout << x << " " << u[i] << std::endl;
        x += dx;
    }
    return 0;
}
    
double value(float x){
    double u0 = 0.0;
    if((x>=0.0) && (x<=0.75)){
        return u0;
  }
    if((x>1.25) && (x<=2.0)){
     return u0;
  }
    if((x>0.75) && (x<=1.25)){
    u0 = 1.0;
  }
    return u0;
}
