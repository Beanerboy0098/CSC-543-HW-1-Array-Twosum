/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;

vector<int> findingsumoftar(vector<int>& nums, int targetvalue){ /* After messing with arrays and pointers, to no avial I found a solution in using vectors or containainers that represent arrays, I found these worked much better and gave me the result I needed. */
    
    vector<int> arr; /* So I created function of a vector to be refrenced in the main function. Essentially the vector can be assigned a type which is an int in this case. Then by getting the elements from our test vector in the main method can began the process of adding to figure out the sum*/
    
    for(int a = 0; a < nums.size(); a++){ /* I compare the two values by having a equal an index, then I compare it to all the other indexs in the vector using b*/
        
        for(int b = 0; b<nums.size(); b++){
            
            if(a == b){ /* To work around the restriction of not using the same indcies to get our target value, I had b purporstly skip a's current index.*/
                b++;
            }
            
            if(nums[a] + nums[b]==targetvalue){
                arr = {a,b};
                return arr; /* Ends the function once a value is found, though if no value is found it returns nothing */
            }
        }
    }
    
}


int main()
{
    vector<int> testarr = {3,2,4};
    int testtargetvalue = 7; 
    
    vector<int> displayvalue = findingsumoftar(testarr, testtargetvalue); /* I call the function here so that the comparsion begans, once finshed it returns the answer here*/
    cout << "The following indcies add to the targetvalue: ";
    
    if (displayvalue.size() == 0) /* If no solution is found then it states the following */
    {
        cout << "None of them";
    }
    
    for(int i = 0; i < displayvalue.size(); i++){
        
        cout << displayvalue.at(i) << " "; 
        
}

return 0;

}
