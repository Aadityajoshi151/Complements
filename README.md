# 1's and 2's Complement in C++
## Important:
I wrote this program when I was in my first year and I posted it on a simple blog that I created at that time (PEC-World.weebly.com). Recently I decided to move all my projects to github and I have taken down this blog. Since I wrote this is in 2017 it has some mistakes here and there but it works fine. I also know this project would have been more easy if I had written it in python but I didn't know python at that time. Here is the exact copy of the post that I wrote on my blog on 13 Nov 2017 👇

## Description
#### The program to find out 1's and 2's complement of a Binary Number

​**1’s Complement:**  
The ones' complement of a binary number is defined as the value obtained by inverting all the bits in the binary representation of the number.  
1’s complement of a binary number is obtained by subtracting each digit from 1. However, when subtracting binary digits from 1, we can have either 1 – 0 = 1 or 1 – 1 = 0, which causes the bit to change from 0 to 1 or from 1 to 0.  
For example,  
The 1’s complement of 1011000 is 0100111.  
  
**2’s Complement:**  
Two's complement is a mathematical operation on binary numbers, as well as a binary signed number representation based on this operation. Its wide use in computing makes it the most important example of a radix complement.  
To find 2’s complement of a binary number, we first find the 1’s complement and add 1 to it.  
Remember we are talking about binary addition of 1 where 1 + 1 = 0 and a carry of 1 is generated on the next digit.  
  
To implement this concept in C++, the 1’s complement part was easy but the 2’s complement took some serious thinking (at least for me).  
Since we are using array for taking input and storing the binary number, the 1’s complement was a piece of cake (just change 0 to 1 and 1 to 0).  
  
For 2’s complement, the problem was that adding ‘1’ to 1’s complement will make that particular digit ‘2’ because compiler does not know that in binary 1+1 is 0.  
The original idea that I had in mind consisted of 5 steps:  

1.  Take the input as binary number.
2.  Obtain 1’s complement.
3.  Convert that 1’s complement in decimal number system.
4.  Add 1 to the obtained decimal value.
5.  Convert that decimal value back into binary.

But this idea was very long to code and was only successful in 10% cases. In rest 90% cases, it was a failure. Although the problem was solvable by using setprecision() and setw() operators in C++ but that increased the lines of code even more.  
By rethinking, what seemed to the problem turned out to be the solution. Add 1 to the 1’s complement. Let it become ‘2’. By running a reversed FOR loop, just change the bit which is 2 to 0 and add 1 to the next bit. All this happens in a loop so all the bits are changed (if required) and the 2’s complement is obtained. The algorithm in SOME way FAINTLY resembles sorting techniques.

    
    //THIS PROGRAM IS WRITTEN BY AADITYA JOSHI
	#include <iostream>
	using namespace std;
	int main()
	{
	    int a[100], i, n;
	    system("cls");
	    cout << "Enter The Length Of Binary Number " << endl;
	    cin >> n;
	    cout << "Enter The Binary Number. Press Enter After Entering Each Element " << endl;
	    for (i = 0; i < n; i++)
	    {
	        cin >> a[i];
	    }
	    system("cls");
	    cout << "The Entered Number :- ";
	    for (i = 0; i < n; i++)
	    {
	        cout << a[i];
	    }
	    for (i = 0; i < n; i++)
	    {
	        if (a[i] == 0)
	            a[i] = a[i] + 1;
	        else if (a[i] == 1)
	            a[i] = a[i] - 1;
	    }
	    cout << "\nThe 1's Complement Is :- ";
	    for (i = 0; i < n; i++)
	    {
	        cout << a[i];
	    }
	    a[n - 1] = a[n - 1] + 1;
	    for (i = (n - 1); i >= 0; i--)
	    {
	        if (a[i] == 2)
	        {
	            a[i] = 0;
	            a[i - 1] += 1;
	        }
	    }
	    cout << "\nThe 2's Complement Is :- ";
	    for (i = 0; i < n; i++)
	    {
	        cout << a[i];
	    }
	    cout << endl;
	    system("pause");
	}
As there are pros and cons of everything, the con I see of this program is the user has to enter the binary number as array. It is more convenient to enter the number has a whole rather than pressing enter after each element. Initially I started with the same approach, but was not able to do it that way. I will figure that out in the future. As there is always scope of improvement, tell me in the comments what else can be added, removed or changed.
