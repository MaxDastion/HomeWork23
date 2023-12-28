#include <iostream>

void rec(int n, int current, int temp) {

    
    
        for (size_t i = 0; i < temp; i++)
        {
            if (current == n) {
                break;
            }
            std::cout << temp << " ";
            

            current++;
            
        }
        temp++;
        if (current < n) {
            rec(n, current, temp);
        }
        else {
            return;
        }
    
}

void main() {
    int n;
    std::cin >> n;
    rec(n,0, 1);
    

}