public class hello{
    public static void bubblesort(int arr[]){
        for(int i = 0;i<=arr.length;i++){
            for(int j =1;j<arr.length-i;j++){
                if(arr[j-1]>arr[j]){
                    int temp = arr[j];
                    arr[j] = arr[j-1];
                    arr[j-1] = temp;
                }
            }
        }
    }
    public static void main(String args[]){
        int arr[] = {1,5,3,4,2,6,8,7};
        bubblesort(arr);
        int arr2[] ={3,2,8,9,6};
        bubblesort(arr2);
        for(int i =0;i<arr2.length;i++){
            System.out.print(arr2[i]+ " ");
        }
    }
}