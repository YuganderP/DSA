let a =[1,1,1,2,2,3]
let obj={}
for(let k of a){
    if(obj[k]==undefined){
        obj[k]=1
    }else{
        obj[k]+=1
    }
}

let kk=((Object.values(obj)))

let result={}
let ans=0
// for(let k of kk){
// if(result[k]==undefined){
//     ans=1
// }else{
//     console.log( false)
//     ans=0;
//     break;
// }

// }
// console.log((ans))

