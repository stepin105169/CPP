#include <iostream>
#include <conio.h>
using namespace std;

class Area{
public:
    float areasphere(float radius){
        float area = 4*3.14*radius*radius;
        return area;
    }
    float areacone(float radius, float slantheight){
        float area = 3.14*radius*slantheight+3.14*radius*radius;
        return area;
    }
    float areacylinder(float radius, float height){
        float area = 2*3.14*radius*height+2*3.14*radius*radius;
        return area;
    }
    float areacube(float edge){
        float area = 6*edge*edge;
        return area;
    }
    float areacircle(float radius){
        float area = 3.14*radius*radius;
        return area;
    }
    float areasquare(float side){
        float area = side*side;
        return area;
    }
    float arearectangle(float length, float width){
        float area = length*width;
        return area;
    }
    float areatriangle(float base, float height){
        float area = (base*height)/2;
        return area;
    }
};

class Volume{
public:
    float volsphere(float radius){
        float volume = (4*3.14*radius*radius*radius)/3;
        return volume;
    }
    float volcone(float radius, float height){
        float volume = (3.14*radius*radius*height)/3;
        return volume;
    }
    float volcylinder(float radius, float height){
        float volume = 3.14*radius*radius*height;
        return volume;
    }
    float volcube(float edge){
        float volume = edge*edge*edge;
        return volume;
    }
};

int main(){
    int n;
    int choose;
    int again = 1;
    while(again == 1){
    std::cout<<"\t\tTo get the area and volume of solid shapes\n\n\n";
    std::cout<<"\t\t\tHere is your menu\n\n";
    std::cout<<"\t\t\t3D SHAPES\n\n";
    std::cout<<"\t\t\t  1. Sphere\n";
    std::cout<<"\t\t\t  2. Cone\n";
    std::cout<<"\t\t\t  3. Cylinder\n";
    std::cout<<"\t\t\t  4. Cube\n\n";
    std::cout<<"\t\t\t2D SHAPES\n\n";
    std::cout<<"\t\t\t  5. Circle\n";
    std::cout<<"\t\t\t  6. Square\n";
    std::cout<<"\t\t\t  7. Rectangle\n";
    std::cout<<"\t\t\t  8. Triangle\n\n";
    std::cout<<"\t\t\tEnter your option\t";
    std::cin>>n;
    Area objarea;
    Volume objvolume;
    system("CLS");
    switch(n){
    case 1:
        system("CLS");
        float sphereradius;
        std::cout<<"Enter the radius of sphere: ";
        std::cin>>sphereradius;
        std::cout<<"The area of sphere is "<<objarea.areasphere(sphereradius)<<endl;
        std::cout<<"The volume of sphere is "<<objvolume.volsphere(sphereradius)<<endl;
        std::cout<<endl;
        break;
    case 2:
        system("CLS");
        float coneradius, coneheight, coneslantheight;
        std::cout<<"Enter the radius of cone: ";
        std::cin>>coneradius;
        std::cout<<"Enter the height of cone: ";
        std::cin>>coneheight;
        std::cout<<"Enter the slant height of cone: ";
        std::cin>>coneslantheight;
        std::cout<<"The area of cone is "<<objarea.areacone(coneradius, coneslantheight)<<endl;
        std::cout<<"The volume of cone is "<<objvolume.volcone(coneradius, coneheight)<<endl;
        std::cout<<endl;
        break;
    case 3:
        system("CLS");
        float cylinderradius, cylinderheight;
        std::cout<<"Enter the radius of cylinder: ";
        std::cin>>cylinderradius;
        std::cout<<"Enter the height of cylinder: ";
        std::cin>>cylinderheight;
        std::cout<<"The area of cylinder is "<<objarea.areacylinder(cylinderradius, cylinderheight)<<endl;
        std::cout<<"The volume of cylinder is "<<objvolume.volcylinder(cylinderradius, cylinderheight)<<endl;
        std::cout<<endl;
        break;
    case 4:
        system("CLS");
        float cubeedge;
        std::cout<<"Enter the edge of cube: ";
        std::cin>>cubeedge;
        std::cout<<"The area of cube is "<<objarea.areacube(cubeedge)<<endl;
        std::cout<<"The volume of cube is "<<objvolume.volcube(cubeedge)<<endl;
        std::cout<<endl;
        break;
    case 5:
        system("CLS");
        float circleradius;
        std::cout<<"Enter the radius of circle: ";
        std::cin>>circleradius;
        std::cout<<"The area of circle is "<<objarea.areacircle(circleradius)<<endl;
        std::cout<<endl;
        break;
    case 6:
        system("CLS");
        float squareside;
        std::cout<<"Enter the side of square: ";
        std::cin>>squareside;
        std::cout<<"The area of square is "<<objarea.areasquare(squareside)<<endl;
        std::cout<<endl;
        break;
    case 7:
        system("CLS");
        float rectlength, rectwidth;
        std::cout<<"Enter the length of rectangle: ";
        std::cin>>rectlength;
        std::cout<<"Enter the width of rectangle: ";
        std::cin>>rectwidth;
        std::cout<<"The area of rectangle is "<<objarea.arearectangle(rectlength, rectwidth)<<endl;
        std::cout<<endl;
        break;
    case 8:
        system("CLS");
        float tribase, triheight;
        std::cout<<"Enter the base of triangle: ";
        std::cin>>tribase;
        std::cout<<"Enter the height of triangle: ";
        std::cin>>triheight;
        std::cout<<"The area of triangle is "<<objarea.areatriangle(tribase, triheight)<<endl;
        std::cout<<endl;
        break;
    default:
        std::cout<<"Error";
        std::cout<<endl;
        break;
    }
    std::cout<<"\t=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n";
    std::cout<<"\t\tWould you like to do another calculations:\n\n";
    std::cout<<"\t\t\t< 1 > Yes\n";
    std::cout<<"\t\t\t< 2 > No\n";
    std::cout<<endl;
    std::cout<<"\t\tSelect your option: ";
    std::cin>>choose;
        system("CLS");
        if (choose == 2) {
            std::cout<<"\n\n\n\n\t\t\t\t-----THANKYOU FOR USING SURFACE ET VOLUME!!!-----\n\n\n\n";
            std::cout<<"\n\n\n\n\t\t\t\t\t-----HAVE A NICE DAY!!!-----\n\n\n\n";
            break;
        }
    }
    return 0;
}
