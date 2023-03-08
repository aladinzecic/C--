//int pojavljivanje(int niz[],int n){
//     int i,j,br=0,pom;
//     for(i=0;i<n-1;i++){
//         for(j=i+1;j<n;j++){
//             if(niz[i]>niz[j]){
//                 pom=niz[i];
//                 niz[i]=niz[j];
//                 niz[j]=pom;
//             }
//         }
        
//     }
//     for(i=0;i<n;i++){
//         if(niz[i]!=niz[i+1]&&niz[i]!=niz[i-1])br++;
//     }
//     return br;
// }
// #include <iostream>

// using namespace std;

// int main()
// {   int mat[10][10],i,j,max,n,maxbr;
//     cout<<"unesi n";
//     cin>>n;
//     for(i=0;i<n;i++)
//     for(j=0;j<n;j++){
//         cin>>mat[i][j];
//     }
//     max=0;
//     for(i=0;i<n;i++){
//         if(max<pojavljivanje(mat[i],n)){
//             max=pojavljivanje(mat[i],n);
//             maxbr=i;
//         }
//     }
//     cout<<"vrsta sa najvise el bez ponavljanja je "<<maxbr+1<<" i ima el bez ponavljanja "<<max;
//     return 0;