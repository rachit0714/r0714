#!/bin/bash

EXISTS=1

TUT_TOTAL=11
ASSIGN_TOTAL=4

declare -a Tut_marks
declare -a assign_marks

grade=`cat feedback.txt | tr -d [:blank:]`

IFS='/' read -ra grArray <<< "$grade"


score=${grArray[0]}
max=${grArray[1]}

initialize_Tut_marks ()	
{
	Tut_marks = ( -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 )
}

initialize_assign_marks ()
{
	assign_marks = ( -1 -1 -1 -1 )
}

find_feedback_file ()
{
	if [ -e "feedback.txt" ]
	then
		return $EXISTS
	else
		return 1
	fi
}

find_dir ()
{
	TUT_LIST="$(ls t??)"
	for i in "$LIST"; do


	done

}



echo $score
echo $max
