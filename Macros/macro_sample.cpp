// CPP MACROS
#include <iostream>
using namespace std;
#define PI 3.14            // directly define a value and use it
#define printf(x) std::cout<<x<<"\n";     // can have a custom function

// conditional macro
#define IfImThereDoThis

int main() {
    cout<<PI<<"\n";
    printf("This is a cout in macro defined.");
    #ifdef IfImThereDoThis
        printf("I'm printed hurray!, just because IfImThereDoThis you exist");
    #endif
    
    return 0;
}


// Output:
// 3.14
// This is a cout in macro defined.
// I'm printed hurray!, just because IfImThereDoThis you exist
