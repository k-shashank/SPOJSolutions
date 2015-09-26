#include <iostream>
#include <vector>         //including the standard libraries
#include <stack>          //including the standard stack library in C++
#include <string>

using namespace std;

int priority(char c)			//priority function for the operator precedence
{if(c=='+'||c=='-') return 1;
  if(c=='*'||c=='/') return 2;}

int evaluate(string postfix)		//evaluate function to calculate the value of the postfix expression obtained
{int a,b,value=0,i,j=0,c;
  stack<int> s;
  i=postfix.length();
  while(j<i)
    {if(postfix[j]=='+'||postfix[j]=='-'||postfix[j]=='*'||postfix[j]=='/'){
	a=s.top();
	s.pop();
	b=s.top();
	s.pop();
	if(postfix[j]=='+') c=b+a;
	if(postfix[j]=='-') c=b-a;
	if(postfix[j]=='*') c=b*a;
	if(postfix[j]=='/') c=b/a;
	s.push(c);
	j++;}
      else {
	c=postfix[j]-'0';
	s.push(c);
	j++;}}
  value=s.top();
  return value;
}

void intopost(string &infix,string &postfix)        //function to convert the infix string to postfix string
{ int j=0,i,l;
  l=infix.length();
  stack<int> s;
  for(i=0;i<l;i++)    //for loop to form the postfix expression
    {if(infix[i]=='+'||infix[i]=='-'||infix[i]=='*'||infix[i]=='/'){
  if(s.size()==0){s.push(infix[i]);}
  else{while(s.size()!=0&&(priority(infix[i]))<=(priority(s.top()))){
      postfix[j]=s.top();
      s.pop();
      j++;}
    s.push(infix[i]);}}
      else{
  postfix[j]=infix[i];
  j++;}}
  while(s.size()!=0)
    {postfix[j]=s.top();
      s.pop();
      j++;}
  postfix[j]='\0';
}

int main(int argc, char const *argv[])
{
  stack<int> s;
  string infix,postfix;
  //cout<<"Enter the infix expression\n";
  cin>>infix;			//inputing the infix string
  postfix=infix;
  intopost(infix,postfix);
  cout<<postfix<<"\n";
  //cout<<"The postfix expression of the given expression is :"<<postfix<<"\n"; 			//printing the postfix expression
  //int value;
  //value=evaluate(postfix);		//evaluating the postfix expression
  //cout<<"The evaluated value of the given expression is : "<<value<<"\n";
	return 0;
}