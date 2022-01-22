
#include<iostream>
#include<vector>

using namespace std;

int main() {
    int sourceArray[] = { 5, 4, 3, 2, 1};
    int destinationArray[] = { 85, 40, 13, 2, 91};
    int destinationIndex = 2;
    int sourceStart = 1;
    int count = 3;


    int arraySize = sizeof(sourceArray)/sizeof(sourceArray[0]);

    int en = sourceStart + ( arraySize - (sourceStart + count));

    int remainingArray[en];
    int cutArray[count];

    int a = 0;
    int b = 0;
    for(int i=0;i<arraySize;i++){
        if(i >= sourceStart && i < (sourceStart+count)){
            cutArray[a] = sourceArray[i];
            a = a + 1;
        }else{
            remainingArray[b] = sourceArray[i];
            b = b + 1;
        }
    }

    cout<<"array 1"<<endl;
    for(int i=0;i<a;i++){
        cout<<cutArray[i]<<endl;
    }

    cout<<"array 2"<<endl;
    for(int i=0;i<b;i++){
        cout<<remainingArray[i]<<endl;
    }



    int finalSize = (sizeof(destinationArray)/sizeof(destinationArray[0])) +  (sizeof(cutArray)/sizeof(cutArray[0]));

    int finalArray[finalSize];

    for(int i = 0;i<destinationIndex;i++){
        finalArray[i] = destinationArray[i];
    }

    for(int i = 0;i<count;i++){
        finalArray[i+destinationIndex] = cutArray[i];
    }

    for(int i = 0;i<=en;i++){
        finalArray[i+destinationIndex+count] = destinationArray[i+destinationIndex];
    }


    cout<<"final array"<<endl;
    for(int i=0;i<finalSize;i++){
        cout<<finalArray[i]<<endl;
    }




   return 0;
}
        
        
        