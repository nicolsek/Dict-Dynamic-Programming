#<i>Dict-Dynamic-Programming</i>

	A C++ implementation of reading through a string of characters using an iterative bottom up solution and recursive memoized solution to find if it's possible to insert spaces in order to create English words out of them with a dictionary that's provided.

##<i>Problem:</i>
	We want to devise a dynamic programming solution to the following problem: there is a string of characters which might have been a sequence of words with all the spaces removed, and we want to find a way, if any, in which to insert spaces that separate valid English words. For example,
	
>theyouthevent --> the + youth + event || they + out + he + vent || the + you + the + vent

	The task is to implement a dynamic programming solution in two separate ways:
	
* Iterative bottom-up solution
* Recursive memoized solution

	Assume the original sequence has no other punctuation and all words will be available in the dictionary file provided.

##<i>Functions</i>
* Split (i)
	- Determines whether it's possible to correctly add spaces to x<sub>1</sub>x<sub>2</sub>...x<sub>n</sub>
	- Two outputs
		- If the sequence of words is valid or not.
		- If so, finding an example of those words.
* Dict(w)
	- Check if the passed string of 'word' is valid in the dictionary provided.

#<i>Usage / Input</i>
	The first line of input is an...
> <b>Integer C</b> -- The number of lines in the file
	
	The rest of the file is followed by C lines each containing a single string to be tested.
