// given: target positive integer N(eg. 112).
// for any integer X, define its Equivalent sum(EqSum(x)) as the sum of all prefix sub-numbers formed by reading X from left to right.
// Spefically, if X is represented as string of digits d1d2...dk:
//         EqSum(x) = d1 + int(d1d2) +....+ int(d1d2...dk);

//         for exampler, for x = 112:
//         EqSum(112) = 1+11+112 = 124
//         constraints: 1<=x<n 
//                     EqSum(x)>n;

int eqSum(int ar) {
    vector<int> v;

    while(ar > 0) {
        v.push_back(ar % 10);
        ar /= 10;
    }

    reverse(v.begin(), v.end());

    int prefix = 0;
    int sum = 0;

    for(int digit : v) {
        prefix = prefix * 10 + digit;
        sum += prefix;
    }

    return sum;
}