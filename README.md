# CSS 342 Data Structures, Algorithms, and Discrete Mathematics I

## How to Clone This Repo To Your Machine

On the [class repo page](https://github.com/pdgetrf/UWB_CSS342_2019_Fall), click the green "Clone or download" button. You can either git clone the repo or download a zip file. Here is an example on linux/mac:

```console
pdu:~$ git clone https://github.com/pdgetrf/UWB_CSS342_2019_Fall.git
Cloning into 'UWB_CSS342_2019_Fall'...
remote: Enumerating objects: 227, done.
remote: Counting objects: 100% (227/227), done.
remote: Compressing objects: 100% (201/201), done.
remote: Total 227 (delta 86), reused 91 (delta 20), pack-reused 0
Receiving objects: 100% (227/227), 5.63 MiB | 1.07 MiB/s, done.
Resolving deltas: 100% (86/86), done.
pdu:~$
pdu:~$ cd UWB_CSS342_2019_Fall/
pdu:~/UWB_CSS342_2019_Fall$ ls
README.md class1    images
```
And there's a [tutorial](https://help.github.com/en/articles/cloning-a-repository) to how to clone a github repo on **ALL PLATFORMS**. We will use git a lot in this course so clone is the "suggested way".

## Course Info
This course is designed as a fast-paced course along with CSS 343, in order to prepare students for more advanced level CSS courses. This course is integrating mathematical principles with detailed instruction in computer programming. We will Explore mathematical reasoning and discrete structures through object-oriented programming. Topics include algorithm analysis, basic abstract data types, and data structures. 

| Key Info ||
|------------|-----------------|
| Date & Time | TTh 8pm - 10pm |
| Lecturer     | Dr. [Peng Du](https://www.linkedin.com/in/peng-du-ph-d-14b0a11b) |
| Email        | pengdu@uw.edu ([CSS342] MUST show on subject) |
| Lecture Location | UW1([map](https://www.google.com/maps/place/UW1,+Campus+Way+NE,+Bothell,+WA+98011/@47.7589141,-122.1927826,17z/data=!3m1!4b1!4m5!3m4!1s0x54900e656ea5e705:0x76bf30aa903fd5d4!8m2!3d47.7589141!4d-122.1905939)) 021   |
| Office hours | 7pm - 8pm Tuesday & Thursday |

## Prerequisites
A minimum grade of 2.8 in either CSS 133, CSS 143, CSE 143, or CSS 162; and minimum grade of 2.5 in either STMATH 125 or MATH 125.

## Course Objectives
The objectives of this course are for students to: 
- Understand how to analyze a problem and design a solution.
- Have a basic understanding of the C++ language and the basics of object-oriented programming.
- Know basic data structures, algorithms, and the tradeoffs among memory, running time, and implementation time associated with them. 

## Course Learning Outcomes
Upon successful completion of the course, students shall be able to:
- Analyze problem and design solutions with basic data structures, algorithms.
- Make trade off between solutions based on performance analysic in terms of time and space complexity.
- Implement solutions proficiently in C++ with STL (Standard Template Library).
- Write well-structured and test-friendly codes.
- Write solid testing with popular testing frameworks such as Googletest.
- Debug programs with command line and IDE tools, and online community like www.stackoverflow.com.
- Work comfortably with source control and online repo such as Git and www.github.com.

## Class Communication
- Canvas Learning Management System (LMS) will be used for announcements, discussion forums, assignment posting and submissions, and individual grades. Please visit the Canvas Site to access the Canvas page for this class.
- For any direct/individual communication with your instructor please use email (please do not use Canvas messaging/mail).
- For group discussion, please use disco/zoom/slacker.

## Grading
### Coursework Distribution 
| Course Work | Grading % |
|-------------|-----------|
| Homeworks | 35        |
| Qizzes      | 20        |
| Midterm exam       | 15        |
| Final exam      | 15        |
| Labs and in-class work | 10 |
| Participation | 5 |
| Total | 100 |

### Grading Rubric
All grades will be listed as percentages in the Canvas LMS. The conversion table below will help you determine your final grade. For example, if you earn 950 points (or 95%) you will get a 4.0. If you earn 750 points (or 75%) you will earn a 2.0. 

![Image of Grading Rubric](https://github.com/pdgetrf/UWB_CSS342_2019_Fall/blob/master/images/gradingrubric.png)

## Textbooks
### Required
- Data Abstraction & Problem Solving With C++: Walls & Mirrors, Sixth or Seventh Edition, Frank M. Carrano, Addison Wesley, 2013, ISBN-10: 0132923726, ISBN-13: 978-0132923729
- [An Active Introduction to Discrete Mathematics and Algorithms, Charles Cusack, David Santos, GNU Free Software, 2014](https://cusack.hope.edu/Notes/Notes/Books/Active%20Introduction%20to%20Discrete%20Mathematics%20and%20Algorithms/ActiveIntroToDiscreteMathAndAlgorithms.2.6.3.pdf)

### Optional
- C++
  - [A Tour of C++ (2nd Edition) (C++ In-Depth Series)](https://www.amazon.com/Tour-2nd-Depth-Bjarne-Stroustrup/dp/0134997832/ref=zg_bs_9045760011_1?_encoding=UTF8&psc=1&refRID=NBRBVSJH9JQK0Y6WFGVP)
  - [C++ Primer (5th Edition)](https://www.amazon.com/Primer-5th-Stanley-B-Lippman/dp/0321714113/ref=zg_bs_9045760011_7?_encoding=UTF8&psc=1&refRID=NBRBVSJH9JQK0Y6WFGVP)

- Data Structure
  - [Data Structures and Algorithm Analysis in C++, Third Edition (Dover Books on Computer Science)](https://www.amazon.com/Structures-Algorithm-Analysis-Computer-Science/dp/048648582X/ref=sr_1_4?keywords=data+structure+c%2B%2B&qid=1569107841&s=books&sr=1-4)

## Lecture
- Read the relevant textbook chapters before coming to class.
- Slides are to provide outlines for the lecture, and they will be frequently updated even after the class. The main purpose of lecture slides is to give you the flow of the day's lecture.
- It is highly recommended that you take notes rather than depend solely on the slides.
- There will be live coding and debugging by both the lectuer and students.

## Class Attendance
- Class attendance is not mandatory. However, I strongly encourage you to come to class as there is generally a direct correlation between attendance and performance (aka, grade).
- Quizzes and exams will be given during class.
- You will be held responsible for learning all material covered in class, regardless of its presence (or lack thereof) in the textbook or internet.

## Programming Assignments
All programming assignments will be given at this repository, and submission shall be made to UW canvas unless specified otherwise. Late assignments will **NOT** be accepted unless there has been previous agreement due to exceptional circumstances. 

The program is graded upon the follow aspects: 

- Style / Syntax: i.e. following Coding Guidelines; Clarity 
- Factoring / Design: i.e. Modularity; Interface Design 
- Correctness – determined through test cases and memory checker run against code 
- Efficiency

You can use any IDE or editor for coding and testing your laboratory and programming assignments. Regardless of what environment and version you use to develop your programs, it should be compiled with g++ and executed on a Linux operating system for grading.  If your program does not compile or does not run in the graded environments it will be deemed incorrect and receive zero points. This is true even if it works with others OS's or compilers. This means that *if you use a different development environment you should port and test your code to the prescribed environment before submitting it*. The Linux lab is available for this purpose if you do not have a prescribed local development environment. 

When multiple files are required for an assignment, they must be in a a ZIP file. The ZIP file should contains source code (in ASCII Text) and results of the program (report as a MS word or pdf document); never submit executables. Please check each homework specification about what you to write in your report. For grading correctness the files will be extracted from the ZIP file, the code will be compiled and tested by executing several test cases. 

## Tentative Schedule
The following table provides approximate, high-level ordering of topics, not all sections in all chapters in the book are covered.  It is also a tentative schedule subject to change, and will be announced on canvas, in class and/or through our discussion channels. Furthermore, the book topics listed below are provided as guidance. You are strongly encouraged to consult other sources for further references.

|  Date | Week | Topics | Chapters |
| --- | --- | --- | --- |
|  09/26 | 1 | Course intro<br/>C++ review [pointer, refernece, memory allocation]<br/>Testing basics<br/>Debugging basics (gdb, IDE)<br/>Git basics<br/>Dev environment setup [makefile, IDE] | C++ ch 1, ch interlue 2, apendx A & B |
|  10/1, 10/3 | 2 | C++ review cont. [object, struct, class [constructors, relationship, polymorphism, virtual class, template]]<br/>Unit testing with Googletest<br/>cmake<br/>OOP design | C++ ch interlude {1, 5, 6, 8},  ch {3, 4 & 11} |
|  10/8, 10/10 | 3 | ADT design | C++ ch {8, 9, 12} |
|  10/15, 10/17 | 4 | Linked list<br/>Iterator<br/>C++ Standard Template Library (STL) | C++ ch {6, 7, 13, 14} |
|  10/22, 10/24 | 5 | Stack, Queue<br/>Recursion, <br/>Midterm review | C++ ch {2, 5.3, 6, 13} |
|  10/29, 10/31 | 6 | Midterm (2 hr on Tuesday)<br/>Tree, binary search tree if time allows | C++ ch 15 |
|  11/5, 11/7 | 7 | Back tracking<br/>Binary Tree<br/>Hashing algorithm (including consistent hashing)<br/>Math induction | C++ ch {10,18}, Math {8.1}, appendix E |
|  11/12, 11/14 | 8 | Algorithm complexity analysis<br/>Sorting algorithms | C++ ch 11, Math {7} |
|  11/19, 11/21 | 9 | Guest lecture<br/>Propositional logic | Math {4} |
|  11/26, 11/28 | 10 | Graph (topology sort)<br/>Thanksgiving | C++ {20} |
|  12/3, 12/5 | 11 | Review/Buffer |  |
|  12/10 | 12 | **Final (2hr)** |  |

## Policy
All the materials are either in class, or online. In-class only materials will be unavailable unless you attend class. The only exceptions are: you are terribly sick, family emergency, or academic event. In such cases, you should provide evidence (e.g., medical doctor’s note). 

- Assignments: All assignments should be done **independently** and any cheating or collaboration work will be returned without points, and will be reported as an academic misconduct. All assignments are required to submit online (Canvas), unless otherwise noted. Please note that **late assignments will not be accepted** under any circumstances.   
- Discussions, Exercises and Labs: Short programming works or short questions will be given in class. You are required to finish the work in class and submit online (most cases). The works won’t be repeated outside of the class, therefore it is your responsibility to be in class to claim your points.  
- Exams: Exams cover the contents you have learned in class by the time of the exam, none of them are cumulative. There will be **no make-up exams**, either earlier or later, some exceptions might be granted, only under extenuating circumstances.  
- Quizzes: Quizzes will be given during the first 20 minutes of the class throughout the quarter. 

## Code of Conduct and Behaviour
Work is to be done independently  unless directed otherwise; collaboration of work is NOT acceptable. You may discuss the problem statement with each other and help debug, but all designing and coding is to be done independently. Any pair programming must be approved by me. This class is run by honor code.
- By taking this class, you agree that you will **not** collaborate inappropriately on any work. In some cultures, family relationships and their loyalty are considered above all others.
- In this course, we are an academic family and you betray the instructor’s and the university’s trust should you violate the honor code. This violation will be taken seriously. (See [Academic Conduct](http://www.uwb.edu/academic/policies/Academic_Conduct.xhtml).
- The purpose of the assignments is to help you understand deeply technical material. You may discuss the problem statement with each other and help debug, but do your own design and coding. See the student [honor code](https://www.uwb.edu/academic/policies/academic-conduct).
- Live lectures are inherently interactive. Questions during class are encouraged. Please raise your hand to get the instructor's attention. At the instructor's discretion, answers may be tabled until the end of class if they are too far off topic.
- Limit computer use during class to note-taking so as to not distract or disturb your classmates or your instructor. It is highly recommended that you turn off the computer and take notes the old fashioned way. Quill pens are optional.
  - Computer (or handheld devices) use during lecture is limited to taking notes and lab/exercise programming. 
  - Displaying any images or video on your screen during lecture is not allowed as it is distracting and disrespectful.
  - Silence your mobile phones and limited your mobile device usage. If you need to take a call or you have an emergency, step out of the classroom.
- Please no whispering, chitchatting, giggling, etc., this is very distracting and disrespectful. Disruptive students will be asked to leave and you will be responsible for missing lectures.
- If you arrive late or have to leave in the middle of class, do so quietly without causing disruption.
- Flash photography is not permitted. Non-flash photography to capture the white board will be permitted as long as it is not disruptive or distracting.
- Simple email questions may get a response. Complex questions are best saved for office hours.
- Because of limited time, all assignment questions will be answered during office hours.
- There will be no debugging of code during class break. You can ask short questions, but without your computer.
- Absolutely no questions after the end of the lecture, plan ahead and schedule office hours in a timely fashion.
- No office hours on exam days or during finals week.

## Disability Accommodations 
To request academic accommodations due to a disability, please contact Disabled Student Services (DSS) at 425.352.5307, 425.352.5303 TDD, 425.352.5455 FAX, or at dss@uwb.edu. You will need to provide documentation of your disability as part of the review process prior to receiving any accommodations (by the third week of the quarter). 

## Religious Accommodations
Washington state law requires that UW develop a policy for accommodation of student absences or significant hardship due to reasons of faith or conscience, or for organized religious activities. The UW’s policy, including more information about how to request an accommodation, is available at Religious Accommodations Policy (https://registrar.washington.edu/staffandfaculty/religious-accommodations-policy/). Accommodations must be requested within the first two weeks of this course using the Religious Accommodations Request form (https://registrar.washington.edu/students/religious-accommodations-request/).

## Inclement Weather Policy 
Call (206)-547-4636 (206-547-INFO) to see if University of Washington, Seattle, Bothell, and Tacoma campuses are open and operating. 

## Classroom Emergency Preparedness 
Please see http://www.uwb.edu/safety/are-you-ready for detailed information on the following topics: active shooter, inclement weather, bomb threat, crime or violence, earthquake, fire, hazardous material spill, identity theft, lockdown, medical emergency, online safety, power outage, sexual assault, student in distress, suspicious mail, theft, pandemic flu, and extreme heat. 

## For our Veterans 
If you are a student who has served in our nation’s military forces, thank you for your service. We hope that you feel comfortable enough to confidentially self-identify yourself to your instructor so s/he can help you make a successful transition from the military to higher education.

## Respect for Diversity 
- Diverse backgrounds, embodiments and experiences are essential to the critical thinking endeavor at the heart of university education. In STEM and at UW Bothell, students are expected to: 
- Respect individual differences which may include, but are not limited to: age, cultural background, disability, ethnicity, family status, gender presentation, immigration status, national origin, race, religion, sex, sexual orientation, socioeconomic status, and veteran status. 
- Engage respectfully in discussion of diverse worldviews and ideologies embedded in course readings, presentations, and artifacts, including those course materials that are at odds with personal beliefs and values.

Students seeking support around these issues can find more information and resources at http://www.uwb.edu/diversity.

## Student Support Services 
- Career Services: http://www.uwb.edu/careers, 425-352-3706 
- CSS Tutoring: http://www.uwb.edu/css/advising 
- IT Helpdesk: http://uwbit@uw.edu, 425-352-3456 
- Library: http://library.uwb.edu, 425-352-5340 
- Quantitative Skills Center: http://www.uwb.edu/qsc, 425-352-3170 
- School of STEM Advising: stemadv@uw.edu, 425-352-3746 
- Student Counseling Services: http://www.uwb.edu/studentservices/counseling, 425-352-3183 
- Student Success and Career Services: http://www.uwb.edu/studentservices/successservices, 425-352-3427 
- Writing and Communication Center: http://www.uwb.edu/wacc, 425-352-5253 
