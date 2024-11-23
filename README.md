# QUIET DREAD
## Brief narrative-driver horror game

### Project Overview:
Quiet Dread is an interactive narrative game of psychological horror, where the player will have the possibility to choose between a set of decisions and these will affect the development of the story. This project, as it is not large-scale, will have an estimated duration of ten minutes. 
The game will have three different endings and four story branches. However, for any future implementation or futher development, the code can be easily adapted to have more endings and branches. 

### Instructions and dynamics:
In the narrative, we enter the perspective of our protagonist who enjoys a night that is at first joyful. In the middle of the night, he is awakened by an evil presence: a demon seeking to reclaim his soul. To survive the encounter, the protagonist will have to wait until daylight arrives, and this will be by making different choices.

In the gameplay of the game, the player will have to make decisions. Furthermore, in the game there will be two indicators represented in percentages: INSANITY and IMPATIENCE. Each choice the player makes, may increase (or not) one or even both percentages. The player loses if either of these two indicators reaches 100%. There will be alternative events to and the choices are expected to not have obvious outcomes. 

### Objectives (what it is used for and what it is not used for):
Considering the nature of the game, it is safe to say that it does not have a ludic purpose and is merely for enjoyment. The main objective of the game is to give a fun gaming experience to the user. 

### Additional resources:
The program will also use an additional file (.txt) to read all the narrative material and display it in the terminal accroding to the branch given. 

## UML Class Diagram
![OOP Final drawio](https://github.com/user-attachments/assets/53f3ddde-ec6e-4c04-8436-36654c93fb47)

### Description of the classes used:

**GAME**: It will be the main class of the game, in charge of taking general control as well as relating the rest of the classes used in this project. Its functions include starting the game, updating class data based on a turn system, ending the game in case the PLAYER or DEMON class has stats greater than 100 points. 

**MANAGER**: Super class in charge of integrating the subclasses of CHOICE MANAGER and NARRATIVE MANAGER into the game. The main function or justification of this subclass is to have control over the number of rounds, of which both classes will share. 

**CHOICE MANAGER**: In charge of evaluating and determining the consequences of each decision made by the user. 

**NARRATIVE MANAGER**: It will be the subclass in charge of reading the text file type .txt that will have the narrative content of the game, that is, the story. Its function is to read the text file and return a specific line of the text based on the turn. 

**CHARACTER**: Superclass which will contain DEMON and PLAYEr since they have in common that they use stats (impatience and insanity, respectively) as well as methods to check if they are still valid. 

**PLAYER**: It will be one of the characters in the game. It will have the attributes of INSANITY and others that will check its status. Functions: To be a control parameter of the game, because in case his score is above 100, the player will have a bad ending. 

**DEMON**: He will be one of the characters in the game. It will have the IMPATIENCE attributes and others that will check its status. Functions: To be a control parameter of the game, because in case his score is above 100, the player will have a bad ending.



