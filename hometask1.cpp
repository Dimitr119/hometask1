# include <iostream>
# include <cmath>



float get_a() {
    std::cout << "Hello, dear user\n";
    std::cout << "I am calculating Discriminant\n";
    std::cout << "Please enter numbers from -25 to 255\n"; 
    bool exit_from_while = true;
    
    while (exit_from_while) {
        std::cout << "enter number for a: ";
        float digit_a;
        std::cin >> digit_a;
            
        if (digit_a < -25 || digit_a > 255) {
            std::cin.clear();
            std::cin.ignore(32767, '\n');
            std::cout << "Entered number is out of range\n";
            std::cout << "input number for a again\n";          
        } 
        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(32767, '\n');
            std::cout << "Wrong, you input letter, repeat please\n";
        }       
               
        else {
            std::cin.ignore(32767, '\n');
            return digit_a;
        }     
    }
}

float get_b() {

    bool exit_from_while = true;
    
    while (exit_from_while) {
        std::cout << "enter number for b: ";
        float digit_b;
        std::cin >> digit_b;    
        
        if (digit_b < -25 || digit_b > 255) {
            std::cin.clear();
            std::cin.ignore(32767, '\n');
            std::cout << "Entered number is out of range\n";
            std::cout << "input number for b again\n";          
        }
        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(32767, '\n');
            std::cout << "Wrong, you input letter, repeat please\n";
        }       
                
        else {
            std::cin.ignore(32767, '\n');
            return digit_b;
        }     
    }
}
float get_c() {

    bool exit_from_while = true;
    
    while (exit_from_while) {
        std::cout << "enter number for c: ";
        float digit_c;
        std::cin >> digit_c;

        if (digit_c < -25 || digit_c > 255) {
            std::cin.clear();
            std::cin.ignore(32767, '\n');
            std::cout << "Entered number is out of range\n";
            std::cout << "input number for c again\n";          
        }
        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(32767, '\n');
            std::cout << "Wrong, you input letter, repeat please\n";
        }       
                
        else {
            return digit_c;
        }     
    }
}
void printResult(float digit_a, float digit_b, float digit_c)
{
    float D, x1, x2;
    const int two=2, four=4;
    D = pow(digit_b, two) - (four*digit_a*digit_c);
    if (D < 0){
        std::cout << "D < 0, so we do not have square roots \n";
    }
    else
    {
        x1 = (-digit_b + sqrt(D)) / (two*digit_a);
        x2 = (-digit_b - sqrt(D)) / (two*digit_a);
        std:: cout << "square root of X1 = " << x1 << std::endl;
        std:: cout << "square root of X2 = " << x2 << std::endl;
    }
    
}
int main() {
    float digit_a = get_a();
    float digit_b = get_b();
    float digit_c = get_c();

    printResult(digit_a, digit_b, digit_c);   

    return 0;

}