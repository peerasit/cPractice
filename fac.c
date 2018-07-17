int fac(int x){
        if(x==0)
            return 1;
        return x*fac(x-1);
}

void main(){
    int n; scanf("%d",&n);
    printf("%d",fac(n));
}
