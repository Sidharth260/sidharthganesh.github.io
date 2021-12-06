#include <stdio.h>

struct process
{
    int pid,bt,wt,at,tat,ct,rt;
};struct process p[10];

int main()
{
    int n,quantum,sum=0,count=0;
    printf("Enter the number of process: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("\nEnter the process id: ");
        scanf("%d",&p[i].pid);
        printf("\nEnter the burst time for process %d: ",p[i].pid);
        scanf("%d",&p[i].bt);
        p[i].rt=p[i].bt;
    }
    printf("\nEnter the time quantum: ");
    scanf("%d",&quantum);
    printf("\nProcess        Burst Time\n");
    for(int i=0;i<n;i++)
    {
        printf("\n%d            %d",p[i].pid,p[i].bt);
    }
    for(int i=0;i<n;i++)
    {
        if(p[i].rt<=quantum&&p[i].rt>0)
        {
            sum+=p[i].rt;
            p[i].rt=0;
            count=1;
        }
        else if(p[i].rt>0)
        {
            p[i].rt-=quantum;
            sum+=quantum;
            
        }
    }
    
    return 0;
}
