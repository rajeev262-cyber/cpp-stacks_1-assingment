#include<iostream>
#include<stack>
using namespace std ;
void remove_kth_element_from_top(stack<int>&st, int idx)
{
    idx--;
    stack<int>temp ;
    while(idx>0)
    {
        temp.push(st.top());
        st.pop();
        idx--;
    }
      st.pop();
      while(temp.size()>0)
      {
        st.push(temp.top());
        temp.pop();
      }
}
void display(stack<int> &st)
{
    if (st.size() == 0)
        return;
    int x = st.top();

    st.pop();
    display(st);
        cout << x << " ";
    

    st.push(x);
}

int main ()
{
     stack<int> st ;
     st.push(10);
     st.push(20);
     st.push(30);
     st.push(40);
     st.push(50);
     st.push(60);
     display(st);
     cout<<endl;

     remove_kth_element_from_top(st,2);
     display(st);


}