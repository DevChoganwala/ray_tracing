#include "color.h"
#include "vec3.h"

#include <iostream>

int main(){
    const int img_width = 256;
    const int img_height = 256;

    std::cout<<"P3\n"<<img_width<<" "<<img_height<<"\n255\n";
    for(int j = img_height-1;j>=0;--j){
        std::cerr << "\rScanlines remaining: " << j << ' ' << std::flush;
        for(int i = 0;i<img_width;++i){
            color pixel_color(double(i)/(img_width-1), double(j)/(img_height-1), 0.25);
            write_color(std::cout, pixel_color);
        }
    }
    std::cerr << "\nDone.\n";
}