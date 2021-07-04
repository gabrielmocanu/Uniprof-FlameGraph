# Uniprof-FlameGraph

This demo was made for my diploma project for the Faculty of Automation and Computers, Polytechnic University of Bucharest.

## Unikernel
[Unikernel](http://unikernel.org/) is a virtualization method that encompasses all the positive aspects of other virtualization solutions, low memory consumption and speed of containers, but also the level of security that virtual machines offer through isolation.

## Unikraft
[Unikraft](https://unikraft.org/) is a unikernel that creates an image of the application together with all its dependencies, in an executable, through an easy and fast process for the user, having a configuration mechanism. Measuring the performance of applications is becoming an increasingly important step, and Unikraft does not have a tool to measure any bottleneck that may occur inside the application. 

## Uniprof & Flame Graph
The objective of my thesis was to integrate a performance measurement utility for unikernels, [Uniprof](http://sysml.neclab.eu/projects/uniprof/), with Unikraft and to display the data in a pretty format using [Flame Graph](http://www.brendangregg.com/flamegraphs.html). At this moment, you can measure the performance and you can see the possible bottlenecks for an application running on a Xen platform.

## Evaluation

To generate stack traces and the flame graph, I use the script that I created which does the following:

1.  Start Unikraft application
2.  Start Uniprof to get stack traces
3.  Run nm to find symbol table
4.  Use symbolize to map addresses
5.  Run stack collapse to format stack trace for Flame Graph
6.  Generate Flame Graph representation


### Test Application 1

For this test you can see the source code in [apps/app-test-1](https://github.com/gabrielmocanu/Uniprof-FlameGraph/tree/main/apps/app-test-1).



### Test Application 2

For this test you can see the source code in [apps/app-test-1](https://github.com/gabrielmocanu/Uniprof-FlameGraph/tree/main/apps/app-test-2).
