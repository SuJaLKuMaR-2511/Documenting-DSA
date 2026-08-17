class Solution{	
	public:
		int NnumbersSum(int N){
			if(N==0){
                return 0;
            }

            return NnumbersSum(N-1) + N;
		}
};