#include<iostream>
#include<cmath>
int main(){
    double a,b,c,D,root1,root2;
    std::cout<<"Enter the values of a,b and c respectively."<<'\n';
    std::cin>>a>>b>>c;
    if(a == 0){
        if(b!=0){
            root1 = -c/b;
            std::cout<<"Linear Equation."<<'\n';
            std::cout<<"Root = "<<root1;
        }
        else if(c == 0){
            std::cout<<"Infinitely many solution."<<'\n';
        }
        else{
            std::cout<<"No solution."<<'\n';
        }
    }

    else{
        D = b*b - 4*a*c;
        if(D>0){
            root1 = (-b + sqrt(D)) / (2 * a);
            root2 = (-b - sqrt(D)) / (2 * a);

            std::cout << "Two different real roots."<<'\n';
            std::cout << "Root 1 = " << root1 << '\n';
            std::cout << "Root 2 = " << root2 << '\n';
        }
        else if(D == 0){
            root1 = -b / (2 * a);

            std::cout << "Both roots are equal.\n";
            std::cout << "Root = " << root1 << '\n';
        }
        else{
            double realPart = -b / (2 * a);
            double imaginaryPart = sqrt(-D) / (2 * a);

            std::cout << "Two complex roots.\n";
            std::cout << "Real part = " << realPart << '\n';
            std::cout << "Imaginary part = +/- "<< abs(imaginaryPart) << "i"<<'\n';
        }
    }
    return 0;
}