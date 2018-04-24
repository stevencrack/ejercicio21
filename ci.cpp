#include <iostream>

double value0(float x);

int main(){
    
    float x = 0.0;
    float c = 1.0;
    float dx = 0.1;
    float dt = 0.01;
    float T = 0.5;
    int Newx = 2.0/dx + 1;
    int Newt = T/dt;

    for(int i=0; i<Newx; i++){
        
        std::cout  << x << " " << value0(x) << std::endl;
        x += delta_x;
    }
}
double value0(float x){
    double u0;
    if((x>=0.0) && (x<=0.75)){
        u0 = 0.0;
    }
    if((x>1.25) && (x<=2.0)){
        u0 = 0.0;
    }
    if((x>0.75) && (x<=1.25)){
        u0 = 1.0;
    }
    return u0;
}
