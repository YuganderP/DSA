let arr=[5,32,5,65,67,3,23,123,23];

for(let i=0;i<arr.size-2;i++){
    let min=i;
    for(let j=i;j<arr.size-1;j++){
        if(arr[min]>arr[j]){
            min=j;
        }
        let temp=arr[min]
        arr[min]=arr[i]
        arr[i]=temp
    }


}
arr.forEach(element => {
   console.log(element) 
});