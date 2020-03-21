#include <iostream>
#define tam 25
using namespace std;





template <typename T> 
class sort { 
private: 
static void swap (T *x, T *y) { // swap x-> y
    T aux = *x;
    *x =*y;
    *y = aux;
};

public:
   static void  bubble(T *var, int size) 
   {
      for (int i = 0; i<size; i++) {
           for (int j = 0; j<size; j++) {
               if (var[j]>var[j+1]){
                   swap(&var[j+1],&var[j]);
               }  
           }   
      } 
  }

  static void quick(T *var, int init, int end) 
  {
      T pivot;
      int left = init, right = end-1;
      pivot = var[int(init+end)/2];
      while(left <= right) {
          
          while (var[left]<pivot && left <end){
              left++; 
          }
          while (var[right]>pivot && right > init){
              right--;  
          }
          if (left <= right) { 
              swap(&var[left],&var[right]);
              left++;
              right--;
          }
      }
      if (init < right) {
          quick(var, init,right+1);
      }
      if (left <end){
          quick(var, left, end);
      }
  }
  
  static void selection (T *var, int size) {
      if (size > 1) {
          for(int i = 0; i < size; i++) {
              if(var[0]>var[i]){
              swap(&var[0],&var[i]);
          }
         }
         selection(&var[1], size-1);
      }
  }
}; 


