// the complexity of the given solution will be n*m?


void merge(int arr1[], int arr2[], int n, int m) {
	    // code here
	    for(int i=0;i<n;i++){
	        for(int k=0;k<m;k++){
	            if(arr2[k]<arr1[i]){
	                swap(arr1[i],arr2[k]);
	            }
	        }
	    }
	    sort(arr2,arr2+m);
	}