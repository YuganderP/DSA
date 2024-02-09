let a =[1,1,1,2,2,3]
let obj={}
for( k of a){
    if(obj[k]==undefined){
        obj[k]=1
    }else{
        obj[k]+=1
    }
}

console.log(Object.values(obj).length)