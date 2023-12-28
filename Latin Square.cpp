#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t,cnt_a,cnt_b,cnt_c;
    char arr1[5],arr2[5],arr3[5];
    scanf("%d ",&t);
    while(t--)
    {
        cnt_a=0;
        cnt_b=0;
        cnt_c=0;
        gets(arr1);
        gets(arr2);
        gets(arr3);
        for(i=0; i<3; i++)
        {
            if(arr1[i]=='A')
            {
                cnt_a=1;
            }
            else if(arr1[i]=='B')
            {
                cnt_b=1;
            }
            else if(arr1[i]=='C')
            {
                cnt_c=1;
            }
        }
        if(cnt_a==1 && cnt_b==1 && cnt_c==0)
        {
            cout<<"C"<<endl;
        }
        else if(cnt_a==0 && cnt_b==1 && cnt_c==1)
        {
            cout<<"A"<<endl;
        }
        else if(cnt_a==1 && cnt_b==0 && cnt_c==1)
        {
            cout<<"B"<<endl;
        }
        else
        {
            cnt_a=0;
            cnt_b=0;
            cnt_c=0;

            for(i=0; i<3; i++)
            {
                if(arr2[i]=='A')
                {
                    cnt_a=1;
                }
                else if(arr2[i]=='B')
                {
                    cnt_b=1;
                }
                else if(arr2[i]=='C')
                {
                    cnt_c=1;
                }
            }
            if(cnt_a==1 && cnt_b==1 && cnt_c==0)
            {
                cout<<"C"<<endl;
            }
            else if(cnt_a==0 && cnt_b==1 && cnt_c==1)
            {
                cout<<"A"<<endl;
            }
            else if(cnt_a==1 && cnt_b==0 && cnt_c==1)
            {
                cout<<"B"<<endl;
            }
            else
            {
                cnt_a=0;
                cnt_b=0;
                cnt_c=0;
                for(i=0; i<3; i++)
                {
                    if(arr3[i]=='A')
                    {
                        cnt_a=1;
                    }
                    else if(arr3[i]=='B')
                    {
                        cnt_b=1;
                    }
                    else if(arr3[i]=='C')
                    {
                        cnt_c=1;
                    }
                }
                if(cnt_a==1 && cnt_b==1 && cnt_c==0)
                {
                    cout<<"C"<<endl;
                }
                else if(cnt_a==0 && cnt_b==1 && cnt_c==1)
                {
                    cout<<"A"<<endl;
                }
                else if(cnt_a==1 && cnt_b==0 && cnt_c==1)
                {
                    cout<<"B"<<endl;
                }
                else
                {
                    cout<<"No"<<endl;
                }

            }
        }

    }

}
