int solve(int n){
    if(n == 1 )return 1;
    else if(n == 0)return 0;
    return n+solve(n-1);
}