//https://www.geeksforgeeks.org/problems/reverse-a-string/1
string reverseWord(string str){
    
  //Your code here
  int i=0,j=str.length()-1;
  while(i<=j){
      char c=str[i];
      str[i]=str[j];
      str[j]=c;
      i++;
      j--;
  }
  return str;
}
