#!/bin/bash
{ 
file1=result.txt
file2=esperado.txt
file3=test.txt
file4=resultscript.txt
	rm "$file1" || true
	rm "$file4" || true
	(./lcs < $file3) >> $file1
	if cmp -s "$file1" "$file2"
	then
	   echo "The files match" >> $file4
	else
	   echo "The files are different" >> $file4
	fi
} 
