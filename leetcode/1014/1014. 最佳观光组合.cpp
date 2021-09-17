#include<Stdio.h>
/*int max(int A[], int Asize){
	int max=A[0]+A[1]-1;
	for(int i=0;i<Asize;i++){
		for(int j=0;j<i;j++){
			if(A[i]+A[j]+j-i>max)
			max=A[i]+A[j]+j-i;
		}
	}
	return max;}*/
/*int max(int A[], int ASize){
	if(A == NULL) return -1;
int max=-1;
int maxLocalSub =-100000;
for(int i =ASize-1;i>=0;i--){
    if(maxLocalSub <(A[i]-i)){
        maxLocalSub = A[i]-i;}
     maxElem[i] = maxLocalSub;}
for(int i = 0;i<ASize-1;i++){
    int cur = i+A[i] +maxElem[i+1];
    if(cur > max){
        max = cur;}
}}
printf("%d\n",max);
return max;*/
    int maxScoreSightseeingPair(vector<int>& A){
        int ans = 0, mx = A[0] + 0;
        for (int j = 1; j < A.size(); ++j) {
            ans = max(ans, mx + A[j] - j);
            // ±ß±éÀú±ßÎ¬»¤
            mx = max(mx, A[j] + j);
        }
        return ans;
    }
};
int main(){
	int A[5]={1,2};
	printf("%d",maxScoreSightseeingPair(A));
} 
