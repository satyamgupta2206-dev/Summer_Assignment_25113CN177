#include <iostream>
#include <set>

int main() {

    int arr1[] = {1, 2, 4, 5, 2};
    int arr2[] = {2, 3, 5, 6};

 
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

 
    std::set<int> unionSet;

    
    for (int i = 0; i < n1; i++) {
        unionSet.insert(arr1[i]);
    }

   
    for (int i = 0; i < n2; i++) {
        unionSet.insert(arr2[i]);
    }


    std::cout << "Union of the two arrays: ";
    for (int element : unionSet) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    return 0;
}
