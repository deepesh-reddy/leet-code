
#include <stdio.h>
    
    struct process
    {
        int AT,BT,CT,TAT,WT,RT,OA;
    };
    
    void sort(struct process *p,int n)
    {
        for (int i = 0; i < n; i++) {
        int j;
        for (int j = i + 1; j < n; j++) {
            if (p[j].AT < p[i].AT || (p[j].AT == p[i].AT )) {//&& p[j].OA < p[i].OA
                struct process temp = p[i];
                p[i] = p[j];
                p[j] = temp;
                }
            }
        }
    }
    
    void display(struct process *p,int n)
    {
        for(int i=0;i<n;i++)
        {
            printf("----%d----\n",i);
            printf("WT of p%d - %d\n",i,p[i].WT);
            printf("TAT of p%d - %d\n",i,p[i].TAT);
            printf("RT of p%d - %d\n",i,p[i].RT);
            // printf("AT of p%d - %d\n",i,p[i].AT);
            // printf("BT of p%d - %d\n",i,p[i].BT);
            // printf("CT of p%d - %d\n",i,p[i].CT);
            // printf("OA of p%d - %d\n",i,p[i].OA);
        }
    }
    
    void cal_CT(struct process *p,int n)
    {
        int sum = 0;
	    sum = sum + p[0].AT;
	    for(int i = 0;i<n;i++){
		sum = sum + p[i].BT;
		p[i].CT = sum;
		if(sum<p[i+1].AT){
			int t = p[i+1].AT-sum;
			sum = sum+t;
		}
	}
    }
    
    void cal_restimes(struct process *p,int n)
    {
		for(int i=0;i<n;i++)
		{
		    p[i].TAT=p[i].CT-p[i].AT;
	    	p[i].WT=p[i].TAT-p[i].BT;
	    	p[i].RT=p[i].WT;
		}
    }
    
    
    
int main()
{
    int n;
    scanf("%d",&n);
    struct process p[n];
    for(int i=0;i<n;i++)
    {
        printf("AT - ");scanf("%d",&p[i].AT);
        printf("BT - ");scanf("%d",&p[i].BT);
        printf("OA - ");scanf("%d",&p[i].OA);
    }
    sort(p,n);
    cal_CT(p,n);
    cal_restimes(p,n);
    display(p,n);

    return 0;
}



