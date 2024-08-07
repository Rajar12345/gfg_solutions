vector<int>arr3;
        int i = 0;
        int j = 0;
        while(i<arr1.size() && j<arr2.size()){
            if(arr1[i] <= arr2[j]){
                arr3.push_back(arr1[i]);
                i++;
            }
            else{
                arr3.push_back(arr2[j]);
                j++;
            }
        }
        while(i<arr1.size()){
            arr3.push_back(arr1[i]);
            i++;
        }
        while(j<arr2.size()){
            arr3.push_back(arr2[j]);
            j++;
        }
        
        return arr3[k-1];
