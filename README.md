***

###### 31Jul <br>
#### ros2 3 key communication mechanisms between nodes <br>
Topics: For streaming data, many-to-many communication (e.g., sensor data).
Topics are used for asynchronous, many-to-many communication. They are ideal for streaming data, such as sensor readings or control commands, where the data is continuously produced and consumed.
    Publisher: A node that sends messages on a topic.
    Subscriber: A node that receives messages from a topic.
    Message: The data structure sent over a topic, defined in .msg files.
Example use cases: sensor data (e.g., camera images, laser scans), command velocities for robots.
Services: For synchronous, request-reply interactions (e.g., querying a database).
Services are used for synchronous, one-to-one communication. They are ideal for request-reply interactions where a node sends a request and waits for a response.
    Service Server: A node that provides a service.
    Service Client: A node that calls a service.
    Service Definition: Defined in .srv files, including a request and a response message.
Example use cases: resetting a robot, querying a database.
Actions: For asynchronous, long-running tasks with feedback (e.g., moving a robot to a location).
Actions are used for asynchronous, long-running tasks that can provide feedback and be preempted. They are ideal for tasks that may take a while to complete and where you want to track progress.
    Action Server: A node that performs the action.
    Action Client: A node that requests the action.
    Action Definition: Defined in .action files, including goal, result, and feedback messages.
Example use cases: moving a robot to a location, processing an image.

***

###### 1Aug <br>
#### the first day actually run and controlled my Turtlebot3 : <br>
   +pkgxml, +cmakelist -> pub-sub -> compile -> run(controlled by keyboard) <br>

***

#### my laptop  <->  DDC  <->  my bot <br>
ex) <br>
 laptop <br>
 node1 <br>	
 node2 <br>
bring-up : open ros2 - ros2 launch turtlebot3_bringup robot.launch.py  <br>		 
| <br>
| <br>
DDS(multi port<-UDP,TDP) (weaker security)  (X) <br>
DDS(router id:turtle, pw:turtlebot3) 	      (O) <br>
| <br>
| <br>
turtlebot3 (Raspberry Pi) <br>

***

#### turtlebot3 setting order  <br>
 1. link mine to bot's router
 2. (vmware connect)

***

#### turtlebot3 info  <br>
- 12v <br>
- speed limit : 0.3m/s <br>
- has 2 moters : DC moters(simplest way we can set up)(diameter cell) <br>

***

#### turtlebot3 set-up
1. http://192.168.14.1
2. admin-set up-network-LAN
3. nb(mine 02, turtlebot=burger)
4. ssh ubuntu@192.168.14.50
5. apt list --upgradable
6. nb(turtle's 02, turtlebot=burger) <br>

 ***

#### turtlebot3 running order <br>
 1. write code (cmake, pkg.xml -> header, cpp)
 2. compile the code
 3. (gazebo)
 4. turtlebor3 log in
 5. turtlebot3 run : ros2 launch turtlebot3_bringup robot.launch.py
 6. user, code run : ex) ros2 run turtlebot3_teleop teleop_keyboard

***

#### on vscode  <br>
 - vscode open remote : SSH - ubuntu@192.168.14.50 (turtle's) <br>
 
 ***

#### gazebo simulator  <br>
 - install(on my laptop)  <br>
 - run : "gazebo"  <br>
 - stop : "killgazebo" (to abvoid gazebos conflict)  <br>

***

#### tips..  <br>
unset GTK_PATH : use it when you get " qt.qpa.plugin: Could not find the Qt platform plugin "wayland" in ...... "

***
