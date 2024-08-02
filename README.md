***

###### 31Jul <br>
#### ros2 3 key communication mechanisms between nodes


## Topics

Topics: For streaming data, many-to-many communication (e.g., sensor data). 

<br>

Topics are used for asynchronous, many-to-many communication. They are ideal for streaming data, such as sensor readings or control commands, where the data is continuously produced and consumed. <br>
   - Publisher: A node that sends messages on a topic.
   - Subscriber: A node that receives messages from a topic.
   - Message: The data structure sent over a topic, defined in .msg files.
 <br>
 
Example use cases: sensor data (e.g., camera images, laser scans), command velocities for robots.

<br>

## Services

Services: For synchronous, request-reply interactions (e.g., querying a database).

<br>

Services are used for synchronous, one-to-one communication. They are ideal for request-reply interactions where a node sends a request and waits for a response. 

<br>

   - Service Server: A node that provides a service.
   - Service Client: A node that calls a service.
   - Service Definition: Defined in .srv files, including a request and a response message.

<br>
 
Example use cases: resetting a robot, querying a database.

<br>

## Actions

Actions: For asynchronous, long-running tasks with feedback (e.g., moving a robot to a location).

<br>

Actions are used for asynchronous, long-running tasks that can provide feedback and be preempted. They are ideal for tasks that may take a while to complete and where you want to track progress. 

<br>

   - Action Server: A node that performs the action.
   - Action Client: A node that requests the action.
   - Action Definition: Defined in .action files, including goal, result, and feedback messages.
<br>

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
p140
2 Aug
Service Code (p288)
User-Made Interface

    Why Necessary?
        Custom services allow for tailored communication between nodes, addressing specific needs of your application.
    How:
        Input commands on your terminal (refer to p289 for details).
    .srv File and Class Naming:
        The .srv file defines the service interface. The file name should start with a capital letter (e.g., MyService.srv), and the class name should follow CamelCase conventions.
    Run:
        Start the server and then the client.

Parameters

    Use Across Multiple Functions:
        Parameters are often preferred over variables for maintaining consistent values across different functions.

    Commands:
        List parameters: ros2 param list
        Get a parameter: ros2 param get /<node_name> <parameter_name> (e.g., ros2 param get /turtlesim background_b)
        Set a parameter: ros2 param set /<node_name> <parameter_name> <value> (e.g., ros2 param set /turtlesim background_b 20)

    Save Current Parameters:
        Dump parameters to a file: ros2 param dump /<node_name> (e.g., ros2 param dump /turtlesim)

    Save as YAML File:
        Save parameters as a YAML file: ros2 param dump /<node_name> > turtlesim.yaml (e.g., ros2 param dump /turtlesim > turtlesim.yaml)

    Show Saved File Version:
        Load parameters from a YAML file: ros2 param load /<node_name> turtlesim.yaml (e.g., ros2 param load /turtlesim turtlesim.yaml)

    Run with Parameters File:
        Launch node with parameters from a file: ros2 run <package_name> <node_name> --ros-args --params-file turtlesim.yaml (e.g., ros2 run turtlesim turtlesim_node --ros-args --params-file turtlesim.yaml)

    Why Used:
        Using parameters files can help manage and load configurations consistently across different runs.

    Launch Files + Parameters:
        Using launch files with parameters is preferred as it provides a more organized way to manage configurations and node launches.


get(bring parameter)-set(adjust)
